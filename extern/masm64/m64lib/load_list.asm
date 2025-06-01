; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

load_list proc hListBox:QWORD,plist:QWORD

    USING r12,r13                                           ; select protected registers to use

    SaveRegs                                                ; save selected registers

    rcall SendMessage,hListBox,WM_SETREDRAW,FALSE,0         ; turn off the redraw
    rcall SendMessage,hListBox,LB_RESETCONTENT,0,0          ; clear the list box

    mov r12, rvcall(lntok,plist)                            ; tokenise and return array address
    mov r13, rcx                                            ; load array line count into r13

  @@:
    rcall SendMessage,hListBox,LB_ADDSTRING,0,QWORD PTR [r12]  ; add each line to list box
    add r12, 8                                              ; add 8 for next line of text
    sub r13, 1                                              ; decrement the line counter
    jnz @B                                                  ; loop back if not zero

    rcall GlobalFree,r13                                    ; free the tokeniser memory
    rcall SendMessage,hListBox,WM_SETREDRAW,TRUE,0          ; turn redraw back on again

    RestoreRegs                                             ; restore selected registers

    ret

load_list endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
