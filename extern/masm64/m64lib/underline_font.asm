; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 underline_font proc facename:QWORD,fHgt:QWORD,fWgt:QWORD

    invoke CreateFont,fHgt,0,0,0,fWgt,0,1,0,DEFAULT_CHARSET, \
                      OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS, \
                      PROOF_QUALITY,DEFAULT_PITCH,facename
    ret

 underline_font endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
