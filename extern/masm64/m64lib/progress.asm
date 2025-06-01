; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

progress_bar proc instance:QWORD,parent:QWORD,lft:QWORD,top:QWORD,wid:QWORD,hgt:QWORD

    invoke CreateWindowEx,WS_EX_LEFT or WS_EX_STATICEDGE, \
                          "msctls_progress32",0,WS_VISIBLE or WS_CHILD,\
                          lft,top,wid,hgt,parent,0,instance,0
    ret

progress_bar endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
