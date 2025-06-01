; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 GetClipboardText proc

    LOCAL hMem  :QWORD
    LOCAL pMem  :QWORD
    LOCAL slen  :QWORD
    LOCAL coh   :QWORD

    rcall OpenClipboard,0                   ; open clipboard
      test rax, rax
      jnz @F
      ret
    @@:

    mov coh, rv(GetClipboardData,CF_TEXT)   ; get data handle
      test rax, rax
      jnz @F
      ret
    @@:

    mov pMem, rvcall(GlobalLock,coh)        ; lock memory
      test rax, rax
      jnz @F
      ret
    @@:

    mov slen, len(pMem)
      cmp slen, 0
      jne @F
      ret
    @@:

    mov hMem, alloc(slen)
    cst hMem,pMem                           ; copy pMem to hMem
    rcall GlobalUnlock,pMem
    rcall CloseClipboard                    ; close clipboard

    mov rax, pMem                           ; release with GlobalFree()

    ret

 GetClipboardText endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
