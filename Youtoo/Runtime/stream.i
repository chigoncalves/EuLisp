;;; EuLisp system 'youtoo'
;;;   Interface file for module stream

(definterface stream
  (import (telos stream1 stream2 socket dynamic condition lock convert collect list string fpi)
   syntax (_macros)
   full-import (mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos stream1 string copy compare callback collect integer number fpi convert condition dynamic let-cc lock event thread stream2 socket list)
   export (
    ((name . <stream-control-block>) (pos . 22) (origin stream2 . <stream-control-block>) (class . constant))
    ((name . file-stream?) (pos . 49) (origin stream2 . file-stream?))
    ((name . sprin-one-char) (pos . 25) (origin stream . sprin-one-char))
    ((name . string-stream-string-list) (pos . 48) (origin stream2 . string-stream-string-list) (inline (G005239 (static-ref0) (binding-ref ? <string-stream>) (primitive-relative-ref))) (setter (G005265 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <string-stream>) (set-primitive-relative-ref) (nobble 2))))
    ((name . prin) (pos . 20) (origin stream . prin))
    ((name . control-block-buffer-cnt) (pos . 47) (origin stream2 . control-block-buffer-cnt) (inline (G005213 (static-ref0) (binding-ref ? <stream-control-block>) (primitive-relative-ref))) (setter (G005243 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <stream-control-block>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <string-stream>) (pos . 45) (origin stream2 . <string-stream>) (class . constant))
    ((name . prin-address) (pos . 12) (origin stream . prin-address))
    ((name . sprin-char) (pos . 18) (origin stream . sprin-char))
    ((name . make-space) (pos . 24) (origin stream . make-space))
    ((name . stream-source) (pos . 21) (origin stream2 . stream-source) (inline (G005235 (static-fpi-ref 4) (binding-ref ? <stream>) (primitive-relative-ref))) (setter (G005261 (stack-ref 1) (static-fpi-ref 4) (stack-ref 2) (binding-ref ? <stream>) (set-primitive-relative-ref) (nobble 2))))
    ((name . eul_socket_strerror) (pos . 24) (origin stream1 . eul_socket_strerror) (class . ff) (arity . 1) (ff (0) 3 (eul_socket_strerror . ff_stub_eul_socket_strerror4752)))
    ((name . O_TRUNC) (pos . 13) (origin stream1 . O_TRUNC) (class . constant))
    ((name . eul_sprintf_string) (pos . 20) (origin stream1 . eul_sprintf_string) (class . ff) (arity . 6) (ff (3 0 0 0 3 3) 0 (eul_sprintf_string . ff_stub_eul_sprintf_string4748)))
    ((name . from-stream) (pos . 46) (origin stream2 . from-stream))
    ((name . generic-connect) (pos . 44) (origin stream2 . generic-connect))
    ((name . O_EXCL) (pos . 12) (origin stream1 . O_EXCL) (class . constant))
    ((name . O_WRONLY) (pos . 11) (origin stream1 . O_WRONLY) (class . constant))
    ((name . generic-read) (pos . 43) (origin stream2 . generic-read))
    ((name . control-block-descriptor) (pos . 41) (origin stream2 . control-block-descriptor) (inline (G005221 (static-ref0) (binding-ref ? <file-control-block>) (primitive-relative-ref))) (setter (G005251 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <file-control-block>) (set-primitive-relative-ref) (nobble 2))))
    ((name . file-lookup) (pos . 17) (origin stream . file-lookup))
    ((name . socket-host) (pos . 11) (origin socket . socket-host) (inline (G005772 (static-ref2) (binding-ref ? <socket>) (primitive-relative-ref))) (setter (G005784 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <socket>) (set-primitive-relative-ref) (nobble 2))))
    ((name . eul_make_socket) (pos . 21) (origin stream1 . eul_make_socket) (class . ff) (arity . 3) (ff (3 3 0) 0 (eul_make_socket . ff_stub_eul_make_socket4749)))
    ((name . sprint) (pos . 7) (origin stream . sprint))
    ((name . eul_socket_accept) (pos . 22) (origin stream1 . eul_socket_accept) (class . ff) (arity . 1) (ff (0) 0 (eul_socket_accept . ff_stub_eul_socket_accept4750)))
    ((name . output-list-contents) (pos . 16) (origin stream . output-list-contents))
    ((name . stream?) (pos . 40) (origin stream2 . stream?))
    ((name . sprin) (pos . 23) (origin stream . sprin))
    ((name . <stream>) (pos . 20) (origin stream2 . <stream>) (class . constant))
    ((name . <buffered-stream>) (pos . 19) (origin stream2 . <buffered-stream>) (class . constant))
    ((name . disconnect) (pos . 39) (origin stream2 . disconnect))
    ((name . end-of-stream) (pos . 18) (origin stream2 . end-of-stream))
    ((name . <socket>) (pos . 8) (origin socket . <socket>) (class . constant))
    ((name . snewline) (pos . 6) (origin stream . snewline))
    ((name . <stream-condition>) (pos . 38) (origin stream2 . <stream-condition>) (class . constant))
    ((name . *open-file-streams*) (pos . 36) (origin stream2 . *open-file-streams*))
    ((name . stream-sink) (pos . 37) (origin stream2 . stream-sink) (inline (G005237 (static-fpi-ref 5) (binding-ref ? <stream>) (primitive-relative-ref))) (setter (G005263 (stack-ref 1) (static-fpi-ref 5) (stack-ref 2) (binding-ref ? <stream>) (set-primitive-relative-ref) (nobble 2))))
    ((name . reconnect) (pos . 17) (origin stream2 . reconnect))
    ((name . read-into-buffer) (pos . 27) (origin stream1 . read-into-buffer) (class . ff) (arity . 3) (ff (0 3 0) 0 (read_into_buffer . ff_stub_read_into_buffer4755)))
    ((name . stream-mode) (pos . 16) (origin stream2 . stream-mode) (inline (G005227 (static-ref0) (binding-ref ? <stream>) (primitive-relative-ref))))
    ((name . sprintf) (pos . 5) (origin stream . sprintf))
    ((name . O_NONBLOCK) (pos . 10) (origin stream1 . O_NONBLOCK) (class . constant))
    ((name . ntok) (pos . 26) (origin stream1 . ntok) (class . ff) (arity . 2) (ff (8 8) 6 (ntok . ff_stub_ntok4754)))
    ((name . strerror) (pos . 6) (origin stream1 . strerror))
    ((name . print) (pos . 11) (origin stream . print))
    ((name . eul_write) (pos . 18) (origin stream1 . eul_write) (class . ff) (arity . 3) (ff (0 3 0) 0 (write . ff_stub_write4746)))
    ((name . stdout) (pos . 34) (origin stream2 . stdout))
    ((name . prin-string) (pos . 4) (origin stream . prin-string))
    ((name . connection-port) (pos . 7) (origin socket . connection-port) (inline (G005776 (static-ref0) (binding-ref ? <connection>) (primitive-relative-ref))) (setter (G005788 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <connection>) (set-primitive-relative-ref) (nobble 2))))
    ((name . mode-table) (pos . 5) (origin stream1 . mode-table) (class . constant))
    ((name . eul_sprintf) (pos . 19) (origin stream1 . eul_sprintf) (class . ff) (arity . 4) (ff (3 0 3 8) 0 (eul_sprintf . ff_stub_eul_sprintf4747)))
    ((name . buffered-stream?) (pos . 15) (origin stream2 . buffered-stream?))
    ((name . control-block-file-name) (pos . 33) (origin stream2 . control-block-file-name) (inline (G005225 (static-ref2) (binding-ref ? <file-control-block>) (primitive-relative-ref))) (setter (G005255 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <file-control-block>) (set-primitive-relative-ref) (nobble 2))))
    ((name . write) (pos . 15) (origin stream . write))
    ((name . string-stream?) (pos . 14) (origin stream2 . string-stream?))
    ((name . open-file-streams) (pos . 13) (origin stream2 . open-file-streams))
    ((name . control-block-buffer) (pos . 32) (origin stream2 . control-block-buffer) (inline (G005219 (static-fpi-ref 3) (binding-ref ? <stream-control-block>) (primitive-relative-ref))) (setter (G005249 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <stream-control-block>) (set-primitive-relative-ref) (nobble 2))))
    ((name . socket?) (pos . 10) (origin socket . socket?))
    ((name . stream-lock) (pos . 31) (origin stream2 . stream-lock) (inline (G005229 (static-ref1) (binding-ref ? <stream>) (primitive-relative-ref))))
    ((name . stream-write-action) (pos . 12) (origin stream2 . stream-write-action) (inline (G005231 (static-ref2) (binding-ref ? <stream>) (primitive-relative-ref))) (setter (G005257 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <stream>) (set-primitive-relative-ref) (nobble 2))))
    ((name . generic-print) (pos . 30) (origin stream2 . generic-print))
    ((name . O_RDONLY) (pos . 4) (origin stream1 . O_RDONLY) (class . constant))
    ((name . socket-queue-size) (pos . 6) (origin socket . socket-queue-size) (inline (G005768 (static-ref0) (binding-ref ? <socket>) (primitive-relative-ref))) (setter (G005780 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <socket>) (set-primitive-relative-ref) (nobble 2))))
    ((name . connection-host) (pos . 5) (origin socket . connection-host) (inline (G005778 (static-ref1) (binding-ref ? <connection>) (primitive-relative-ref))) (setter (G005790 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <connection>) (set-primitive-relative-ref) (nobble 2))))
    ((name . *int-size-in-decimal-digits*) (pos) (origin stream . *int-size-in-decimal-digits*) (class . constant) (value 21))
    ((name . hostname) (pos . 3) (origin stream1 . hostname))
    ((name . connection?) (pos . 4) (origin socket . connection?))
    ((name . *open-file-streams*-lock) (pos . 11) (origin stream2 . *open-file-streams*-lock) (class . constant))
    ((name . newline) (pos . 10) (origin stream . newline))
    ((name . control-block-buffer-pos) (pos . 10) (origin stream2 . control-block-buffer-pos) (inline (G005215 (static-ref1) (binding-ref ? <stream-control-block>) (primitive-relative-ref))) (setter (G005245 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <stream-control-block>) (set-primitive-relative-ref) (nobble 2))))
    ((name . stream-control-block?) (pos . 29) (origin stream2 . stream-control-block?))
    ((name . O_CREAT) (pos . 8) (origin stream1 . O_CREAT) (class . constant))
    ((name . fprintf) (pos . 22) (origin stream . fprintf))
    ((name . eul_close) (pos . 16) (origin stream1 . eul_close) (class . ff) (arity . 1) (ff (0) 0 (close . ff_stub_close4744)))
    ((name . stderr) (pos . 9) (origin stream2 . stderr))
    ((name . control-block-buffer-size) (pos . 8) (origin stream2 . control-block-buffer-size) (inline (G005217 (static-ref2) (binding-ref ? <stream-control-block>) (primitive-relative-ref))) (setter (G005247 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <stream-control-block>) (set-primitive-relative-ref) (nobble 2))))
    ((name . control-block-mode) (pos . 28) (origin stream2 . control-block-mode) (inline (G005223 (static-ref1) (binding-ref ? <file-control-block>) (primitive-relative-ref))) (setter (G005253 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <file-control-block>) (set-primitive-relative-ref) (nobble 2))))
    ((name . generic-write) (pos . 27) (origin stream2 . generic-write))
    ((name . swrite) (pos . 3) (origin stream . swrite))
    ((name . stream-read-action) (pos . 7) (origin stream2 . stream-read-action) (inline (G005233 (static-fpi-ref 3) (binding-ref ? <stream>) (primitive-relative-ref))) (setter (G005259 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <stream>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <end-of-stream>) (pos . 6) (origin stream2 . <end-of-stream>) (class . constant))
    ((name . eul_make_connection) (pos . 23) (origin stream1 . eul_make_connection) (class . ff) (arity . 3) (ff (3 3 3) 0 (eul_make_connection . ff_stub_eul_make_connection4751)))
    ((name . eos-default-value) (pos . 5) (origin stream2 . eos-default-value))
    ((name . O_RDWR) (pos . 2) (origin stream1 . O_RDWR) (class . constant))
    ((name . sflush) (pos . 13) (origin stream . sflush))
    ((name . <file-stream>) (pos . 4) (origin stream2 . <file-stream>) (class . constant))
    ((name . to-stream) (pos . 26) (origin stream2 . to-stream))
    ((name . <file-control-block>) (pos . 3) (origin stream2 . <file-control-block>) (class . constant))
    ((name . socket-descriptor) (pos . 3) (origin socket . socket-descriptor) (inline (G005770 (static-ref1) (binding-ref ? <socket>) (primitive-relative-ref))) (setter (G005782 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <socket>) (set-primitive-relative-ref) (nobble 2))))
    ((name . prin-char) (pos . 9) (origin stream . prin-char))
    ((name . eul_open) (pos . 15) (origin stream1 . eul_open) (class . ff) (arity . 3) (ff (3 0 0) 0 (open . ff_stub_open4743)))
    ((name . *double-size-in-decimal-digits*) (pos) (origin stream . *double-size-in-decimal-digits*) (class . constant) (value 25))
    ((name . connect) (pos . 21) (origin stream . connect))
    ((name . eul_read) (pos . 17) (origin stream1 . eul_read) (class . ff) (arity . 3) (ff (0 3 0) 0 (read . ff_stub_read4745)))
    ((name . file-control-block?) (pos . 24) (origin stream2 . file-control-block?))
    ((name . socket-port) (pos . 9) (origin socket . socket-port) (inline (G005774 (static-fpi-ref 3) (binding-ref ? <socket>) (primitive-relative-ref))) (setter (G005786 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <socket>) (set-primitive-relative-ref) (nobble 2))))
    ((name . O_APPEND) (pos . 7) (origin stream1 . O_APPEND) (class . constant))
    ((name . flush-buffer) (pos . 23) (origin stream2 . flush-buffer))
    ((name . fill-buffer) (pos . 2) (origin stream2 . fill-buffer))
    ((name . <connection>) (pos . 2) (origin socket . <connection>) (class . constant))
    ((name . stdin) (pos . 50) (origin stream2 . stdin))
    ((name . flush) (pos . 2) (origin stream . flush))
   )
   local-literals (
    (top-level . 119)
    (flush . 118)
    (swrite . 117)
    (prin-string . 116)
    (sprintf . 115)
    (snewline . 114)
    (sprint . 113)
    (swrite-all . 112)
    (prin-char . 111)
    (newline . 110)
    (print . 109)
    (prin-address . 108)
    (sflush . 107)
    (sprin-char* . 106)
    (write . 105)
    (output-list-contents . 104)
    (file-lookup . 103)
    (sprin-char . 102)
    (sprin-all . 101)
    (prin . 100)
    (connect . 99)
    (fprintf . 98)
    (sprin . 97)
    (make-space . 96)
    (sprin-one-char . 95)
    ("#<C: " . 86)
    ("0x%08X" . 76)
    ("#<C: " . 70)
    ("%s" . 64)
    ("%s" . 63)
    (|(method generic-read)| . 59)
    (|(method end-of-stream)| . 58)
    (|(method flush-buffer)| . 57)
    (|(method fill-buffer)| . 56)
    (|(method disconnect)| . 55)
    (|(method reconnect)| . 54)
    (|(method generic-connect)| . 53)
    (a . 51)
    (w . 50)
    (r . 49)
    (anonymous . 43)
    (*clean-ups* . 42)
    (size: . 34)
    (value: . 32)
    ("end of stream" . 31)
   )
   literals (
   )
))
