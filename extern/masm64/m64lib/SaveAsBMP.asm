; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

  .data
    CLSID_ImageType0 GUID <0557CF400h,01A04h,011D3h,<09Ah,073h,000h,000h,0F8h,01Eh,0F3h,02Eh>>
    pBMP@@@@@@ dq CLSID_ImageType0

  .code

; ------------------------------------------

SaveAsBMP proc bmHandle:QWORD,filename:QWORD

    LOCAL hGdip :QWORD

    invoke GdipCreateBitmapFromHBITMAP,bmHandle,0,ptr$(hGdip)
    invoke GdipSaveImageToFile,hGdip,L(filename),pBMP@@@@@@,NULL
    invoke GdipDisposeImage,hGdip

    ret

SaveAsBMP endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
