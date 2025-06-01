; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 transparent_button proc instance:QWORD,hWin:QWORD,txt:QWORD, \
                         x:QWORD,y:QWORD,wd:QWORD,ht:QWORD, \
                         ID:QWORD,bdr:QWORD
  ; -----------------------------------------------------------
  ; instance = the hInstance handle for the app
  ; hWin     = the parent window handle
  ; txt      = the address of the text to display on the button
  ; x - y    = the start location of the button rectangle
  ; wd - ht  = the width and height of the button
  ; ID       = the WM_COMMAND ID sent when button is clicked
  ; bdr      = optional border, 0 = none, non zero = border
  ; -----------------------------------------------------------
    LOCAL hndl    :QWORD
    LOCAL pcln    :QWORD
    LOCAL styl    :QWORD
    LOCAL bc      :WNDCLASSEX

    sas pcln, "transparent_button_class"

    mov bc.cbSize,         SIZEOF WNDCLASSEX
    mov bc.style,          CS_BYTEALIGNCLIENT or CS_BYTEALIGNWINDOW
    mov bc.lpfnWndProc,    ptr$(cBtnProc)
    mov bc.cbClsExtra,     0
    mov bc.cbWndExtra,     64
    mrm bc.hInstance,      instance
    mov bc.hIcon,          0
    mov bc.hCursor,        rvcall(LoadCursor,0,IDC_HAND)
    mov bc.hbrBackground,  0
    mov bc.lpszMenuName,   0
    mrm bc.lpszClassName,  pcln
    mov bc.hIconSm,        0

    rcall RegisterClassEx,ptr$(bc)

    .if bdr == 0
      mov styl, WS_CHILD or WS_VISIBLE
    .else
      mov styl, WS_CHILD or WS_VISIBLE or WS_BORDER
    .endif

    invoke CreateWindowEx,WS_EX_TRANSPARENT,pcln,txt, \
                          styl,x,y,wd,ht,hWin,0,instance,0
    mov hndl, rax

    invoke SetWindowLongPtr,hndl,0,ID            ; the control ID
    invoke SetWindowLongPtr,hndl,8,txt           ; the text
    invoke SetWindowLongPtr,hndl,16,00000000h    ; text colour
    invoke SetWindowLongPtr,hndl,24,rvcall(GetStockObject,SYSTEM_FONT)  ; default font

    mov rax, hndl

    ret

 transparent_button endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 cBtnProc proc hWin:QWORD,uMsg:QWORD,wParam:QWORD,lParam:QWORD

    LOCAL ps    :PAINTSTRUCT
    LOCAL rct   :RECT
    LOCAL hDC   :QWORD
    LOCAL ID    :QWORD
    LOCAL ptxt  :QWORD
    LOCAL ctxt  :QWORD
    LOCAL font  :QWORD
    LOCAL oldf  :QWORD

    .switch uMsg
      .case WM_LBUTTONUP
        mov ID, rvcall(GetWindowLongPtr,hWin,0)
        rcall PostMessage,rv(GetParent,hWin),WM_COMMAND,ID,0

      .case WM_COMMAND
        .switch wParam
          .case 0
            rcall SetWindowLongPtr,hWin,16,lParam
            rcall InvalidateRect,hWin,NULL,TRUE         ; set the text colour by message
        .endsw

      .case WM_SETFONT
        rcall SetWindowLongPtr,hWin,24,wParam           ; set the button font
        rcall InvalidateRect,hWin,NULL,TRUE

      .case WM_SETTEXT
        invoke SetWindowLongPtr,hWin,8,lParam           ; new text
        rcall InvalidateRect,hWin,NULL,TRUE

      .case WM_PAINT
        rcall BeginPaint,ptr$(ps)
        mov hDC, rvcall(GetDC,hWin)
        mov ptxt, rvcall(GetWindowLongPtr,hWin,8)       ; text address
        mov ctxt, rvcall(GetWindowLongPtr,hWin,16)      ; load text colour
        mov font, rvcall(GetWindowLongPtr,hWin,24)      ; load font
        rcall SetTextColor,hDC,ctxt
        rcall SetBkMode,hDC,TRANSPARENT
        rcall GetClientRect,hWin,ptr$(rct)
        mov oldf, rvcall(SelectObject,hDC,font)
        invoke DrawText,hDC,ptxt,-1,ADDR rct, \
        DT_SINGLELINE or DT_CENTER or DT_VCENTER
        rcall SelectObject,hDC,oldf
        rcall ReleaseDC,hWin,hDC
        rcall EndPaint,ptr$(ps)

    .endsw

    rcall DefWindowProc,hWin,uMsg,wParam,lParam

    ret

 cBtnProc endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
