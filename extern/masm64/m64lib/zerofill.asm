; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

NOSTACKFRAME

zerofill proc

  ; rcx = memory address
  ; rdx = byte count

    mov r11, rdi        ; preserve RDI

    xor rax, rax        ; zero fill RAX
    mov rdi, rcx        ; memory address in RDI
    mov rcx, rdx        ; byte count into RCX
    shr rcx, 3          ; int div by 8
    rep stosq           ; write byte data

    mov rcx, rdx        ; byte count into RCX
    and rcx, 7          ; calculate remainder
    rep stosb           ; write byte data

    mov rdi, r11        ; restore RDI

    ret

zerofill endp

STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
