; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

  .data
    CLSID_ImageType6 GUID <0557CF406h,01A04h,011D3h,<09Ah,073h,000h,000h,0F8h,01Eh,0F3h,02Eh>>
    pPNG@@@@@@ dq CLSID_ImageType6

  .code

; ------------------------------------------

SaveAsPNG proc bmHandle:QWORD,filename:QWORD

    LOCAL hGdip :QWORD

    invoke GdipCreateBitmapFromHBITMAP,bmHandle,0,ptr$(hGdip)
    invoke GdipSaveImageToFile,hGdip,L(filename),pPNG@@@@@@,NULL
    invoke GdipDisposeImage,hGdip

    ret

SaveAsPNG endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
