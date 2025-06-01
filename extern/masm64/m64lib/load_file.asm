; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

load_file proc

  ; rcx = address of file name

  ; --------------------------------------------------------
  ; free the allocate memory when finished with GlobalFree()
  ; --------------------------------------------------------

    LOCAL bRead :QWORD
    LOCAL hFile :QWORD
    LOCAL fl    :QWORD
    LOCAL hMem  :QWORD
    LOCAL lpfname :QWORD
    LOCAL fsiz  :QWORD

    mov lpfname, rcx                                ; address of file name to open

    invoke CreateFile,lpfname,GENERIC_READ,FILE_SHARE_READ,\
                      NULL,OPEN_EXISTING,NULL,NULL
    mov hFile, rax

    cmp hFile, INVALID_HANDLE_VALUE
    jne @F
    xor rax, rax                                    ; return zero on error
    ret

  @@:
    mov fl, function(GetFileSize,hFile,NULL)        ; get the file length
    mov fsiz, rax
    add fl, 32                                      ; add some spare bytes
    mov hMem, alloc(fl)                             ; allocate a buffer of that size
    invoke ReadFile,hFile,hMem,fl,ADDR bRead,NULL   ; read file into buffer
    invoke CloseHandle,hFile                        ; close the handle

    mov rax, hMem                                   ; memory handle
    mov rcx, fsiz                                   ; byte count

    ret

load_file endp

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
