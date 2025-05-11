externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_SetupColorMatchingA:PPROC
SetupColorMatchingA equ <__imp_SetupColorMatchingA>
  IFNDEF __UNICODE__
    SetupColorMatching equ <__imp_SetupColorMatchingA>
  ENDIF

externdef __imp_SetupColorMatchingW:PPROC
SetupColorMatchingW equ <__imp_SetupColorMatchingW>
  IFDEF __UNICODE__
    SetupColorMatching equ <__imp_SetupColorMatchingW>
  ENDIF
