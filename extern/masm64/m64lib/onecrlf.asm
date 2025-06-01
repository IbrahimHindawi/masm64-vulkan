; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NOSTACKFRAME

 onecrlf proc
  ; -----------------------------
  ; rcx = string address
  ; return value = written length
  ; -----------------------------
    mov r10, rcx                    ; src
    mov r11, rcx                    ; dst

    sub r10, 1
  lbl0:
    add r10, 1
    movzx rax, BYTE PTR [r10]
    cmp rax, 13                     ; branch on ascii 13
    je lbl1
    mov BYTE PTR [r11], al          ; write dest byte
    add r11, 1
    test rax, rax                   ; test if last byte is zero
    jnz lbl0                        ; jump back if not

    sub r11, rcx                    ; sub src address to get write length
    sub r11, 1                      ; correct for counting ascii zero
    mov rax, r11                    ; store result in rax
    ret

  lbl1:
    mov BYTE PTR [r11], 13          ; write single CRLF pair
    add r11, 1
    mov BYTE PTR [r11], 10
    add r11, 1

  coll:
    add r10, 1
    movzx rax, BYTE PTR [r10]
    cmp rax, 13                     ; throw away any further CRLF characters
    je coll
    cmp rax, 10
    je coll
    sub r10, 1
    jmp lbl0

 onecrlf endp

 STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
