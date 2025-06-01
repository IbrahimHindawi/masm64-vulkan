; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

save_file proc

  ; rcx = filename
  ; rdx = data address
  ; r8  = data length

    LOCAL hFile :QWORD
    LOCAL bwrt  :QWORD

    LOCAL .r13  :QWORD
    LOCAL .r14  :QWORD
    LOCAL .r15  :QWORD

    mov .r13, r13
    mov .r14, r14
    mov .r15, r15

    mov r13, rcx
    mov r14, rdx
    mov r15, r8

    mov hFile, flcreate(r13)
    mov bwrt, flwrite(hFile,r14,r15)

    flclose hFile

    mov rax, bwrt

    mov r13, .r13
    mov r14, .r14
    mov r15, .r15

    ret

save_file endp

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
