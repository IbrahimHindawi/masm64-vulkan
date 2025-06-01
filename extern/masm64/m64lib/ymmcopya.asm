; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

NOSTACKFRAME

ymmcopya proc

  ; rcx = source address
  ; rdx = destination address
  ; r8  = byte count

    mov r11, r8
    shr r11, 5                  ; div by 32 for loop count
    xor r10, r10                ; zero r10 to use as index

  lpst:
    vmovntdqa ymm0, YMMWORD PTR [rcx+r10]
    vmovntdq YMMWORD PTR [rdx+r10], ymm0

    add r10, 32
    sub r11, 1
    jnz lpst

    mov rax, r8                 ; calculate remainder if any
    and rax, 31
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

ymmcopya endp

STACKFRAME

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
