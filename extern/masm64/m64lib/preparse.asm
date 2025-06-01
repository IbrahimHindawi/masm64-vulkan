; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NOSTACKFRAME

 preparse proc

  ; ****************************
  ;   rcx = text address
  ;   rdx = option
  ;     0 = no space replacement
  ; not 0 = replace high
  ;         ascii with space
  ; ****************************

  ; -----------------------------
  ; Algorith modifies source text
  ; -----------------------------
  ; 1. remove high ascii
  ; 2. remove multiple CRLF pairs
  ; 3. return written length
  ; -----------------------------

    mov r9,  rdx                                ; load r9 as option flag
    mov r10, rcx                                ; start with same source and destination address
    mov rax, rcx
    sub r10, 1                                  ; set r10 for main loop
    jmp lbl0                                    ; jump into main loop

  pre:
    test r9, r9                                 ; test option
    jz lbl0                                     ; if 0, no space
    mov BYTE PTR [rax], 32                      ; if not 0, write space
    add rax, 1

  lbl0:
    add r10, 1
    movzx rdx, BYTE PTR [r10]
    cmp rdx, 126                                ; bypass high ascii
    ja pre
    cmp rdx, 13                                 ; branch on CR (13)
    je crlf
    mov BYTE PTR [rax], dl                      ; write byte
    add rax, 1
    test rdx, rdx                               ; test if byte was 0
    jz lbl3                                     ; loop back if not
    jmp lbl0                                    ; else branch to exit

  crlf:
    mov BYTE PTR [rax], 13                      ; write single CR LF pair
    add rax, 1
    mov BYTE PTR [rax], 10
    add rax, 1

  coll:
    add r10, 1
    movzx rdx, BYTE PTR [r10]                   ; loop through any following CR or LF
    cmp rdx, 13                                 ; bypass any extra 13
    je coll
    cmp rdx, 10                                 ; bypass any extra 10
    je coll
    sub r10, 1                                  ; set r10 for main loop
    jmp lbl0                                    ; jump back

  lbl3:
    sub rax, rcx                                ; get written length
    sub rax, 1                                  ; correct for last add

    ret

 preparse endp

 STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
