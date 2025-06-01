; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

  .data
    CLSID_ImageType7 GUID <0557CF402h,01A04h,011D3h,<09Ah,073h,000h,000h,0F8h,01Eh,0F3h,02Eh>>
    pGIF@@@@@@ dq CLSID_ImageType7

  .code

; ------------------------------------------

SaveAsGIF proc bmHandle:QWORD,filename:QWORD

    LOCAL hGdip :QWORD

    invoke GdipCreateBitmapFromHBITMAP,bmHandle,0,ptr$(hGdip)
    invoke GdipSaveImageToFile,hGdip,L(filename),pGIF@@@@@@,NULL
    invoke GdipDisposeImage,hGdip

    ret

SaveAsGIF endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
