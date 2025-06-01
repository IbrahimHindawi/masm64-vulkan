; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 FilledRect proc hndl:QWORD,x1:QWORD,x2:QWORD,y1:QWORD,y2:QWORD,FillCol:QWORD,PenCol:QWORD,bwid:QWORD

    LOCAL hDC   :QWORD
    LOCAL hPen  :QWORD
    LOCAL hOld  :QWORD
    LOCAL hBrsh :QWORD
    LOCAL oldbr :QWORD
    LOCAL lbCol :LOGBRUSH

    mov hDC, rv(GetDC,hndl)
    mov hPen, rv(CreatePen,PS_SOLID,bwid,PenCol)
    mov hOld, rv(SelectObject,hDC,hPen)

    mrmd lbCol.lbStyle, BS_SOLID
    mov rax, FillCol
    mrmd lbCol.lbColor, eax
    mov lbCol.lbHatch, 0

    mov hBrsh, rv(CreateBrushIndirect,ADDR lbCol)
    mov oldbr, rv(SelectObject,hDC,hBrsh)

    invoke Rectangle,hDC,x1,x2,y1,y2

    invoke SelectObject,hDC,oldbr
    invoke SelectObject,hDC,hOld
    invoke DeleteObject,hBrsh
    invoke DeleteObject,hPen
    invoke ReleaseDC,hDC

    ret

 FilledRect endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
