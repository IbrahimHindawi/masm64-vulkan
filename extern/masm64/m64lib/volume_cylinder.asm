; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

volume_cylinder proc radius:REAL8,height:REAL8

    movsd xmm0, radius
    mulsd xmm0, xmm0                        ; r2
    mulsd xmm0, AFL8(3.141592653589793)     ; * pi
    mulsd xmm0, height                      ; * height
    movsd radius, xmm0
    mov rax, radius

    ret

volume_cylinder endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
