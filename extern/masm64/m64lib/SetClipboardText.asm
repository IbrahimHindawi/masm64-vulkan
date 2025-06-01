; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 SetClipboardText proc ptxt:QWORD

    LOCAL hMem  :QWORD
    LOCAL pMem  :QWORD
    LOCAL slen  :QWORD
    LOCAL coh   :QWORD

    rcall StrLen, ptxt                      ; get length of text
    mov slen, rax
    add slen, 4

    mov hMem, rvcall(GlobalAlloc,GMEM_MOVEABLE,slen)
    mov pMem, rvcall(GlobalLock,hMem)       ; lock memory
      test rax, rax
      jnz @F
      ret
    @@:

    rcall OpenClipboard,0                   ; open clipboard
      test rax, rax
      jnz @F
      ret
    @@:

    cst pMem, ptxt                          ; copy ptxt to pMem
    rcall EmptyClipboard
    rcall SetClipboardData,CF_TEXT,pMem
    rcall CloseClipboard                    ; close clipboard
    rcall GlobalUnlock,pMem

    ret

 SetClipboardText endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
