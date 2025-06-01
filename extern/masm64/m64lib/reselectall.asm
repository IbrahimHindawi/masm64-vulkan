; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

select_all proc edit:QWORD

    LOCAL cr    :CHARRANGE

    invoke GetWindowTextLength,edit

    mov cr.cpMin, 0                     ; start at offset 0
    mov cr.cpMax, eax                   ; finish at window text length

    invoke SendMessage,edit,EM_EXSETSEL,0,ADDR cr

    ret

select_all endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
