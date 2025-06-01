; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

ErrOut proc

  ; rcx = text address

    LOCAL bWritten :QWORD

    LOCAL64 @r12
    LOCAL64 @r13
    LOCAL64 @r14

    mov @r12, r12                       ; preserve non-volatile registers
    mov @r13, r13
    mov @r14, r14

    mov r12, rcx

    mov r13, function(GetStdHandle,STD_ERROR_HANDLE)

    mov rax, r12
    sub rax, 1
  @@:
    add rax, 1
    cmp BYTE PTR [rax], 0               ; get the text length
    jne @B
    sub rax, r12
    mov r14, rax

    invoke WriteFile,r13,r12,r14,ADDR bWritten,NULL
    mov rax, bWritten

    mov r12, @r12                       ; restore non-volatile registers
    mov r13, @r13
    mov r14, @r14

    ret

ErrOut endp

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
