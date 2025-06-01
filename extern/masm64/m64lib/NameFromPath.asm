; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NameFromPath proc src:QWORD,dst:QWORD

    mov r10, src
    mov rcx, r10
    mov rdx, -1
    xor rax, rax

  @@:
    add rdx, 1
    cmp BYTE PTR [r10+rdx], 0       ; test for terminator
    je @F
    cmp BYTE PTR [r10+rdx], "\"     ; test for "\"
    jne @B
    mov rcx, rdx
    jmp @B
  @@:
    cmp rcx, r10                    ; test if rcx has been modified
    je error                        ; exit on error if it is the same
    lea rcx, [rcx+r10+1]            ; add ESI to rcx and increment to following character
    mov r11, dst                    ; load destination address
    mov rdx, -1
  @@:
    add rdx, 1
    mov al, [rcx+rdx]               ; copy file name to destination
    mov [r11+rdx], al
    test al, al                     ; test for written terminator
    jnz @B

    sub rax, rax                    ; return value zero on success
    jmp nfpout

  error:
    mov rax, -1                     ; invalid path no "\"

  nfpout:

    ret

 NameFromPath endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
