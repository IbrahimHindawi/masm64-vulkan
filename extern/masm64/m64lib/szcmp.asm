; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

NOSTACKFRAME

szCmp proc

  ; ----------------------------------------
  ; scan 2 zero terminated strings for match
  ; ----------------------------------------

  ; rcx = str1
  ; rdx = str2

    mov r11, -1

  stlp:
  REPEAT 3
    add r11, 1
    movzx rax, BYTE PTR [rcx+r11]
    test rax, rax
    jz match
    cmp al, [rdx+r11]
    jne nomatch
  ENDM

    add r11, 1
    movzx rax, BYTE PTR [rcx+r11]
    test rax, rax
    jz match
    cmp al, [rdx+r11]
    je stlp

  nomatch:
    xor rax, rax
    ret

  match:
    mov rax, r11
    ret

szCmp endp

STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
