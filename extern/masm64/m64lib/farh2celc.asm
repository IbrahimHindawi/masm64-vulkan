; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

farh2celc proc degf:REAL8

    movsd xmm0, degf
    subsd xmm0, AFL8(32.0)
    divsd xmm0, AFL8(1.8)
    movsd degf, xmm0
    mov rax, degf

    ret

farh2celc endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
