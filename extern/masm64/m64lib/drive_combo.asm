; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

drive_combo proc instance:QWORD,parent:QWORD,topx:QWORD, \
                 topy:QWORD,wid:QWORD,hgt:QWORD,idnum:QWORD

    LOCAL hComb :QWORD

    invoke CreateWindowEx,WS_EX_LEFT,"COMBOBOX",0, WS_CHILD or WS_VISIBLE or \
                          CBS_HASSTRINGS or WS_VSCROLL or CBS_DROPDOWNLIST or \
                          CBS_NOINTEGRALHEIGHT or CBS_DISABLENOSCROLL, \
                          topx,topy,wid,hgt,parent,idnum,instance,0
    mov hComb, rax
    rcall load_drives,hComb
    mov rax, hComb

    ret

drive_combo endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
