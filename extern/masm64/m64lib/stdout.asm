; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

StdOut proc

  ; rcx = text address

    LOCAL bwrt  :QWORD
    LOCAL .r14  :QWORD
    LOCAL .r15  :QWORD

    mov .r14, r14                       ; preserve non-volatile registers
    mov .r15, r15

    mov r14, rcx                        ; store address in r14
    mov rax, r14
    sub rax, 1
  @@:
    add rax, 1
    cmp BYTE PTR [rax], 0               ; get the text length
    jne @B
    sub rax, r14                        ; sub original address from RAX
    mov r15, rax                        ; save string length into r15

    invoke GetStdHandle,STD_OUTPUT_HANDLE
    invoke WriteFile,rax,r14,r15,ADDR bwrt,NULL

    mov r14, .r14                       ; restore non-volatile registers
    mov r15, .r15

    mov rax, bwrt                       ; return value is bytes written

    ret

StdOut endp

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
