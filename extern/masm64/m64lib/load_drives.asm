; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

comment # ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

      .case WM_COMMAND

        .switch lParam
          .case hCombo                                              ; combo notification via WM_COMMAND
          ; -------------------------------------------------
          ; get the HIWORD of wParam for notification message
          ; -------------------------------------------------
            mov rax, wParam                                         ; load wParam into rax
            ror rax, 16                                             ; rotate to get high word into ax
          .if ax == CBN_SELCHANGE                                   ; the notification message
            mov pbuf, ptr$(buff)                                    ; get buffer address
            mov indx, rvcall(SendMessage,hCombo,CB_GETCURSEL,0,0)   ; get the selected combo index
            rcall SendMessage,hCombo,CB_GETLBTEXT,indx,pbuf         ; get text from item at index
            mov pbuf, ltrim$(pbuf)                                  ; trim leading space
            mov pbuf, left$(pbuf,3)                                 ; get 1st 3 characters
            rcall SetWindowText,hWin,pbuf                           ; display text on title bar
            ret
          .endif
        .endsw

        # ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

load_drives proc combo_handle:QWORD
  ; --------------------------------------------------
  ; Called initially by the combo code and can be used
  ; to refresh list after removable media drive change
  ; --------------------------------------------------
    USING r12,r13,r14                                       ; select registers to use
    LOCAL string[128]   :BYTE
    LOCAL vinfo[128]    :BYTE
    LOCAL buffer[1024]  :BYTE

    SaveRegs                                                ; preserve selected registers

    rcall SendMessage,combo_handle,CB_RESETCONTENT,0,0      ; clear any previous content
    rcall GetLogicalDriveStrings,1024,ptr$(buffer)          ; get list of drives
    mov r13, ptr$(vinfo)                                    ; get address of volume info buffer
    mov r12, ptr$(buffer)
    sub r12, 1
  lpst:
    add r12, 1
    invoke GetVolumeInformation,r12,r13,128,0,0,0,0,0       ; obtain each volume info
    mov r14, ptr$(string)                                   ; get main buffer address
    mcat r14," ",r12," ",chr$(40),r13,chr$(41)              ; join text components
    rcall zerofill,r13,128                                  ; clear drive name buffer
    rcall SendMessage,combo_handle,CB_ADDSTRING,0,r14       ; append string to drive list
  @@:
    add r12, 1
    cmp BYTE PTR [r12], 0                                   ; test for zero separator
    jne @B
    cmp BYTE PTR [r12+1], 0                                 ; test for second zero terminator
    jne lpst

    rcall SendMessage,combo_handle,CB_SETCURSEL,0,0         ; set first drive as default

    RestoreRegs                                             ; restore selected registers

    ret

load_drives endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
