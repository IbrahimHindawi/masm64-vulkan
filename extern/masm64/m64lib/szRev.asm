; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NOSTACKFRAME

 szRev proc

  ; ------------------------------------
  ; this version will reverses a string
  ; in a single memory buffer so it can
  ; accept the same address as both src
  ; and dst.
  ; ------------------------------------

    mov r11, rcx            ; load source
    mov r10, rdx            ; load destination
    mov r9,  rdx            ; load destination again
    xor rax, rax            ; use rax as a counter

  ; ---------------------------------------
  ; first loop gets the buffer length and
  ; copies the first buffer into the second
  ; ---------------------------------------
  @@:
    mov dl, [r11+rax]       ; copy source to dest
    mov [r10+rax], dl
    add rax, 1              ; get the length in ECX
    test dl, dl
    jne @B

    mov r11, r9             ; put dest address in r11
    mov r10, r9             ; same in r10
    sub rax, 1              ; correct for exit from 1st loop
    lea r10, [r10+rax-1]    ; end address in r10
    shr rax, 1              ; int divide length by 2
    neg rax                 ; invert sign
    sub r11, rax            ; sub half len from r11

  ; ------------------------------------------
  ; second loop swaps end pairs of bytes until
  ; it reaches the middle of the buffer
  ; ------------------------------------------
  @@:
    mov cl, [r11+rax]       ; load end pairs
    mov dl, [r10]
    mov [r11+rax], dl       ; swap end pairs
    mov [r10], cl
    sub r10, 1
    add rax, 1
    jnz @B                  ; exit on half length

    mov rax, r9             ; return destination address

    ret

 szRev endp

 STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
