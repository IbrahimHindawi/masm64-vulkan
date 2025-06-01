; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

txt2mem proc source:QWORD,buffer:QWORD,spos:QWORD,flag:QWORD

comment * ----------------------------------------------------
    source  =   address of string to write to memory
    buffer  =   buffer to write string to.
    spos    =   starting position in buffer to write to
    flag    =   0 to append CRLF, non zero if no CRLF required
        ---------------------------------------------------- *

    mov r10, source                     ; source address in r10
    mov r11, buffer                     ; buffer address in r11
    add r11, spos                       ; add starting position to buffer address
    xor rax, rax                        ; clear index and counter
    xor rcx, rcx                        ; prevent stall

  lbl0:
  REPEAT 3
    movzx rcx, BYTE PTR [r10+rax]
    mov [r11+rax], cl
    add rax, 1
    test rcx, rcx                       ; exit loop if zero is written
    jz lbl1
  ENDM

    movzx rcx, BYTE PTR [r10+rax]
    mov [r11+rax], cl
    add rax, 1
    test rcx, rcx                       ; exit loop if zero is written
    jnz lbl0

  lbl1:
    cmp flag, 0                         ; test flag if a CRLF is to be appended
    jne @F
    mov WORD PTR [r11+rax-1], 0A0Dh     ; append CRLF to current location
    add rax, 2
    mov BYTE PTR [r11+rax], 0           ; zero terminate CRLF
  @@:

    sub rax, 1
    mov rcx, rax                        ; bytes written returned in RCX
    add rax, spos                       ; updated "spos" returned in RAX

    ret

txt2mem endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
