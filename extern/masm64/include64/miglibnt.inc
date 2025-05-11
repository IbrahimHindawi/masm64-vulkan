externdef __imp_MigDllAddDllToListW:PPROC
MigDllAddDllToListW equ <__imp_MigDllAddDllToListW>
  IFDEF __UNICODE__
    MigDllAddDllToList equ <__imp_MigDllAddDllToListW>
  ENDIF

externdef __imp_MigDllApplySystemSettingsW:PPROC
MigDllApplySystemSettingsW equ <__imp_MigDllApplySystemSettingsW>
  IFDEF __UNICODE__
    MigDllApplySystemSettings equ <__imp_MigDllApplySystemSettingsW>
  ENDIF

externdef __imp_MigDllCloseW:PPROC
MigDllCloseW equ <__imp_MigDllCloseW>
  IFDEF __UNICODE__
    MigDllClose equ <__imp_MigDllCloseW>
  ENDIF

externdef __imp_MigDllCreateList:PPROC
MigDllCreateList equ <__imp_MigDllCreateList>

externdef __imp_MigDllEnumFirstW:PPROC
MigDllEnumFirstW equ <__imp_MigDllEnumFirstW>
  IFDEF __UNICODE__
    MigDllEnumFirst equ <__imp_MigDllEnumFirstW>
  ENDIF

externdef __imp_MigDllEnumNextW:PPROC
MigDllEnumNextW equ <__imp_MigDllEnumNextW>
  IFDEF __UNICODE__
    MigDllEnumNext equ <__imp_MigDllEnumNextW>
  ENDIF

externdef __imp_MigDllFreeList:PPROC
MigDllFreeList equ <__imp_MigDllFreeList>

externdef __imp_MigDllInit:PPROC
MigDllInit equ <__imp_MigDllInit>

externdef __imp_MigDllInitializeDstW:PPROC
MigDllInitializeDstW equ <__imp_MigDllInitializeDstW>
  IFDEF __UNICODE__
    MigDllInitializeDst equ <__imp_MigDllInitializeDstW>
  ENDIF

externdef __imp_MigDllOpenW:PPROC
MigDllOpenW equ <__imp_MigDllOpenW>
  IFDEF __UNICODE__
    MigDllOpen equ <__imp_MigDllOpenW>
  ENDIF

externdef __imp_MigDllShutdown:PPROC
MigDllShutdown equ <__imp_MigDllShutdown>
