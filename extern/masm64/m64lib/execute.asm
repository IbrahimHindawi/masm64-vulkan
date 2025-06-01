; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 execute proc lpfilename:QWORD

    LOCAL rval  :QWORD

    .data?
    align 8
      stu@@@ STARTUPINFO <>
      pri@@@ PROCESS_INFORMATION <>
    .code

    invoke CreateProcess,NULL,lpfilename,NULL,NULL, \
                         NULL,NULL,NULL,NULL, \
                         ADDR stu@@@, \
                         ADDR pri@@@
    mov rval, rax
    invoke CloseHandle, pri@@@.hThread
    invoke CloseHandle, pri@@@.hProcess
    mov rax, rval

    ret

 execute endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
