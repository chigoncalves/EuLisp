;;; EuLisp system 'youtoo'
;;;   Interface file for module list

(definterface list
  (import (telos convert compare collect copy number fpi)
   syntax (_telos0)
   full-import (mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos condition event thread dynamic let-cc convert callback compare collect copy number integer fpi)
   export (
    ((name . proper-list-p) (pos . 25) (origin list . proper-list-p))
    ((name . car) (pos . 31) (origin boot1 . car) (inline (G0082 (car))) (setter (G0096 (set-car))))
    ((name . cadddr) (pos . 11) (origin list . cadddr) (inline (G003527 (cadddr))))
    ((name . caar) (pos . 27) (origin list . caar) (inline (G003496 (caar))))
    ((name . cdadr) (pos . 21) (origin list . cdadr) (inline (G003506 (cadr) (cdr))))
    ((name . as-proper-list) (pos . 9) (origin list . as-proper-list))
    ((name . accumulate-list) (pos . 17) (origin list . accumulate-list))
    ((name . list) (pos . 26) (origin boot1 . list))
    ((name . caaar) (pos . 24) (origin list . caaar) (inline (G003521 (caar) (car))))
    ((name . cadar) (pos . 19) (origin list . cadar) (inline (G003518 (cdar) (car))))
    ((name . cdaar) (pos . 23) (origin list . cdaar) (inline (G003515 (caar) (cdr))))
    ((name . member1-list) (pos . 28) (origin boot . member1-list) (inline (G00134 (static-ref-nil) (memq))))
    ((name . init-list-ref) (pos . 27) (origin boot . init-list-ref))
    ((name . cadr) (pos . 20) (origin list . cadr) (inline (G003498 (cadr))))
    ((name . anyp1-list) (pos . 26) (origin boot . anyp1-list))
    ((name . cdddr) (pos . 29) (origin list . cdddr) (inline (G003524 (cddr) (cdr))))
    ((name . reverse-list!) (pos . 6) (origin list . reverse-list!))
    ((name . do1-list-last-special) (pos . 8) (origin list . do1-list-last-special))
    ((name . cddar) (pos . 5) (origin list . cddar) (inline (G003509 (cdar) (cdr))))
    ((name . find1-list) (pos . 4) (origin list . find1-list))
    ((name . list-size) (pos . 8) (origin boot . list-size))
    ((name . reverse-list) (pos . 23) (origin boot . reverse-list))
    ((name . map1-list-last-special) (pos . 18) (origin list . map1-list-last-special))
    ((name . <cons>) (pos . 72) (origin mop-class . <cons>) (class . constant))
    ((name . cdr) (pos . 37) (origin boot1 . cdr) (inline (G0084 (cdr))) (setter (G0098 (set-cdr))))
    ((name . listp) (pos . 16) (origin boot1 . listp) (inline (G0055 (listp))))
    ((name . consp) (pos . 15) (origin boot1 . consp) (inline (G0047 (consp))))
    ((name . list-ref) (pos . 20) (origin boot . list-ref))
    ((name . cdar) (pos . 3) (origin list . cdar) (inline (G003500 (cdar))))
    ((name . select-list) (pos . 26) (origin list . select-list))
    ((name . list-drop) (pos . 2) (origin list . list-drop))
    ((name . member-list) (pos . 19) (origin boot . member-list))
    ((name . accumulate1-list) (pos . 15) (origin list . accumulate1-list))
    ((name . atom) (pos . 13) (origin boot1 . atom) (inline (G0057 (consp) (null))))
    ((name . append!) (pos . 28) (origin list . append!))
    ((name . null) (pos . 7) (origin boot1 . null) (inline (G0039 (null))))
    ((name . map2-list) (pos . 10) (origin list . map2-list))
    ((name . <null>) (pos . 26) (origin mop-class . <null>) (class . constant))
    ((name . assoc-list-ref) (pos . 16) (origin boot . assoc-list-ref))
    ((name . <list>) (pos . 64) (origin mop-class . <list>) (class . constant))
    ((name . cddr) (pos . 12) (origin list . cddr) (inline (G003502 (cddr))))
    ((name . do1-list) (pos . 4) (origin boot . do1-list))
    ((name . caddr) (pos . 22) (origin list . caddr) (inline (G003504 (caddr))))
    ((name . caadr) (pos . 14) (origin list . caadr) (inline (G003512 (cadr) (car))))
    ((name . map1-list) (pos . 15) (origin boot . map1-list))
    ((name . do2-list) (pos . 13) (origin list . do2-list))
    ((name . cons) (pos . 2) (origin boot1 . cons) (inline (G0086 (cons))))
   )
   local-literals (
    (top-level . 161)
    (list-drop . 160)
    (cdar . 159)
    (find1-list . 158)
    (cddar . 157)
    (reverse-list! . 156)
    (allp2-list . 155)
    (do1-list-last-special . 154)
    (as-proper-list . 153)
    (map2-list . 152)
    (cadddr . 151)
    (cddr . 150)
    (do2-list . 149)
    (caadr . 148)
    (accumulate1-list . 147)
    (allp1-list . 146)
    (accumulate-list . 145)
    (map1-list-last-special . 144)
    (cadar . 143)
    (cadr . 142)
    (cdadr . 141)
    (caddr . 140)
    (cdaar . 139)
    (caaar . 138)
    (proper-list-p . 137)
    (select-list . 136)
    (caar . 135)
    (append! . 134)
    (cdddr . 133)
    (|(method binary/)| . 92)
    (|(method binary-)| . 91)
    (|(method binary+)| . 90)
    (|(method deep-copy)| . 89)
    (|(method shallow-copy)| . 88)
    ((converter <list>) . 87)
    (<list> . 86)
    (converter . 85)
    (|(method equal)| . 84)
    (|(method remove)| . 83)
    (|(method sort)| . 82)
    (|(method reverse!)| . 81)
    (|(method reverse)| . 80)
    (|(method concatenate)| . 79)
    (|(method accumulate1)| . 78)
    (|(method accumulate)| . 77)
    (|(method select)| . 76)
    (|(method allp)| . 75)
    (|(method anyp)| . 74)
    (|(method find)| . 73)
    (|(method member)| . 72)
    (|(method map)| . 71)
    (|(method do)| . 70)
    (|(method size)| . 69)
    (|(method (setter element))| . 68)
    (|(method element)| . 67)
    (anonymous . 32)
   )
   literals (
   )
))