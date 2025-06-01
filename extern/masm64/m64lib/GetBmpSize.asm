; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 GetBmpSize proc
  ; ----------------------
  ; rcx =  bitmap handle
  ; width  returned in rax
  ; height returned in rcx
  ; ----------------------
    LOCAL bmp :BITMAP

    rcall GetObject,rcx,SIZEOF BITMAP, ptr$(bmp)
    mov eax, bmp.bmWidth
    mov ecx, bmp.bmHeight
    ret

 GetBmpSize endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
