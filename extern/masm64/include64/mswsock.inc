externdef __imp_AcceptEx:PPROC
AcceptEx equ <__imp_AcceptEx>

externdef __imp_EnumProtocolsA:PPROC
EnumProtocolsA equ <__imp_EnumProtocolsA>
  IFNDEF __UNICODE__
    EnumProtocols equ <__imp_EnumProtocolsA>
  ENDIF

externdef __imp_EnumProtocolsW:PPROC
EnumProtocolsW equ <__imp_EnumProtocolsW>
  IFDEF __UNICODE__
    EnumProtocols equ <__imp_EnumProtocolsW>
  ENDIF

externdef __imp_GetAcceptExSockaddrs:PPROC
GetAcceptExSockaddrs equ <__imp_GetAcceptExSockaddrs>

externdef __imp_GetAddressByNameA:PPROC
GetAddressByNameA equ <__imp_GetAddressByNameA>
  IFNDEF __UNICODE__
    GetAddressByName equ <__imp_GetAddressByNameA>
  ENDIF

externdef __imp_GetAddressByNameW:PPROC
GetAddressByNameW equ <__imp_GetAddressByNameW>
  IFDEF __UNICODE__
    GetAddressByName equ <__imp_GetAddressByNameW>
  ENDIF

externdef __imp_GetNameByTypeA:PPROC
GetNameByTypeA equ <__imp_GetNameByTypeA>
  IFNDEF __UNICODE__
    GetNameByType equ <__imp_GetNameByTypeA>
  ENDIF

externdef __imp_GetNameByTypeW:PPROC
GetNameByTypeW equ <__imp_GetNameByTypeW>
  IFDEF __UNICODE__
    GetNameByType equ <__imp_GetNameByTypeW>
  ENDIF

externdef __imp_GetServiceA:PPROC
GetServiceA equ <__imp_GetServiceA>
  IFNDEF __UNICODE__
    GetService equ <__imp_GetServiceA>
  ENDIF

externdef __imp_GetServiceW:PPROC
GetServiceW equ <__imp_GetServiceW>
  IFDEF __UNICODE__
    GetService equ <__imp_GetServiceW>
  ENDIF

externdef __imp_GetTypeByNameA:PPROC
GetTypeByNameA equ <__imp_GetTypeByNameA>
  IFNDEF __UNICODE__
    GetTypeByName equ <__imp_GetTypeByNameA>
  ENDIF

externdef __imp_GetTypeByNameW:PPROC
GetTypeByNameW equ <__imp_GetTypeByNameW>
  IFDEF __UNICODE__
    GetTypeByName equ <__imp_GetTypeByNameW>
  ENDIF

externdef __imp_MigrateWinsockConfiguration:PPROC
MigrateWinsockConfiguration equ <__imp_MigrateWinsockConfiguration>

externdef __imp_NPLoadNameSpaces:PPROC
NPLoadNameSpaces equ <__imp_NPLoadNameSpaces>

externdef __imp_NSPStartup:PPROC
NSPStartup equ <__imp_NSPStartup>

externdef __imp_ServiceMain:PPROC
ServiceMain equ <__imp_ServiceMain>

externdef __imp_SetServiceA:PPROC
SetServiceA equ <__imp_SetServiceA>
  IFNDEF __UNICODE__
    SetService equ <__imp_SetServiceA>
  ENDIF

externdef __imp_SetServiceW:PPROC
SetServiceW equ <__imp_SetServiceW>
  IFDEF __UNICODE__
    SetService equ <__imp_SetServiceW>
  ENDIF

externdef __imp_StartWsdpService:PPROC
StartWsdpService equ <__imp_StartWsdpService>

externdef __imp_StopWsdpService:PPROC
StopWsdpService equ <__imp_StopWsdpService>

externdef __imp_SvchostPushServiceGlobals:PPROC
SvchostPushServiceGlobals equ <__imp_SvchostPushServiceGlobals>

externdef __imp_TransmitFile:PPROC
TransmitFile equ <__imp_TransmitFile>

externdef __imp_WSARecvEx:PPROC
WSARecvEx equ <__imp_WSARecvEx>

externdef __imp_WSPStartup:PPROC
WSPStartup equ <__imp_WSPStartup>

externdef __imp_dn_expand:PPROC
dn_expand equ <__imp_dn_expand>

externdef __imp_getnetbyname:PPROC
getnetbyname equ <__imp_getnetbyname>

externdef __imp_inet_network:PPROC
inet_network equ <__imp_inet_network>

externdef __imp_rcmd:PPROC
rcmd equ <__imp_rcmd>

externdef __imp_rexec:PPROC
rexec equ <__imp_rexec>

externdef __imp_rresvport:PPROC
rresvport equ <__imp_rresvport>

externdef __imp_s_perror:PPROC
s_perror equ <__imp_s_perror>

externdef __imp_sethostname:PPROC
sethostname equ <__imp_sethostname>
