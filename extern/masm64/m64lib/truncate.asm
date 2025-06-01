; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NOSTACKFRAME

 truncate proc
  ; -----------------------------------------------------
  ; truncate the number of digits after the decimal point
  ; -----------------------------------------------------
  ; rcx = string address
  ; rdx = decimal place count

    sub rcx, 1
  @@:
    add rcx, 1
    cmp BYTE PTR [rcx], 0           ; exit on zero if no period
    je bye
    cmp BYTE PTR [rcx], "."         ; scan until the decimal point
    jne @B

    test rdx, rdx                   ; if rdx not 0
    jnz nxt                         ; bypass "0" settings
    mov BYTE PTR [rcx], "."         ; write decimal point
    mov BYTE PTR [rcx+1], "0"       ; a trailing 0
    mov BYTE PTR [rcx+2], 0         ; terminate the string
    ret                             ; return to caller

  nxt:
    add rdx, 1                      ; correct for period

  @@:
    add rcx, 1
    cmp BYTE PTR [rcx], 0           ; scan until rdx count
    je bye
    sub rdx, 1
    jnz @B

    mov BYTE PTR [rcx], 0           ; terminate string on rdx count
  bye:

    ret

 truncate endp

 STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
