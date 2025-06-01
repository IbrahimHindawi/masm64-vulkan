; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

CmdParser proc

    USING r12,r13
    LOCAL args  :QWORD
    LOCAL pmem  :QWORD
    LOCAL pbuf  :QWORD
    LOCAL lnst  :QWORD
    LOCAL acnt  :QWORD
    LOCAL flag  :QWORD
    LOCAL cloc  :QWORD

    SaveRegs

    mov acnt, 0
    mov flag, 0
    mov cloc, 0

    mov args, rvcall(cmd_tail)                              ; get address of command tail
    mov args, trim$(args)                                   ; remove any leading or trailing spaces
    mov lnst, len(args)                                     ; get the command tail length

    mov rax, lnst
    add rax, rax
    mov pmem, alloc(rax)                                    ; allocate buffer double source length
    mov pbuf, alloc(65536)                                  ; allocate large temp buffer

    mov r13, pbuf                                           ; load address into r13
    mov r12, args                                           ; load arg address into r12
    sub r12, 1

  pre:
    add r12, 1
    cmp BYTE PTR [r12], 32                                  ; strip leading spaces
    je pre

    sub r12, 1
  stlbl:
    add r12, 1
    movzx rax, BYTE PTR [r12]                               ; load zero extended byte into rax

    .if rax == 34
      .if flag == 0                                         ; toggle flag on alternate double quotes
        mov flag, 1
      .else
        mov flag, 0
      .endif
    .endif

    mov BYTE PTR [r13], al                                  ; copy byte to r13
    add r13, 1

    .if flag == 0
      cmp rax, 32                                           ; branch on space if flag not set
      je nxt
    .endif

    test rax, rax                                           ; exit loop on terminator
    jz bye
    jmp stlbl

  nxt:
    mov BYTE PTR [r13], 0                                   ; terminate each arg

    rcall szRtrim,pbuf,pbuf
    mov cloc, rvcall(szappend,pmem,pbuf,cloc)               ; write each arg to temp buffer
    mov cloc, rvcall(szappend,pmem,chr$(13,10),cloc)        ; append a CRLF to each arg
    add acnt, 1
    mov r13, pbuf                                           ; reset the buffer
    jmp pre

  bye:
    rcall szRtrim,pbuf,pbuf
    mov cloc, rvcall(szappend,pmem,pbuf,cloc)               ; write last arg to temp buffer
    mov cloc, rvcall(szappend,pmem,chr$(13,10),cloc)        ; append a CRLF to the last arg

    mfree pbuf                                              ; free temp buffer memory
    mfree args                                              ; free memory for command tail

    add acnt, 1
    mov rax, pmem                                           ; return memory address in rax
    mov rcx, acnt                                           ; return array count in rcx

    RestoreRegs

    ret

CmdParser endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
