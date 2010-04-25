(defmodule test2
  (syntax (macros)
   import (level1 serial))

;;;-----------------------------------------------------------------------------
;;; Test values
;;;-----------------------------------------------------------------------------
  (defclass <foo> ()
    ((u accessor: foo-u keyword: u: default: 34)
     (v accessor: foo-v keyword: v: default: 35)))

  (defclass <bar> (<foo>)
    ((r accessor: bar-r keyword: r: default: 36)))

  (defun baz x (print (reverse x)))
  (defun boo x x)

  (defgeneric boz (x y))
  (defmethod boz ((x <int>) (y <string>))
    (print "method1: ~a ~a\n" x y))
  (defmethod boz ((x <double>) (y <symbol>))
    (print "method1: ~a ~a\n" x y))

;;;-----------------------------------------------------------------------------
;;; Serialization tests
;;;-----------------------------------------------------------------------------
  (defun my-deserialize ()
    (pprint (deserialize)))

  ;;  (defun Deserialize ss
  ;;    (let ((s (if ss (car ss) stdin))
  ;;        (os (make <object-stream> mode: 'r)))
  ;;      (pprint os stderr)
  ;;      (connect os s)
  ;;      (pprint os stderr)
  ;;      (let ((res (read os)))
  ;;      (disconnect os)
  ;;      res)))

  (defun my-serialize (type fs)
    (let* ((os (make <object-stream> mode: 'w)))
      (pprint os stderr)
      (connect os fs)
      (pprint os stderr)
      (cond
       ((equal type "null")
        (write () os))
       ((equal type "int")
        (write 42 os))
       ((equal type "double")
        (write 42.123 os))
       ((equal type "char")
        (write #\x os))
       ((equal type "string")
        (write "Hello world!" os))
       ((equal type "symbol")
        (write 'foo os))
       ((equal type "keyword")
        (write bar: os))
       ((equal type "cons")
        (write '(42 43) os))
       ((equal type "vector")
        (write #(42 #\x) os))
       ((equal type "object")
        (write (make <bar>) os))
       ((equal type "function1")
        (write list os))
       ((equal type "function2")
        (write + os))
       ((equal type "function3")
        (write baz os))
       ((equal type "function4")
        (write boo os))
       ((equal type "function5")
        (write binary+ os))
       ((equal type "function6")
        (write boz os))
       ((equal type "thread")
        (let ((thr (make <thread> function: (lambda (thr)
                                              (pprint thr stderr)
                                              (print 42 stderr)
                                              (write thr os)
                                              (print 43 stderr)))))
          (thread-start thr thr)
          (thread-value thr)))
       (t
        (format stderr "*** ERROR: unknown type ~a\n" type)
        (write () os)))
      (flush os)
      (disconnect os)))
  (if (< *argc* 2)
      (my-deserialize)
    (let ((type (vector-ref *argv* 1)))
      (my-serialize type stdout)))

;;;-----------------------------------------------------------------------------
  )  ;; end of module
;;;-----------------------------------------------------------------------------
