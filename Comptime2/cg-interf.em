;;; Copyright (c) 1997 by A Kind & University of Bath. All rights reserved.
;;;-----------------------------------------------------------------------------
;;; ---                         EuLisp System 'youtoo'
;;;-----------------------------------------------------------------------------
;;;  Library: comp (EuLisp to Bytecode Compiler -- EuLysses))
;;;  Authors: Andreas Kind, Keith Playford
;;; Description: reading/writing interface files
;;;-----------------------------------------------------------------------------
(defmodule cg-interf
  (syntax (_macros _i-aux0)
   import (i-all i-modify sx-obj sx-node p-env)
   export (load-module-interface load-library-interfaces
           find-imported-module find-imported-syntax-module
           write-interface-file create-library-interface-file
           make-interface-binding new-literal
           get-full-import-names get-library-names
           get-module-load-dir
           link-string fff-link-string ffl-link-string
           directly-or-indirectly-modified-p))

;;;-----------------------------------------------------------------------------
;;; Read interface file
;;;-----------------------------------------------------------------------------
   (defun load-module-interface (name . lib)
     (let* ((file-name (if lib
                          (as-C-library-interface-file-name name)
                        (as-interface-file-name name)))
            (spec
             (with-input-file-of-path (stream file-name dir *load-path*)
               (if lib
                   (notify "Reading library interface ~a ..." file-name)
                 (notify "  Reading interface ~a ..." file-name))
               (setq *tmp-load-dir* dir)
               (read-s-expression stream))))
       (dynamic-let ((*actual-module* (make-module name)))
         (with-ct-handler (format () "bad interface syntax ~a" spec) spec
           (let* ((module-name (car (cdr spec)))
                  (m (dynamic *actual-module*))
                  (rest-spec (car (cdr (cdr spec))))
                  (import (get-interface-info 'import rest-spec))
                  (full-import (get-interface-info 'full-import rest-spec))
                  (syntax (get-interface-info 'syntax rest-spec))
                  (export (get-interface-info 'export rest-spec))
                  ;                 (literals (get-interface-info 'literals rest-spec))
                  (lliterals (get-interface-info 'local-literals rest-spec)))
             (module-used-module-names! m import)
             (module-used-syntax-modules! m
                                          ;             (map1-list find-imported-syntax-module
                                          syntax)
             (module-all-used-module-names! m full-import)
             (module-local-literals! m lliterals)
             (do1-list make-interface-binding export)
             ;            (do1-list (lambda (x)
             ;                        (new-literal (car x) (car (cdr x)))) literals)
             m)))))

   (defun load-library-interfaces ()
     (let ((tmp-load-path *load-path*))
       (setq *load-path* *C-library-load-path*)
       (do1-list (lambda (name)
                   (if () ()  ; (get-module name) ()
                     (load-module-interface name t)))
           *linked-C-libraries*)
       (setq *load-path* tmp-load-path)))

   (defun get-interface-info (key spec)
     (init-list-ref spec key))

   (defun new-literal (obj entry)
     ((setter *get-literal*) obj entry))

;;;-----------------------------------------------------------------------------
;;; Interface bindings can be distinguished from true bindings during code
;;  genereation by their symbolic module name. The binding obj of an
;;  interface bindings is it's original name.
;;;-----------------------------------------------------------------------------
   (defun make-interface-binding (spec)
     (let* ((name (get-binding-spec-info 'name spec))
            (origin (get-binding-spec-info 'origin spec))
            (origin-module-name (car origin))
            (origin-name (cdr origin))
            (index (get-binding-spec-info 'pos spec))
            (info (cdr (cdr (cdr spec))))
            (binding (make <interface-binding>
                           local-name: name
                           module: origin-module-name
                           immutable: () ; depends on info!!
                           obj: origin-name
                           imported: t
                           local-index: index
                           info: info)))
       (set-external-binding binding)))

;;;-----------------------------------------------------------------------------
;;; Write interface file
;;;-----------------------------------------------------------------------------
   (defun write-interface-file (module)
     (let ((module-name (module-name? module)))
       module-name
       (if (and *create-C-library*
                (eq module-name *tmp-start-source-file-name*))
           ()
         (write-module-interface-file module))))

   (defun write-module-interface-file (module)
     (let* ((module-name (module-name? module))
            (file-name (as-interface-file-name module-name))
            (absolute-file-name (format () "~a~a~a"
                                        (module-load-dir? module)
                                        *delimiter*
                                        file-name))
            (used-module-names (module-used-module-names? module))
            (used-syntax-module-names
             (map1-list module-name? (module-used-syntax-modules? module)))
            (all-used-module-names
             (module-all-used-module-names? module)))
       (notify "  Creating ~a ..." file-name)
       (with-output-file (stream absolute-file-name)
         (format stream ";;; EuLisp system 'youtoo'\n")
         (format stream ";;;   Interface file for module ~a\n\n" module-name)
         (format stream "(definterface ~a\n" module-name)
         (format stream "  (import ~a\n" used-module-names)
         (format stream "   syntax ~a\n" used-syntax-module-names)
         (format stream "   full-import ~a\n" all-used-module-names)
         (write-interface-export stream module)
         (write-interface-local-literals stream module)
         (write-interface-literals stream module)
         (format stream "))\n")))
     module)

;;;-----------------------------------------------------------------------------
;;; Write library interface file
;;;-----------------------------------------------------------------------------
   (defun write-library-interface-file (module)
     (let* ((module-name (module-name? module))
            (file-name (as-C-library-interface-file-name module-name))
            (absolute-file-name (format () "~a~a~a"
                                        (module-load-dir? module)
                                        *delimiter*
                                        file-name))
            (all-used-module-names
             (cons module-name (module-all-used-module-names? module))))
       (notify "  Writing library interface file ~a" file-name)
       (with-output-file (stream absolute-file-name)
         (format stream ";;; EuLisp system 'youtoo'\n")
         (format stream ";;;   Library interface file for module ~a\n\n"
                 module-name)
         (format stream "(definterface ~a\n" module-name)
         (format stream "  (import ()\n")
         (format stream "   syntax ()\n")
         (format stream "   full-import ~a\n" all-used-module-names)
         (write-interface-export stream module)
         ;        (write-interface-literals stream module)
         (format stream "   literals (\n   )\n")
         (format stream "  )\n)  ; end of interface")))
     module)

   (defun create-library-interface-file (module-name)
     (notify "Create library interface file ...")
     (let ((module (or (get-module module-name)
                       (load-module-interface module-name))))
       (write-library-interface-file module)))

;;;-----------------------------------------------------------------------------
;;; Auxillary function to write interface
;;;-----------------------------------------------------------------------------
   (defun write-library-interface-literals (stream module)
     (let ((module-names (cons (module-name? module)
                               (module-all-used-module-names? module))))
       (format stream "   literals (\n")
       (access-table-do (lambda (obj entry)
                          (and (member1-list (car entry) module-names)
                               (if t ;(stringp obj)
                                   (format stream "    (~s ~a)\n" obj entry)
                                 (format stream "    (~a ~a)\n" obj entry))))
                        *get-literal*)
       (format stream "   )\n")))

   (defun write-interface-literals (stream module)
     (format stream "   literals (\n")
     ;     (access-table-do
     ;      (lambda (obj entry)
     ;       (let* ((names (cons (module-name? module)
     ;                           (module-all-used-module-names? module)))
     ;              (new-entry (select-list (lambda (x y) (member1-list (car x) y))
     ;                                       entry names)))
     ;         (if (null new-entry) ()
     ;           (if t ;(stringp obj)
     ;               (format stream "    (~s ~a)\n" obj new-entry)
     ;             (format stream "    (~a ~a)\n" obj new-entry)))))
     ;      *get-literal*)
     (format stream "   )\n"))

   (defun write-interface-local-literals (stream module)
     (format stream "   local-literals (\n")
     (do1-list (lambda (entry)
           (format stream "    ~s\n" entry))
         (module-local-literals? module))
     (format stream "   )\n"))

   (defun write-interface-export (stream module)
     (format stream "   export (\n")
     (access-table-do
      (lambda (name binding)
        ;; Attention -- name is ptr to C string!
        (write-interface-binding stream
                                 (binding-local-name? binding)
                                 binding))
      (module-external-env? module))
     (format stream "   )\n"))

   (defun write-library-interface-export (stream module)
     (format stream "   export (\n")
     (do1-list (lambda (module)
                 (access-table-do
                  (lambda (name binding)
                    ;; Attention -- name is ptr to C string!
                    (write-interface-binding stream
                                             (binding-local-name? binding)
                                             binding))
                  (module-external-env? module)))
         (map1-list find-imported-module (module-all-used-module-names? module)))
     (format stream "  )\n"))

   (defun write-interface-binding (stream name binding)
     (let ((origin-module-name (binding-origin-module-name binding))
           (origin-name (or (and (syntax-obj-p (binding-obj? binding))
                                 (origin-name? (binding-obj? binding)))
                            (binding-obj? binding)
                            name))
           (binding-info (binding-info? binding))
           (index (binding-local-index? binding)))
       (format stream "    ~a\n"
               `((name . ,name)
                 (pos . ,index)
                 (origin ,origin-module-name . ,origin-name)
                 ,@binding-info))))

;;;-----------------------------------------------------------------------------
;;; Is module directly or indirectly modified?
;;;-----------------------------------------------------------------------------
  (defun directly-or-indirectly-modified-p (module-name)
    (if (and (eq module-name *tmp-start-source-file-name*)
             *no-recompile*)
        t
      (and (or (eq module-name *tmp-start-source-file-name*)
               (if *interpreter* t (null *no-recompile*)))
           (or (module-modified-p module-name)
               (null (file-exist-p (as-C-file-name module-name)))
               (let ((full-import (get-full-import-names module-name)))
                 (anyp1-list (lambda (name)
                               (if (member1-list name (get-library-names))
                                   (library-newer-p name module-name)
                                 (let ((file-name1
                                        (as-source-file-name name))
                                       (file-name2
                                        (as-interface-file-name module-name)))
                                   (file-newer-p file-name1 file-name2))))
                             full-import))))))

;;;-----------------------------------------------------------------------------
;;; Get all used module names out of the interface
;;;-----------------------------------------------------------------------------
   (defun get-full-import-names (module-name)
     (or (*get-full-import* module-name)
         (let ((module (get-module module-name)))
           (and module (module-all-used-module-names? module)))
         (progn
           (notify0 "  Get-full-import-names module-name: ~a" module-name)
           ())
         (let* ((file-name (as-interface-file-name module-name))
                (foo (notify0 "  Getting full import from ~a ..." file-name))
                (spec
                 (with-input-file-of-path (stream file-name dir *load-path*)
                   (notify0 "  dir ~a ..." dir)
                   (read-s-expression stream))))
           (notify0 "  Get-full-import-names spec: ~a" spec)
           (with-ct-handler (format () "bad interface syntax ~a" spec) spec
             (let* ((rest-spec (car (cdr (cdr spec))))
                    (import (get-interface-info 'full-import rest-spec)))
               ((setter *get-full-import*) module-name import)
               import)))))

   (defun get-library-names ()
     (let ((modules (map1-list get-module *linked-C-libraries*))
           (names ()))
       (do1-list (lambda (module)
             (setq names
                   (append names (module-all-used-module-names? module))))
           modules)
       names))

   (defun get-module-load-dir (module-name)
     (let ((module (get-module module-name)))
       (if module
           (module-load-dir? module)
         (file-exist-p (as-interface-file-name module-name)))))

   (defun find-imported-module (name)
     (or (get-module name)
         (if (directly-or-indirectly-modified-p name)
             (compile-module name)
           (load-module-interface name))))

   (defun find-imported-syntax-module (name)
     (or (get-syntax-module name)
         (load-syntax-module name)))

;;;-----------------------------------------------------------------------------
;;; Answer string containing module name and all used module names
;;;-----------------------------------------------------------------------------
  (defun link-string (module-name)
    (let* ((dir (get-module-load-dir module-name))
           (module (get-module module-name))
           (full-import (if module
                            (module-all-used-module-names? module)
                          (get-full-import-names module-name)))
           (lib-names (get-library-names))
           (import (binary- full-import lib-names))
           (file-name (as-compiled-C-file-name module-name))
           (str (string-append dir (string-append *delimiter* file-name))))
      (labels
          ((loop (ll res)
                 (if (null ll) res
                   (let* ((name (car ll))
                          (imp-file-name (as-compiled-C-file-name name))
                          (imp-dir (file-exist-p file-name)))
                   (loop (cdr ll)
                         (string-append
                          res
                          (string-append
                           " "
                           (string-append
                            imp-dir
                            (string-append *delimiter* imp-file-name)))))))))
        (loop import str))))

  (defun fff-link-string ()
    (let ((names *linked-C-ff-files*))
      (if (null names) ""
        (let ((str-list
               (map1-list (lambda (name)
                      (let* ((file-name (as-compiled-C-file-name name))
                             (dir (external-file-exist-p file-name)))
                        (if dir
                            (format () "~a~a~a " dir *delimiter* file-name)
                          (ct-error
                           -1 "foreign function file ~a does not exist"
                           file-name))))
                      names)))
          (apply concatenate str-list)))))

  (defun ffl-link-string ()
    (let ((names *linked-C-ff-libraries*))
      (if (null names) ""
        (let ((str-list
               (map1-list (lambda (name)
                      (let* ((file-name (as-C-library-file-name name))
                             (dir (external-file-exist-p file-name)))
                        (if dir
                            (format () "~a~a~a " dir *delimiter* file-name)
                          (ct-error
                           -1 "foreign function library ~a does not exist"
                           file-name))))
                      names)))
          (apply concatenate str-list)))))

;;;-----------------------------------------------------------------------------
  )  ;; end of module
;;;-----------------------------------------------------------------------------
