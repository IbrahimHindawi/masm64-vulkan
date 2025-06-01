; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

NOSTACKFRAME

 lfcnt proc

  ; rcx = text address

  ; ---------------------------------------------
  ; get line count of text by counting line feeds
  ; ---------------------------------------------

    mov rax, -1
    sub rcx, 1

  pre:
    add rax, 1                              ; add 1 to return value if LF found
  @@:
  REPEAT 3
    add rcx, 1
    movzx rdx, BYTE PTR [rcx]               ; single memory read per iteration
    cmp rdx, 10
    je pre
    test rdx, rdx                           ; test for zero terminator
    jz lblout
  ENDM
    add rcx, 1
    movzx rdx, BYTE PTR [rcx]               ; single memory read per iteration
    cmp rdx, 10
    je pre
    test rdx, rdx                           ; test for zero terminator
    jnz @B

  lblout:
    ret

 lfcnt endp

STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
