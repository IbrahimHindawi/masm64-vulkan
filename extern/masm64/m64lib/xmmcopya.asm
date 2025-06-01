; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

NOSTACKFRAME

xmmcopya proc

  ; *********************
  ;  aligned memory copy
  ; *********************

  ; rcx = source address
  ; rdx = destination address
  ; r8  = byte count

    mov r11, r8
    shr r11, 4                  ; div by 16 for loop count
    xor r10, r10                ; zero r10 to use as index

    cmp r8, 16
    jle @F


  lpst:
    movdqa xmm0, [rcx+r10]
    movntdq [rdx+r10], xmm0
    add r10, 16
    sub r11, 1
    jnz lpst

    mov rax, r8                 ; calculate remainder if any
    and rax, 15
    test rax, rax
    jnz @F
    ret

  @@:
    mov r9b, [rcx+r10]          ; copy any remainder
    mov [rdx+r10], r9b
    add r10, 1
    sub rax, 1
    jnz @B

    ret

xmmcopya endp

STACKFRAME

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
