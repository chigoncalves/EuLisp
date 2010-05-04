;;; EuLisp system 'youtoo'
;;;   Interface file for module ex-expose

(definterface ex-expose
  (import (i-all p-env sx-obj sx-node cg-interf ex-import)
   syntax (_macros _i-aux0)
   full-import (i-error i-notify i-param i-level1 boot1 boot symbol stream3 random handler read table table1 vector convert1 format list socket stream2 lock stream1 stream float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl telos level1 aux-table i-all sx-obj sx-obj1 sx-obj2 p-env i-ffi sx-node i-modify cg-interf ex-import)
   export (
    ((name . expand-expose) (pos . 8) (origin ex-expose . expand-expose))
   )
   local-literals (
    (top-level . 63)
    (expose-expander . 62)
    (expose-binding . 61)
    (expose-module . 60)
    (make-prefix . 59)
    (install-expose-expander . 58)
    (expand-expose . 57)
    ("redefinition of expander ~a" . 54)
    ("  Expose module ~a ..." . 51)
    ("external binding ~a not available in module ~a" . 48)
    ("no expose expander ~a available" . 46)
    ("no expose expander ~a available" . 45)
    (prefix . 41)
    (rename . 40)
    (except . 39)
    (only . 38)
    (|(method G005023)| . 36)
    ("bad expose only syntax" . 34)
    (|(method G005046)| . 30)
    ("bad expose except syntax" . 28)
    (|(method G005072)| . 24)
    ("bad expose rename syntax" . 22)
    (*actual-module* . 17)
    (|(method G005104)| . 16)
    (anonymous . 15)
    (ct-error-value: . 13)
    ("bad expose prefix syntax" . 12)
   )
   literals (
   )
))