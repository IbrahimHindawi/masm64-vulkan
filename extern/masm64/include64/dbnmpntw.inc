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

externdef __imp_ConnectionRead:PPROC
ConnectionRead equ <__imp_ConnectionRead>

externdef __imp_ConnectionServerEnum:PPROC
ConnectionServerEnum equ <__imp_ConnectionServerEnum>

externdef __imp_ConnectionServerEnumW:PPROC
ConnectionServerEnumW equ <__imp_ConnectionServerEnumW>
  IFDEF __UNICODE__
    ConnectionServerEnum equ <__imp_ConnectionServerEnumW>
  ENDIF

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
