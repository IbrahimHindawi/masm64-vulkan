; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NOSTACKFRAME

 block_rtrim proc pstr:QWORD

    mov r9, rcx
    mov r10, rcx
    mov r11, rcx
    xor rcx, rcx                    ; current line location counter
    xor rdx, rdx                    ; current line length counter
    sub r10, 1
    jmp entry

  pre:
    test rax, rax
    jz quit

  entry:
    add r10, 1
    add rdx, 1                      ; increment line length
    movzx rax, BYTE PTR [r10]       ; read source byte
    cmp rax, 32
    jle lbl1
    mov rcx, rdx                    ; store line location for > 32

  lbl1:
    mov [r11], al                   ; write byte
    add r11, 1
    cmp rax, 13
    jne lbl2
    add rcx, 1                      ; increment to next write location
    sub rdx, rcx                    ; sub it from line length
    sub r11, rdx                    ; sub this from write location
    mov BYTE PTR [r11-1], 13        ; write 13 to new r11 position
    jmp entry

  lbl2:
    cmp rax, 10
    jne pre
    xor rcx, rcx                    ; reset both counters after ascii 10
    xor rdx, rdx
    jmp entry

  quit:
    mov BYTE PTR [r10], 0
    mov rax, r9

    ret

 block_rtrim endp

 STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
