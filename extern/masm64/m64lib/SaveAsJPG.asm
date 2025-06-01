; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

  .data
    CLSID_ImageType1 GUID <0557CF401h,01A04h,011D3h,<09Ah,073h,000h,000h,0F8h,01Eh,0F3h,02Eh>>
    pJPG@@@@@@ dq CLSID_ImageType1

  .code

; ------------------------------------------

SaveAsJPG proc bmHandle:QWORD,filename:QWORD

    LOCAL hGdip :QWORD

    invoke GdipCreateBitmapFromHBITMAP,bmHandle,0,ptr$(hGdip)
    invoke GdipSaveImageToFile,hGdip,L(filename),pJPG@@@@@@,NULL
    invoke GdipDisposeImage,hGdip

    ret

SaveAsJPG endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
