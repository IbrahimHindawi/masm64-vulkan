; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

ResImageLoad proc ResID:QWORD

    LOCAL hRes  :QWORD
    LOCAL pRes  :QWORD
    LOCAL lRes  :QWORD
    LOCAL pbmp  :QWORD
    LOCAL hBmp  :QWORD
    LOCAL npng  :QWORD

    mov hRes, rv(FindResource,0,ResID,RT_RCDATA)        ; find the resource
    mov pRes, rv(LoadResource,0,hRes)                   ; load the resource
    mov lRes, rv(SizeofResource,0,hRes)                 ; get its size
    mrm npng, "@@@@.@@@"                                ; temp file name

    invoke save_file,npng,pRes,lRes                     ; create the temp file

    invoke GdipCreateBitmapFromFile,L(npng),ADDR pbmp   ; create a GDI+ bitmap
    invoke GdipCreateHBITMAPFromBitmap,pbmp,ADDR hBmp,0 ; create normal bitmap handle from it
    invoke GdipDisposeImage,pbmp                        ; remove the GDI+ bitmap

    invoke DeleteFile,npng                              ; delete the temp file

    mov rax, hBmp                                       ; return the bitmap handle in RAX

    ret

ResImageLoad endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
