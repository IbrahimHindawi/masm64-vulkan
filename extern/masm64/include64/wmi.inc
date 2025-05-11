externdef __imp_CloseTrace:PPROC
CloseTrace equ <__imp_CloseTrace>

externdef __imp_ControlTraceA:PPROC
ControlTraceA equ <__imp_ControlTraceA>
  IFNDEF __UNICODE__
    ControlTrace equ <__imp_ControlTraceA>
  ENDIF

externdef __imp_ControlTraceW:PPROC
ControlTraceW equ <__imp_ControlTraceW>
  IFDEF __UNICODE__
    ControlTrace equ <__imp_ControlTraceW>
  ENDIF

externdef __imp_CreateTraceInstanceId:PPROC
CreateTraceInstanceId equ <__imp_CreateTraceInstanceId>

externdef __imp_EnableTrace:PPROC
EnableTrace equ <__imp_EnableTrace>

externdef __imp_GetTraceEnableFlags:PPROC
GetTraceEnableFlags equ <__imp_GetTraceEnableFlags>

externdef __imp_GetTraceEnableLevel:PPROC
GetTraceEnableLevel equ <__imp_GetTraceEnableLevel>

externdef __imp_GetTraceLoggerHandle:PPROC
GetTraceLoggerHandle equ <__imp_GetTraceLoggerHandle>

externdef __imp_OpenTraceA:PPROC
OpenTraceA equ <__imp_OpenTraceA>
  IFNDEF __UNICODE__
    OpenTrace equ <__imp_OpenTraceA>
  ENDIF

externdef __imp_OpenTraceW:PPROC
OpenTraceW equ <__imp_OpenTraceW>
  IFDEF __UNICODE__
    OpenTrace equ <__imp_OpenTraceW>
  ENDIF

externdef __imp_ProcessTrace:PPROC
ProcessTrace equ <__imp_ProcessTrace>

externdef __imp_QueryAllTracesA:PPROC
QueryAllTracesA equ <__imp_QueryAllTracesA>
  IFNDEF __UNICODE__
    QueryAllTraces equ <__imp_QueryAllTracesA>
  ENDIF

externdef __imp_QueryAllTracesW:PPROC
QueryAllTracesW equ <__imp_QueryAllTracesW>
  IFDEF __UNICODE__
    QueryAllTraces equ <__imp_QueryAllTracesW>
  ENDIF

externdef __imp_RegisterTraceGuidsA:PPROC
RegisterTraceGuidsA equ <__imp_RegisterTraceGuidsA>
  IFNDEF __UNICODE__
    RegisterTraceGuids equ <__imp_RegisterTraceGuidsA>
  ENDIF

externdef __imp_RegisterTraceGuidsW:PPROC
RegisterTraceGuidsW equ <__imp_RegisterTraceGuidsW>
  IFDEF __UNICODE__
    RegisterTraceGuids equ <__imp_RegisterTraceGuidsW>
  ENDIF

externdef __imp_RemoveTraceCallback:PPROC
RemoveTraceCallback equ <__imp_RemoveTraceCallback>

externdef __imp_SetTraceCallback:PPROC
SetTraceCallback equ <__imp_SetTraceCallback>

externdef __imp_StartTraceA:PPROC
StartTraceA equ <__imp_StartTraceA>
  IFNDEF __UNICODE__
    StartTrace equ <__imp_StartTraceA>
  ENDIF

externdef __imp_StartTraceW:PPROC
StartTraceW equ <__imp_StartTraceW>
  IFDEF __UNICODE__
    StartTrace equ <__imp_StartTraceW>
  ENDIF

externdef __imp_TraceEvent:PPROC
TraceEvent equ <__imp_TraceEvent>

externdef __imp_TraceEventInstance:PPROC
TraceEventInstance equ <__imp_TraceEventInstance>

externdef __imp_UnregisterTraceGuids:PPROC
UnregisterTraceGuids equ <__imp_UnregisterTraceGuids>

externdef __imp_WmiCloseBlock:PPROC
WmiCloseBlock equ <__imp_WmiCloseBlock>

externdef __imp_WmiDevInstToInstanceNameA:PPROC
WmiDevInstToInstanceNameA equ <__imp_WmiDevInstToInstanceNameA>
  IFNDEF __UNICODE__
    WmiDevInstToInstanceName equ <__imp_WmiDevInstToInstanceNameA>
  ENDIF

externdef __imp_WmiDevInstToInstanceNameW:PPROC
WmiDevInstToInstanceNameW equ <__imp_WmiDevInstToInstanceNameW>
  IFDEF __UNICODE__
    WmiDevInstToInstanceName equ <__imp_WmiDevInstToInstanceNameW>
  ENDIF

externdef __imp_WmiEnumerateGuids:PPROC
WmiEnumerateGuids equ <__imp_WmiEnumerateGuids>

