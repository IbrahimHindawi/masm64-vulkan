; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

listbox proc hparent:QWORD,instance:QWORD,text:QWORD,topx:QWORD,topy:QWORD,wid:QWORD,hgt:QWORD,idnum:QWORD

    invoke CreateWindowEx,WS_EX_LEFT,"LISTBOX",text, \
                          WS_CHILD or WS_VISIBLE or WS_BORDER or LBS_HASSTRINGS,\
                          topx,topy,wid,hgt,hparent,idnum,instance,0
    ret

listbox endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
