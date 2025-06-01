; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 parse_arglist proc src:QWORD,parr:QWORD

    LOCAL acnt  :QWORD
    LOCAL hMem  :QWORD

    mov acnt, rvcall(arg_cnt@@@@,src,59)        ; hard coded ";"
    test rax, rax                               ; if 0, return zero
    jz @F
    mov rcx, rax
    add rcx, rcx                                ; double count for CRLF extra byte
    add rcx, len(src)                           ; add source length to it
    mov hMem, alloc(rcx)                        ; allocate calculated memory length
    invoke szRep,src,hMem,";",chr$(13,10)       ; replace ; with CRLF
    invoke ltok,hMem,parr                       ; tokenise members to array

    mov rax, acnt                               ; return array count
  @@:
    ret

 parse_arglist endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NOSTACKFRAME

 arg_cnt@@@@ proc
  ; ------------------------------------
  ; counts delimiter and adds 1 to count
  ; rcx = source         rdx = delimiter
  ; ------------------------------------
    mov r10, rcx
    cmp BYTE PTR [r10], 0
    jne @F
    xor rax, rax                ; exit on empty string with rax = 0
    ret

  @@:
    xor rax, rax                ; set rax to 0
    mov r11, rcx                ; load source address into r11
    sub r11, 1
  @@:
    add r11, 1
    cmp BYTE PTR [r11], 0       ; test for terminator
    je @F
    cmp BYTE PTR [r11], dl      ; test if delimiter
    jne @B
    add rax, 1                  ; increment the arg count
    jmp @B

  @@:
    add rax, 1                  ; return delimiter count + 1

    ret

 arg_cnt@@@@ endp

 STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
