externdef __imp_CSCOptions_RunDLL:PPROC
CSCOptions_RunDLL equ <__imp_CSCOptions_RunDLL>

externdef __imp_CSCOptions_RunDLLA:PPROC
CSCOptions_RunDLLA equ <__imp_CSCOptions_RunDLLA>
  IFNDEF __UNICODE__
    CSCOptions_RunDLL equ <__imp_CSCOptions_RunDLLA>
  ENDIF

externdef __imp_CSCOptions_RunDLLW:PPROC
CSCOptions_RunDLLW equ <__imp_CSCOptions_RunDLLW>
  IFDEF __UNICODE__
    CSCOptions_RunDLL equ <__imp_CSCOptions_RunDLLW>
  ENDIF

externdef __imp_CSCUIInitialize:PPROC
CSCUIInitialize equ <__imp_CSCUIInitialize>

externdef __imp_CSCUIMsgProcess:PPROC
CSCUIMsgProcess equ <__imp_CSCUIMsgProcess>

externdef __imp_CSCUIOptionsPropertySheet:PPROC
CSCUIOptionsPropertySheet equ <__imp_CSCUIOptionsPropertySheet>

externdef __imp_CSCUIRemoveFolderFromCache:PPROC
CSCUIRemoveFolderFromCache equ <__imp_CSCUIRemoveFolderFromCache>

externdef __imp_CSCUISetState:PPROC
CSCUISetState equ <__imp_CSCUISetState>

externdef __imp_CscPolicyProcessing_RunDLLW:PPROC
CscPolicyProcessing_RunDLLW equ <__imp_CscPolicyProcessing_RunDLLW>
  IFDEF __UNICODE__
    CscPolicyProcessing_RunDLL equ <__imp_CscPolicyProcessing_RunDLLW>
  ENDIF

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>

externdef __imp_ProcessGroupPolicy:PPROC
ProcessGroupPolicy equ <__imp_ProcessGroupPolicy>
