; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NOSTACKFRAME

 wordtok proc                   ; psrc:QWORD, parr:QWORD, delm:QWORD

  ; -------------------------------------------
  ; tokenise text based on a supplied delimiter
  ; text is tokenised in place (no copy)
  ; rcx : psrc = pointer to text to tokenise
  ; rdx : parr = address of pointer array
  ; r8  : dlmt = delimiter as user supplied ascii char as number IE: 44 = ","
  ; return value = word or text count
  ; EXAMPLE : invoke wordtok,psrc,parr,44
  ; -------------------------------------------

    xor rax, rax                ; clear the counter

  pre:
    mov [rdx+rax*8], rcx        ; load next text address into rdx
    add rax, 1                  ; increment the arg counter

  lbl0:
    add rcx, 1
    movzx r11, BYTE PTR [rcx]
    test r11, r11               ; test for and exit on terminator
    jz bye
    sub r11, r8                 ; check if char is delimiter
    jz lbl1                     ; branch if delimiter

    add rcx, 1
    movzx r11, BYTE PTR [rcx]
    test r11, r11               ; test for and exit on terminator
    jz bye
    sub r11, r8                 ; check if char is delimiter
    jnz lbl0                    ; loop back if not

  lbl1:
    mov BYTE PTR [rcx], 0       ; terminate array member
    add rcx, 1                  ; increment to next arg 1st char
    jmp pre

  bye:
    ret

 wordtok endp

 STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
