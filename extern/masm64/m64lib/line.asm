; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 line proc hWin:QWORD,x1:QWORD,x2:QWORD,y1:QWORD,y2:QWORD,cref:QWORD,pwid:QWORD

    LOCAL hDC   :QWORD
    LOCAL hPen  :QWORD
    LOCAL hOld  :QWORD

    mov hDC, rv(GetDC,hWin)
    mov hPen, rv(CreatePen,PS_SOLID,pwid,cref)
    mov hOld, rv(SelectObject,hDC,hPen)

    invoke MoveToEx,hDC,x1,x2,0
    invoke LineTo,hDC,y1,y2

    invoke SelectObject,hDC,hOld
    invoke DeleteObject,hPen
    invoke ReleaseDC,hDC

    ret

 line endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
