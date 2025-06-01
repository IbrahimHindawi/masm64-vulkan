; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 transparent_label proc instance:QWORD,hWin:QWORD,txt:QWORD, \
                        x:QWORD,y:QWORD,wd:QWORD,ht:QWORD, \
                        bdr:QWORD,talign:QWORD
  ; -----------------------------------------------------------
  ; instance = the hInstance handle for the app
  ; hWin     = the parent window handle
  ; txt      = the address of the text to display in the label
  ; x - y    = the start location of the label rectangle
  ; wd - ht  = the width and height of the label
  ; bdr      = optional border, 0 = none, non zero = border
  ; talign   = DT_LEFT - DT_CENTER - DT_RIGHT
  ; -----------------------------------------------------------
    LOCAL hndl    :QWORD
    LOCAL pcln    :QWORD
    LOCAL lstyl   :QWORD
    LOCAL lc      :WNDCLASSEX

    sas pcln, "transparent_label_class"

    mov lc.cbSize,         SIZEOF WNDCLASSEX
    mov lc.style,          CS_BYTEALIGNCLIENT or CS_BYTEALIGNWINDOW
    mov lc.lpfnWndProc,    ptr$(cLblProc)
    mov lc.cbClsExtra,     0
    mov lc.cbWndExtra,     256
    mrm lc.hInstance,      instance
    mov lc.hIcon,          0
    mov lc.hCursor,        rvcall(LoadCursor,0,IDC_ARROW)
    mov lc.hbrBackground,  0
    mov lc.lpszMenuName,   0
    mrm lc.lpszClassName,  pcln
    mov lc.hIconSm,        0

    rcall RegisterClassEx,ptr$(lc)

    .if bdr == 0
      mov lstyl, WS_CHILD or WS_VISIBLE
    .else
      mov lstyl, WS_CHILD or WS_VISIBLE or WS_BORDER
    .endif

    invoke CreateWindowEx,WS_EX_TRANSPARENT,pcln,txt, \
                          lstyl,x,y,wd,ht,hWin,0,instance,0
    mov hndl, rax

    invoke SetWindowLongPtr,hndl,0,talign        ; the text alignment
    invoke SetWindowLongPtr,hndl,8,00000000h    ; text colour
    invoke SetWindowLongPtr,hndl,16,rvcall(GetStockObject,SYSTEM_FONT)  ; default font

    mov rax, hndl

    ret

 transparent_label endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 cLblProc proc hWin:QWORD,uMsg:QWORD,wParam:QWORD,lParam:QWORD

    LOCAL ps    :PAINTSTRUCT
    LOCAL rct   :RECT
    LOCAL hDC   :QWORD
    LOCAL ptxt  :QWORD
    LOCAL ctxt  :QWORD
    LOCAL font  :QWORD
    LOCAL oldf  :QWORD
    LOCAL algn  :QWORD
    LOCAL tbuf  :QWORD
    LOCAL buff[512]:BYTE

    .switch uMsg
      .case WM_SETTEXT
        invoke SetWindowText,hWin,lParam
        rcall InvalidateRect,hWin,NULL,TRUE

      .case WM_COMMAND
        .switch wParam
          .case 0
            rcall SetWindowLongPtr,hWin,8,lParam        ; set text colour using WM_COMMAND
            rcall InvalidateRect,hWin,NULL,TRUE
        .endsw

      .case WM_SETFONT
        rcall SetWindowLongPtr,hWin,16,wParam           ; set the button font
        rcall InvalidateRect,hWin,NULL,TRUE

      .case WM_PAINT
        rcall BeginPaint,ptr$(ps)
        mov hDC,  rvcall(GetDC,hWin)
        mov algn, rvcall(GetWindowLongPtr,hWin,0)       ; text alignment
        mov ctxt, rvcall(GetWindowLongPtr,hWin,8)       ; load text colour
        mov font, rvcall(GetWindowLongPtr,hWin,16)      ; load font
        rcall SetTextColor,hDC,ctxt
        rcall SetBkMode,hDC,TRANSPARENT
        rcall GetClientRect,hWin,ptr$(rct)
        mov oldf, rvcall(SelectObject,hDC,font)
        mov tbuf, ptr$(buff)
        rcall GetWindowText,hWin,tbuf,512
        or algn, DT_SINGLELINE or DT_VCENTER

        invoke DrawText,hDC,tbuf,-1,ADDR rct,algn

        rcall SelectObject,hDC,oldf
        rcall ReleaseDC,hWin,hDC
        rcall EndPaint,ptr$(ps)

    .endsw

    rcall DefWindowProc,hWin,uMsg,wParam,lParam

    ret

 cLblProc endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
