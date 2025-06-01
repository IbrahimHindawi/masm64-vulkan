; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NOSTACKFRAME

 bcopy proc

  ; rcx = src
  ; rdx = dst
  ; r8  = count

    mov r11, rsi
    mov r10, rdi

    mov rsi, rcx
    mov rdi, rdx
    mov rcx, r8

    rep movsb

    mov rsi, r11
    mov rdi, r10

    ret

 bcopy endp

 STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
