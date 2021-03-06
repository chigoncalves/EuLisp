;;; EuLisp system 'youtoo'
;;;   Interface file for module mop-inspect

(definterface mop-inspect
  (import (boot mop-prim mop-class mop-init)
   syntax (_boot0)
   full-import (boot1 boot mop-prim mop-class mop-init)
   export (
    ((name . class?) (pos . 4) (origin mop-inspect . class?))
    ((name . methodp) (pos . 12) (origin mop-inspect . methodp))
    ((name . generic-function?) (pos . 3) (origin mop-inspect . generic-function?))
    ((name . cpl-subclass?) (pos . 11) (origin mop-inspect . cpl-subclass?))
    ((name . class-of) (pos . 5) (origin mop-inspect . class-of) (inline (G001495 (primitive-class-of))))
    ((name . slotp) (pos . 13) (origin mop-inspect . slotp))
    ((name . primitive-metaclass?) (pos . 6) (origin mop-inspect . primitive-metaclass?))
    ((name . primitive-slot-value) (pos . 10) (origin mop-inspect . primitive-slot-value))
    ((name . primitive-find-slot-position) (pos . 7) (origin mop-inspect . primitive-find-slot-position))
    ((name . function?) (pos . 8) (origin mop-inspect . function?))
    ((name . subclass?) (pos . 2) (origin mop-inspect . subclass?))
   )
   local-literals (
    (top-level . 45)
    (subclass? . 44)
    (generic-function? . 43)
    (class? . 42)
    (class-of . 41)
    (primitive-metaclass? . 40)
    (primitive-find-slot-position . 39)
    (function? . 38)
    (subcode? . 37)
    (primitive-slot-value . 36)
    (cpl-subclass? . 35)
    (methodp . 34)
    (slotp . 33)
    ("slot ~a not found in class ~a" . 25)
    (anonymous . 19)
    (|(setter primitive-slot-value)| . 16)
   )
   literals (
   )
))
