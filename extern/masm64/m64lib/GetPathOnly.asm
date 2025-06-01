; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 GetPathOnly proc src:QWORD, dst:QWORD

    xor rcx, rcx    ; zero counter
    mov r10, src
    mov r11, dst
    xor rdx, rdx    ; zero backslash location

  @@:
    mov al, [r10]   ; read byte from address in r10
    inc r10
    inc rcx         ; increment counter
    cmp al, 0       ; test for zero
    je gfpOut       ; exit loop on zero
    cmp al, "\"     ; test for "\"
    jne nxt1        ; jump over if not
    mov rdx, rcx    ; store counter in rcx = last "\" offset in rcx
  nxt1:
    mov [r11], al   ; write byte to address in r11
    inc r11
    jmp @B
    
  gfpOut:
    add rdx, dst    ; add destination address to offset of last "\"
    mov [rdx], al   ; write terminator to destination

    ret

 GetPathOnly endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
