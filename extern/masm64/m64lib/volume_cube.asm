; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

volume_cube proc lnth:REAL8

    movsd xmm0, lnth
    mulsd xmm0, xmm0
    mulsd xmm0, lnth
    movsd lnth, xmm0
    mov rax, lnth

    ret

volume_cube endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
