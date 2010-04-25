;;;-----------------------------------------------------------------------------
;;;  By J Garcia & University of Bath. All rights reserved.
;;;-----------------------------------------------------------------------------
;;; ---                         EuLisp System 'youtoo/tk'
;;;-----------------------------------------------------------------------------
;;;  Library: tcltk
;;;  Authors: J Garcia
;;; Description: YouToo/Tk module to test the scrollbar & listbox widgets.
;;;-----------------------------------------------------------------------------
(defmodule tk_scrollbar2
    (syntax (macros)
     import (level1 tcltk))

  (deflocal *lb1* ())
  (deflocal *lb2* ())
  (deflocal *lb3* ())
  (deflocal *lb4* ())
  (deflocal *scroll* ())
  (deflocal i 0)

  (defun Fun-scroll-callback (type entry . units)
    (tk-yview *lb1* type entry units)
    (tk-yview *lb2* type entry units)
    (tk-yview *lb3* type entry units)
    (tk-yview *lb4* type entry units))

  (defun Fun-listbox-callback (first-entry last-entry)
    (tk-scroll-set *scroll* first-entry last-entry))

  (defun prove ()
    (setq *scroll* (tk-make-scrollbar () command: Fun-scroll-callback))
    (setq *lb1* (tk-make-listbox () relief: "sunken"
                                 yscrollcommand: Fun-listbox-callback))
    (setq *lb2* (tk-make-listbox () relief: "sunken"
                                 yscrollcommand: Fun-listbox-callback))
    (setq *lb3* (tk-make-listbox () relief: "sunken"
                                 yscrollcommand: Fun-listbox-callback))
    (setq *lb4* (tk-make-listbox () relief: "sunken"
                                 yscrollcommand: Fun-listbox-callback))
    (tk-pack *lb1* *lb2* *lb3* *lb4* side: "left")
    (tk-pack *scroll* side: "right" fill: "y")
    (while (< i 20)
      (tk-insert *lb1* "end" i)
      (tk-insert *lb2* "end" i)
      (tk-insert *lb3* "end" i)
      (tk-insert *lb4* "end" i)
      (setq i (+ i 1)))
    (Tk_MainLoop))

  (prove)

;;;-----------------------------------------------------------------------------
  )  ;; end of module
;;;-----------------------------------------------------------------------------
