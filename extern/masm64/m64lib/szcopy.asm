; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

NOSTACKFRAME

szCopy proc

  ; rcx = src address
  ; rdx = dst address

    mov r10, rdx
    mov r11, -1
  lbl0:
  REPEAT 3
    add r11, 1
    movzx rax, BYTE PTR [rcx+r11]
    mov [rdx+r11], al
    test rax, rax
    jz lbl1
  ENDM

    add r11, 1
    movzx rax, BYTE PTR [rcx+r11]
    mov [rdx+r11], al
    test rax, rax
    jnz lbl0

  lbl1:
    mov rax, r10

    ret

szCopy endp

STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
