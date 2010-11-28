;;; EuLisp system 'youtoo'
;;;   Interface file for module cg-asm

(definterface cg-asm
  (import (i-all sx-obj cg-bycode1 cg-bycode2 cg-state op-peep op-peep-r)
   syntax (_macros _i-aux0 _sx-obj0)
   full-import (i-error i-notify i-param i-level-1 boot1 boot symbol stream3 random handler read table table1 vector convert1 format list socket stream2 lock stream1 stream float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl telos level-1 aux-table i-all sx-obj2 sx-obj1 sx-obj cg-bycode cg-bycode1 cg-bycode2 cg-state op-peep op-peep-r)
   export (
    ((name . assemble) (pos . 3) (origin cg-asm . assemble))
   )
   local-literals (
    (assemble-function . 117)
    (neg-fix-bytes-aux . 116)
    (resolve-label-refs . 115)
    (branch? . 114)
    (fix-as-4-bytes . 113)
    (put-branch-bytes . 112)
    (assemble-instruction-default . 111)
    (register-label-ref . 110)
    (get-branch-code . 109)
    (assemble-instruction . 108)
    (put-bc . 107)
    (register-label-loc . 106)
    (pos-fix-bytes-aux . 105)
    (put-bytes . 104)
    (assemble-branch . 103)
    (put-byte . 102)
    (align . 101)
    (put-fix . 100)
    ("      PUT BYTE: ~a" . 95)
    ("label multiply defined" . 89)
    ("no bytecode ~a" . 87)
    (noop . 86)
    (FF . 84)
    (call-foreign-function . 83)
    (CODE-VECTOR . 82)
    (static-ref . 81)
    (code-vector-ref . 80)
    (set-and-get-binding-ref . 79)
    (set-binding-ref . 78)
    (BINDING . 77)
    (binding-ref . 76)
    ("    Instruction: ~a" . 75)
    ("    Register label ~a ref ~a" . 72)
    (byte . 70)
    ("no register ~a" . 69)
    (reg . 68)
    (STATIC . 67)
    (static . 66)
    (label . 65)
    ("      PUT BRANCH BYTES: ~a" . 62)
    ((branch-true branch-nil branch) . 59)
    (branch . 58)
    (branch-nil . 57)
    (branch-true . 56)
    (call/ep-lambda . 54)
    ("    Resolve labels" . 53)
    ("   .Resolving ~a to ~a" . 49)
    ("-pos" . 46)
    ("-long-pos" . 45)
    ("jump too long: ~a" . 44)
    ("-neg" . 43)
    ("-long-neg" . 42)
    ("jump too long: ~a" . 41)
    (bytevectors: . 38)
    (init-bytevector: . 37)
    (assemble . 36)
    ("  Assembling module ~a ..." . 35)
    (|(method G005811)| . 34)
    (ct-error-value: . 31)
    ("assembler error" . 30)
    ("compile time error condition: " . 29)
    ("  Re-assembling function ~a because of long jump" . 26)
    (*clean-ups* . 25)
    (*with-long-jumps* . 24)
    (anonymous . 23)
   )
   literals (
   )
))
