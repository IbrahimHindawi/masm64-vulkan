; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

GetAppName proc

  ; rcx = address path buffer

    LOCAL pBuf  :QWORD

    mov pBuf, rcx

    invoke GetModuleFileName,0,pBuf,256
    add rax, pBuf                   ; add buffer address for string end

  lpst:
    sub rax, 1
    cmp BYTE PTR [rax], "\"         ; scan backwards to find "\"
    jne lpst

    add rax, 1                      ; inc past "\"
    mov r10, pBuf                   ; load original address into r10

    xor r11, r11                    ; zero the index
  lp2:
    movzx rdx, BYTE PTR [rax+r11]   ; copy filename to start of buffer
    mov BYTE PTR [r10+r11], dl
    add r11, 1
    test rdx, rdx
    jnz lp2

    mov rax, pBuf                   ; return buffer address

    ret

GetAppName endp

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
