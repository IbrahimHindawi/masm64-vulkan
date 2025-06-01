; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

NOSTACKFRAME

cnv_rect proc

  ; ----------------------------------------------------------
  ; pass pointer to rectangle struct in rcx
  ; ----------------------------------------------------------
  ; convert lower rectangle X Y cordinates to width and height
  ; ----------------------------------------------------------

    mov r10d, DWORD PTR [rcx+8]
    mov r11d, DWORD PTR [rcx+12]

    sub r10d, DWORD PTR [rcx]
    sub r11d, DWORD PTR [rcx+4]

    mov DWORD PTR [rcx+8], r10d
    mov DWORD PTR [rcx+12], r11d

    ret

cnv_rect endp

STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
