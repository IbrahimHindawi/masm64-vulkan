; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

celc2farh proc degc:REAL8

    movsd xmm0, degc
    mulsd xmm0, AFL8(1.8)
    addsd xmm0, AFL8(32.0)
    movsd degc, xmm0
    mov rax, degc

    ret

celc2farh endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
