; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 get_ext proc pname:QWORD,buff:QWORD
  ; -------------------------------------------------------------------------
  ; copy file extension after and not including period to use supplied buffer
  ; -------------------------------------------------------------------------
  ; pname = address of file name to get extension from
  ; buff  = the address of the output buffer
  ; -------------------------------------------------------------------------
    mov r11, buff                   ; load buffer address in r11
    mov rax, pname

    sub rax, 1
  lbl0:                             ; scan string to get length
    add rax, 1
    cmp BYTE PTR [rax], 0
    jne lbl0
    sub rax, pname
    mov r10, rax                    ; length in r10

    mov rax, pname
    mov rdx, pname                  ; store address in rdx for backwards cmp
    add rax, r10                    ; set current location to end of string

    cmp BYTE PTR [rax-1], "."       ; exit on trailing period
    je lblout

    add rax, 1
  lbl1:                             ; scan backwards to find period
    sub rax, 1
    cmp rax, rdx                    ; if no period
    je lblout                       ; exit with 0
    cmp BYTE PTR [rax], "."
    jne lbl1

  lbl2:                             ; copy extension to buffer
    add rax, 1
    movzx rcx, BYTE PTR [rax]
    mov BYTE PTR [r11], cl
    add r11, 1
    test rcx, rcx
    jnz lbl2

    mov rax, 1                      ; exit with non zero on success
    ret

  lblout:
    xor rax, rax                    ; exit with zero on no extension
    ret

 get_ext endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
