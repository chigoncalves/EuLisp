;;; Copyright 1997 A. Kind & University of Bath
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
;;; Title: fixed precision integers (int)
;;;  Library: level1
;;;  Authors: Andreas Kind, Julian Padget
;;;  Maintainer: Henry G. Weller
;;;-----------------------------------------------------------------------------

(defmodule fpi
  (syntax (_telos0)
   import (telos
           compare
           number
           integer)
   export (<fpi>
           fpi?
           int-binary-
           int-binary*
           int-binary/
           int-binary%
           int-binary-mod
           int-as-string
           most-positive-int
           most-negative-int))

;;;-----------------------------------------------------------------------------
;;; Class <fpi>
;;;-----------------------------------------------------------------------------
(defprimclass <fpi> fpi-class (<integer>) ())

;;;-----------------------------------------------------------------------------
;;; Limits (-2^29 - 1  ... 2^29 - 1)
;;;-----------------------------------------------------------------------------
(defconstant most-positive-int 536870911)
(defconstant most-negative-int -536870911)

;;;-----------------------------------------------------------------------------
;;; Arithmetic
;;;-----------------------------------------------------------------------------
(defmethod binary+ ((x <fpi>) (y <fpi>)) (int-binary+ x y))
(defmethod binary= ((x <fpi>) (y <fpi>)) (if (int-binary= x y) t ()))
(defmethod binary< ((x <fpi>) (y <fpi>)) (int-binary< x y))
(defmethod binary- ((x <fpi>) (y <fpi>)) (int-binary- x y))
(defmethod binary* ((x <fpi>) (y <fpi>)) (int-binary* x y))
(defmethod binary/ ((x <fpi>) (y <fpi>)) (int-binary/ x y))
(defmethod binary% ((x <fpi>) (y <fpi>)) (int-binary% x y))
(defmethod binary-mod ((x <fpi>) (y <fpi>)) (int-binary-mod x y))

;;;-----------------------------------------------------------------------------
;;; Gcd and lcm
;;;-----------------------------------------------------------------------------
(defmethod binary-gcd ((x <fpi>) (y <fpi>)) (int-binary-gcd x y))

(defun int-binary-gcd (x y)
  (cond ((int-binary< x y)
         (let ((p (int-binary* x (int-binary/ y x))))
           (if (int-binary= p y) x
             (int-binary-gcd (int-binary- y p) x))))
        ((int-binary< y x)
         (let ((p (int-binary* y (int-binary/ x y))))
           (if (int-binary= p x) y
             (int-binary-gcd (int-binary- x p) y))))
        (t x)))

(defmethod binary-lcm ((x <fpi>) (y <fpi>)) (int-binary-lcm x y))

(defun int-binary-lcm (x y)
  (if (or (= x 0) (= y 0))
      0
    (int-binary/ (int-binary* x y) (int-binary-gcd x y))))

;;;-----------------------------------------------------------------------------
;;; Predicates
;;;-----------------------------------------------------------------------------
(defmethod zero? ((x <fpi>)) (int-binary= x 0))

;;;-----------------------------------------------------------------------------
;;; Conversion
;;;-----------------------------------------------------------------------------
(defgeneric (converter <fpi>) (x))
(defextern int-as-string (<fpi>) <string> "eul_int_as_str")

;;;-----------------------------------------------------------------------------
)  ;; End of module fpi
;;;-----------------------------------------------------------------------------
