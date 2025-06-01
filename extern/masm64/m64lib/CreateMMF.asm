; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

CreateMMF proc lpName:QWORD,bcnt:QWORD,lphndl:QWORD,lpMemFile:QWORD

    invoke CreateFileMapping,-1, \              ; nominates the system paging
                             NULL, \
                             PAGE_READWRITE, \  ; read write access to memory
                             0, \
                             bcnt, \            ; required size in BYTES
                             lpName             ; set file object name here

    mov rdx, rax                                ; MMF handle in RDX
    mov rcx, lphndl                             ; address of variable in RCX
    mov [rcx], rax                              ; write MMF handle to variable

    invoke MapViewOfFile,rdx,FILE_MAP_WRITE,0,0,0
    mov rcx, lpMemFile                          ; address of variable in RCX
    mov [rcx], rax                              ; write start address to variable

    ret

CreateMMF endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
