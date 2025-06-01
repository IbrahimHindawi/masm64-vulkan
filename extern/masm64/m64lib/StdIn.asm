; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

StdIn proc lpszBuffer:QWORD,bLen:QWORD

    LOCAL hInput :QWORD
    LOCAL bRead  :QWORD

    invoke GetStdHandle,STD_INPUT_HANDLE
    mov hInput, rax

    invoke SetConsoleMode,hInput,ENABLE_LINE_INPUT or \
                                 ENABLE_ECHO_INPUT or \
                                 ENABLE_PROCESSED_INPUT

    invoke ReadFile,hInput,lpszBuffer,bLen,ADDR bRead,NULL

  ; -------------------------------
  ; strip the CR LF from the result
  ; -------------------------------
    mov rdx, lpszBuffer
    sub rdx, 1
  @@:
    add rdx, 1
    cmp BYTE PTR [rdx], 0
    je @F
    cmp BYTE PTR [rdx], 13
    jne @B
    mov BYTE PTR [rdx], 0
  @@:

    mov rax, bRead
    sub rax, 2

    ret

StdIn endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
