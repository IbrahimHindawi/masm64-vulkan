; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

NOSTACKFRAME

remove_extension proc
  ; --------------------------------------------------------------------
  ; this technique replace the last period in the string with ascii zero
  ; --------------------------------------------------------------------
    mov rax, rcx                        ; copy rcx to rax
    sub rax, 1                          ; set up for loop

  @@:
    add rax, 1                          ; add 1 each iteration
    cmp BYTE PTR [rax], 0               ; loop until ascii 0
    jnz @B

  @@:
    sub rax, 1
    cmp rax, rcx                        ; compare current rax to the start address
    je noext                            ; exit if no period
    cmp BYTE PTR [rax], "."             ; scan backwards for period
    jne @B

    mov BYTE PTR [rax], 0               ; replace last period with ascii zero

  noext:
    ret

remove_extension endp

STACKFRAME

; ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

    end
