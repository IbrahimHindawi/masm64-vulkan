externdef __imp_ChooseColorA:PPROC
ChooseColorA equ <__imp_ChooseColorA>
  IFNDEF __UNICODE__
    ChooseColor equ <__imp_ChooseColorA>
  ENDIF

externdef __imp_ChooseColorW:PPROC
ChooseColorW equ <__imp_ChooseColorW>
  IFDEF __UNICODE__
    ChooseColor equ <__imp_ChooseColorW>
  ENDIF

externdef __imp_ChooseFontA:PPROC
ChooseFontA equ <__imp_ChooseFontA>
  IFNDEF __UNICODE__
    ChooseFont equ <__imp_ChooseFontA>
  ENDIF

externdef __imp_ChooseFontW:PPROC
ChooseFontW equ <__imp_ChooseFontW>
  IFDEF __UNICODE__
    ChooseFont equ <__imp_ChooseFontW>
  ENDIF

externdef __imp_CommDlgExtendedError:PPROC
CommDlgExtendedError equ <__imp_CommDlgExtendedError>

externdef __imp_FindTextA:PPROC
FindTextA equ <__imp_FindTextA>
  IFNDEF __UNICODE__
    FindText equ <__imp_FindTextA>
  ENDIF

externdef __imp_FindTextW:PPROC
FindTextW equ <__imp_FindTextW>
  IFDEF __UNICODE__
    FindText equ <__imp_FindTextW>
  ENDIF

externdef __imp_GetFileTitleA:PPROC
GetFileTitleA equ <__imp_GetFileTitleA>
  IFNDEF __UNICODE__
    GetFileTitle equ <__imp_GetFileTitleA>
  ENDIF

externdef __imp_GetFileTitleW:PPROC
GetFileTitleW equ <__imp_GetFileTitleW>
  IFDEF __UNICODE__
    GetFileTitle equ <__imp_GetFileTitleW>
  ENDIF

externdef __imp_GetOpenFileNameA:PPROC
GetOpenFileNameA equ <__imp_GetOpenFileNameA>
  IFNDEF __UNICODE__
    GetOpenFileName equ <__imp_GetOpenFileNameA>
  ENDIF

externdef __imp_GetOpenFileNameW:PPROC
GetOpenFileNameW equ <__imp_GetOpenFileNameW>
  IFDEF __UNICODE__
    GetOpenFileName equ <__imp_GetOpenFileNameW>
  ENDIF

externdef __imp_GetSaveFileNameA:PPROC
GetSaveFileNameA equ <__imp_GetSaveFileNameA>
  IFNDEF __UNICODE__
    GetSaveFileName equ <__imp_GetSaveFileNameA>
  ENDIF

externdef __imp_GetSaveFileNameW:PPROC
GetSaveFileNameW equ <__imp_GetSaveFileNameW>
  IFDEF __UNICODE__
    GetSaveFileName equ <__imp_GetSaveFileNameW>
  ENDIF

externdef __imp_LoadAlterBitmap:PPROC
LoadAlterBitmap equ <__imp_LoadAlterBitmap>

externdef __imp_PageSetupDlgA:PPROC
PageSetupDlgA equ <__imp_PageSetupDlgA>
  IFNDEF __UNICODE__
    PageSetupDlg equ <__imp_PageSetupDlgA>
  ENDIF

externdef __imp_PageSetupDlgW:PPROC
PageSetupDlgW equ <__imp_PageSetupDlgW>
  IFDEF __UNICODE__
    PageSetupDlg equ <__imp_PageSetupDlgW>
  ENDIF

externdef __imp_PrintDlgA:PPROC
PrintDlgA equ <__imp_PrintDlgA>
  IFNDEF __UNICODE__
    PrintDlg equ <__imp_PrintDlgA>
  ENDIF

externdef __imp_PrintDlgExA:PPROC
PrintDlgExA equ <__imp_PrintDlgExA>
  IFNDEF __UNICODE__
    PrintDlgEx equ <__imp_PrintDlgExA>
  ENDIF

externdef __imp_PrintDlgExW:PPROC
PrintDlgExW equ <__imp_PrintDlgExW>
  IFDEF __UNICODE__
    PrintDlgEx equ <__imp_PrintDlgExW>
  ENDIF

externdef __imp_PrintDlgW:PPROC
PrintDlgW equ <__imp_PrintDlgW>
  IFDEF __UNICODE__
    PrintDlg equ <__imp_PrintDlgW>
  ENDIF

externdef __imp_ReplaceTextA:PPROC
ReplaceTextA equ <__imp_ReplaceTextA>
  IFNDEF __UNICODE__
    ReplaceText equ <__imp_ReplaceTextA>
  ENDIF

externdef __imp_ReplaceTextW:PPROC
ReplaceTextW equ <__imp_ReplaceTextW>
  IFDEF __UNICODE__
    ReplaceText equ <__imp_ReplaceTextW>
  ENDIF

externdef __imp_Ssync_ANSI_UNICODE_Struct_For_WOW:PPROC
Ssync_ANSI_UNICODE_Struct_For_WOW equ <__imp_Ssync_ANSI_UNICODE_Struct_For_WOW>
  IFDEF __UNICODE__
    Ssync_ANSI_UNICODE_Struct_For_WO equ <__imp_Ssync_ANSI_UNICODE_Struct_For_WOW>
  ENDIF

externdef __imp_WantArrows:PPROC
WantArrows equ <__imp_WantArrows>

externdef __imp_comdlg32_ordinal100:PPROC
comdlg32_ordinal100 equ <__imp_comdlg32_ordinal100>

externdef __imp_dwLBSubclass:PPROC
dwLBSubclass equ <__imp_dwLBSubclass>

externdef __imp_dwOKSubclass:PPROC
dwOKSubclass equ <__imp_dwOKSubclass>
