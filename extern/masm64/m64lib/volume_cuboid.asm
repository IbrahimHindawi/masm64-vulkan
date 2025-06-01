; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

volume_cuboid proc ln1:REAL8,ln2:REAL8,ln3:REAL8

    movsd xmm0, ln1
    mulsd xmm0, ln2
    mulsd xmm0, ln3
    movsd ln1, xmm0
    mov rax, ln1

    ret

volume_cuboid endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
