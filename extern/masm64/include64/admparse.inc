externdef __imp_AdmClose:PPROC
AdmClose equ <__imp_AdmClose>

externdef __imp_AdmFinishedA:PPROC
AdmFinishedA equ <__imp_AdmFinishedA>
  IFNDEF __UNICODE__
    AdmFinished equ <__imp_AdmFinishedA>
  ENDIF

externdef __imp_AdmFinishedW:PPROC
AdmFinishedW equ <__imp_AdmFinishedW>
  IFDEF __UNICODE__
    AdmFinished equ <__imp_AdmFinishedW>
  ENDIF

externdef __imp_AdmInitA:PPROC
AdmInitA equ <__imp_AdmInitA>
  IFNDEF __UNICODE__
    AdmInit equ <__imp_AdmInitA>
  ENDIF

externdef __imp_AdmInitW:PPROC
AdmInitW equ <__imp_AdmInitW>
  IFDEF __UNICODE__
    AdmInit equ <__imp_AdmInitW>
  ENDIF

externdef __imp_AdmResetA:PPROC
AdmResetA equ <__imp_AdmResetA>
  IFNDEF __UNICODE__
    AdmReset equ <__imp_AdmResetA>
  ENDIF

externdef __imp_AdmResetW:PPROC
AdmResetW equ <__imp_AdmResetW>
  IFDEF __UNICODE__
    AdmReset equ <__imp_AdmResetW>
  ENDIF

externdef __imp_AdmSaveData:PPROC
AdmSaveData equ <__imp_AdmSaveData>

externdef __imp_CheckDuplicateKeysA:PPROC
CheckDuplicateKeysA equ <__imp_CheckDuplicateKeysA>
  IFNDEF __UNICODE__
    CheckDuplicateKeys equ <__imp_CheckDuplicateKeysA>
  ENDIF

externdef __imp_CheckDuplicateKeysW:PPROC
CheckDuplicateKeysW equ <__imp_CheckDuplicateKeysW>
  IFDEF __UNICODE__
    CheckDuplicateKeys equ <__imp_CheckDuplicateKeysW>
  ENDIF

externdef __imp_CreateAdmUiA:PPROC
CreateAdmUiA equ <__imp_CreateAdmUiA>
  IFNDEF __UNICODE__
    CreateAdmUi equ <__imp_CreateAdmUiA>
  ENDIF

externdef __imp_CreateAdmUiW:PPROC
CreateAdmUiW equ <__imp_CreateAdmUiW>
  IFDEF __UNICODE__
    CreateAdmUi equ <__imp_CreateAdmUiW>
  ENDIF

externdef __imp_DllMain:PPROC
DllMain equ <__imp_DllMain>

externdef __imp_GetAdmCategoriesA:PPROC
GetAdmCategoriesA equ <__imp_GetAdmCategoriesA>
  IFNDEF __UNICODE__
    GetAdmCategories equ <__imp_GetAdmCategoriesA>
  ENDIF

externdef __imp_GetAdmCategoriesW:PPROC
GetAdmCategoriesW equ <__imp_GetAdmCategoriesW>
  IFDEF __UNICODE__
    GetAdmCategories equ <__imp_GetAdmCategoriesW>
  ENDIF

externdef __imp_GetFontInfoA:PPROC
GetFontInfoA equ <__imp_GetFontInfoA>
  IFNDEF __UNICODE__
    GetFontInfo equ <__imp_GetFontInfoA>
  ENDIF

externdef __imp_GetFontInfoW:PPROC
GetFontInfoW equ <__imp_GetFontInfoW>
  IFDEF __UNICODE__
    GetFontInfo equ <__imp_GetFontInfoW>
  ENDIF

externdef __imp_IsAdmDirty:PPROC
IsAdmDirty equ <__imp_IsAdmDirty>

externdef __imp_ResetAdmDirtyFlag:PPROC
ResetAdmDirtyFlag equ <__imp_ResetAdmDirtyFlag>
