; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

sphere_area proc radius:REAL8               ; (surface area)

  ; pi x 4 x (r x 2) = 4 pi r2

    movsd xmm0, AFL8(3.141592653589793)     ; pi
    mulsd xmm0, AFL8(4.0)                   ; * 4
    movsd xmm1, radius                      ; radius
    mulsd xmm1, xmm1                        ; squared
    mulsd xmm0, xmm1                        ; (pi * 4) x (r * 2)
    movsd radius, xmm0
    mov rax, radius

    ret

sphere_area endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
