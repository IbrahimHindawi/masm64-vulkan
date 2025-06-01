; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    comment # ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

            MESSAGING INTERFACE

            WM_SETFONT      change font             wParam = font handle
            WM_SETTEXT      change text             lParam = text address

            WM_COMMAND      multi function
            wParam = 0      character spacing       lParam = value in pixels
            wParam = 1      change text colour      lParam = COLORREF format
            wParam = 2      change text alignment   lParam = DT_LEFT or DT_CENTER or DT_RIGHT

            # ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

 text_button proc instance:QWORD,hWin:QWORD,txt:QWORD, \
                  x:QWORD,y:QWORD,wd:QWORD,ht:QWORD, \
                  ID:QWORD,algn:QWORD,tcol:QWORD,hcol:QWORD
  ; -----------------------------------------------------------
  ; instance = the hInstance handle for the app
  ; hWin     = the parent window handle
  ; txt      = the address of the text to display on the button
  ; x - y    = the top left location of the button rectangle
  ; wd - ht  = the width and height of the button
  ; ID       = the WM_COMMAND ID sent when button is clicked
  ; algn     = text alignment DT_LEFT - DT_CENTER - DT_RIGHT
  ; tcol     = text colour in COLORREF format
  ; hcol     = hilite colour in 
  ; -----------------------------------------------------------
    LOCAL hndl    :QWORD
    LOCAL pcln    :QWORD
    LOCAL styl    :QWORD
    LOCAL tb      :WNDCLASSEX

    sas pcln, "masm_64_textbtn_class"

    mov tb.cbSize,         SIZEOF WNDCLASSEX
    mov tb.style,          CS_BYTEALIGNCLIENT or CS_BYTEALIGNWINDOW
    mov tb.lpfnWndProc,    ptr$(txtbtnProc)
    mov tb.cbClsExtra,     0
    mov tb.cbWndExtra,     96
    mrm tb.hInstance,      instance
    mov tb.hIcon,          0
    mov tb.hCursor,        rvcall(LoadCursor,0,IDC_ARROW)
    mov tb.hbrBackground,  0
    mov tb.lpszMenuName,   0
    mrm tb.lpszClassName,  pcln
    mov tb.hIconSm,        0

    rcall RegisterClassEx,ptr$(tb)

    mov styl, WS_CHILD or WS_VISIBLE

    invoke CreateWindowEx,WS_EX_TRANSPARENT,pcln,txt, \
                          styl,x,y,wd,ht,hWin,0,instance,0
    mov hndl, rax

    invoke SetWindowLongPtr,hndl,0,ID            ; the control ID
    invoke SetWindowLongPtr,hndl,8,txt           ; the text
    invoke SetWindowLongPtr,hndl,16,tcol         ; text colour
    invoke SetWindowLongPtr,hndl,24,hcol         ; hover text colour
    invoke SetWindowLongPtr,hndl,32,rvcall(GetStockObject,SYSTEM_FONT)  ; default font
    invoke SetWindowLongPtr,hndl,40,0            ; character space value
    invoke SetWindowLongPtr,hndl,48,algn         ; text alignment
    invoke SetWindowLongPtr,hndl,56,tcol         ; temp colour slot
    invoke SetWindowLongPtr,hndl,64,0            ; flag for single click only

    mov rax, hndl

    ret

 text_button endp

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

 txtbtnProc proc hWin:QWORD,uMsg:QWORD,wParam:QWORD,lParam:QWORD

    LOCAL ps    :PAINTSTRUCT
    LOCAL rct   :RECT
    LOCAL hDC   :QWORD
    LOCAL ID    :QWORD
    LOCAL ptxt  :QWORD
    LOCAL ctxt  :QWORD
    LOCAL font  :QWORD
    LOCAL oldf  :QWORD
    LOCAL algn  :QWORD
    LOCAL spac  :QWORD
    LOCAL tme   :TRACKMOUSEEVENT

    .switch uMsg
      .case WM_LBUTTONUP
        mov ID, rvcall(GetWindowLongPtr,hWin,0)
        rcall PostMessage,rv(GetParent,hWin),WM_COMMAND,ID,1

      .case WM_COMMAND
        .switch wParam
          .case 0
            invoke SetWindowLongPtr,hWin,40,lParam      ; character space value
          .case 1
            invoke SetWindowLongPtr,hWin,16,lParam      ; text colour
          .case 2
            invoke SetWindowLongPtr,hWin,48,lParam      ; text alignment
        .endsw
        rcall ShowWindow,hWin,SW_HIDE
        rcall ShowWindow,hWin,SW_SHOW                   ; force update

      .case WM_MOUSEMOVE
        .if rvcall(GetWindowLongPtr,hWin,64) == 0       ; if flag is clear
          rcall GetWindowLongPtr,hWin,24                ; load the hover colour
          rcall SetWindowLongPtr,hWin,16,rax            ; set the hover colour
          rcall ShowWindow,hWin,SW_HIDE
          rcall ShowWindow,hWin,SW_SHOW                 ; force update
          mov tme.cbSize, SIZEOF tme
          mov tme.dwFlags, TME_LEAVE
          mrm tme.hwndTrack, hWin
          mov tme.dwHoverTime, 0
          invoke TrackMouseEvent,ADDR tme               ; turn on mouse tracking
          rcall SetWindowLongPtr,hWin,64,1              ; set flag
        .endif

      .case WM_MOUSELEAVE
        rcall GetWindowLongPtr,hWin,56                  ; restoration via spare copy
        rcall SetWindowLongPtr,hWin,16,rax
        rcall SetWindowLongPtr,hWin,64,0                ; clear flag
        rcall ShowWindow,hWin,SW_HIDE
        rcall ShowWindow,hWin,SW_SHOW                   ; force update

      .case WM_SETTEXT
        rcall SetWindowLongPtr,hWin,8,lParam            ; new text
        rcall ShowWindow,hWin,SW_HIDE
        rcall ShowWindow,hWin,SW_SHOW                   ; force update

      .case WM_SETFONT
        rcall SetWindowLongPtr,hWin,32,wParam           ; set the button font
        rcall ShowWindow,hWin,SW_HIDE
        rcall ShowWindow,hWin,SW_SHOW                   ; force update

      .case WM_PAINT
        rcall BeginPaint,ptr$(ps)
        mov hDC,  rvcall(GetDC,hWin)
        mov ptxt, rvcall(GetWindowLongPtr,hWin,8)       ; text address
        mov ctxt, rvcall(GetWindowLongPtr,hWin,16)      ; load text colour
        mov font, rvcall(GetWindowLongPtr,hWin,32)      ; load font
        mov algn, rvcall(GetWindowLongPtr,hWin,48)      ; alignment
        mov spac, rvcall(GetWindowLongPtr,hWin,40)      ; character spacing
        rcall SetTextCharacterExtra,hDC,spac            ; int nCharExtra : extra-space value
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

 txtbtnProc endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
