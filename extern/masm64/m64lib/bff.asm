; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    BROWSEINFO STRUCT QWORD
      hwndOwner dq ?
      pidlRoot dq ?
      pszDisplayName dq ?
      lpszTitle dq ?
      ulFlags dd ?
      lpfn dq ?
      lParam dq ?
      iImage dd ?
    BROWSEINFO ENDS

    BFFM_SETSELECTION   equ  WM_USER + 102
    BFFM_INITIALIZED    equ 1
    BIF_BROWSEFORCOMPUTER            equ 1000h
    BIF_BROWSEFORPRINTER             equ 2000h
    BIF_BROWSEINCLUDEFILES           equ 4000h
    BIF_BROWSEINCLUDEURLS            equ 0080h
    BIF_DONTGOBELOWDOMAIN            equ 0002h
    BIF_EDITBOX                      equ 0010h
    BIF_NEWDIALOGSTYLE               equ 0040h
    BIF_NONEWFOLDERBUTTON            equ 0200h
    BIF_NOTRANSLATETARGETS           equ 0400h
    BIF_RETURNFSANCESTORS            equ 0008h
    BIF_RETURNONLYFSDIRS             equ 0001h
    BIF_SHAREABLE                    equ 8000h
    BIF_STATUSTEXT                   equ 0004h
    BIF_UAHINT                       equ 0100h
    BIF_USENEWUI                     equ (BIF_NEWDIALOGSTYLE or BIF_EDITBOX)
    BIF_VALIDATE                     equ 0020h

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

lBrowseForFolder proc hParent:QWORD,lpBuffer:QWORD,lpTitle:QWORD,lpString:QWORD

  ; ------------------------------------------------------
  ; hParent  = parent window handle
  ; lpBuffer = 260 byte buffer to receive path
  ; lpTitle  = zero terminated string with dialog title
  ; lpString = zero terminated string for secondary text
  ; ------------------------------------------------------

    LOCAL lpIDList :QWORD
    LOCAL bi  :BROWSEINFO
    LOCAL frv :QWORD

    mrm bi.hwndOwner,       hParent
    mov bi.pidlRoot,        0
    mov bi.pszDisplayName,  0
    mrm bi.lpszTitle,       lpString        ; secondary text
    mov bi.ulFlags,         BIF_RETURNONLYFSDIRS or BIF_DONTGOBELOWDOMAIN or BIF_USENEWUI
    mov bi.lpfn,            ptr$(lcbBrowse)
    mrm bi.lParam,          lpTitle
    mov bi.iImage,          0

    invoke SHBrowseForFolder,ADDR bi
    mov lpIDList, rax

    .if lpIDList == 0
      mov rax, lpBuffer
      mov BYTE PTR [rax], 0
      mov frv, 0                            ; if CANCEL return FALSE
      jmp @F
    .else
      invoke SHGetPathFromIDList,lpIDList,lpBuffer
      mov frv, 1                            ; if OK, return TRUE
      jmp @F
    .endif

    @@:

    invoke CoTaskMemFree,lpIDList

    mov rax, frv
    ret

lBrowseForFolder endp

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

lcbBrowse proc hWin:QWORD,uMsg:QWORD,lParam:QWORD,lpData:QWORD

    .switch uMsg
      .case BFFM_INITIALIZED
        invoke SendMessage,hWin,BFFM_SETSELECTION,1,CurDir$()
        invoke SetWindowText,hWin,lpData
    .endsw

    ret

lcbBrowse endp

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
