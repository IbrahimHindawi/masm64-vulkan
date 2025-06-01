; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

rhombus_area proc diag_large:REAL8,diag_small:REAL8

    movsd xmm0, diag_large
    mulsd xmm0, diag_small
    mulsd xmm0, AFL8(0.5)
    movsd diag_large, xmm0
    mov rax, diag_large

    ret

rhombus_area endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
