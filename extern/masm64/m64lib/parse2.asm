; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

 parse2 proc src:QWORD,arg1:QWORD,arg2:QWORD

    mov r11, src
    sub r11, 1
    mov r10, arg1
    mov r9, arg2

  lbl1:
    add r11, 1
    cmp BYTE PTR [r11], 0
    je error
    cmp BYTE PTR [r11], ";"     ; the seperator
    je @F
    movzx rax, BYTE PTR [r11]
    mov BYTE PTR [r10], al
    add r10, 1
    jmp lbl1

  @@:
    mov BYTE PTR [r10], 0

  lbl2:
    add r11, 1
    cmp BYTE PTR [r11], 0
    je bye
    movzx rax, BYTE PTR [r11]
    mov BYTE PTR [r9], al
    add r9, 1
    jmp lbl2

  error:
    xor rax, rax                ; return 0 on error
    ret

  bye:
    mov BYTE PTR [r9], 0
    rcall szTrim,arg1
    rcall szTrim,arg2

    mov rax, 1                  ; return non 0 if OK

    ret

 parse2 endp

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
