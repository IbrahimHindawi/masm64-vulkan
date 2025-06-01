; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

triangle_area proc tBase:REAL8,tHgt:REAL8

    movsd xmm0, tBase
    mulsd xmm0, tHgt
    mulsd xmm0, AFL8(0.5)
    movsd tBase, xmm0
    mov rax, tBase

    ret

triangle_area endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
