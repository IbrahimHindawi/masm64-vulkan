externdef __imp_CoCreateActivity:PPROC
CoCreateActivity equ <__imp_CoCreateActivity>

externdef __imp_CoEnterServiceDomain:PPROC
CoEnterServiceDomain equ <__imp_CoEnterServiceDomain>

externdef __imp_CoLeaveServiceDomain:PPROC
CoLeaveServiceDomain equ <__imp_CoLeaveServiceDomain>

externdef __imp_CoLoadServices:PPROC
CoLoadServices equ <__imp_CoLoadServices>

externdef __imp_ComSvcsExceptionFilter:PPROC
ComSvcsExceptionFilter equ <__imp_ComSvcsExceptionFilter>

externdef __imp_ComSvcsLogError:PPROC
ComSvcsLogError equ <__imp_ComSvcsLogError>

externdef __imp_CosGetCallContext:PPROC
CosGetCallContext equ <__imp_CosGetCallContext>

externdef __imp_DispManGetContext:PPROC
DispManGetContext equ <__imp_DispManGetContext>

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>

externdef __imp_GetMTAThreadPoolMetrics:PPROC
GetMTAThreadPoolMetrics equ <__imp_GetMTAThreadPoolMetrics>

externdef __imp_GetManagedExtensions:PPROC
GetManagedExtensions equ <__imp_GetManagedExtensions>

externdef __imp_GetObjectContext:PPROC
GetObjectContext equ <__imp_GetObjectContext>

externdef __imp_GetTrkSvrObject:PPROC
GetTrkSvrObject equ <__imp_GetTrkSvrObject>

externdef __imp_MTSCreateActivity:PPROC
MTSCreateActivity equ <__imp_MTSCreateActivity>

externdef __imp_MiniDumpW:PPROC
MiniDumpW equ <__imp_MiniDumpW>
  IFDEF __UNICODE__
    MiniDump equ <__imp_MiniDumpW>
  ENDIF

externdef __imp_RecycleSurrogate:PPROC
RecycleSurrogate equ <__imp_RecycleSurrogate>

externdef __imp_RegisterComEvents:PPROC
RegisterComEvents equ <__imp_RegisterComEvents>

externdef __imp_SafeRef:PPROC
SafeRef equ <__imp_SafeRef>

externdef __imp_comsvcs_ordinal6:PPROC
comsvcs_ordinal6 equ <__imp_comsvcs_ordinal6>

externdef __imp_comsvcs_ordinal7:PPROC
comsvcs_ordinal7 equ <__imp_comsvcs_ordinal7>
