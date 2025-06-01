; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 seed_rrand proc seed:QWORD

    .data?
      align 8
      rrand_seed@@@@ dq ?
      rrand_padd$$$$ dq ?
    .code

    mov rax, seed
    mov rrand_seed@@@@, rax

    ret

 seed_rrand endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 rrand PROC lowest:QWORD,highest:QWORD
  ; -------------------------------------------------------------
  ; algorithm generates random numbers between lowest and highest
  ; -------------------------------------------------------------
    mov rax, rrand_seed@@@@
    mov rdx, rrand_padd$$$$
    mov rrand_seed@@@@, rdx
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
    mov rrand_seed@@@@, rcx
    lea rax, [rdx+rcx]
    bswap rax
    mov rcx, lowest
    sub highest, rcx
    div highest
    mov rax, rdx
    add rax, lowest

    ret

 rrand ENDP

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
