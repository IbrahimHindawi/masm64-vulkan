; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

NOSTACKFRAME

szRtrim proc

  ; rcx = src
  ; rdx = dst

    mov r11, rdx

    mov r9, -1                      ; use r9 as index
  @@:
    add r9, 1                       ; get the src length
    movzx rax, BYTE PTR [rcx+r9]    ; copy src to dst
    mov BYTE PTR [rdx+r9], al
    test rax, rax
    jnz @B

    add rdx, r9                     ; length is in r9
  lbl1:
    sub rdx, 1
    cmp BYTE PTR [rdx], 32
    je lbl1
    cmp BYTE PTR [rdx], 9
    je lbl1

    mov BYTE PTR [rdx+1], 0
    mov rax, r11

    ret

szRtrim endp

STACKFRAME

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
