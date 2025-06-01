; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 parse5 proc src:QWORD,arg1:QWORD,arg2:QWORD,arg3:QWORD,arg4:QWORD,arg5:QWORD

    mov r11, src
    sub r11, 1

  ; -----------------------------

    mov r10, arg1               ; load 1st arg
  @@:
    add r11, 1
    cmp BYTE PTR [r11], 0
    je error
    cmp BYTE PTR [r11], ";"     ; the seperator
    je @F
    movzx rax, BYTE PTR [r11]
    mov BYTE PTR [r10], al
    add r10, 1
    jmp @B
  @@:
    mov BYTE PTR [r10], 0       ; terminate arg1

  ; -----------------------------

    mov r10, arg2               ; load 2nd arg
  @@:
    add r11, 1
    cmp BYTE PTR [r11], 0
    je error
    cmp BYTE PTR [r11], ";"     ; the seperator
    je @F
    movzx rax, BYTE PTR [r11]
    mov BYTE PTR [r10], al
    add r10, 1
    jmp @B
  @@:
    mov BYTE PTR [r10], 0       ; terminate arg2

  ; -----------------------------

    mov r10, arg3               ; load 3rd arg
  @@:
    add r11, 1
    cmp BYTE PTR [r11], 0
    je error
    cmp BYTE PTR [r11], ";"     ; the seperator
    je @F
    movzx rax, BYTE PTR [r11]
    mov BYTE PTR [r10], al
    add r10, 1
    jmp @B
  @@:
    mov BYTE PTR [r10], 0       ; terminate arg3

  ; -----------------------------

    mov r10, arg4               ; load 4rd arg
  @@:
    add r11, 1
    cmp BYTE PTR [r11], 0
    je error
    cmp BYTE PTR [r11], ";"     ; the seperator
    je @F
    movzx rax, BYTE PTR [r11]
    mov BYTE PTR [r10], al
    add r10, 1
    jmp @B
  @@:
    mov BYTE PTR [r10], 0       ; terminate arg4

  ; -----------------------------

    mov r10, arg5               ; load 5th arg
  @@:
    add r11, 1
    cmp BYTE PTR [r11], 0       ; end zero terminates arg5
    je bye
    movzx rax, BYTE PTR [r11]
    mov BYTE PTR [r10], al
    add r10, 1
    jmp @B

  ; -----------------------------

  bye:
    rcall szTrim,arg1
    rcall szTrim,arg2
    rcall szTrim,arg3
    rcall szTrim,arg4
    rcall szTrim,arg5
    mov rax, 1                  ; return non 0 if OK
    ret

  error:
    xor rax, rax
    ret

 parse5 endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
