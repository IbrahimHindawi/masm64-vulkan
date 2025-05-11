externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_OpenScrap_RunDLL:PPROC
OpenScrap_RunDLL equ <__imp_OpenScrap_RunDLL>

externdef __imp_OpenScrap_RunDLLA:PPROC
OpenScrap_RunDLLA equ <__imp_OpenScrap_RunDLLA>
  IFNDEF __UNICODE__
    OpenScrap_RunDLL equ <__imp_OpenScrap_RunDLLA>
  ENDIF

externdef __imp_OpenScrap_RunDLLW:PPROC
OpenScrap_RunDLLW equ <__imp_OpenScrap_RunDLLW>
  IFDEF __UNICODE__
    OpenScrap_RunDLL equ <__imp_OpenScrap_RunDLLW>
  ENDIF

externdef __imp_Scrap_CreateFromDataObject:PPROC
Scrap_CreateFromDataObject equ <__imp_Scrap_CreateFromDataObject>
