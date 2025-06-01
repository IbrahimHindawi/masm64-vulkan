; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    IFNDEF CHARFORMAT2
      CHARFORMAT2 STRUCT QWORD
        cbSize dd ?
        dwMask dd ?
        dwEffects dd ?
        yHeight dd ?
        yOffset dd ?
        crTextColor dd ?
        bCharSet db ?
        bPitchAndFamily db ?
        szFaceName db LF_FACESIZE dup (?)
        wWeight dw ?
        sSpacing dw ?
        crBackColor dd ?
        lcid dd ?
        dwReserved dd ?
        sStyle dw ?
        wKerning dw ?
        bUnderlineType db ?
        bAnimation db ?
        bRevAuthor db ?
      CHARFORMAT2 ENDS
    ENDIF

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

create_riched proc hParent:QWORD,instance:QWORD,bakcolour:QWORD,txtcolour:QWORD,hFont:QWORD

    LOCAL pEdit  :QWORD
    LOCAL styl   :QWORD

    invoke LoadLibrary,"riched20.dll"

  ; ---------------------------
  ; create the richedit control
  ; ---------------------------
    mov styl, WS_VISIBLE or WS_CHILDWINDOW or WS_CLIPSIBLINGS or \
              ES_MULTILINE or WS_VSCROLL or WS_HSCROLL or ES_AUTOHSCROLL or \
              ES_AUTOVSCROLL or ES_NOHIDESEL or ES_DISABLENOSCROLL

    invoke CreateWindowEx,WS_EX_LEFT,"RichEdit20a", \         ; WS_EX_STATICEDGE
           0,styl,0,0,200,100,hParent,111,instance,0

    mov pEdit, rax
  ; ---------------------------

    rcall SendMessage,pEdit,EM_EXLIMITTEXT,0,1000000000
    rcall SendMessage,pEdit,EM_SETOPTIONS,ECOOP_XOR,ECO_SELECTIONBAR

    .if hFont == 0
      mov hFont, rvcall(font_handle,"fixedsys",9,600)       ; default font if none set
    .endif

    rcall SendMessage,pEdit,WM_SETFONT,hFont,TRUE           ; set font to edit control

    mov ecx, 10
    mov edx, 5
    mov ax, dx
    rol eax, 16
    mov ax, cx
    rcall SendMessage,pEdit,EM_SETMARGINS,EC_LEFTMARGIN or EC_RIGHTMARGIN,rax
    rcall SendMessage,pEdit,EM_SETTEXTMODE,TM_PLAINTEXT or TM_MULTILEVELUNDO or TM_MULTICODEPAGE,0
    invoke set_edit_colours,pEdit,bakcolour,txtcolour

    mov rax, pEdit

    ret

create_riched endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

set_edit_colours proc edit:QWORD,bakcolour:QWORD,txtcolour:QWORD

    LOCAL tcol  :DWORD

    mov rax, txtcolour
    mov tcol, eax

    invoke SendMessage,edit,EM_SETBKGNDCOLOR,0,bakcolour

    .data?
      align 16
      cfm@_@2 CHARFORMAT2 <?>
    .code

    mov cfm@_@2.cbSize,            SIZEOF CHARFORMAT2
    mov cfm@_@2.dwMask,            CFM_COLOR
    mov cfm@_@2.dwEffects,         0
    mov cfm@_@2.yHeight,           0
    mov cfm@_@2.yOffset,           0
    mrmd cfm@_@2.crTextColor,      tcol
    mov cfm@_@2.bCharSet,          0
    mov cfm@_@2.bPitchAndFamily,   0
    mov cfm@_@2.szFaceName,        0
    mov cfm@_@2.wWeight,           0
    mov cfm@_@2.sSpacing,          0
    mov cfm@_@2.crBackColor,       0
    mov cfm@_@2.lcid,              0
    mov cfm@_@2.dwReserved,        0
    mov cfm@_@2.sStyle,            0
    mov cfm@_@2.wKerning,          0
    mov cfm@_@2.bUnderlineType,    0
    mov cfm@_@2.bAnimation,        0
    mov cfm@_@2.bRevAuthor,        0

    invoke PostMessage,edit,EM_SETCHARFORMAT,SCF_ALL,ADDR cfm@_@2

    ret

set_edit_colours endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
