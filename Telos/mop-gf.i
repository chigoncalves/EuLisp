;;; EuLisp system 'youtoo'
;;;   Interface file for module mop-gf

(definterface mop-gf
  (import (boot mop-prim mop-class mop-inspect)
   syntax (_boot0 _mop-gf0)
   full-import (boot1 boot mop-prim mop-class mop-init mop-inspect)
   export (
    ((name . error-no-applicable-methods) (pos . 15) (origin mop-gf . error-no-applicable-methods))
    ((name . initialize) (pos . 12) (origin mop-gf . initialize))
    ((name . discriminating-domain) (pos . 6) (origin mop-gf . discriminating-domain))
    ((name . sig=) (pos . 11) (origin mop-gf . sig=))
    ((name . generic-format) (pos . 17) (origin mop-gf . generic-format))
    ((name . allocate) (pos . 9) (origin mop-gf . allocate))
    ((name . gf-reset-cache) (pos . 3) (origin mop-gf . gf-reset-cache))
    ((name . finalize) (pos . 14) (origin mop-gf . finalize))
    ((name . make-generic-function) (pos . 16) (origin mop-gf . make-generic-function))
    ((name . make) (pos . 2) (origin mop-gf . make))
    ((name . the-method-lookup-function) (pos . 7) (origin mop-gf . the-method-lookup-function))
   )
   local-literals (
    (top-level . 74)
    (make . 73)
    (gf-reset-cache . 72)
    (compute-primitive-discriminating-function . 71)
    (primitive-make-generic-function . 70)
    (discriminating-domain . 69)
    (the-method-lookup-function . 68)
    (sig-applicable-p . 67)
    (select-methods . 66)
    (sig= . 65)
    (sig<= . 64)
    (error-no-applicable-methods . 63)
    (make-generic-function . 62)
    (method-keywords: . 60)
    (method-class: . 59)
    (domain: . 58)
    (name: . 57)
    ("no applicable methods for ~a
    arguments: ~a
    classes: ~a" . 55)
    (primitive-method-lookup-function . 40)
    (primitive-discriminating-function . 37)
    (anonymous . 34)
    (warning . 30)
    (error . 29)
    (generic-format . 28)
    (allocate . 27)
    (finalize . 26)
    (initialize . 25)
    ("***    See Backtrace? (y/n) " . 23)
    ("
" . 22)
    ("*** ERROR [level1]: " . 21)
    ("
" . 19)
    ("*** WARNING [level1]: " . 18)
   )
   literals (
   )
))