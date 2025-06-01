; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

 NOSTACKFRAME

 chartype proc

  ; **********************
  ; cl = character to test
  ; **********************

  ; --------------------------------
  ; invoke chartype,byte_value          ; memory or register
  ;
  ;  or the more efficient
  ;
  ; mov cl, byte_sized_data
  ; call chartype
  ; --------------------------------

    lea r11, chtbl                      ; load the table address
    movzx r10, cl                       ; zero extend cl into r10
    movzx rax, BYTE PTR [r11+r10]       ; return character type as QWORD
    ret

  ; ------------------------------------------
  ; return values for character types as QWORD
  ; ------------------------------------------
  ; 0 = ascii 0
  ; 1 = numbers
  ; 2 = upper case
  ; 3 = lower case
  ; 4 = punctuation
  ; 5 = high ascii
  ; 6 = CR + LF
  ; 7 = SPC + TAB (white space)
  ; 8 = unused chars below 32
  ; ------------------------------------------

    align 8
    chtbl:
      db 0,8,8,8,8,8,8,8,8,7,6,8,8,6,8,8
      db 8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8
      db 7,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4
      db 1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0
      db 0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2
      db 2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0
      db 0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3
      db 3,3,3,3,3,3,3,3,3,3,3,4,4,4,4,0
      db 5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5
      db 5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5
      db 5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5
      db 5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5
      db 5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5
      db 5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5
      db 5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5
      db 5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5

 chartype endp

 STACKFRAME

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
