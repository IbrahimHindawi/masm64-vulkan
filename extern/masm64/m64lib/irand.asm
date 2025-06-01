; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NOSTACKFRAME

 seed_irand proc
  ; -----------------
  ; rcx = seed number
  ; -----------------
    .data?
      align 8
      irand_seed_@_@ dq ?
      irand_padd_$_$ dq ?
    .code

    mov irand_seed_@_@, rcx

    ret

 seed_irand endp

 STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NOSTACKFRAME

 irand PROC

    mov rax, irand_seed_@_@
    mov rdx, irand_padd_$_$
    mov irand_seed_@_@, rdx
    mov rcx, rax
    shl rcx, 23
    xor rax, rcx
    mov rcx, rax
    xor rcx, rdx
    shr rax, 17
    xor rcx, rax
    mov rax, rdx
    shr rax, 26
    xor rcx, rax
    mov irand_padd_$_$, rcx
    lea rax, [rdx+rcx]
    bswap rax                                       ; invert byte order

    ret

 irand ENDP

 STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
