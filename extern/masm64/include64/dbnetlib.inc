externdef __imp_CloseEnumServers:PPROC
CloseEnumServers equ <__imp_CloseEnumServers>

externdef __imp_ConnectionCheckForData:PPROC
ConnectionCheckForData equ <__imp_ConnectionCheckForData>

externdef __imp_ConnectionClose:PPROC
ConnectionClose equ <__imp_ConnectionClose>

externdef __imp_ConnectionError:PPROC
ConnectionError equ <__imp_ConnectionError>

externdef __imp_ConnectionErrorW:PPROC
ConnectionErrorW equ <__imp_ConnectionErrorW>
  IFDEF __UNICODE__
    ConnectionError equ <__imp_ConnectionErrorW>
  ENDIF

externdef __imp_ConnectionFlushCache:PPROC
ConnectionFlushCache equ <__imp_ConnectionFlushCache>

externdef __imp_ConnectionGetSvrUser:PPROC
ConnectionGetSvrUser equ <__imp_ConnectionGetSvrUser>

externdef __imp_ConnectionMode:PPROC
ConnectionMode equ <__imp_ConnectionMode>

externdef __imp_ConnectionObjectSize:PPROC
ConnectionObjectSize equ <__imp_ConnectionObjectSize>

externdef __imp_ConnectionOpen:PPROC
ConnectionOpen equ <__imp_ConnectionOpen>

externdef __imp_ConnectionOpenW:PPROC
ConnectionOpenW equ <__imp_ConnectionOpenW>
  IFDEF __UNICODE__
    ConnectionOpen equ <__imp_ConnectionOpenW>
  ENDIF

externdef __imp_ConnectionOption:PPROC
ConnectionOption equ <__imp_ConnectionOption>

externdef __imp_ConnectionRead:PPROC
ConnectionRead equ <__imp_ConnectionRead>

externdef __imp_ConnectionServerEnum:PPROC
ConnectionServerEnum equ <__imp_ConnectionServerEnum>

externdef __imp_ConnectionServerEnumW:PPROC
ConnectionServerEnumW equ <__imp_ConnectionServerEnumW>
  IFDEF __UNICODE__
    ConnectionServerEnum equ <__imp_ConnectionServerEnumW>
  ENDIF

externdef __imp_ConnectionSqlVer:PPROC
ConnectionSqlVer equ <__imp_ConnectionSqlVer>

externdef __imp_ConnectionStatus:PPROC
ConnectionStatus equ <__imp_ConnectionStatus>

externdef __imp_ConnectionTransact:PPROC
ConnectionTransact equ <__imp_ConnectionTransact>

externdef __imp_ConnectionVer:PPROC
ConnectionVer equ <__imp_ConnectionVer>

externdef __imp_ConnectionWrite:PPROC
ConnectionWrite equ <__imp_ConnectionWrite>

externdef __imp_ConnectionWriteOOB:PPROC
ConnectionWriteOOB equ <__imp_ConnectionWriteOOB>

externdef __imp_GenClientContext:PPROC
GenClientContext equ <__imp_GenClientContext>

externdef __imp_GetNextEnumeration:PPROC
GetNextEnumeration equ <__imp_GetNextEnumeration>

externdef __imp_InitEnumServers:PPROC
InitEnumServers equ <__imp_InitEnumServers>

externdef __imp_InitSSPIPackage:PPROC
InitSSPIPackage equ <__imp_InitSSPIPackage>

externdef __imp_InitSession:PPROC
InitSession equ <__imp_InitSession>

externdef __imp_TermSSPIPackage:PPROC
TermSSPIPackage equ <__imp_TermSSPIPackage>

externdef __imp_TermSession:PPROC
TermSession equ <__imp_TermSession>
