; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NOSTACKFRAME

 szSpace proc
  ; ---------------------------------------
  ; rcx = address of buffer to write spaces
  ; rdx = the number of spaces to write
  ; ---------------------------------------
    sub rcx, 1
  @@:
    add rcx, 1
    mov BYTE PTR [rcx], 32
    sub rdx, 1
    jnz @B

    mov BYTE PTR [rcx+1], 0
    ret

 szSpace endp

 STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end