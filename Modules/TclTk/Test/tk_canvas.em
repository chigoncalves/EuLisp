;;; Copyright 1997 J. Garcia & University of Bath
;;; Copyright 2010 Henry G. Weller
;;;-----------------------------------------------------------------------------
;;  This file is part of
;;; ---                         EuLisp System 'Youtoo'
;;;-----------------------------------------------------------------------------
;;
;;  Youtoo is free software: you can redistribute it and/or modify it under the
;;  terms of the GNU General Public License version 2 as published by the Free
;;  Software Foundation.
;;
;;  Youtoo is distributed in the hope that it will be useful, but WITHOUT ANY
;;  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
;;  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
;;  details.
;;
;;  You should have received a copy of the GNU General Public License along with
;;  this program.  If not, see <http://www.gnu.org/licenses/>.
;;
;;;-----------------------------------------------------------------------------
;;; Title: Test canvas widget
;;;  Library: tcltk
;;;  Authors: J. Garcia
;;;  Maintainer: Henry G. Weller
;;;-----------------------------------------------------------------------------

(defmodule tk_canvas
  (syntax (syntax-1)
   import (level-1
           tcltk))

;;;-----------------------------------------------------------------------------
;;; Callback Functions
;;;-----------------------------------------------------------------------------
(defun make-sound ()
  (tk-bell))

;;;-----------------------------------------------------------------------------
;;; Test Function
;;;-----------------------------------------------------------------------------
(defun tk-test-canvas ()
  (let* ((frame1 (tk-make-frame ()))
         (frame2 (tk-make-frame frame1))
         (canvas1 (tk-make-canvas frame2 scrollregion: "0 0 270 250"))
         (but (tk-make-button () text: "hola" command: make-sound))
         (arc (tk-add-arc-canvas canvas1 25 30 75 80 width: 3))
         (bitmap (tk-add-bitmap-canvas canvas1 110 30 bitmap: "warning"))
         (line (tk-add-line-canvas canvas1 180 30 230 50 210 70 joinstyle: "round"))
         (oval (tk-add-oval-canvas canvas1 25 120 85 170 fill: "SteelBlue"))
         (polygon (tk-add-polygon-canvas canvas1 135 120 160 140 155 170 115 170 110 170))
         (rectangle (tk-add-rectangle-canvas canvas1 200 140 250 170))
         (text1 (tk-add-text-canvas canvas1 35 95 text: "arc" anchor: "w"))
         (text2 (tk-add-text-canvas canvas1 110 95 text: "bitmap" anchor: "w"))
         (text3 (tk-add-text-canvas canvas1 185 95 text: "line" anchor: "w"))
         (text4 (tk-add-text-canvas canvas1 32 185 text: "oval" anchor: "w"))
         (text5 (tk-add-text-canvas canvas1 110 185 text: "polygon" anchor: "w"))
         (text6 (tk-add-text-canvas canvas1 199 185 text: "rectangle" anchor: "w"))
         (text7 (tk-add-text-canvas canvas1 30 270 text: "Some of the item allowed in canvases" anchor: "w"))
         (scroll (tk-make-scrollbar frame1 orient: "vertical"))
         (scroll1 (tk-make-scrollbar frame2 orient: "horizontal")))

    (eul-associate canvas1 scroll 'vertical)
    (eul-associate canvas1 scroll1 'horizontal)
    (tk-pack but side: "top")
    (tk-pack frame1 side: "bottom")
    (tk-pack scroll side: "right" fill: "y")
    (tk-pack frame2 side: "left")

    (tk-pack scroll1 side: "bottom" fill: "x")
    (tk-pack canvas1 side: "top")

    )
  (Tk_MainLoop))

(tk-test-canvas)

;;;-----------------------------------------------------------------------------
)  ;; End of module tk_canvas
;;;-----------------------------------------------------------------------------
