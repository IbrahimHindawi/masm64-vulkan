externdef __imp_CommonPropertySheetUIA:PPROC
CommonPropertySheetUIA equ <__imp_CommonPropertySheetUIA>
  IFNDEF __UNICODE__
    CommonPropertySheetUI equ <__imp_CommonPropertySheetUIA>
  ENDIF

externdef __imp_CommonPropertySheetUIW:PPROC
CommonPropertySheetUIW equ <__imp_CommonPropertySheetUIW>
  IFDEF __UNICODE__
    CommonPropertySheetUI equ <__imp_CommonPropertySheetUIW>
  ENDIF

externdef __imp_GetCPSUIUserData:PPROC
GetCPSUIUserData equ <__imp_GetCPSUIUserData>

externdef __imp_SetCPSUIUserData:PPROC
SetCPSUIUserData equ <__imp_SetCPSUIUserData>
