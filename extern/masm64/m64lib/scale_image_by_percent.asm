; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

scale_image_by_percent proc hWin:QWORD,bitmap:QWORD,percnt:QWORD

    LOCAL hDC   :QWORD                                          ; original window DC
    LOCAL sDC   :QWORD                                          ; source bitmap DC
    LOCAL dDC   :QWORD                                          ; destination bitmap DC

    LOCAL srcWd :QWORD
    LOCAL srcHt :QWORD

    LOCAL nWid  :QWORD                                          ; width of new bmp
    LOCAL nHgt  :QWORD                                          ; height of new bmp
    LOCAL nubmp :QWORD                                          ; new bmp handle
    LOCAL hOld  :QWORD

    rcall GetBmpSize,bitmap                                     ; get source bitmap size
    mov srcWd, rax
    mov srcHt, rcx

    mov hDC, rvcall(GetDC,hWin)                                 ; get the window DC
    mov sDC, rvcall(CreateCompatibleDC,hDC)                     ; create the source DC
    mov dDC, rvcall(CreateCompatibleDC,hDC)                     ; create the destination DC

    rcall SelectObject,sDC,bitmap                               ; select source bitmap
    mov hOld, rax

    mov nWid, rvcall(getpercent,srcWd,percnt)                   ; calculate new width
    mov nHgt, rvcall(getpercent,srcHt,percnt)                   ; calculate new height

    add nWid, 1                                                 ; correct for zero based index
    add nHgt, 1

    mov nubmp, rvcall(CreateCompatibleBitmap,hDC,nWid,nHgt)     ; create the new bitmap
    rcall SelectObject,dDC,nubmp                                ; select destination bitmap

    rcall SetStretchBltMode,dDC,HALFTONE                        ; set mode to HALFTONE
    rcall SetBrushOrgEx,dDC,0,0,0
    invoke StretchBlt,dDC,0,0,nWid,nHgt, \
                      sDC,0,0,srcWd,srcHt,SRCCOPY               ; scale source to destination

    rcall SelectObject,sDC,hOld                                 ; re select old object

    rcall DeleteDC,sDC                                          ; deallocate the device contexts
    rcall DeleteDC,dDC
    rcall ReleaseDC,hWin,hDC

    mov rax, nubmp                                              ; return new bitmap handle

    ret

scale_image_by_percent endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
