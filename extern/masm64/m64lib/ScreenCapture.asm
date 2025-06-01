; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

ScreenCapture proc

    LOCAL dDC   :QWORD
    LOCAL cDC   :QWORD
    LOCAL hBmp  :QWORD
    LOCAL hDesk :QWORD
    LOCAL hOld  :QWORD
    LOCAL wScrn :QWORD
    LOCAL hScrn :QWORD
    LOCAL ps    :PAINTSTRUCT

    mov wScrn, rvcall(GetSystemMetrics,SM_CXSCREEN)                 ; get full screen size
    mov hScrn, rvcall(GetSystemMetrics,SM_CYSCREEN)

    mov hDesk, rvcall(GetDesktopWindow)                             ; get desktop window handle
    rcall BeginPaint,hDesk,ptr$(ps)
    mov dDC, rvcall(GetDC,hDesk)                                    ; get desktop DC

    mov hBmp, rvcall(CreateCompatibleBitmap,dDC,wScrn,hScrn)        ; create a compatible bitmap
    mov cDC, rvcall(CreateCompatibleDC,dDC)                         ; create a compatible DC
    mov hOld, rvcall(SelectObject,cDC,hBmp)                         ; select BMP into compatible DC

    invoke BitBlt,cDC,0,0,wScrn,hScrn,dDC,0,0,SRCCOPY               ; blit screen to bitmap

    rcall SelectObject,cDC,hOld                                     ; re-select the old object
    rcall DeleteDC,cDC                                              ; release CompatibleDC
    rcall ReleaseDC,hDesk,dDC                                       ; release desktop DC

    rcall EndPaint,hDesk,ptr$(ps)

    mov rax, hBmp                                                   ; return the bitmap handle

    ret

ScreenCapture endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
