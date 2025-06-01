; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

inbin proc stpos:QWORD,src:QWORD,stlen:QWORD,patn:QWORD,plen:QWORD

  ; ---------------------------------------------------------
  ; ARGUMENTS
  ; ---------
  ; 1. stpos        offset from src start address
  ; 2. src          start address of data to search
  ; 3. stlen         1 based length of src
  ; 4. patn         address of pattern to search for
  ; 5. plen         1 based length of pattern

  ; RETURN VALUES
  ; -------------
  ; 0 or greater    OFFSET of matched pattern
  ; -1              pattern not found
  ; -2              pattern > source length
  ; -3              start OFFSET > last valid search position
  ; ---------------------------------------------------------

    mov rcx, stlen                  ; load source length
    sub rcx, plen                   ; calculate last search position
    js errquit1                     ; if pattern > source length
    cmp stpos, rcx
    jg errquit2                     ; if startpos > last sch position
    mov r10, src                    ; load the source address in r10
    mov r11, patn                   ; load the pattern address in r11
    movzx r9, BYTE PTR [r11]        ; get the 1st byte of the pattern
    add rcx, r10                    ; add ESI to the exit count
    sub QWORD PTR plen, 1           ; correct for zero based match loop counter
    sub r10, 1
    add r10, QWORD PTR stpos        ; add the starting offset
    mov r8, plen                    ; put pattern length into r8
  ; ---------------------------------
  scanloop:
    add r10, 1
    cmp r10, rcx                    ; exit on end location
    jg nomatch
    cmp [r10], r9b                  ; cmp current byte to 1st byte in pattern
    jne scanloop
  ; ---------------------------------
  matchloop:
    or rdx, -1                      ; use rdx as the index for matching
  ; =================================
  mloop:
    add rdx, 1
    mov al, [r10+rdx]
    cmp al, [r11+rdx]
    jne scanloop                    ; exit on mismatch within valid range
    cmp rdx, r8                     ; compare counter against pattern length
    jne mloop
  ; =================================
    sub r10, src                    ; on match, calculate length
    mov rax, r10                    ; return it in RAX
    jmp quit
  nomatch:
    mov rax, -1
    jmp quit
  errquit1:
    mov rax, -2
    jmp quit
  errquit2:
    mov rax, -3
    jmp quit

  quit:

    ret

inbin endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
