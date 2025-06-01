; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .data?
      hModule   dq ?
      hWnd      dq ?
      hIcon     dq ?
      hCursor   dq ?
      sWid      dq ?
      sHgt      dq ?
      resID     dq ?                        ; resource ID for JPG image
      clock     dq ?                        ; milliseconds duration
      hBmp      dq ?
      IDtimer   dq ?
      hThread   dq ?
      hCaller   dq ?

      flag      dq ?

    .data
      classname db "Splash_Class",0

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

SplashScreen proc resourceID:QWORD,Milliseconds:QWORD

    mov hCaller, rvcall(GetActiveWindow)

    mrm resID, resourceID
    mrm clock, Milliseconds
    mov flag, 0

    mov hThread, rv(CreateThread,0,0,ptr$(MainThread),0,0,0)

    rcall SleepEx,Milliseconds,0

    ret

SplashScreen endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

MainThread proc empty:QWORD

    mov hModule,   rvcall(GetModuleHandle,0)
    mov hCursor,   rvcall(LoadCursor,0,IDC_ARROW)
    mov sWid,      rvcall(GetSystemMetrics,SM_CXSCREEN)
    mov sHgt,      rvcall(GetSystemMetrics,SM_CYSCREEN)

    GdiPlusBegin                            ; initialise GDIPlus

    mov hBmp, rvcall(ResImageLoad,resID)

    call SplashMain

    GdiPlusEnd                              ; GdiPlus cleanup

    rcall DeleteObject,hBmp
    rcall CloseHandle,hThread
    mov flag, 1
    rcall ExitThread,0

    ret

MainThread endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

SplashMain proc

    LOCAL wc      :WNDCLASSEX
    LOCAL lft     :QWORD
    LOCAL top     :QWORD
    LOCAL wid     :QWORD
    LOCAL hgt     :QWORD
    LOCAL bmp     :BITMAP

    mov wc.cbSize,         SIZEOF WNDCLASSEX
    mov wc.style,          CS_BYTEALIGNCLIENT or CS_BYTEALIGNWINDOW
    mov wc.lpfnWndProc,    ptr$(SplashProc)
    mov wc.cbClsExtra,     0
    mov wc.cbWndExtra,     0
    mrm wc.hInstance,      hModule
    mrm wc.hIcon,          0
    mrm wc.hCursor,        hCursor
    mrm wc.hbrBackground,  0
    mov wc.lpszMenuName,   0
    mov wc.lpszClassName,  ptr$(classname)
    mrm wc.hIconSm,        0

    rcall RegisterClassEx,ptr$(wc)

    rcall GetObject,hBmp,SIZEOF BITMAP,ptr$(bmp)

    mov eax, bmp.bmWidth
    mrm wid, rax
    mov eax, bmp.bmHeight
    mrm hgt, rax

    mov rax, sWid
    sub rax, wid
    shr rax, 1
    mov lft, rax

    mov rax, sHgt
    sub rax, hgt
    shr rax, 1
    mov top, rax

    invoke CreateWindowEx,WS_EX_TOPMOST, \
                          ADDR classname,0, \
                          WS_POPUP or WS_VISIBLE,\
                          lft,top,wid,hgt,0,0,hModule,0
    mov hWnd, rax

    call SplashLoop

    ret

SplashMain endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

SplashLoop proc

    LOCAL msg    :MSG
    LOCAL pmsg   :QWORD

    mov pmsg, ptr$(msg)
    jmp gmsg

  mloop:
    rcall TranslateMessage,pmsg
    rcall DispatchMessage,pmsg
  gmsg:
    test rax, rvcall(GetMessage,pmsg,0,0,0)
    jnz mloop

    ret

SplashLoop endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

SplashProc proc hWin:QWORD,uMsg:QWORD,wParam:QWORD,lParam:QWORD

    LOCAL hImg  :QWORD

    .switch uMsg
      .case WM_CREATE
        mov IDtimer, 12345678
        rcall SetTimer,hWin,IDtimer,clock,0

        mov hImg, rvcall(bitmap_image,hModule,hWin,0,0)
        rcall SendMessage,hImg,STM_SETIMAGE,IMAGE_BITMAP,hBmp

        mov r11, clock
        shr r11, 1
        rcall AnimateWindow,hWin,r11,AW_ACTIVATE or AW_BLEND
        .return 0

      .case WM_TIMER
        rcall KillTimer,hWin,IDtimer
        rcall SendMessage,hWin,WM_SYSCOMMAND,SC_CLOSE,0

      .case WM_CLOSE
        rcall SetForegroundWindow,hCaller
        mov r11, clock
        shr r11, 2
        rcall AnimateWindow,hWin,r11,AW_HIDE or AW_BLEND
        rcall SendMessage,hWin,WM_DESTROY,0,0

      .case WM_DESTROY
        rcall PostQuitMessage,NULL

    .endsw

    rcall DefWindowProc,hWin,uMsg,wParam,lParam

    ret

SplashProc endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
