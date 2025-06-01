; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

BmpButton proc \
          instance  :QWORD, \
          hParent   :QWORD, \
          topX      :QWORD, \
          topY      :QWORD, \
          hBmpU     :QWORD, \
          hBmpD     :QWORD, \
          ID        :QWORD            ; ID number for WM_COMMAND processing

    LOCAL hButn         :QWORD
    LOCAL hImage        :QWORD
    LOCAL hgt           :QWORD
    LOCAL wid           :QWORD
    LOCAL wc            :WNDCLASSEX
    LOCAL Rct           :RECT
    LOCAL pClass        :QWORD

    sas pClass,"Custom_Bmp_Butn_Class"

    mov wc.cbSize,          SIZEOF WNDCLASSEX
    mov wc.style,           CS_BYTEALIGNCLIENT or CS_BYTEALIGNWINDOW
    mov wc.lpfnWndProc,     ptr$(ButnProc)
    mov wc.cbClsExtra,      0
    mov wc.cbWndExtra,      16
    mrm wc.hInstance,       instance
    mov wc.hIcon,           0
    mov wc.hCursor,         rvcall(LoadCursor,NULL,IDC_ARROW)
    mov wc.hbrBackground,   0
    mov wc.lpszMenuName,    NULL
    mrm wc.lpszClassName,   pClass
    mov wc.hIconSm,         0

    rcall RegisterClassEx,ptr$(wc)

    invoke CreateWindowEx,WS_EX_LEFT or WS_EX_TRANSPARENT,pClass, \
                          NULL,WS_CHILD or WS_VISIBLE,topX,topY,100,100,hParent, \
                          ID,instance,NULL

    mov hButn, rax

    rcall SetWindowLong,hButn,0,hBmpU
    rcall SetWindowLong,hButn,4,hBmpD

    invoke CreateWindowEx,0,"STATIC",0, \
                          WS_CHILD or WS_VISIBLE or SS_BITMAP, \
                          0,0,0,0,hButn,ID, \
                          instance,NULL

    mov hImage, rax

    rcall SendMessage,hImage,STM_SETIMAGE,IMAGE_BITMAP,hBmpU

    rcall GetWindowRect,hImage,ptr$(Rct)
    rcall SetWindowLong,hButn,8,hImage

    mov eax, Rct.bottom
    sub eax, Rct.top
    mov hgt, rax

    mov eax, Rct.right
    sub eax, Rct.left
    mov wid, rax

    invoke SetWindowPos,hButn,HWND_TOP,0,0,wid,hgt,SWP_NOMOVE

    mov rax, hButn

    ret

BmpButton endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

ButnProc proc hWin :QWORD,Msg :QWORD,wParam :QWORD,lParam :QWORD

    LOCAL hBmpU   :QWORD
    LOCAL hBmpD   :QWORD
    LOCAL hImage  :QWORD
    LOCAL hParent :QWORD
    LOCAL ID      :QWORD
    LOCAL ptX     :QWORD
    LOCAL ptY     :QWORD
    LOCAL bWid    :QWORD
    LOCAL bHgt    :QWORD
    LOCAL Rct     :RECT

    .data?
      F@l@a@g@ dq ?     ; <<<< Mangled GLOBAL
    .code

    .switch Msg

      .case WM_LBUTTONDOWN
        mov F@l@a@g@, 1
        mov hBmpD,  rvcall(GetWindowLong,hWin,4)
        mov hImage, rvcall(GetWindowLong,hWin,8)
        rcall SendMessage,hImage,STM_SETIMAGE,IMAGE_BITMAP,hBmpD
        rcall SetCapture,hWin

      .case WM_LBUTTONUP
        mov hBmpU,  rvcall(GetWindowLong,hWin,0)
        mov hImage, rvcall(GetWindowLong,hWin,8)
        rcall SendMessage,hImage,STM_SETIMAGE,IMAGE_BITMAP,hBmpU

        mov rax, lParam
        cwde
        mov ptX, rax
        mov rax, lParam
        rol eax, 16
        cwde
        mov ptY, rax

        rcall GetWindowRect,hWin,ptr$(Rct)

        mov eax, Rct.right
        sub eax, Rct.left
        mov bWid, rax

        mov eax, Rct.bottom
        sub eax, Rct.top
        mov bHgt, rax

      ; --------------------------------
      ; exclude button releases outside
      ; of the button rectangle from
      ; sending message back to parent
      ; --------------------------------
        cmp ptX, 0
        jle bmpProc
        cmp ptY, 0
        jle bmpProc
        mov rax, bWid
        cmp ptX, rax
        jge bmpProc
        mov rax, bHgt
        cmp ptY, rax
        jge bmpProc

      .if F@l@a@g@ == 1
        mov hParent, rvcall(GetParent,hWin)
        mov ID, rvcall(GetDlgCtrlID,hWin)
        rcall SendMessage,hParent,WM_COMMAND,ID,hWin
      .endif

      bmpProc:
        mov F@l@a@g@, 0
        rcall ReleaseCapture

    .endsw

    rcall DefWindowProc,hWin,Msg,wParam,lParam

    ret

ButnProc endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
