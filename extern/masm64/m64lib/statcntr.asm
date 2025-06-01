; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 static_cntr proc hparent:QWORD,instance:QWORD,topx:QWORD,topy:QWORD,wid:QWORD,hgt:QWORD,edge:QWORD

    LOCAL fram  :QWORD

    .if edge == 1
      mov fram, WS_EX_STATICEDGE
    .else
      mov fram, 0
    .endif

    invoke CreateWindowEx,fram,"STATIC",0,WS_CHILD or WS_VISIBLE or SS_CENTER,\
                          topx,topy,wid,hgt,hparent,0,instance,0
    ret

 static_cntr endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
