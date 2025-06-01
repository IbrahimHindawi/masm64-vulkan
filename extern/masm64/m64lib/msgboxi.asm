; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    include binpath.inc

    MSGBOXPARAMSxx STRUCT QWORD
      cbSize           dd ?
      hwndOwner        dq ?
      hInstance        dq ?
      lpszText         dq ?
      lpszCaption      dq ?
      dwStyle          dd ?
      lpszIcon         dq ?
      dwContextHelpId  dq ?
      lpfnMsgBoxCallback dq ?
      dwLanguageId     dd ?
    MSGBOXPARAMSxx ENDS

    .code

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

MsgboxI proc hParent:QWORD,pText:QWORD,pTitle:QWORD,mbStyle:QWORD,IconID:QWORD

    LOCAL mbp   :MSGBOXPARAMSxx

    or mbStyle, MB_USERICON

    mov mbp.cbSize,             SIZEOF mbp
    mrm mbp.hwndOwner,          hParent
    mov mbp.hInstance,          function(GetModuleHandle,0)
    mrm mbp.lpszText,           pText
    mrm mbp.lpszCaption,        pTitle
    mov rax, mbStyle
    mov mbp.dwStyle,            eax
    mrm mbp.lpszIcon,           IconID
    mov mbp.dwContextHelpId,    NULL
    mov mbp.lpfnMsgBoxCallback, NULL
    mov mbp.dwLanguageId,       NULL

    invoke MessageBoxIndirect,ADDR mbp

    ret

MsgboxI endp

; いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい

    end
