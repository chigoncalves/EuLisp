;;; EuLisp system 'youtoo'
;;;   Interface file for module mop-defcl

(definterface mop-defcl
  (import (boot mop-prim mop-inspect mop-key mop-class mop-init mop-gf mop-meth)
   syntax (_boot0 _mop-gf0 _mop-meth0)
   full-import ()
   export (
    ((name . remove-class) (pos . 4) (origin mop-defcl . remove-class))
    ((name . find-slot) (pos . 9) (origin mop-defcl . find-slot))
    ((name . predefined-reader) (pos . 6) (origin mop-defcl . predefined-reader))
    ((name . predefined-writer) (pos . 3) (origin mop-defcl . predefined-writer))
    ((name . slot-value-using-slot) (pos . 11) (origin mop-defcl . slot-value-using-slot))
    ((name . add-subclass) (pos . 10) (origin mop-defcl . add-subclass))
    ((name . slot-value) (pos . 8) (origin mop-defcl . slot-value))
   )
   local-literals (
    (top-level . 74)
    (predefined-writer . 73)
    (predefined-reader . 72)
    (slot-value . 71)
    (find-slot . 70)
    (make-slotds . 69)
    (primitive-make-slot . 68)
    (required: . 66)
    ("slot ~a not found in class ~a" . 61)
    (code . 54)
    (anonymous . 53)
    (|(setter slot-value)| . 52)
    (|(method (setter slot-value-using-slot))| . 51)
    ((setter slot-value-using-slot) . 50)
    (setter . 49)
    (|(method slot-value-using-slot)| . 48)
    (|(method remove-class)| . 47)
    (|(method add-subclass)| . 46)
    (slot-value-using-slot . 45)
    (remove-class . 44)
    (add-subclass . 43)
   )
   literals (
   )
))