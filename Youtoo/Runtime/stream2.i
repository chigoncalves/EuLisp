;;; EuLisp system 'youtoo'
;;;   Interface file for module stream2

(definterface stream2
  (import (telos lock condition convert dynamic stream1 string)
   syntax (_macros)
   full-import (mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos thread event lock let-cc dynamic condition convert stream1 fpi number integer collect callback compare copy string)
   export (
    ((name . control-block-buffer-size) (pos . 8) (origin stream2 . control-block-buffer-size) (inline (G005217 (static-ref2) (binding-ref ? <stream-control-block>) (primitive-relative-ref))) (setter (G005247 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <stream-control-block>) (set-primitive-relative-ref) (nobble 2))))
    ((name . control-block-mode) (pos . 28) (origin stream2 . control-block-mode) (inline (G005223 (static-ref1) (binding-ref ? <file-control-block>) (primitive-relative-ref))) (setter (G005253 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <file-control-block>) (set-primitive-relative-ref) (nobble 2))))
    ((name . control-block-descriptor) (pos . 41) (origin stream2 . control-block-descriptor) (inline (G005221 (static-ref0) (binding-ref ? <file-control-block>) (primitive-relative-ref))) (setter (G005251 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <file-control-block>) (set-primitive-relative-ref) (nobble 2))))
    ((name . stdout) (pos . 34) (origin stream2 . stdout))
    ((name . generic-write) (pos . 27) (origin stream2 . generic-write))
    ((name . stream-read-action) (pos . 7) (origin stream2 . stream-read-action) (inline (G005233 (static-fpi-ref 3) (binding-ref ? <stream>) (primitive-relative-ref))) (setter (G005259 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <stream>) (set-primitive-relative-ref) (nobble 2))))
    ((name . buffered-stream?) (pos . 15) (origin stream2 . buffered-stream?))
    ((name . control-block-file-name) (pos . 33) (origin stream2 . control-block-file-name) (inline (G005225 (static-ref2) (binding-ref ? <file-control-block>) (primitive-relative-ref))) (setter (G005255 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <file-control-block>) (set-primitive-relative-ref) (nobble 2))))
    ((name . stream?) (pos . 40) (origin stream2 . stream?))
    ((name . <stream-control-block>) (pos . 22) (origin stream2 . <stream-control-block>) (class . constant))
    ((name . <end-of-stream>) (pos . 6) (origin stream2 . <end-of-stream>) (class . constant))
    ((name . <stream>) (pos . 20) (origin stream2 . <stream>) (class . constant))
    ((name . <buffered-stream>) (pos . 19) (origin stream2 . <buffered-stream>) (class . constant))
    ((name . string-stream?) (pos . 14) (origin stream2 . string-stream?))
    ((name . file-stream?) (pos . 49) (origin stream2 . file-stream?))
    ((name . open-file-streams) (pos . 13) (origin stream2 . open-file-streams))
    ((name . eos-default-value) (pos . 5) (origin stream2 . eos-default-value))
    ((name . disconnect) (pos . 39) (origin stream2 . disconnect))
    ((name . string-stream-string-list) (pos . 48) (origin stream2 . string-stream-string-list) (inline (G005239 (static-ref0) (binding-ref ? <string-stream>) (primitive-relative-ref))) (setter (G005265 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <string-stream>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <file-stream>) (pos . 4) (origin stream2 . <file-stream>) (class . constant))
    ((name . control-block-buffer) (pos . 32) (origin stream2 . control-block-buffer) (inline (G005219 (static-fpi-ref 3) (binding-ref ? <stream-control-block>) (primitive-relative-ref))) (setter (G005249 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <stream-control-block>) (set-primitive-relative-ref) (nobble 2))))
    ((name . to-stream) (pos . 26) (origin stream2 . to-stream))
    ((name . <file-control-block>) (pos . 3) (origin stream2 . <file-control-block>) (class . constant))
    ((name . end-of-stream) (pos . 18) (origin stream2 . end-of-stream))
    ((name . stream-lock) (pos . 31) (origin stream2 . stream-lock) (inline (G005229 (static-ref1) (binding-ref ? <stream>) (primitive-relative-ref))))
    ((name . stream-write-action) (pos . 12) (origin stream2 . stream-write-action) (inline (G005231 (static-ref2) (binding-ref ? <stream>) (primitive-relative-ref))) (setter (G005257 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <stream>) (set-primitive-relative-ref) (nobble 2))))
    ((name . control-block-buffer-cnt) (pos . 47) (origin stream2 . control-block-buffer-cnt) (inline (G005213 (static-ref0) (binding-ref ? <stream-control-block>) (primitive-relative-ref))) (setter (G005243 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <stream-control-block>) (set-primitive-relative-ref) (nobble 2))))
    ((name . generic-print) (pos . 30) (origin stream2 . generic-print))
    ((name . <string-stream>) (pos . 45) (origin stream2 . <string-stream>) (class . constant))
    ((name . <stream-condition>) (pos . 38) (origin stream2 . <stream-condition>) (class . constant))
    ((name . *open-file-streams*) (pos . 36) (origin stream2 . *open-file-streams*))
    ((name . stream-sink) (pos . 37) (origin stream2 . stream-sink) (inline (G005237 (static-fpi-ref 5) (binding-ref ? <stream>) (primitive-relative-ref))) (setter (G005263 (stack-ref 1) (static-fpi-ref 5) (stack-ref 2) (binding-ref ? <stream>) (set-primitive-relative-ref) (nobble 2))))
    ((name . stream-source) (pos . 21) (origin stream2 . stream-source) (inline (G005235 (static-fpi-ref 4) (binding-ref ? <stream>) (primitive-relative-ref))) (setter (G005261 (stack-ref 1) (static-fpi-ref 4) (stack-ref 2) (binding-ref ? <stream>) (set-primitive-relative-ref) (nobble 2))))
    ((name . reconnect) (pos . 17) (origin stream2 . reconnect))
    ((name . from-stream) (pos . 46) (origin stream2 . from-stream))
    ((name . stream-mode) (pos . 16) (origin stream2 . stream-mode) (inline (G005227 (static-ref0) (binding-ref ? <stream>) (primitive-relative-ref))))
    ((name . *open-file-streams*-lock) (pos . 11) (origin stream2 . *open-file-streams*-lock) (class . constant))
    ((name . generic-connect) (pos . 44) (origin stream2 . generic-connect))
    ((name . file-control-block?) (pos . 24) (origin stream2 . file-control-block?))
    ((name . control-block-buffer-pos) (pos . 10) (origin stream2 . control-block-buffer-pos) (inline (G005215 (static-ref1) (binding-ref ? <stream-control-block>) (primitive-relative-ref))) (setter (G005245 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <stream-control-block>) (set-primitive-relative-ref) (nobble 2))))
    ((name . flush-buffer) (pos . 23) (origin stream2 . flush-buffer))
    ((name . stream-control-block?) (pos . 29) (origin stream2 . stream-control-block?))
    ((name . fill-buffer) (pos . 2) (origin stream2 . fill-buffer))
    ((name . generic-read) (pos . 43) (origin stream2 . generic-read))
    ((name . stderr) (pos . 9) (origin stream2 . stderr))
    ((name . stdin) (pos . 50) (origin stream2 . stdin))
   )
   local-literals (
    (top-level . 224)
    (eos-default-value . 223)
    (stream-read-action . 222)
    (control-block-buffer-size . 221)
    (control-block-buffer-pos . 220)
    (stream-write-action . 219)
    (open-file-streams . 218)
    (stream-mode . 217)
    (stream-source . 216)
    (to-stream . 215)
    (control-block-mode . 214)
    (stream-lock . 213)
    (control-block-buffer . 212)
    (control-block-file-name . 211)
    (default-read-action . 210)
    (stream-sink . 209)
    (control-block-descriptor . 208)
    (default-write-action . 207)
    (from-stream . 206)
    (control-block-buffer-cnt . 205)
    (string-stream-string-list . 204)
    ((*end-of-stream*) . 182)
    (*end-of-stream* . 181)
    (|(setter value)| . 179)
    ("stderr" . 178)
    ("stdout" . 177)
    ("stdin" . 176)
    (|(method file-stream?)| . 175)
    (|(method string-stream?)| . 174)
    (|(setter string-stream-string-list)| . 173)
    (|(method buffered-stream?)| . 172)
    (|(method stream?)| . 171)
    (|(setter stream-sink)| . 170)
    (|(setter stream-source)| . 169)
    (|(setter stream-read-action)| . 168)
    (|(setter stream-write-action)| . 167)
    (|(method initialize)| . 166)
    (|(method file-control-block?)| . 165)
    (|(setter control-block-file-name)| . 164)
    (|(setter control-block-mode)| . 163)
    (|(setter control-block-descriptor)| . 162)
    (|(method stream-control-block?)| . 161)
    (|(setter control-block-buffer)| . 160)
    (|(setter control-block-buffer-size)| . 159)
    (|(setter control-block-buffer-pos)| . 158)
    (|(setter control-block-buffer-cnt)| . 157)
    (disconnect . 156)
    (reconnect . 155)
    (generic-connect . 154)
    (flush-buffer . 153)
    (fill-buffer . 152)
    (generic-read . 151)
    (generic-write . 150)
    (generic-print . 149)
    (file-stream? . 148)
    (string-stream? . 147)
    (buffered-stream? . 146)
    (stream? . 145)
    (file-control-block? . 144)
    (stream-control-block? . 143)
    (end-of-stream . 142)
    ((value:) . 141)
    (stream-condition . 140)
    (value . 139)
    ((file-name:) . 138)
    (file-stream . 137)
    ((string:) . 136)
    (string-stream . 135)
    (string-list . 134)
    (buffered-stream . 133)
    ((mode: write-action: read-action: source: sink:) . 132)
    (stream . 131)
    (lock . 130)
    (write-action: . 129)
    (write-action . 128)
    (read-action: . 127)
    (read-action . 126)
    (source: . 125)
    (source . 124)
    (sink: . 123)
    (sink . 122)
    ((descriptor: mode: file-name:) . 121)
    (file-control-block . 120)
    (descriptor . 119)
    (mode . 118)
    (file-name . 117)
    ((size: buffer:) . 116)
    (direct-keywords: . 115)
    (direct-slots: . 114)
    (direct-superclasses: . 113)
    (stream-control-block . 112)
    (buffer-cnt . 111)
    (buffer-pos . 110)
    (default: . 109)
    (buffer-size . 108)
    (keyword: . 107)
    (buffer . 106)
    (name: . 105)
    ("" . 100)
    (anonymous . 67)
    (*clean-ups* . 66)
    (a . 65)
    (w . 64)
    (r . 63)
    (descriptor: . 62)
    (mode: . 61)
    (value: . 60)
    ("" . 59)
    (file-name: . 58)
    (size: . 55)
    (buffer: . 54)
    ("" . 53)
    (string: . 52)
   )
   literals (
   )
))
