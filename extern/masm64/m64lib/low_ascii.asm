; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

NOSTACKFRAME

 low_ascii proc
  ; ------------------------------------------
  ; procedure strips out high ascii characters
  ; algorithm overwrites original source
  ; ARGUMENTS
  ;   1.  rcx = address of string to strip
  ;   2.  rdx = optional removal or space
  ;             replacement of high ascii char
  ;         0 = write nothing in its place
  ;     other = write space in its place
  ; ------------------------------------------
    mov r11, rcx                            ; load address into r11 as source
    mov r10, rcx                            ; destination is same address
    mov r9,  rdx                            ; optional replacement or removal
    sub r11, 1
    jmp lbl0                                ; jump into algo

  pre:
    test r9, r9                             ; test if option 0 is set
    jz lbl0                                 ; if 0, jump past and remove character
    mov BYTE PTR [r10], 32                  ; else write a space
    add r10, 1                              ; then increment r10

  lbl0:
  REPEAT 3
    add r11, 1
    movzx rax, BYTE PTR [r11]               ; zero extend byte to QWORD
    cmp rax, 127                            ; test if its 127 or greater
    jge pre                                 ; jump back to "pre" if it is
    mov BYTE PTR [r10], al                  ; write byte to destination
    add r10, 1                              ; increment r10
    test rax, rax                           ; test if last byte written is zero
    jz lbl1                                 ; jump to exit if 0
  ENDM

    add r11, 1
    movzx rax, BYTE PTR [r11]               ; zero extend byte to QWORD
    cmp rax, 127                            ; test if its 127 or greater
    jge pre                                 ; jump back to "pre" if it is
    mov BYTE PTR [r10], al                  ; write byte to destination
    add r10, 1                              ; increment r10
    test rax, rax                           ; test if last byte written is zero
    jnz lbl0                                ; loop back if its not

  lbl1:
    mov rax, rcx                            ; return source address
    ret                                     ; bye

 low_ascii endp

STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
