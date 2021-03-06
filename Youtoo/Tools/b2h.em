;;; Copyright 2003 T. Kurt Bond
;;; Copyright 2010 Henry G. Weller
;;;-----------------------------------------------------------------------------
;;  This file is part of
;;; ---                         EuLisp System 'Youtoo'
;;;-----------------------------------------------------------------------------
;;
;;  Youtoo is free software: you can redistribute it and/or modify it under the
;;  terms of the GNU General Public License version 2 as published by the Free
;;  Software Foundation.
;;
;;  Youtoo is distributed in the hope that it will be useful, but WITHOUT ANY
;;  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
;;  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
;;  details.
;;
;;  You should have received a copy of the GNU General Public License along with
;;  this program.  If not, see <http://www.gnu.org/licenses/>.
;;
;;;-----------------------------------------------------------------------------
;;; Title: Convert files with `def-bytecode' forms to a C header
;;;  Library: Tools
;;;  Authors: T. Kurt Bond
;;;  Maintainer: Henry G. Weller
;;;  Description:
;;    Note: this is not the original b2h; that wasn't in the youtoo
;;          distribution, and Andreas Kind didn't have a copy of it any more.
;;
;;    This is my best guess at how it worked.
;;
;;    * If the name of the bytecode contains "branch" it's a branch and
;;      the branch field is true; otherwise it's not a branch and
;;      the branch field is false.
;;    * If the name of the bytecode contains "-neg" it's a backward branch
;;      and the branch field is true with the value -1; otherwise
;;      the branch field is true with the value 1.
;;    * The inlined_arg_size field defaults to zero.
;;    * An arg that is "byte" or "reg" increases the inlined_arg_size by 1;
;;      all other args increase the size by 4.
;;;-----------------------------------------------------------------------------

(defmodule b2h
  (syntax (syntax-1
           vmeta
           b2h-aux)
   import (level-1))

(deflocal old-style ())
(deflocal verbose ())
(deflocal debug ())
(deflocal bytecodes-found 0)
(deflocal bytecodes-output 0) ; Doesn't include non-specified bytecodes.

(defun digit (c)
  (and (character? c)
       (<= #\0 c #\9)))

(defun whitespace (c)
  (and (character? c)
       (or (eql c #\    )
           (eql c #\ ))))

(defun letter (c)
  (and (character? c)
       (or (<= #\a c #\z)
           (<= #\A c #\Z))))

(defun identifier (c)
  (or (letter c)
      (digit c)
      (eql #\- c)))

(deflocal bytecodes (make <table>))

(defclass <bytecode> ()
  ((name accessor: bytecode-name keyword: name:)
   (args accessor: bytecode-args keyword: args:)
   (number accessor: bytecode-number keyword: number:))
  predicate: bytecode?)

(defun arg-size (args)
  (accumulate
   (lambda (a v)
     (if (member v '("reg" "byte") binary=)
         (+ a 1)
       (+ a 4)))
   0
   args))

;; Brute force :-(. ???
;; We assume that any instruction that has a name that starts with "branch"
;; is a branch.  We also assume that any branch that ends with "-neg" is
;; a negative branch.
(defun branch-info (name)
  (if (match-expr name "branch")
      (if (match-expr (reverse name) "gen-")
          -1
        1)
    0))

(defun parse-line (line lineno filename)
  (let (name args number)
    (when
     (match-expr line
                 (seq
                  (star (type whitespace))
                  "(def-bytecode"
                  (star (type whitespace))
                  (name name (seq (type letter)
                                  (star (type identifier))))
                  (star (type whitespace))
                  "("
                  (star (seq
                         (push args (star (type identifier) 1 ()))
                         (star (alt (type whitespace)))))
                  ")"
                  (star (alt (type whitespace)))
                  (name number (seq (star (type digit) 1 ())))
                  ))
     (when debug (sformat stderr "match! ~d\n" number))
     (setq bytecodes-found (+ bytecodes-found 1))
     (let ((n (string-as-fpi number)))
       (if (element bytecodes n)
           (format "~a:~d: warning: bytecode ~d redefined" filename lineno n)
         ((setter element) bytecodes n
          (make <bytecode> name: name args: args number: n)))))))

(defun process-file (filename)
  (when verbose (sformat stderr "Processing ~a\n" filename))
  (with-input-file* filename
                    (block exit
                           (with-handler
                            (lambda (c r) (return-from exit))
                            (let loop ((i 0)
                                       (line (read-line)))
                                 (parse-line line i filename)
                                 (loop (+ i 1) (read-line)))))))

(defun parse-args (args)
  (if (null? args)
      '()
    (let ((first (car args))
          (rest  (cdr args)))
      (cond
        ((binary= first "-O")            ;Sort
         (setq old-style (not old-style))
         (parse-args rest))
        ((binary= first "-v")
         (setq verbose (not verbose))
         (parse-args rest))
        ((binary= first "-d")
         (setq debug (not debug))
         (parse-args rest))
        (t                             ;Not known option, so must be filename
         args)))))

(defun main (args)
  (let ((filenames (parse-args args)))
    (do process-file filenames)
    ;; Needs date.
    (format "/* Generated by b2h.em from ~a  */\n"
            (accumulate (lambda (a v)
                          (if (> (size a) 0) (concatenate a ", " v) v))
                        "" filenames))
    (print "/* for Youtoo's Vm/bytecode2.h  */" nl)
    (print "#ifndef BYTECODE2_H" nl)
    (print "#define BYTECODE2_H" nl)
    (print nl)
    (print "#define eul_instr_inlined_arg_size(x) (eul_instr_info[(x)].inlined_arg_size)" nl)
    (print "#define eul_instr_branch(x) (eul_instr_info[(x)].branch)" nl)
    (print nl)
    (print "struct {int inlined_arg_size, branch;} eul_instr_info[256]= {" nl)
    (when verbose (sformat stderr "~d bytecodes found\n" bytecodes-found))
    (let loop ((i 0))
         (let ((bc (element bytecodes i)))
           (cond
             (bc
              (let ((n (arg-size (bytecode-args bc)))
                    (b (branch-info (bytecode-name bc))))
                (if old-style
                    (format "  {~d, ~d}, /* instruction ~d (~x)*/\n" n b i i)
                  (format "  {~d, ~d}, /* instruction ~d (~x): ~a */\n"
                          n b i i (bytecode-name bc))))
              (setq bytecodes-output (+ bytecodes-output 1)))
             (t                          ;undefined
              (if old-style
                  (format "  {~d, ~d}, /* instruction ~d (~x)*/\n" 0 0 i i)
                (format "  {~d, ~d}, /* instruction ~d (~x): (undefined) */\n"
                        0 0 i i))))
           (when (< i 255)
                 (loop (+ i 1)))))
    (when verbose (sformat stderr "~d bytecodes output\n" bytecodes-output))
    (print "};" nl)
    (print nl)
    (print "#endif /* eof */" nl)))

(main (cdr ((converter <list>) *argv*))) ; get rid of program name.

;;;-----------------------------------------------------------------------------
)  ;; End of module b2h
;;;-----------------------------------------------------------------------------
