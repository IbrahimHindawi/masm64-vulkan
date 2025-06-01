; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

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
      IMG_CLSID ENDS
    ENDIF

  .code

; ------------------------------------------

Gdip_Save_32bpp_BMP proc bmHandle:QWORD,filename:QWORD

    LOCAL hGdip :QWORD
    LOCAL cid   :IMG_CLSID
    LOCAL pcid  :QWORD

    mov cid.arg1dd, 0557CF400h
    mov cid.arg2dw, 01A04h
    mov cid.arg3dw, 011D3h
    mov cid.arg4db, 09Ah
    mov cid.arg5db, 073h
    mov cid.arg6db, 000h
    mov cid.arg7db, 000h
    mov cid.arg8db, 0F8h
    mov cid.arg9db, 01Eh
    mov cid.argAdb, 0F3h
    mov cid.argBdb, 02Eh

    mov pcid, ptr$(cid.arg1dd)

    invoke GdipCreateBitmapFromHBITMAP,bmHandle,0,ptr$(hGdip)
    invoke GdipSaveImageToFile,hGdip,L(filename),pcid,NULL
    invoke GdipDisposeImage,hGdip

    ret

Gdip_Save_32bpp_BMP endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