externdef __imp_WmiExecuteMethodA:PPROC
WmiExecuteMethodA equ <__imp_WmiExecuteMethodA>
  IFNDEF __UNICODE__
    WmiExecuteMethod equ <__imp_WmiExecuteMethodA>
  ENDIF

externdef __imp_WmiExecuteMethodW:PPROC
WmiExecuteMethodW equ <__imp_WmiExecuteMethodW>
  IFDEF __UNICODE__
    WmiExecuteMethod equ <__imp_WmiExecuteMethodW>
  ENDIF

externdef __imp_WmiFileHandleToInstanceNameA:PPROC
WmiFileHandleToInstanceNameA equ <__imp_WmiFileHandleToInstanceNameA>
  IFNDEF __UNICODE__
    WmiFileHandleToInstanceName equ <__imp_WmiFileHandleToInstanceNameA>
  ENDIF

externdef __imp_WmiFileHandleToInstanceNameW:PPROC
WmiFileHandleToInstanceNameW equ <__imp_WmiFileHandleToInstanceNameW>
  IFDEF __UNICODE__
    WmiFileHandleToInstanceName equ <__imp_WmiFileHandleToInstanceNameW>
  ENDIF

externdef __imp_WmiFreeBuffer:PPROC
WmiFreeBuffer equ <__imp_WmiFreeBuffer>

externdef __imp_WmiMofEnumerateResourcesA:PPROC
WmiMofEnumerateResourcesA equ <__imp_WmiMofEnumerateResourcesA>
  IFNDEF __UNICODE__
    WmiMofEnumerateResources equ <__imp_WmiMofEnumerateResourcesA>
  ENDIF

externdef __imp_WmiMofEnumerateResourcesW:PPROC
WmiMofEnumerateResourcesW equ <__imp_WmiMofEnumerateResourcesW>
  IFDEF __UNICODE__
    WmiMofEnumerateResources equ <__imp_WmiMofEnumerateResourcesW>
  ENDIF

externdef __imp_WmiNotificationRegistrationA:PPROC
WmiNotificationRegistrationA equ <__imp_WmiNotificationRegistrationA>
  IFNDEF __UNICODE__
    WmiNotificationRegistration equ <__imp_WmiNotificationRegistrationA>
  ENDIF

externdef __imp_WmiNotificationRegistrationW:PPROC
WmiNotificationRegistrationW equ <__imp_WmiNotificationRegistrationW>
  IFDEF __UNICODE__
    WmiNotificationRegistration equ <__imp_WmiNotificationRegistrationW>
  ENDIF

externdef __imp_WmiOpenBlock:PPROC
WmiOpenBlock equ <__imp_WmiOpenBlock>

externdef __imp_WmiQueryAllDataA:PPROC
WmiQueryAllDataA equ <__imp_WmiQueryAllDataA>
  IFNDEF __UNICODE__
    WmiQueryAllData equ <__imp_WmiQueryAllDataA>
  ENDIF

externdef __imp_WmiQueryAllDataW:PPROC
WmiQueryAllDataW equ <__imp_WmiQueryAllDataW>
  IFDEF __UNICODE__
    WmiQueryAllData equ <__imp_WmiQueryAllDataW>
  ENDIF

externdef __imp_WmiQueryGuidInformation:PPROC
WmiQueryGuidInformation equ <__imp_WmiQueryGuidInformation>

externdef __imp_WmiQuerySingleInstanceA:PPROC
WmiQuerySingleInstanceA equ <__imp_WmiQuerySingleInstanceA>
  IFNDEF __UNICODE__
    WmiQuerySingleInstance equ <__imp_WmiQuerySingleInstanceA>
  ENDIF

externdef __imp_WmiQuerySingleInstanceW:PPROC
WmiQuerySingleInstanceW equ <__imp_WmiQuerySingleInstanceW>
  IFDEF __UNICODE__
    WmiQuerySingleInstance equ <__imp_WmiQuerySingleInstanceW>
  ENDIF

externdef __imp_WmiSetSingleInstanceA:PPROC
WmiSetSingleInstanceA equ <__imp_WmiSetSingleInstanceA>
  IFNDEF __UNICODE__
    WmiSetSingleInstance equ <__imp_WmiSetSingleInstanceA>
  ENDIF

externdef __imp_WmiSetSingleInstanceW:PPROC
WmiSetSingleInstanceW equ <__imp_WmiSetSingleInstanceW>
  IFDEF __UNICODE__
    WmiSetSingleInstance equ <__imp_WmiSetSingleInstanceW>
  ENDIF

externdef __imp_WmiSetSingleItemA:PPROC
WmiSetSingleItemA equ <__imp_WmiSetSingleItemA>
  IFNDEF __UNICODE__
    WmiSetSingleItem equ <__imp_WmiSetSingleItemA>
  ENDIF

externdef __imp_WmiSetSingleItemW:PPROC
WmiSetSingleItemW equ <__imp_WmiSetSingleItemW>
  IFDEF __UNICODE__
    WmiSetSingleItem equ <__imp_WmiSetSingleItemW>
  ENDIF
