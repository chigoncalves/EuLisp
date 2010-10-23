;;; EuLisp system 'youtoo'
;;;   Interface file for module i-ffi

(definterface i-ffi
  (import (i-all)
   syntax (_macros)
   full-import (i-error i-notify i-param i-level1 boot1 boot symbol stream3 random handler read table table1 vector convert1 format list socket stream2 lock stream1 stream float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl telos level1 aux-table i-all)
   export (
    ((name . arg-converter-as-C-type) (pos . 8) (origin i-ffi . arg-converter-as-C-type))
    ((name . arg-converter-index) (pos . 7) (origin i-ffi . arg-converter-index))
    ((name . res-converter-index) (pos . 3) (origin i-ffi . res-converter-index))
    ((name . res-converter-as-C-type) (pos . 6) (origin i-ffi . res-converter-as-C-type))
   )
   local-literals (
    (top-level . 39)
    (res-converter-index . 38)
    (res-converter-as-C-type . 37)
    (arg-converter-index . 36)
    (arg-converter-as-C-type . 35)
    ("bad defextern argument converter ~a" . 32)
    ("bad defextern result converter ~a" . 29)
    (#("int" "char" "double" "char *" "char *" "int" "void *" "int *" "double *" "char ** " void * "") . 27)
    (* . 26)
    (#(<fpi> <character> <double> <string> <symbol> boolean ptr <int*> <double*> <string*> void) . 25)
    (void . 24)
    (#("int" "char" "double" "const char *" "void **" "int" "const char *" "int" "void *" "int *" "double *" "char **") . 23)
    (#(<fpi> <character> <double> <string> <vector> <file-stream> <symbol> boolean ptr <int*> <double*> <string*>) . 22)
    (<string*> . 21)
    (<double*> . 20)
    (<int*> . 19)
    (ptr . 18)
    (boolean . 17)
    (<symbol> . 16)
    (<file-stream> . 15)
    (<vector> . 14)
    (<string> . 13)
    (<double> . 12)
    (<character> . 11)
    (<fpi> . 10)
   )
   literals (
   )
))
