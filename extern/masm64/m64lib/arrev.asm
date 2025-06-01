; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NOSTACKFRAME

 arrev proc

  ; ----------------------------
  ; reverse an array of pointers
  ; ----------------------------
  ; rcx = array pointer
  ; rdx = array count

    mov r11, rcx                    ; array pointer in rcx
    xor rcx, rcx                    ; set rcx to zero
    sub rdx, 1

  @@:
    mov rax, [r11+rcx*8]
    mov r10, [r11+rdx*8]
    mov [r11+rdx*8], rax
    mov [r11+rcx*8], r10
    add rcx, 1
    sub rdx, 1
    cmp rcx, rdx
    jle @B

    ret

 arrev endp

 STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
