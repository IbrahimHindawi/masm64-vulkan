; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

  OPENFILENAMEx STRUCT QWORD
    lStructSize dd ?
    hwndOwner dq ?
    hInstance dq ?
    lpstrFilter dq ?
    lpstrCustomFilter dq ?
    nMaxCustFilter dd ?
    nFilterIndex dd ?
    lpstrFile dq ?
    nMaxFile dd ?
    lpstrFileTitle dq ?
    nMaxFileTitle dd ?
    lpstrInitialDir dq ?
    lpstrTitle dq ?
    Flags dd ?
    nFileOffset dw ?
    nFileExtension dw ?
    lpstrDefExt dq ?
    lCustData dq ?
    lpfnHook dq ?
    lpTemplateName dq ?
    pvReserved dq ?
    dwReserved dd ?
    FlagsEx dd ?
  OPENFILENAMEx ENDS

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

save_file_dialog proc hParent:QWORD,Instance:QWORD,lpTitle:QWORD,lpFilter:QWORD

    LOCAL ofn:OPENFILENAME

    .data?
      savefilebuffer db 260 dup (?)
    .code

    lea rax, savefilebuffer
    mov BYTE PTR [rax], 0

  ; --------------------
  ; zero fill structure
  ; --------------------
    mov r11, rdi
    mov rcx, sizeof OPENFILENAME
    mov al, 0
    lea rdi, ofn
    rep stosb
    mov rdi, r11

    mov ofn.lpstrInitialDir,    CurDir$()
    mov ofn.lStructSize,        SIZEOF OPENFILENAME
    mrm ofn.hwndOwner,          hParent
    mrm ofn.hInstance,          Instance
    mrm ofn.lpstrFilter,        lpFilter
    mrm ofn.lpstrFile,          OFFSET savefilebuffer
    mov ofn.nMaxFile,           SIZEOF savefilebuffer
    mrm ofn.lpstrTitle,         lpTitle
    mov ofn.Flags,              OFN_EXPLORER or OFN_LONGNAMES or \
                                OFN_HIDEREADONLY or OFN_OVERWRITEPROMPT
                                
    invoke GetSaveFileName,ADDR ofn
    lea rax,savefilebuffer
    ret

save_file_dialog endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
