; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

xor_data proc lpSource:QWORD,ln:QWORD,lpKey:QWORD,lnKey:QWORD
  ; -------------------------------------------
  ; lpSource    the string to encrypt
  ; ln          the length of the source string
  ; lpKey       the pad to xor it with
  ; lnKey       the length of the pad
  ; -------------------------------------------
    LOCAL .rsi :QWORD
    LOCAL .rdi :QWORD
    LOCAL .rbx :QWORD

    mov .rsi, rsi
    mov .rdi, rdi
    mov .rbx, rbx

    mov rax, lpKey
    mov rbx, rax
    add rax, lnKey
    mov rdi, rax

    mov r11, lpKey
    mov al,[r11]
    mov sil, al        ; put 1st byte in sil

    mov rcx, ln
    mov r11, lpSource
    mov r10, lpSource

  xsSt:
    mov al,[r11]        ; copy 1st byte of source into al
    add r11, 1

    xor al, sil        ; xor al with next byte in sil

  ; --------------------------------------------------------------
  ; ------- This code gets the next byte in the key string -------
  ; --------------------------------------------------------------
    push rax
    push r11

    add rbx, 1         ; increment byte address
    mov r11, rbx       ; put it in r11
    mov al,[r11]
    add r11, 1

    mov r9, rdi
    cmp rbx, r9
    jne @F

    mov rdx, lpKey     ; put key start address in rdx
    mov rbx, rdx       ; reset rbx to original address
    mov r11, rbx       ; put original address in r11

    mov al,[r11]
    add r11, 1

  @@:
    mov sil, al

    pop r11
    pop rax
  ; --------------------------------------------------------------

    mov [r10], al
    add r10, 1
    sub rcx, 1
    test rcx, rcx
    jnz xsSt

    mov rsi, .rsi
    mov rdi, .rdi
    mov rbx, .rbx

    ret

xor_data endp

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
