externdef __imp_DhcpAddServerDS:PPROC
DhcpAddServerDS equ <__imp_DhcpAddServerDS>

externdef __imp_DhcpDeleteServerDS:PPROC
DhcpDeleteServerDS equ <__imp_DhcpDeleteServerDS>

externdef __imp_DhcpDsAddServer:PPROC
DhcpDsAddServer equ <__imp_DhcpDsAddServer>

externdef __imp_DhcpDsCleanupDS:PPROC
DhcpDsCleanupDS equ <__imp_DhcpDsCleanupDS>

externdef __imp_DhcpDsDelServer:PPROC
DhcpDsDelServer equ <__imp_DhcpDsDelServer>

externdef __imp_DhcpDsEnumServers:PPROC
DhcpDsEnumServers equ <__imp_DhcpDsEnumServers>

externdef __imp_DhcpDsGetAttribs:PPROC
DhcpDsGetAttribs equ <__imp_DhcpDsGetAttribs>

externdef __imp_DhcpDsGetLists:PPROC
DhcpDsGetLists equ <__imp_DhcpDsGetLists>

externdef __imp_DhcpDsGetRoot:PPROC
DhcpDsGetRoot equ <__imp_DhcpDsGetRoot>

externdef __imp_DhcpDsInitDS:PPROC
DhcpDsInitDS equ <__imp_DhcpDsInitDS>

externdef __imp_DhcpDsSetLists:PPROC
DhcpDsSetLists equ <__imp_DhcpDsSetLists>

externdef __imp_DhcpDsValidateService:PPROC
DhcpDsValidateService equ <__imp_DhcpDsValidateService>

externdef __imp_DhcpEnumServersDS:PPROC
DhcpEnumServersDS equ <__imp_DhcpEnumServersDS>

externdef __imp_StoreBeginSearch:PPROC
StoreBeginSearch equ <__imp_StoreBeginSearch>

externdef __imp_StoreCleanupHandle:PPROC
StoreCleanupHandle equ <__imp_StoreCleanupHandle>

externdef __imp_StoreCollectAttributes:PPROC
StoreCollectAttributes equ <__imp_StoreCollectAttributes>

externdef __imp_StoreCreateObjectVA:PPROC
StoreCreateObjectVA equ <__imp_StoreCreateObjectVA>
  IFNDEF __UNICODE__
    StoreCreateObjectV equ <__imp_StoreCreateObjectVA>
  ENDIF

externdef __imp_StoreDeleteObject:PPROC
StoreDeleteObject equ <__imp_StoreDeleteObject>

externdef __imp_StoreEndSearch:PPROC
StoreEndSearch equ <__imp_StoreEndSearch>

externdef __imp_StoreGetHandle:PPROC
StoreGetHandle equ <__imp_StoreGetHandle>

externdef __imp_StoreInitHandle:PPROC
StoreInitHandle equ <__imp_StoreInitHandle>

externdef __imp_StoreSearchGetNext:PPROC
StoreSearchGetNext equ <__imp_StoreSearchGetNext>

externdef __imp_StoreSetSearchOneLevel:PPROC
StoreSetSearchOneLevel equ <__imp_StoreSetSearchOneLevel>

externdef __imp_StoreSetSearchSubTree:PPROC
StoreSetSearchSubTree equ <__imp_StoreSetSearchSubTree>
