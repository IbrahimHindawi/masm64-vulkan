; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

colr_button proc pTxt:QWORD,instance:QWORD,parent:QWORD, \
                 tx:QWORD,ty:QWORD,wd:QWORD,ht:QWORD, \
                 ID:QWORD,bcolr:QWORD,tcolr:QWORD,hcolr:QWORD
  ; -------------------------------------------------------
  ; pTxt        button text
  ; instance    hInstance
  ; parent      window handle of parent
  ; tx + ty     top left rectangle location
  ; wd + ht     button width and height
  ; ID          wParam for WM_COMMAND sent to parent window
  ; bcolr       background colour of button
  ; tcolr       normal text colour of button
  ; hcolr       mouse over hover text colour
  ; -------------------------------------------------------
    LOCAL cb        :WNDCLASSEX
    LOCAL clname    :QWORD
    LOCAL cursor    :QWORD
    LOCAL brush     :QWORD
    LOCAL hndl      :QWORD

    sas clname, "colr_butn_class"
    mov cursor,  rvcall(LoadCursor,0,IDC_ARROW)
    mov brush,   rvcall(CreateSolidBrush,bcolr)

    mov cb.cbSize,         SIZEOF WNDCLASSEX
    mov cb.style,          CS_BYTEALIGNCLIENT or CS_BYTEALIGNWINDOW
    mov cb.lpfnWndProc,    ptr$(cbtnproc)
    mov cb.cbClsExtra,     0
    mov cb.cbWndExtra,     128
    mrm cb.hInstance,      instance
    mrm cb.hIcon,          0
    mrm cb.hCursor,        cursor
    mrm cb.hbrBackground,  0
    mov cb.lpszMenuName,   0
    mov cb.lpszClassName,  ptr$(clname)
    mrm cb.hIconSm,        0

    rcall RegisterClassEx,ptr$(cb)

    invoke CreateWindowEx,WS_EX_LEFT or WS_EX_TRANSPARENT, \
                          ADDR clname,pTxt, \
                          WS_CHILD or WS_VISIBLE or WS_BORDER,\
                          tx,ty,wd,ht,parent,0,instance,0
    mov hndl, rax

    invoke SetWindowLongPtr,hndl,0,ID            ; the control ID
    invoke SetWindowLongPtr,hndl,8,pTxt          ; the text
    invoke SetWindowLongPtr,hndl,16,tcolr        ; text colour
    invoke SetWindowLongPtr,hndl,24,rvcall(GetStockObject,SYSTEM_FONT)  ; default font
    invoke SetWindowLongPtr,hndl,32,brush        ; back colour brush
    invoke SetWindowLongPtr,hndl,40,hcolr        ; hover text colour
    invoke SetWindowLongPtr,hndl,48,tcolr        ; text colour spare

    mov rax, hndl

    ret

colr_button endp

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

cbtnproc proc hWin:QWORD,uMsg:QWORD,wParam:QWORD,lParam:QWORD

    LOCAL ps    :PAINTSTRUCT
    LOCAL rct   :RECT
    LOCAL hDC   :QWORD
    LOCAL ID    :QWORD
    LOCAL ptxt  :QWORD
    LOCAL ctxt  :QWORD
    LOCAL bcol  :QWORD
    LOCAL font  :QWORD
    LOCAL oldf  :QWORD
    LOCAL brush :QWORD
    LOCAL tme   :TRACKMOUSEEVENT

    .switch uMsg

      .case WM_LBUTTONUP
        mov ID, rvcall(GetWindowLongPtr,hWin,0)
        rcall SendMessage,rv(GetParent,hWin),WM_COMMAND,ID,0

      .case WM_SETFONT
        rcall SetWindowLongPtr,hWin,24,wParam           ; set the button font
        rcall ShowWindow,hWin,SW_HIDE
        rcall ShowWindow,hWin,SW_SHOW                   ; force update

      .case WM_SETTEXT
        rcall SetWindowLongPtr,hWin,8,lParam            ; new text
        rcall ShowWindow,hWin,SW_HIDE
        rcall ShowWindow,hWin,SW_SHOW                   ; force update

      .case WM_MOUSEMOVE
        rcall GetWindowLongPtr,hWin,40                  ; load the hover colour
        rcall SetWindowLongPtr,hWin,16,rax              ; set the hover colour
        invoke InvalidateRect,hWin,NULL,TRUE
        mov tme.cbSize, SIZEOF tme
        mov tme.dwFlags, TME_LEAVE
        mrm tme.hwndTrack, hWin
        mov tme.dwHoverTime, 0
        invoke TrackMouseEvent,ADDR tme                 ; turn on mouse tracking

      .case WM_MOUSELEAVE
        rcall GetWindowLongPtr,hWin,48                  ; restoration via spare copy
        rcall SetWindowLongPtr,hWin,16,rax
        invoke InvalidateRect,hWin,NULL,TRUE

      .case WM_PAINT
        rcall BeginPaint,ptr$(ps)
        mov hDC, rvcall(GetDC,hWin)
        mov ptxt, rvcall(GetWindowLongPtr,hWin,8)       ; text address
        mov ctxt, rvcall(GetWindowLongPtr,hWin,16)      ; load text colour
        mov font, rvcall(GetWindowLongPtr,hWin,24)      ; load font
        mov bcol, rvcall(GetWindowLongPtr,hWin,32)      ; back color

        rcall GetClientRect,hWin,ptr$(rct)
        rcall FillRect,hDC,ptr$(rct),bcol
        invoke SetTextColor,hDC,ctxt
        rcall SetBkMode,hDC,TRANSPARENT
        mov oldf, rvcall(SelectObject,hDC,font)

        invoke DrawText,hDC,ptxt,-1,ptr$(rct),DT_CENTER or DT_SINGLELINE or DT_VCENTER

        rcall SelectObject,hDC,oldf
        rcall ReleaseDC,hWin,hDC
        rcall EndPaint,ptr$(ps)

    .endsw

    rcall DefWindowProc,hWin,uMsg,wParam,lParam

    ret

cbtnproc endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
