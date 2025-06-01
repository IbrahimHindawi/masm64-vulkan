; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 DrawArc proc hndl:QWORD,tx:QWORD,ty:QWORD,lx:QWORD,ly:QWORD, \
              sx:QWORD,sy:QWORD,ex:QWORD,ey:QWORD, \
              PenCol:QWORD,PenWid:QWORD

    LOCAL hDC   :QWORD
    LOCAL hPen  :QWORD
    LOCAL hOld  :QWORD

    mov hDC,  rv(GetDC,hndl)
    mov hPen, rv(CreatePen,PS_SOLID,PenWid,PenCol)
    mov hOld, rv(SelectObject,hDC,hPen)

  ; -----------------------------------
  ; tx to ly are the bounding rectangle
  ; sx & sy are the arc starting point
  ; ex & ey are the arc end point
  ; -----------------------------------

    invoke Arc,hDC,tx,ty,lx,ly,sx,sy,ex,ey

    invoke SelectObject,hDC,hOld
    invoke DeleteObject,hPen
    invoke ReleaseDC,hDC

    ret

 DrawArc endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
