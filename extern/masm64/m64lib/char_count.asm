; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NOSTACKFRAME

 char_count proc
  ; ---------------------------------------------
  ; write count for each character into array
  ; rcx = address of text to count
  ; rdx = address of zero filled array of 256 x 8
  ; ---------------------------------------------
    mov r11, rcx
    mov r10, rdx
    sub r11, 1
  ; -----------
  ; unroll by 4
  ; -----------
  lbl0:
    add r11, 1
    movzx rax, BYTE PTR [r11]           ; zero extend each byte into rax
    add QWORD PTR [r10+rax*8], 1        ; increment the count for that character
    test rax, rax
    jz lbl1

    add r11, 1
    movzx rax, BYTE PTR [r11]
    add QWORD PTR [r10+rax*8], 1
    test rax, rax
    jz lbl1

    add r11, 1
    movzx rax, BYTE PTR [r11]
    add QWORD PTR [r10+rax*8], 1
    test rax, rax
    jz lbl1

    add r11, 1
    movzx rax, BYTE PTR [r11]
    add QWORD PTR [r10+rax*8], 1
    test rax, rax
    jnz lbl0

  lbl1:
    sub r11, rcx                        ; calculate the length of the source
    mov rax, r11                        ; return it to the caller

    ret

 char_count endp

 STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
