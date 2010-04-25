;;; Copyright (c) 1997 by A Kind & University of Bath. All rights reserved.
;;;-----------------------------------------------------------------------------
;;; ---                         EuLisp System 'youtoo'
;;;-----------------------------------------------------------------------------
;;;  Library: cc
;;;  Authors: Andreas Kind
;;; Description: C++ interoperability
;;;  Compilation
;;   g++ -c eul-cc1.cc
;;   youtoo test1 -l level1 -fff eul-cc1
;;;-----------------------------------------------------------------------------
(defmodule test1
  (syntax (macros)
   import (level1))

;;;-----------------------------------------------------------------------------
;;; Out-call to C++
;;;-----------------------------------------------------------------------------
  (defextern foo (<string> <int>) <character>)
  (print (foo "Hello world!" 4))

;;;-----------------------------------------------------------------------------
  )  ;; end of module
;;;-----------------------------------------------------------------------------
