; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    ; ------------------------------------
    ; Original code designed by Siekmanski
    ; ------------------------------------

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 ;     PixelFormat24bppRGB equ 21808h
 ;     DitherTypeNone      equ 0
 ;     PaletteTypeCustom   equ 0

    IFNDEF IMG_CLSID
      IMG_CLSID STRUCT              ; expanded GUID structure
        arg1dd dd ?
        arg2dw dw ?
        arg3dw dw ?
        arg4db db ?
        arg5db db ?
        arg6db db ?
        arg7db db ?
        arg8db db ?
        arg9db db ?
        argAdb db ?
        argBdb db ?
      IMG_CLSID ends
    ENDIF

; -----------------------------------------

Gdip_Save_BMP proc BmpHandle:QWORD,filename:QWORD
  ; -----------------
  ; RGB 24 BPP bitmap
  ; -----------------
    LOCAL hGdip  :QWORD             ; GDI+ handle
    LOCAL pclone :QWORD             ; clone image handle
    LOCAL pCLSID :QWORD             ; class ID pointer
    LOCAL clsid  :IMG_CLSID         ; class ID structure
    
    mov clsid.arg1dd, 0557CF400h
    mov clsid.arg2dw, 01A04h
    mov clsid.arg3dw, 011D3h
    mov clsid.arg4db, 09Ah
    mov clsid.arg5db, 073h
    mov clsid.arg6db, 000h
    mov clsid.arg7db, 000h
    mov clsid.arg8db, 0F8h
    mov clsid.arg9db, 01Eh
    mov clsid.argAdb, 0F3h
    mov clsid.argBdb, 02Eh

    mov pCLSID, ptr$(clsid.arg1dd)

    rcall GdipCreateBitmapFromHBITMAP,BmpHandle,0,ptr$(hGdip)
    rcall GdipCloneImage,hGdip,ptr$(pclone)
    invoke GdipBitmapConvertFormat,pclone,21808h,0,0,NULL,0
    rcall GdipSaveImageToFile, pclone, L(filename), pCLSID, NULL
    rcall GdipDisposeImage,hGdip
    rcall GdipDisposeImage,pclone

    ret

Gdip_Save_BMP endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
