; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

cmd_tail proc

  ; --------------------------------------------------------------------
  ; return value is the address of the command tail. Release the memory
  ; when no longer required with GlobalFree() or the macro mfree
  ; --------------------------------------------------------------------

    USING r12,r13,r14

    SaveRegs

    mov r12, rvcall(GetCommandLine)
    mov r13, len(r12)
    mov r14, alloc(r13)

    rcall mcopy,r12,r14,r13

    mov r11, r12
    sub r11, 1

  lpst:
    add r11, 1
    cmp BYTE PTR [r11], 34              ; if lead character = "
    je stripquoted
    sub r11, 1

  notquoted:
    add r11, 1
    cmp BYTE PTR [r11], 0               ; exit on empty command tail
    je zeroexit
    cmp BYTE PTR [r11], 32              ; space
    jne notquoted
    jmp tailtrim

  stripquoted:
    add r11, 1
  @@:
    add r11, 1
    cmp BYTE PTR [r11], 0               ; exit on empty command tail
    je zeroexit
    cmp BYTE PTR [r11], 34
    jne @B
    add r11, 1

  tailtrim:
    add r11, 1
    cmp BYTE PTR [r11], 32              ; trim any spaces from front
    je tailtrim
    cmp BYTE PTR [r11], 9               ; trim any tabs from front
    je tailtrim

    mov r10, r14                        ; load output buffer address
    xor rcx, rcx                        ; zero index
    sub rcx, 1
  copytail:
    add rcx, 1
    mov al, [r11+rcx]                   ; copy tail to output buffer
    mov [r10+rcx], al
    test al, al
    jnz copytail

    mov rax, r14                        ; return output buffer in RAX
    ret

  zeroexit:
    mov rax, r14
    mov BYTE PTR [rax], 0               ; zero 1st byte of r14
    mov rax, r14                        ; return zeroed buffer in RAX

    RestoreRegs

    ret

cmd_tail endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
