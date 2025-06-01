; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    externdef hextable:QWORD

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

bin2hex proc lpString:QWORD,lnString:QWORD,lpbuffer:QWORD

    LOCAL .rdi :QWORD

    mov .rdi, rdi

    mov r10, lpString                   ; address of source string
    mov r9,  lpbuffer                   ; address of output buffer
    mov rcx, r10
    add rcx, lnString                   ; exit condition for byte read
    xor r11, r11                        ; line counter
    lea rdi, hextable
    jmp hxlp

; -------------------------------------------------------------------------

  align 4
  hxpre:
    mov WORD PTR [r9], " -"             ; write centre seperator
    add r9, 2
  align 4
  pre:
    cmp r10, rcx                        ; test exit condition
    jge hxout                           ; mispredicted only once
  hxlp:
    movzx r8, BYTE PTR [r10]            ; zero extend byte into EBP
    mov dx, WORD PTR [r8*2+rdi]         ; put WORD from table into DX
    add r11, 1
    add r10, 1
    mov [r9], dx                        ; write 2 byte string to buffer
    mov BYTE PTR [r9+2], 32             ; write space
    add r9, 3
    cmp r11, 8                          ; test for half to add "-"
    je hxpre                            ; predicted backwards
    cmp r11, 16                         ; break line at 16 characters
    jne pre                             ; predicted backwards
    mov WORD PTR [r9-1], 0A0Dh          ; overwrite last byte with CRLF
    add r9, 1
    xor r11, r11                        ; clear line counter
    jmp pre                             ; predicted backwards
  hxout:

; -------------------------------------------------------------------------

    mov BYTE PTR [r9-1], 0              ; append terminator
    sub r9, 1

    sub r9, lpbuffer
    mov rax, r9                         ; return written length of hex output

    mov rdi, .rdi

    ret

bin2hex endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
