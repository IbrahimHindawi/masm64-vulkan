; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

copy_all proc edit:QWORD

    LOCAL cr :CHARRANGE

    mov cr.cpMin, 0
    mov cr.cpMax, -1

    invoke SendMessage,edit,EM_EXSETSEL,0,ADDR cr
    invoke SendMessage,edit,WM_COPY,0,0

    ret

copy_all endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
