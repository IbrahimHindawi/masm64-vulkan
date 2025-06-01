; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

circle_area proc radius:REAL8

    movsd xmm0, radius                      ; radius
    mulsd xmm0, xmm0                        ; squared
    mulsd xmm0, AFL8(3.141592653589793)     ; * pi
    movsd radius, xmm0                      ; write back to REAL8
    mov rax, radius                         ; return value in rax

    ret
 
circle_area endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
