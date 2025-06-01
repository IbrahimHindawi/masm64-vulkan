; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

exist proc lpszFileName:QWORD

    LOCAL wfd :WIN32_FIND_DATA

    fn FindFirstFile,lpszFileName,ADDR wfd
    .if rax == INVALID_HANDLE_VALUE
      mov rax, 0                    ; 0 = NOT exist
    .else
      fn FindClose, rax
      mov rax, 1                    ; 1 = exist
    .endif

    ret

exist endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
