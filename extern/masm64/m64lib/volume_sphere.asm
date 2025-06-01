; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

volume_sphere proc radius:REAL8             ; 4 / 3 * pi * r3

    loadsd xmm0, 1.333333333333333          ; 4 / 3
    mulsd xmm0, AFL8(3.141592653589793)     ; * pi
    movsd xmm1, radius                      ; radius
    mulsd xmm1, xmm1                        ; squared
    mulsd xmm1, radius                      ; squared * radius (r3)
    mulsd xmm0, xmm1                        ; mul by xmm1
    movsd radius, xmm0
    mov rax, radius

    ret

volume_sphere endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
