; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

LoadGdiImage proc filename:QWORD

  ; -----------------------------------------
  ; load a non bitmap image from a disk file.
  ; tested on JPG PNG, TIFF and GIF also work
  ; Input file name is ANSI format, file name
  ; is converted to the required UNICODE form
  ; -----------------------------------------

    LOCAL pbmp  :QWORD
    LOCAL hndl  :QWORD

    invoke GdipCreateBitmapFromFile,L(filename),ADDR pbmp   ; create a GDI+ bitmap
    invoke GdipCreateHBITMAPFromBitmap,pbmp,ADDR hndl,0     ; create normal bitmap handle from it
    invoke GdipDisposeImage,pbmp                            ; remove the GDI+ bitmap
    mov rax, hndl                                           ; return the bitmap handle in RAX

    ret

LoadGdiImage endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
