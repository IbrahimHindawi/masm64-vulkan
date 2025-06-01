; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

file_write proc edit:QWORD,lpszFileName:QWORD

    LOCAL hFile :QWORD
    LOCAL est   :EDITSTREAM

    invoke CreateFile,lpszFileName,GENERIC_WRITE,FILE_SHARE_WRITE,NULL, \
                      CREATE_ALWAYS,FILE_ATTRIBUTE_NORMAL,NULL
    mov hFile, rax

    mrm est.dwCookie, hFile
    mov est.dwError, 0
    mov rax, offset cbSaveFile
    mov est.pfnCallback, rax

    invoke SendMessage,edit,EM_STREAMOUT,SF_TEXT,ADDR est

    invoke CloseHandle,hFile

    invoke SendMessage,edit,EM_SETMODIFY,0,0

    xor rax, rax
    ret

file_write endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

cbSaveFile proc dwCookie:QWORD,pbBuff:QWORD,cb:QWORD,pcb:QWORD

  ; ---------------------------------------------------------------
  ; this callback procedure is called by the "file_write" procedure
  ; ---------------------------------------------------------------

    invoke WriteFile,dwCookie,pbBuff,cb,pcb,NULL
    xor rax, rax
    ret

cbSaveFile endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
