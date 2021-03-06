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
;;; Title: double precision floats
;;;  Library: level-1
;;;  Authors: Andreas Kind, Julian Padget
;;;  Maintainer: Henry G. Weller
;;;-----------------------------------------------------------------------------

(defmodule double
  (syntax (_telos0)
   import (telos
           compare
           number
           integer
           fpi
           string
           float
           double1)
   export (<double-float>
           double-float?
           most-positive-double-float
           least-positive-double-float
           most-negative-double-float
           least-negative-double-float
           double-binary<
           double-binary=
           double-binary-gcd
           double-binary-lcm)
   expose (double1))

;;;-----------------------------------------------------------------------------
;;; Limits
;;;-----------------------------------------------------------------------------
(defextern get-double-float-max () <double-float> "eul_get_dbl_max")
(defextern get-double-float-min () <double-float> "eul_get_dbl_min")
(defextern get-double-float-epsilon () <double-float> "eul_get_dbl_epsilon")
(defextern get-negative-double-float-epsilon () <double-float>
           "eul_get_neg_dbl_epsilon")

(defconstant most-positive-double-float (get-double-float-max))
(defconstant least-positive-double-float (get-double-float-epsilon))
(defconstant most-negative-double-float (get-double-float-min))
(defconstant least-negative-double-float (get-negative-double-float-epsilon))

;;;-----------------------------------------------------------------------------
;;; Comparison
;;;-----------------------------------------------------------------------------
(defextern double-binary= (<double-float> <double-float>) ptr
           "eul_dbl_equal")

(defextern double-binary< (<double-float> <double-float>) ptr
           "eul_dbl_less")

(defmethod binary= ((x <double-float>) (y <double-float>))
  (double-binary= x y))

(defmethod binary= ((x <fpi>) (y <double-float>))
  (double-binary= (fpi-as-double x) y))

(defmethod binary= ((x <double-float>) (y <fpi>))
  (double-binary= x (fpi-as-double y)))

(defmethod binary< ((x <double-float>) (y <double-float>))
  (double-binary< x y))

(defmethod binary< ((x <fpi>) (y <double-float>))
  (double-binary< (fpi-as-double x) y))

(defmethod binary< ((x <double-float>) (y <fpi>))
  (double-binary< x (fpi-as-double y)))

;;;-----------------------------------------------------------------------------
;;; Rounding ...
;;;-----------------------------------------------------------------------------
(defmethod ceiling ((x <double-float>)) (double-ceiling x))
(defmethod floor ((x <double-float>)) (double-floor x))
(defmethod round ((x <double-float>)) (double-round x))
(defmethod truncate ((x <double-float>)) (double-truncate x))

;;;-----------------------------------------------------------------------------
;;; Gcd and lcm
;;;-----------------------------------------------------------------------------
(defmethod binary-gcd ((x <double-float>) (y <double-float>))
  (double-binary-gcd x y))

(defmethod binary-gcd ((x <fpi>) (y <double-float>))
  (double-binary-gcd (fpi-as-double x) y))

(defmethod binary-gcd ((x <double-float>) (y <fpi>))
  (double-binary-gcd x (fpi-as-double y)))

(defun double-binary-gcd (x y)
  (cond ((double-binary< x y)
         (let ((p (double-binary* x (double-binary/ y x))))
           (if (double-binary= p y) x
             (double-binary-gcd (double-binary- y p) x))))
        ((double-binary< y x)
         (let ((p (double-binary* y (double-binary/ x y))))
           (if (double-binary= p x) y
             (double-binary-gcd (double-binary- x p) y))))
        (t x)))

(defmethod binary-lcm ((x <double-float>) (y <double-float>))
  (double-binary-lcm x y))

(defmethod binary-lcm ((x <fpi>) (y <double-float>))
  (double-binary-lcm (fpi-as-double x) y))

(defmethod binary-lcm ((x <double-float>) (y <fpi>))
  (double-binary-lcm x (fpi-as-double y)))

(defun double-binary-lcm (x y)
  (if (or (= x 0) (= y 0))
      0
    (double-binary/ (double-binary* x y) (double-binary-gcd x y))))

;;;-----------------------------------------------------------------------------
;;; Predicates
;;;-----------------------------------------------------------------------------
(defmethod zero? ((x <double-float>)) (double-binary= x 0.0))

;;;-----------------------------------------------------------------------------
)  ;; End of module double
;;;-----------------------------------------------------------------------------
