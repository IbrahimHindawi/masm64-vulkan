; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

NOSTACKFRAME

 szRight$ proc
  ; ---------------------
  ; rcx = string address
  ; rdx = character count
  ; ---------------------
    mov rax, rcx                ; load address in rax
    mov r11, rcx                ; save copy to r11
    sub rax, 1                  ; set up following loop

  @@:
  REPEAT 3                      ; unroll by 4
    add rax, 1
    cmp BYTE PTR [rax], 0
    je @F
  ENDM
    add rax, 1
    cmp BYTE PTR [rax], 0
    jne @B

  @@:
    sub rax, rcx                ; length in rax

    add rcx, rax                ; add length to string address
    sub rcx, rdx                ; sub length from rcx

    cmp rcx, r11                ; test if rcx below original address
    jb @F
    mov rax, rcx                ; return new offset in rax
    ret

  @@:
    mov rax, r11                ; return original address if count longer the string
    ret

szRight$ endp

STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
