; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

sblist proc \
          hparent   :QWORD, \
          instance  :QWORD, \
          text      :QWORD, \
          topx      :QWORD, \
          topy      :QWORD, \
          wid       :QWORD, \
          hgt       :QWORD, \
          idnum     :QWORD

  ; ------------------------
  ; list box with scroll bar
  ; ------------------------
    invoke CreateWindowEx,WS_EX_LEFT,"LISTBOX",text, \
                          WS_CHILD or WS_VISIBLE or WS_BORDER or \
                          LBS_HASSTRINGS or LBS_NOINTEGRALHEIGHT or \
                          LBS_DISABLENOSCROLL or WS_VSCROLL or WS_HSCROLL,\
                          topx,topy,wid,hgt,hparent,idnum,instance,0
    ret

sblist endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
