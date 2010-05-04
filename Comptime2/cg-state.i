;;; EuLisp system 'youtoo'
;;;   Interface file for module cg-state

(definterface cg-state
  (import (i-all)
   syntax (_macros _sx-obj0)
   full-import (i-error i-notify i-param i-level1 boot1 boot symbol stream3 random handler read table table1 vector convert1 format list socket stream2 lock stream1 stream float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl telos level1 aux-table i-all)
   export (
    ((name . C-state-code-vector-defs!) (pos . 6) (origin cg-state . C-state-code-vector-defs!) (inline (G002251 (stack-ref 1) (static-fpi-ref 6) (stack-ref 2) (binding-ref ? <C-state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . C-state-initializations?) (pos . 44) (origin cg-state . C-state-initializations?) (inline (G002245 (static-fpi-ref 5) (binding-ref ? <C-state>) (primitive-relative-ref))))
    ((name . code-state-enclosed-code!) (pos . 5) (origin cg-state . code-state-enclosed-code!) (inline (G002175 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <code-state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . C-state-global-index?) (pos . 20) (origin cg-state . C-state-global-index?) (inline (G002225 (static-ref0) (binding-ref ? <C-state>) (primitive-relative-ref))))
    ((name . C-state-decls?) (pos . 54) (origin cg-state . C-state-decls?) (inline (G002253 (static-fpi-ref 7) (binding-ref ? <C-state>) (primitive-relative-ref))))
    ((name . code-state-binding-name!) (pos . 31) (origin cg-state . code-state-binding-name!) (inline (G002195 (stack-ref 1) (static-fpi-ref 5) (stack-ref 2) (binding-ref ? <code-state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . asm-function-state-code!) (pos . 30) (origin cg-state . asm-function-state-code!) (inline (G002215 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <asm-function-state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . code-state-handle!) (pos . 53) (origin cg-state . code-state-handle!) (inline (G002199 (stack-ref 1) (static-fpi-ref 6) (stack-ref 2) (binding-ref ? <code-state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . code-state-binding-name?) (pos . 34) (origin cg-state . code-state-binding-name?) (inline (G002193 (static-fpi-ref 5) (binding-ref ? <code-state>) (primitive-relative-ref))))
    ((name . C-state-code-vector-defs?) (pos . 49) (origin cg-state . C-state-code-vector-defs?) (inline (G002249 (static-fpi-ref 6) (binding-ref ? <C-state>) (primitive-relative-ref))))
    ((name . <C-state>) (pos . 19) (origin cg-state . <C-state>) (class . constant))
    ((name . asm-function-state-binding-name!) (pos . 18) (origin cg-state . asm-function-state-binding-name!) (inline (G002219 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <asm-function-state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . asm-function-state-pc?) (pos . 52) (origin cg-state . asm-function-state-pc?) (inline (G002209 (static-ref0) (binding-ref ? <asm-function-state>) (primitive-relative-ref))))
    ((name . C-state-used-module-names!) (pos . 43) (origin cg-state . C-state-used-module-names!) (inline (G002235 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <C-state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . code-state-stack-vars?) (pos . 17) (origin cg-state . code-state-stack-vars?) (inline (G002181 (static-ref2) (binding-ref ? <code-state>) (primitive-relative-ref))))
    ((name . asm-function-state-code?) (pos . 25) (origin cg-state . asm-function-state-code?) (inline (G002213 (static-ref1) (binding-ref ? <asm-function-state>) (primitive-relative-ref))))
    ((name . asm-state-init-bytevector?) (pos . 29) (origin cg-state . asm-state-init-bytevector?) (inline (G002205 (static-ref1) (binding-ref ? <asm-state>) (primitive-relative-ref))))
    ((name . make-C-state) (pos . 47) (origin cg-state . make-C-state))
    ((name . asm-function-state-pc!) (pos . 16) (origin cg-state . asm-function-state-pc!) (inline (G002211 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <asm-function-state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . C-state-statements!) (pos . 48) (origin cg-state . C-state-statements!) (inline (G002239 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <C-state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . code-state-enclosed-code?) (pos . 28) (origin cg-state . code-state-enclosed-code?) (inline (G002173 (static-ref0) (binding-ref ? <code-state>) (primitive-relative-ref))))
    ((name . C-state-global-index!) (pos . 10) (origin cg-state . C-state-global-index!) (inline (G002227 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <C-state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <code-state>) (pos . 11) (origin cg-state . <code-state>) (class . constant))
    ((name . code-state-asm?) (pos . 15) (origin cg-state . code-state-asm?) (inline (G002189 (static-fpi-ref 4) (binding-ref ? <code-state>) (primitive-relative-ref))))
    ((name . code-state-stack-size!) (pos . 4) (origin cg-state . code-state-stack-size!) (inline (G002187 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <code-state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . asm-function-state-p) (pos . 42) (origin cg-state . asm-function-state-p))
    ((name . asm-function-state-handle?) (pos . 46) (origin cg-state . asm-function-state-handle?) (inline (G002221 (static-fpi-ref 3) (binding-ref ? <asm-function-state>) (primitive-relative-ref))))
    ((name . C-state-globals?) (pos . 24) (origin cg-state . C-state-globals?) (inline (G002241 (static-fpi-ref 4) (binding-ref ? <C-state>) (primitive-relative-ref))))
    ((name . asm-state-init-bytevector!) (pos . 51) (origin cg-state . asm-state-init-bytevector!) (inline (G002207 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <asm-state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . code-state-handle?) (pos . 14) (origin cg-state . code-state-handle?) (inline (G002197 (static-fpi-ref 6) (binding-ref ? <code-state>) (primitive-relative-ref))))
    ((name . make-code-state) (pos . 27) (origin cg-state . make-code-state))
    ((name . C-state-statements?) (pos . 41) (origin cg-state . C-state-statements?) (inline (G002237 (static-fpi-ref 3) (binding-ref ? <C-state>) (primitive-relative-ref))))
    ((name . asm-state-bytevectors?) (pos . 26) (origin cg-state . asm-state-bytevectors?) (inline (G002201 (static-ref0) (binding-ref ? <asm-state>) (primitive-relative-ref))))
    ((name . code-state-display?) (pos . 40) (origin cg-state . code-state-display?) (inline (G002177 (static-ref1) (binding-ref ? <code-state>) (primitive-relative-ref))))
    ((name . <asm-state>) (pos . 3) (origin cg-state . <asm-state>) (class . constant))
    ((name . C-state-code-vector-str?) (pos . 9) (origin cg-state . C-state-code-vector-str?) (inline (G002229 (static-ref1) (binding-ref ? <C-state>) (primitive-relative-ref))))
    ((name . asm-state-bytevectors!) (pos . 23) (origin cg-state . asm-state-bytevectors!) (inline (G002203 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <asm-state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . make-asm-function-state) (pos . 22) (origin cg-state . make-asm-function-state))
    ((name . code-state-stack-size?) (pos . 21) (origin cg-state . code-state-stack-size?) (inline (G002185 (static-fpi-ref 3) (binding-ref ? <code-state>) (primitive-relative-ref))))
    ((name . asm-function-state-handle!) (pos . 8) (origin cg-state . asm-function-state-handle!) (inline (G002223 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <asm-function-state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . C-state-p) (pos . 33) (origin cg-state . C-state-p))
    ((name . asm-function-state-binding-name?) (pos . 13) (origin cg-state . asm-function-state-binding-name?) (inline (G002217 (static-ref2) (binding-ref ? <asm-function-state>) (primitive-relative-ref))))
    ((name . C-state-decls!) (pos . 39) (origin cg-state . C-state-decls!) (inline (G002255 (stack-ref 1) (static-fpi-ref 7) (stack-ref 2) (binding-ref ? <C-state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . C-state-code-vector-str!) (pos . 50) (origin cg-state . C-state-code-vector-str!) (inline (G002231 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <C-state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <asm-function-state>) (pos . 38) (origin cg-state . <asm-function-state>) (class . constant))
    ((name . asm-state-p) (pos . 37) (origin cg-state . asm-state-p))
    ((name . code-state-asm!) (pos . 12) (origin cg-state . code-state-asm!) (inline (G002191 (stack-ref 1) (static-fpi-ref 4) (stack-ref 2) (binding-ref ? <code-state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . C-state-initializations!) (pos . 32) (origin cg-state . C-state-initializations!) (inline (G002247 (stack-ref 1) (static-fpi-ref 5) (stack-ref 2) (binding-ref ? <C-state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . C-state-used-module-names?) (pos . 7) (origin cg-state . C-state-used-module-names?) (inline (G002233 (static-ref2) (binding-ref ? <C-state>) (primitive-relative-ref))))
    ((name . code-state-stack-vars!) (pos . 35) (origin cg-state . code-state-stack-vars!) (inline (G002183 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <code-state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . code-state-p) (pos . 2) (origin cg-state . code-state-p))
    ((name . code-state-display!) (pos . 36) (origin cg-state . code-state-display!) (inline (G002179 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <code-state>) (set-primitive-relative-ref) (nobble 2))))
    ((name . C-state-globals!) (pos . 45) (origin cg-state . C-state-globals!) (inline (G002243 (stack-ref 1) (static-fpi-ref 4) (stack-ref 2) (binding-ref ? <C-state>) (set-primitive-relative-ref) (nobble 2))))
   )
   local-literals (
    (top-level . 237)
    (code-state-stack-size! . 236)
    (code-state-enclosed-code! . 235)
    (C-state-code-vector-defs! . 234)
    (C-state-used-module-names? . 233)
    (asm-function-state-handle! . 232)
    (C-state-code-vector-str? . 231)
    (C-state-global-index! . 230)
    (code-state-asm! . 229)
    (asm-function-state-binding-name? . 228)
    (code-state-handle? . 227)
    (code-state-asm? . 226)
    (asm-function-state-pc! . 225)
    (code-state-stack-vars? . 224)
    (asm-function-state-binding-name! . 223)
    (C-state-global-index? . 222)
    (code-state-stack-size? . 221)
    (make-asm-function-state . 220)
    (asm-state-bytevectors! . 219)
    (C-state-globals? . 218)
    (asm-function-state-code? . 217)
    (asm-state-bytevectors? . 216)
    (make-code-state . 215)
    (code-state-enclosed-code? . 214)
    (asm-state-init-bytevector? . 213)
    (asm-function-state-code! . 212)
    (code-state-binding-name! . 211)
    (C-state-initializations! . 210)
    (code-state-binding-name? . 209)
    (code-state-stack-vars! . 208)
    (code-state-display! . 207)
    (C-state-decls! . 206)
    (code-state-display? . 205)
    (C-state-statements? . 204)
    (C-state-used-module-names! . 203)
    (C-state-initializations? . 202)
    (C-state-globals! . 201)
    (asm-function-state-handle? . 200)
    (make-C-state . 199)
    (C-state-statements! . 198)
    (C-state-code-vector-defs? . 197)
    (C-state-code-vector-str! . 196)
    (asm-state-init-bytevector! . 195)
    (asm-function-state-pc? . 194)
    (code-state-handle! . 193)
    (C-state-decls? . 192)
    (("") . 183)
    (|(method C-state-p)| . 144)
    (|(method asm-function-state-p)| . 143)
    (|(method asm-state-p)| . 142)
    (|(method code-state-p)| . 141)
    (C-state-p . 140)
    (asm-function-state-p . 139)
    (asm-state-p . 138)
    (code-state-p . 137)
    ((global-index: code-vector-str: used-module-names: statements: globals: initializations: code-vector-defs: decls:) . 136)
    (C-state . 135)
    (global-index: . 134)
    (global-index . 133)
    (code-vector-str: . 132)
    (code-vector-str . 131)
    (used-module-names: . 130)
    (used-module-names . 129)
    (statements: . 128)
    (statements . 127)
    (globals: . 126)
    (globals . 125)
    (initializations: . 124)
    (initializations . 123)
    (code-vector-defs: . 122)
    (code-vector-defs . 121)
    (decls: . 120)
    (decls . 119)
    ((pc: code: binding-name: handle:) . 118)
    (asm-function-state . 117)
    (pc: . 116)
    (pc . 115)
    (code: . 114)
    (code . 113)
    ((bytevectors: init-bytevector:) . 112)
    (asm-state . 111)
    (bytevectors: . 110)
    (bytevectors . 109)
    (init-bytevector: . 108)
    (init-bytevector . 107)
    ((enclosed-code: display: stack-vars: stack-size: asm: binding-name: handle:) . 106)
    (direct-keywords: . 105)
    (direct-slots: . 104)
    (direct-superclasses: . 103)
    (code-state . 102)
    (enclosed-code: . 101)
    (enclosed-code . 100)
    (display: . 99)
    (display . 98)
    (stack-vars: . 97)
    (stack-vars . 96)
    (stack-size: . 95)
    (stack-size . 94)
    (asm: . 93)
    (asm . 92)
    (binding-name: . 91)
    (binding-name . 90)
    (handle: . 89)
    (keyword: . 88)
    (anonymous . 87)
    (default: . 86)
    (handle . 85)
    (name: . 84)
   )
   literals (
   )
))