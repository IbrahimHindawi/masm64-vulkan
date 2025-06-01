; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

szRep proc src:QWORD,dst:QWORD,txt1:QWORD,txt2:QWORD

    mov r8, len(src)            ; procedure call for src length
    sub r8, len(txt1)           ; procedure call for 1st text length

    mov r11, src
    add r8, r11                 ; set exit condition
    mov r9, txt1
    add r8, 1                   ; adjust to get last character
    mov r10, dst
    sub r11, 1
    jmp rpst
  ; ----------------------------
  align 4
  pre:
    add r11, rcx                ; rcx = len of txt1, add it to r11 for next read
  align 4
  rpst:
    add r11, 1
    cmp r8, r11                 ; test for exit condition
    jle rpout
    movzx rax, BYTE PTR [r11]   ; load byte from source
    cmp al, [r9]                ; test it against 1st character in txt1
    je test_match
    mov [r10], al               ; write byte to destination
    add r10, 1
    jmp rpst
  ; ----------------------------
  align 4
  test_match:
    mov rcx, -1                 ; clear RCX to use as index
    mov rdx, r9                 ; load txt1 address into EDX
  @@:
    add rcx, 1
    movzx rax, BYTE PTR [rdx]
    test rax, rax               ; if you have got to the zero
    jz change_text              ; replace the text in the destination
    add rdx, 1
    cmp [r11+rcx], al           ; keep testing character matches
    je @B
    movzx rax, BYTE PTR [r11]   ; if text does not match
    mov [r10], al               ; write byte at r11 to destination
    add r10, 1
    jmp rpst
  ; ----------------------------
  align 4
  change_text:                  ; write txt2 to location of txt1 in destination
    mov rdx, txt2
    sub rcx, 1
  @@:
    movzx rax, BYTE PTR [rdx]
    test rax, rax
    jz pre
    add rdx, 1
    mov [r10], al
    add r10, 1
    jmp @B
  ; ----------------------------
  align 4
  rpout:                        ; write any last bytes and terminator
    mov rcx, -1
  @@:
    add rcx, 1
    movzx rax, BYTE PTR [r11+rcx]
    mov [r10+rcx], al
    test rax, rax
    jnz @B

    ret

szRep endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
