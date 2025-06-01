; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 link_button proc instance:QWORD,hWin:QWORD,txt:QWORD, \
              x:QWORD,y:QWORD,wd:QWORD,ht:QWORD, \
              ID:QWORD,tcol:QWORD,hcol:QWORD,algn:QWORD
  ; -----------------------------------------------------------
  ; instance = the hInstance handle for the app
  ; hWin     = the parent window handle
  ; txt      = the address of the text to display on the button
  ; x - y    = the start location of the button rectangle
  ; wd - ht  = the width and height of the button
  ; ID       = the WM_COMMAND ID sent when button is clicked
  ; tcol     = text colour in COLORREF format
  ; hcol     = hover text colour in COLORREF format
  ; algn     = text alignment DT_LEFT - DT_CENTER - DT_RIGHT
  ; -----------------------------------------------------------
    LOCAL hndl    :QWORD
    LOCAL pcln    :QWORD
    LOCAL styl    :QWORD
    LOCAL lb      :WNDCLASSEX

    sas pcln, "masm64_link_btn_class"

    mov lb.cbSize,         SIZEOF WNDCLASSEX
    mov lb.style,          CS_BYTEALIGNCLIENT or CS_BYTEALIGNWINDOW
    mov lb.lpfnWndProc,    ptr$(lnkbtnProc)
    mov lb.cbClsExtra,     0
    mov lb.cbWndExtra,     96
    mrm lb.hInstance,      instance
    mov lb.hIcon,          0
    mov lb.hCursor,        rvcall(LoadCursor,0,IDC_HAND)
    mov lb.hbrBackground,  0
    mov lb.lpszMenuName,   0
    mrm lb.lpszClassName,  pcln
    mov lb.hIconSm,        0

    rcall RegisterClassEx,ptr$(lb)

    mov styl, WS_CHILD or WS_VISIBLE

    invoke CreateWindowEx,WS_EX_TRANSPARENT,pcln,txt, \
                          styl,x,y,wd,ht,hWin,0,instance,0
    mov hndl, rax

    invoke SetWindowLongPtr,hndl,0,ID            ; the control ID
    invoke SetWindowLongPtr,hndl,8,txt           ; the text
    invoke SetWindowLongPtr,hndl,16,tcol         ; text colour
    invoke SetWindowLongPtr,hndl,24,rvcall(GetStockObject,SYSTEM_FONT)  ; default font
    invoke SetWindowLongPtr,hndl,32,algn         ; text alignment
    invoke SetWindowLongPtr,hndl,40,hcol         ; text hover colour
    invoke SetWindowLongPtr,hndl,48,tcol         ; text colour spare
    invoke SetWindowLongPtr,hndl,56,0            ; button click count

    mov rax, hndl

    ret

 link_button endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    IFNDEF TRACKMOUSEEVENT
      TRACKMOUSEEVENT STRUCT QWORD      ; Must be aligned
        cbSize      dd ?
        dwFlags     dd ?
        hwndTrack   dq ?
        dwHoverTime dd ?
      TRACKMOUSEEVENT ENDS
    ENDIF

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 lnkbtnProc proc hWin:QWORD,uMsg:QWORD,wParam:QWORD,lParam:QWORD

    LOCAL ps    :PAINTSTRUCT
    LOCAL rct   :RECT
    LOCAL hDC   :QWORD
    LOCAL ID    :QWORD
    LOCAL ptxt  :QWORD
    LOCAL ctxt  :QWORD
    LOCAL font  :QWORD
    LOCAL oldf  :QWORD
    LOCAL algn  :QWORD
    LOCAL tme   :TRACKMOUSEEVENT

    .switch uMsg

      .case WM_COMMAND
        .switch wParam
          .case 1
            invoke SetWindowLongPtr,hWin,16,lParam      ; text colour
          .case 2
            invoke SetWindowLongPtr,hWin,32,lParam      ; text alignment
        .endsw
        rcall ShowWindow,hWin,SW_HIDE
        rcall ShowWindow,hWin,SW_SHOW                   ; force update

      .case WM_LBUTTONDOWN
        mov ID, rvcall(GetWindowLongPtr,hWin,0)
        rcall PostMessage,rv(GetParent,hWin),WM_COMMAND,ID,0

      .case WM_LBUTTONUP
        rcall SetWindowLongPtr,hWin,56,0                ; clear the button flag

      .case WM_MOUSEMOVE
        .if rvcall(GetWindowLongPtr,hWin,56) == 0       ; if button down flag not set
          rcall GetWindowLongPtr,hWin,40                ; load the hover colour
          rcall SetWindowLongPtr,hWin,16,rax            ; set the hover colour
          rcall ShowWindow,hWin,SW_HIDE
          rcall ShowWindow,hWin,SW_SHOW                 ; force update
          mov tme.cbSize, SIZEOF tme
          mov tme.dwFlags, TME_LEAVE
          mrm tme.hwndTrack, hWin
          mov tme.dwHoverTime, 0
          invoke TrackMouseEvent,ADDR tme               ; turn on mouse tracking
          rcall SetWindowLongPtr,hWin,56,1              ; set the button flag
        .endif

      .case WM_MOUSELEAVE
        rcall SetWindowLongPtr,hWin,56,0                ; clear the button flag
        rcall GetWindowLongPtr,hWin,48                  ; restore text colour via spare copy
        rcall SetWindowLongPtr,hWin,16,rax
        rcall ShowWindow,hWin,SW_HIDE
        rcall ShowWindow,hWin,SW_SHOW                   ; force update

      .case WM_SETFONT
        rcall SetWindowLongPtr,hWin,24,wParam           ; set the button font
        rcall ShowWindow,hWin,SW_HIDE
        rcall ShowWindow,hWin,SW_SHOW                   ; force update

      .case WM_SETTEXT
        rcall SetWindowLongPtr,hWin,8,lParam            ; new text
        rcall ShowWindow,hWin,SW_HIDE
        rcall ShowWindow,hWin,SW_SHOW                   ; force update

      .case WM_PAINT
        rcall BeginPaint,ptr$(ps)
        mov hDC,  rvcall(GetDC,hWin)
        mov ptxt, rvcall(GetWindowLongPtr,hWin,8)       ; text address
        mov ctxt, rvcall(GetWindowLongPtr,hWin,16)      ; load text colour
        mov font, rvcall(GetWindowLongPtr,hWin,24)      ; load font
        mov algn, rvcall(GetWindowLongPtr,hWin,32)      ; alignment
        invoke SetTextColor,hDC,ctxt
        rcall SetBkMode,hDC,TRANSPARENT
        rcall GetClientRect,hWin,ptr$(rct)
        mov oldf, rvcall(SelectObject,hDC,font)
        or algn, DT_SINGLELINE or DT_VCENTER
        invoke DrawText,hDC,ptxt,-1,ptr$(rct),algn
        rcall SelectObject,hDC,oldf
        rcall ReleaseDC,hWin,hDC
        rcall EndPaint,ptr$(ps)

    .endsw

    rcall DefWindowProc,hWin,uMsg,wParam,lParam

    ret

 lnkbtnProc endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
