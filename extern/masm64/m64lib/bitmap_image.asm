; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 bitmap_image proc instance:QWORD,parent:QWORD,topx:QWORD,topy:QWORD

    invoke CreateWindowEx,WS_EX_LEFT,"STATIC",0,WS_CHILD or WS_VISIBLE or SS_BITMAP,\
                          topx,topy,0,0,parent,0,instance,0
    ret

 bitmap_image endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
