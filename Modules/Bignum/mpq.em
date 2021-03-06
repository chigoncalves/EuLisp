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
;;; Title: Interface to the GNU mpq library
;;;  Library: bignum
;;;  Authors: Danius Michaelides, Andreas Kind
;;;  Maintainer: Henry G. Weller
;;;-----------------------------------------------------------------------------

(defmodule mpq
  (export (mpq-init
           mpq-init-set
           mpq-init-set-z
           mpq-init-set-ui
           mpq-init-set-si
           mpq-clear
           mpq-get-num
           mpq-get-den
           mpq-get-d
           mpq-set-num
           mpq-set-den
           mpq-mul
           mpq-mul-init
           mpq-add
           mpq-add-init
           mpq-sub
           mpq-sub-init
           mpq-div
           mpq-div-init
           mpq-neg
           mpq-neg-init
           mpq-inv
           mpq-inv-init
           mpq-cmp
           mpq-cmp-ui
           mpq-sgn
           mpq-equal
           mpq-canonicalize))

;;;-----------------------------------------------------------------------------
;;;
;;;-----------------------------------------------------------------------------
(defextern mpq-init () ptr "C_mpq_init")
(defextern mpq-init-set (ptr) ptr "C_mpq_init_set")
(defextern mpq-init-set-z (ptr) ptr "C_mpq_init_set_z")
(defextern mpq-init-set-ui (<fpi> <fpi>) ptr "C_mpq_init_set_ui")
(defextern mpq-init-set-si (<fpi> <fpi>) ptr "C_mpq_init_set_si")
(defextern mpq-clear (ptr) boolean "C_mpq_clear")
(defextern mpq-get-num (ptr) ptr "C_mpq_get_num_init")
(defextern mpq-get-den (ptr) ptr "C_mpq_get_den_init")
(defextern mpq-get-d (ptr) <double-float> "C_mpq_get_d")
(defextern mpq-set-num (ptr ptr) boolean "C_mpq_set_num")
(defextern mpq-set-den (ptr ptr) boolean "C_mpq_set_den")
(defextern mpq-mul (ptr ptr ptr) boolean "C_mpq_mul")
(defextern mpq-mul-init (ptr ptr) ptr "C_mpq_mul_init")
(defextern mpq-add (ptr ptr ptr) boolean "C_mpq_add")
(defextern mpq-add-init (ptr ptr) ptr "C_mpq_add_init")
(defextern mpq-sub (ptr ptr ptr) boolean "C_mpq_sub")
(defextern mpq-sub-init (ptr ptr) ptr "C_mpq_sub_init")
(defextern mpq-div (ptr ptr ptr) boolean "C_mpq_div")
(defextern mpq-div-init (ptr ptr) ptr "C_mpq_div_init")
(defextern mpq-neg (ptr ptr) boolean "C_mpq_neg")
(defextern mpq-neg-init (ptr)  ptr "C_mpq_neg_init")
(defextern mpq-inv (ptr ptr) boolean "C_mpq_inv")
(defextern mpq-inv-init (ptr)  ptr "C_mpq_inv_init")
(defextern mpq-cmp (ptr ptr) <fpi> "C_mpq_cmp")
(defextern mpq-cmp-ui (ptr <fpi>) <fpi> "C_mpq_cmp_ui")
(defextern mpq-sgn (ptr) <fpi> "C_mpq_sgn")
(defextern mpq-equal (ptr ptr) boolean "C_mpq_equal")
(defextern mpq-canonicalize (ptr) boolean "C_mpq_canonicalize")

;;;-----------------------------------------------------------------------------
)  ;; End of module mpq
;;;-----------------------------------------------------------------------------
