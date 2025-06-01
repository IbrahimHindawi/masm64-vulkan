; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    ; ------------------------------------
    ; Original code designed by Siekmanski
    ; ------------------------------------

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

Gdip_Save_JPG proc BmpHndl:QWORD,filename:QWORD,quality:QWORD

    LOCAL pImage :QWORD

  ; -------------------------------------------------
  ; names are mangled to avoid accidental duplication
  ; -------------------------------------------------
  .data?
    QualityLevel_@@@ dd ?

  .data
    align 16
    JPG_CLSID_@@@@@@ GUID <0557CF401h,01A04h,011D3h,<09Ah,073h, \
                           000h,000h,0F8h,01Eh,0F3h,02Eh>>          ; JPG image type
    Parameters_@@@@@ dd 1                                           ; parameters in this structure
                     dd 0                                           ; alignment !
                     GUID <01d5be4b5h,0fa4ah,0452dh,<09ch,0ddh, \   ; CLSID_EncoderQuality
                           05dh,0b3h,051h,005h,0e7h,0ebh>>
                     dd 1                                           ; Number of the parameter values
                     dd 4                                           ; ValueTypeLong
                     dq offset QualityLevel_@@@                     ; JpgQualityParameterPTR
  .code
  ; -------------------------------------------------

    cmp quality, 100
    jbe next

    mov quality, 75                                                 ; default for quality error

  next:
    rcall GdipCreateBitmapFromHBITMAP,BmpHndl,0,ptr$(pImage)        ; convert BMP handle
    mov rax, quality                                                ; set the quality level
    mov QualityLevel_@@@, eax                                       ; 100 = highest, 0 = lowest
    invoke GdipSaveImageToFile,pImage,L(filename), \
           ADDR JPG_CLSID_@@@@@@,ADDR Parameters_@@@@@              ; write JPG image to file
    rcall GdipDisposeImage,pImage                                   ; delete GDIP handle

    ret

Gdip_Save_JPG endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
