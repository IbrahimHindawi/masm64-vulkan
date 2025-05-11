externdef __imp_BreakRecordsIntoBlob:PPROC
BreakRecordsIntoBlob equ <__imp_BreakRecordsIntoBlob>

externdef __imp_CombineRecordsInBlob:PPROC
CombineRecordsInBlob equ <__imp_CombineRecordsInBlob>

externdef __imp_DnsAcquireContextHandle_A:PPROC
DnsAcquireContextHandle_A equ <__imp_DnsAcquireContextHandle_A>
  IFNDEF __UNICODE__
    DnsAcquireContextHandle_ equ <__imp_DnsAcquireContextHandle_A>
  ENDIF

externdef __imp_DnsAcquireContextHandle_W:PPROC
DnsAcquireContextHandle_W equ <__imp_DnsAcquireContextHandle_W>
  IFDEF __UNICODE__
    DnsAcquireContextHandle_ equ <__imp_DnsAcquireContextHandle_W>
  ENDIF

externdef __imp_DnsAllocateRecord:PPROC
DnsAllocateRecord equ <__imp_DnsAllocateRecord>

externdef __imp_DnsApiAlloc:PPROC
DnsApiAlloc equ <__imp_DnsApiAlloc>

externdef __imp_DnsApiAllocZero:PPROC
DnsApiAllocZero equ <__imp_DnsApiAllocZero>

externdef __imp_DnsApiFree:PPROC
DnsApiFree equ <__imp_DnsApiFree>

externdef __imp_DnsApiHeapReset:PPROC
DnsApiHeapReset equ <__imp_DnsApiHeapReset>

externdef __imp_DnsApiRealloc:PPROC
DnsApiRealloc equ <__imp_DnsApiRealloc>

externdef __imp_DnsApiSetDebugGlobals:PPROC
DnsApiSetDebugGlobals equ <__imp_DnsApiSetDebugGlobals>

externdef __imp_DnsAsyncRegisterHostAddrs:PPROC
DnsAsyncRegisterHostAddrs equ <__imp_DnsAsyncRegisterHostAddrs>

externdef __imp_DnsAsyncRegisterInit:PPROC
DnsAsyncRegisterInit equ <__imp_DnsAsyncRegisterInit>

externdef __imp_DnsAsyncRegisterTerm:PPROC
DnsAsyncRegisterTerm equ <__imp_DnsAsyncRegisterTerm>

externdef __imp_DnsCopyStringEx:PPROC
DnsCopyStringEx equ <__imp_DnsCopyStringEx>

externdef __imp_DnsCreateReverseNameStringForIpAddress:PPROC
DnsCreateReverseNameStringForIpAddress equ <__imp_DnsCreateReverseNameStringForIpAddress>

externdef __imp_DnsCreateStandardDnsNameCopy:PPROC
DnsCreateStandardDnsNameCopy equ <__imp_DnsCreateStandardDnsNameCopy>

externdef __imp_DnsCreateStringCopy:PPROC
DnsCreateStringCopy equ <__imp_DnsCreateStringCopy>

externdef __imp_DnsDhcpRegisterHostAddrs:PPROC
DnsDhcpRegisterHostAddrs equ <__imp_DnsDhcpRegisterHostAddrs>

externdef __imp_DnsDhcpRegisterInit:PPROC
DnsDhcpRegisterInit equ <__imp_DnsDhcpRegisterInit>

externdef __imp_DnsDhcpRegisterTerm:PPROC
DnsDhcpRegisterTerm equ <__imp_DnsDhcpRegisterTerm>

externdef __imp_DnsDhcpRemoveRegistrations:PPROC
DnsDhcpRemoveRegistrations equ <__imp_DnsDhcpRemoveRegistrations>

externdef __imp_DnsDhcpSrvRegisterHostName:PPROC
DnsDhcpSrvRegisterHostName equ <__imp_DnsDhcpSrvRegisterHostName>

externdef __imp_DnsDhcpSrvRegisterInit:PPROC
DnsDhcpSrvRegisterInit equ <__imp_DnsDhcpSrvRegisterInit>

externdef __imp_DnsDhcpSrvRegisterInitialize:PPROC
DnsDhcpSrvRegisterInitialize equ <__imp_DnsDhcpSrvRegisterInitialize>

externdef __imp_DnsDhcpSrvRegisterTerm:PPROC
DnsDhcpSrvRegisterTerm equ <__imp_DnsDhcpSrvRegisterTerm>

externdef __imp_DnsDowncaseDnsNameLabel:PPROC
DnsDowncaseDnsNameLabel equ <__imp_DnsDowncaseDnsNameLabel>

externdef __imp_DnsExtractRecordsFromMessage_UTF8:PPROC
DnsExtractRecordsFromMessage_UTF8 equ <__imp_DnsExtractRecordsFromMessage_UTF8>

externdef __imp_DnsExtractRecordsFromMessage_W:PPROC
DnsExtractRecordsFromMessage_W equ <__imp_DnsExtractRecordsFromMessage_W>
  IFDEF __UNICODE__
    DnsExtractRecordsFromMessage_ equ <__imp_DnsExtractRecordsFromMessage_W>
  ENDIF

externdef __imp_DnsFindAuthoritativeZone:PPROC
DnsFindAuthoritativeZone equ <__imp_DnsFindAuthoritativeZone>

externdef __imp_DnsFlushResolverCache:PPROC
DnsFlushResolverCache equ <__imp_DnsFlushResolverCache>

externdef __imp_DnsFlushResolverCacheEntry_A:PPROC
DnsFlushResolverCacheEntry_A equ <__imp_DnsFlushResolverCacheEntry_A>
  IFNDEF __UNICODE__
    DnsFlushResolverCacheEntry_ equ <__imp_DnsFlushResolverCacheEntry_A>
  ENDIF

externdef __imp_DnsFlushResolverCacheEntry_UTF8:PPROC
DnsFlushResolverCacheEntry_UTF8 equ <__imp_DnsFlushResolverCacheEntry_UTF8>

externdef __imp_DnsFlushResolverCacheEntry_W:PPROC
DnsFlushResolverCacheEntry_W equ <__imp_DnsFlushResolverCacheEntry_W>
  IFDEF __UNICODE__
    DnsFlushResolverCacheEntry_ equ <__imp_DnsFlushResolverCacheEntry_W>
  ENDIF

externdef __imp_DnsFree:PPROC
DnsFree equ <__imp_DnsFree>

externdef __imp_DnsFreeConfigStructure:PPROC
DnsFreeConfigStructure equ <__imp_DnsFreeConfigStructure>

externdef __imp_DnsGetBufferLengthForStringCopy:PPROC
DnsGetBufferLengthForStringCopy equ <__imp_DnsGetBufferLengthForStringCopy>

externdef __imp_DnsGetCacheDataTable:PPROC
DnsGetCacheDataTable equ <__imp_DnsGetCacheDataTable>

externdef __imp_DnsGetDnsServerList:PPROC
DnsGetDnsServerList equ <__imp_DnsGetDnsServerList>

externdef __imp_DnsGetDomainName:PPROC
DnsGetDomainName equ <__imp_DnsGetDomainName>

externdef __imp_DnsGetLastFailedUpdateInfo:PPROC
DnsGetLastFailedUpdateInfo equ <__imp_DnsGetLastFailedUpdateInfo>

externdef __imp_DnsGetPrimaryDomainName_A:PPROC
DnsGetPrimaryDomainName_A equ <__imp_DnsGetPrimaryDomainName_A>
  IFNDEF __UNICODE__
    DnsGetPrimaryDomainName_ equ <__imp_DnsGetPrimaryDomainName_A>
  ENDIF

externdef __imp_DnsGlobals:PPROC
DnsGlobals equ <__imp_DnsGlobals>

externdef __imp_DnsIpv6AddressToString:PPROC
DnsIpv6AddressToString equ <__imp_DnsIpv6AddressToString>

externdef __imp_DnsIpv6StringToAddress:PPROC
DnsIpv6StringToAddress equ <__imp_DnsIpv6StringToAddress>

externdef __imp_DnsIsAMailboxType:PPROC
DnsIsAMailboxType equ <__imp_DnsIsAMailboxType>

externdef __imp_DnsIsStatusRcode:PPROC
DnsIsStatusRcode equ <__imp_DnsIsStatusRcode>

externdef __imp_DnsIsStringCountValidForTextType:PPROC
DnsIsStringCountValidForTextType equ <__imp_DnsIsStringCountValidForTextType>

externdef __imp_DnsMapRcodeToStatus:PPROC
DnsMapRcodeToStatus equ <__imp_DnsMapRcodeToStatus>

externdef __imp_DnsModifyRecordsInSet_A:PPROC
DnsModifyRecordsInSet_A equ <__imp_DnsModifyRecordsInSet_A>
  IFNDEF __UNICODE__
    DnsModifyRecordsInSet_ equ <__imp_DnsModifyRecordsInSet_A>
  ENDIF

externdef __imp_DnsModifyRecordsInSet_UTF8:PPROC
DnsModifyRecordsInSet_UTF8 equ <__imp_DnsModifyRecordsInSet_UTF8>

externdef __imp_DnsModifyRecordsInSet_W:PPROC
DnsModifyRecordsInSet_W equ <__imp_DnsModifyRecordsInSet_W>
  IFDEF __UNICODE__
    DnsModifyRecordsInSet_ equ <__imp_DnsModifyRecordsInSet_W>
  ENDIF

externdef __imp_DnsNameCompareEx_A:PPROC
DnsNameCompareEx_A equ <__imp_DnsNameCompareEx_A>
  IFNDEF __UNICODE__
    DnsNameCompareEx_ equ <__imp_DnsNameCompareEx_A>
  ENDIF

externdef __imp_DnsNameCompareEx_UTF8:PPROC
DnsNameCompareEx_UTF8 equ <__imp_DnsNameCompareEx_UTF8>

externdef __imp_DnsNameCompareEx_W:PPROC
DnsNameCompareEx_W equ <__imp_DnsNameCompareEx_W>
  IFDEF __UNICODE__
    DnsNameCompareEx_ equ <__imp_DnsNameCompareEx_W>
  ENDIF

externdef __imp_DnsNameCompare_A:PPROC
DnsNameCompare_A equ <__imp_DnsNameCompare_A>
  IFNDEF __UNICODE__
    DnsNameCompare_ equ <__imp_DnsNameCompare_A>
  ENDIF

externdef __imp_DnsNameCompare_UTF8:PPROC
DnsNameCompare_UTF8 equ <__imp_DnsNameCompare_UTF8>

externdef __imp_DnsNameCompare_W:PPROC
DnsNameCompare_W equ <__imp_DnsNameCompare_W>
  IFDEF __UNICODE__
    DnsNameCompare_ equ <__imp_DnsNameCompare_W>
  ENDIF

externdef __imp_DnsNameCopy:PPROC
DnsNameCopy equ <__imp_DnsNameCopy>

externdef __imp_DnsNameCopyAllocate:PPROC
DnsNameCopyAllocate equ <__imp_DnsNameCopyAllocate>

externdef __imp_DnsNetworkInfo_CreateFromFAZ:PPROC
DnsNetworkInfo_CreateFromFAZ equ <__imp_DnsNetworkInfo_CreateFromFAZ>

externdef __imp_DnsNetworkInformation_CreateFromFAZ:PPROC
DnsNetworkInformation_CreateFromFAZ equ <__imp_DnsNetworkInformation_CreateFromFAZ>

externdef __imp_DnsNotifyResolver:PPROC
DnsNotifyResolver equ <__imp_DnsNotifyResolver>

externdef __imp_DnsNotifyResolverClusterIp:PPROC
DnsNotifyResolverClusterIp equ <__imp_DnsNotifyResolverClusterIp>

externdef __imp_DnsNotifyResolverEx:PPROC
DnsNotifyResolverEx equ <__imp_DnsNotifyResolverEx>

externdef __imp_DnsQueryConfig:PPROC
DnsQueryConfig equ <__imp_DnsQueryConfig>

externdef __imp_DnsQueryConfigAllocEx:PPROC
DnsQueryConfigAllocEx equ <__imp_DnsQueryConfigAllocEx>

externdef __imp_DnsQueryConfigDword:PPROC
DnsQueryConfigDword equ <__imp_DnsQueryConfigDword>

externdef __imp_DnsQueryExA:PPROC
DnsQueryExA equ <__imp_DnsQueryExA>
  IFNDEF __UNICODE__
    DnsQueryEx equ <__imp_DnsQueryExA>
  ENDIF

externdef __imp_DnsQueryExUTF8:PPROC
DnsQueryExUTF8 equ <__imp_DnsQueryExUTF8>

externdef __imp_DnsQueryExW:PPROC
DnsQueryExW equ <__imp_DnsQueryExW>
  IFDEF __UNICODE__
    DnsQueryEx equ <__imp_DnsQueryExW>
  ENDIF

externdef __imp_DnsQuery_A:PPROC
DnsQuery_A equ <__imp_DnsQuery_A>
  IFNDEF __UNICODE__
    DnsQuery_ equ <__imp_DnsQuery_A>
  ENDIF

externdef __imp_DnsQuery_UTF8:PPROC
DnsQuery_UTF8 equ <__imp_DnsQuery_UTF8>

externdef __imp_DnsQuery_W:PPROC
DnsQuery_W equ <__imp_DnsQuery_W>
  IFDEF __UNICODE__
    DnsQuery_ equ <__imp_DnsQuery_W>
  ENDIF

externdef __imp_DnsRecordBuild_UTF8:PPROC
DnsRecordBuild_UTF8 equ <__imp_DnsRecordBuild_UTF8>

externdef __imp_DnsRecordBuild_W:PPROC
DnsRecordBuild_W equ <__imp_DnsRecordBuild_W>
  IFDEF __UNICODE__
    DnsRecordBuild_ equ <__imp_DnsRecordBuild_W>
  ENDIF

externdef __imp_DnsRecordCompare:PPROC
DnsRecordCompare equ <__imp_DnsRecordCompare>

externdef __imp_DnsRecordCopyEx:PPROC
DnsRecordCopyEx equ <__imp_DnsRecordCopyEx>

externdef __imp_DnsRecordListFree:PPROC
DnsRecordListFree equ <__imp_DnsRecordListFree>

externdef __imp_DnsRecordSetCompare:PPROC
DnsRecordSetCompare equ <__imp_DnsRecordSetCompare>

externdef __imp_DnsRecordSetCopyEx:PPROC
DnsRecordSetCopyEx equ <__imp_DnsRecordSetCopyEx>

externdef __imp_DnsRecordSetDetach:PPROC
DnsRecordSetDetach equ <__imp_DnsRecordSetDetach>

externdef __imp_DnsRecordStringForType:PPROC
DnsRecordStringForType equ <__imp_DnsRecordStringForType>

externdef __imp_DnsRecordStringForWritableType:PPROC
DnsRecordStringForWritableType equ <__imp_DnsRecordStringForWritableType>

externdef __imp_DnsRecordTypeForName:PPROC
DnsRecordTypeForName equ <__imp_DnsRecordTypeForName>

externdef __imp_DnsRegisterClusterAddress:PPROC
DnsRegisterClusterAddress equ <__imp_DnsRegisterClusterAddress>

externdef __imp_DnsReleaseContextHandle:PPROC
DnsReleaseContextHandle equ <__imp_DnsReleaseContextHandle>

externdef __imp_DnsRemoveRegistrations:PPROC
DnsRemoveRegistrations equ <__imp_DnsRemoveRegistrations>

externdef __imp_DnsReplaceRecordSetA:PPROC
DnsReplaceRecordSetA equ <__imp_DnsReplaceRecordSetA>
  IFNDEF __UNICODE__
    DnsReplaceRecordSet equ <__imp_DnsReplaceRecordSetA>
  ENDIF

externdef __imp_DnsReplaceRecordSetUTF8:PPROC
DnsReplaceRecordSetUTF8 equ <__imp_DnsReplaceRecordSetUTF8>

externdef __imp_DnsReplaceRecordSetW:PPROC
DnsReplaceRecordSetW equ <__imp_DnsReplaceRecordSetW>
  IFDEF __UNICODE__
    DnsReplaceRecordSet equ <__imp_DnsReplaceRecordSetW>
  ENDIF

externdef __imp_DnsScreenLocalAddrsForRegistration:PPROC
DnsScreenLocalAddrsForRegistration equ <__imp_DnsScreenLocalAddrsForRegistration>

externdef __imp_DnsSetConfigDword:PPROC
DnsSetConfigDword equ <__imp_DnsSetConfigDword>

externdef __imp_DnsStatusString:PPROC
DnsStatusString equ <__imp_DnsStatusString>

externdef __imp_DnsStringCopyAllocateEx:PPROC
DnsStringCopyAllocateEx equ <__imp_DnsStringCopyAllocateEx>

externdef __imp_DnsUnicodeToUtf8:PPROC
DnsUnicodeToUtf8 equ <__imp_DnsUnicodeToUtf8>

externdef __imp_DnsUpdate:PPROC
DnsUpdate equ <__imp_DnsUpdate>

externdef __imp_DnsUpdateTest_A:PPROC
DnsUpdateTest_A equ <__imp_DnsUpdateTest_A>
  IFNDEF __UNICODE__
    DnsUpdateTest_ equ <__imp_DnsUpdateTest_A>
  ENDIF

externdef __imp_DnsUpdateTest_UTF8:PPROC
DnsUpdateTest_UTF8 equ <__imp_DnsUpdateTest_UTF8>

externdef __imp_DnsUpdateTest_W:PPROC
DnsUpdateTest_W equ <__imp_DnsUpdateTest_W>
  IFDEF __UNICODE__
    DnsUpdateTest_ equ <__imp_DnsUpdateTest_W>
  ENDIF

externdef __imp_DnsUtf8ToUnicode:PPROC
DnsUtf8ToUnicode equ <__imp_DnsUtf8ToUnicode>

externdef __imp_DnsValidateName_A:PPROC
DnsValidateName_A equ <__imp_DnsValidateName_A>
  IFNDEF __UNICODE__
    DnsValidateName_ equ <__imp_DnsValidateName_A>
  ENDIF

externdef __imp_DnsValidateName_UTF8:PPROC
DnsValidateName_UTF8 equ <__imp_DnsValidateName_UTF8>

externdef __imp_DnsValidateName_W:PPROC
DnsValidateName_W equ <__imp_DnsValidateName_W>
  IFDEF __UNICODE__
    DnsValidateName_ equ <__imp_DnsValidateName_W>
  ENDIF

externdef __imp_DnsValidateUtf8Byte:PPROC
DnsValidateUtf8Byte equ <__imp_DnsValidateUtf8Byte>

externdef __imp_DnsWriteQuestionToBuffer_UTF8:PPROC
DnsWriteQuestionToBuffer_UTF8 equ <__imp_DnsWriteQuestionToBuffer_UTF8>

externdef __imp_DnsWriteQuestionToBuffer_W:PPROC
DnsWriteQuestionToBuffer_W equ <__imp_DnsWriteQuestionToBuffer_W>
  IFDEF __UNICODE__
    DnsWriteQuestionToBuffer_ equ <__imp_DnsWriteQuestionToBuffer_W>
  ENDIF

externdef __imp_DnsWriteReverseNameStringForIpAddress:PPROC
DnsWriteReverseNameStringForIpAddress equ <__imp_DnsWriteReverseNameStringForIpAddress>

externdef __imp_Dns_AddRecordsToMessage:PPROC
Dns_AddRecordsToMessage equ <__imp_Dns_AddRecordsToMessage>

externdef __imp_Dns_AllocateMsgBuf:PPROC
Dns_AllocateMsgBuf equ <__imp_Dns_AllocateMsgBuf>

externdef __imp_Dns_BuildPacket:PPROC
Dns_BuildPacket equ <__imp_Dns_BuildPacket>

externdef __imp_Dns_CleanupWinsock:PPROC
Dns_CleanupWinsock equ <__imp_Dns_CleanupWinsock>

externdef __imp_Dns_CloseConnection:PPROC
Dns_CloseConnection equ <__imp_Dns_CloseConnection>

externdef __imp_Dns_CloseSocket:PPROC
Dns_CloseSocket equ <__imp_Dns_CloseSocket>

externdef __imp_Dns_CreateMulticastSocket:PPROC
Dns_CreateMulticastSocket equ <__imp_Dns_CreateMulticastSocket>

externdef __imp_Dns_CreateSocket:PPROC
Dns_CreateSocket equ <__imp_Dns_CreateSocket>

externdef __imp_Dns_CreateSocketEx:PPROC
Dns_CreateSocketEx equ <__imp_Dns_CreateSocketEx>

externdef __imp_Dns_FindAuthoritativeZoneLib:PPROC
Dns_FindAuthoritativeZoneLib equ <__imp_Dns_FindAuthoritativeZoneLib>

externdef __imp_Dns_GetRandomXid:PPROC
Dns_GetRandomXid equ <__imp_Dns_GetRandomXid>

externdef __imp_Dns_InitializeMsgRemoteSockaddr:PPROC
Dns_InitializeMsgRemoteSockaddr equ <__imp_Dns_InitializeMsgRemoteSockaddr>

externdef __imp_Dns_InitializeWinsock:PPROC
Dns_InitializeWinsock equ <__imp_Dns_InitializeWinsock>

externdef __imp_Dns_OpenTcpConnectionAndSend:PPROC
Dns_OpenTcpConnectionAndSend equ <__imp_Dns_OpenTcpConnectionAndSend>

externdef __imp_Dns_ParseMessage:PPROC
Dns_ParseMessage equ <__imp_Dns_ParseMessage>

externdef __imp_Dns_ParsePacketRecord:PPROC
Dns_ParsePacketRecord equ <__imp_Dns_ParsePacketRecord>

externdef __imp_Dns_PingAdapterServers:PPROC
Dns_PingAdapterServers equ <__imp_Dns_PingAdapterServers>

externdef __imp_Dns_ReadPacketName:PPROC
Dns_ReadPacketName equ <__imp_Dns_ReadPacketName>

externdef __imp_Dns_ReadPacketNameAllocate:PPROC
Dns_ReadPacketNameAllocate equ <__imp_Dns_ReadPacketNameAllocate>

externdef __imp_Dns_ReadRecordStructureFromPacket:PPROC
Dns_ReadRecordStructureFromPacket equ <__imp_Dns_ReadRecordStructureFromPacket>

externdef __imp_Dns_RecvTcp:PPROC
Dns_RecvTcp equ <__imp_Dns_RecvTcp>

externdef __imp_Dns_ResetNetworkInfo:PPROC
Dns_ResetNetworkInfo equ <__imp_Dns_ResetNetworkInfo>

externdef __imp_Dns_SendAndRecvUdp:PPROC
Dns_SendAndRecvUdp equ <__imp_Dns_SendAndRecvUdp>

externdef __imp_Dns_SendEx:PPROC
Dns_SendEx equ <__imp_Dns_SendEx>

externdef __imp_Dns_SetRecordDatalength:PPROC
Dns_SetRecordDatalength equ <__imp_Dns_SetRecordDatalength>

externdef __imp_Dns_SkipPacketName:PPROC
Dns_SkipPacketName equ <__imp_Dns_SkipPacketName>

externdef __imp_Dns_SkipToRecord:PPROC
Dns_SkipToRecord equ <__imp_Dns_SkipToRecord>

externdef __imp_Dns_UpdateLib:PPROC
Dns_UpdateLib equ <__imp_Dns_UpdateLib>

externdef __imp_Dns_UpdateLibEx:PPROC
Dns_UpdateLibEx equ <__imp_Dns_UpdateLibEx>

externdef __imp_Dns_WriteDottedNameToPacket:PPROC
Dns_WriteDottedNameToPacket equ <__imp_Dns_WriteDottedNameToPacket>

externdef __imp_Dns_WriteQuestionToMessage:PPROC
Dns_WriteQuestionToMessage equ <__imp_Dns_WriteQuestionToMessage>

externdef __imp_Dns_WriteRecordStructureToPacketEx:PPROC
Dns_WriteRecordStructureToPacketEx equ <__imp_Dns_WriteRecordStructureToPacketEx>

externdef __imp_GetCurrentTimeInSeconds:PPROC
GetCurrentTimeInSeconds equ <__imp_GetCurrentTimeInSeconds>

externdef __imp_HostsFile_Close:PPROC
HostsFile_Close equ <__imp_HostsFile_Close>

externdef __imp_HostsFile_Open:PPROC
HostsFile_Open equ <__imp_HostsFile_Open>

externdef __imp_HostsFile_ReadLine:PPROC
HostsFile_ReadLine equ <__imp_HostsFile_ReadLine>

externdef __imp_Local_GetRecordsForLocalName:PPROC
Local_GetRecordsForLocalName equ <__imp_Local_GetRecordsForLocalName>

externdef __imp_NetInfo_Build:PPROC
NetInfo_Build equ <__imp_NetInfo_Build>

externdef __imp_NetInfo_Clean:PPROC
NetInfo_Clean equ <__imp_NetInfo_Clean>

externdef __imp_NetInfo_Copy:PPROC
NetInfo_Copy equ <__imp_NetInfo_Copy>

externdef __imp_NetInfo_Free:PPROC
NetInfo_Free equ <__imp_NetInfo_Free>

externdef __imp_NetInfo_IsForUpdate:PPROC
NetInfo_IsForUpdate equ <__imp_NetInfo_IsForUpdate>

externdef __imp_NetInfo_ResetServerPriorities:PPROC
NetInfo_ResetServerPriorities equ <__imp_NetInfo_ResetServerPriorities>

externdef __imp_QueryDirectEx:PPROC
QueryDirectEx equ <__imp_QueryDirectEx>

externdef __imp_Query_Main:PPROC
Query_Main equ <__imp_Query_Main>

externdef __imp_Reg_GetValueEx:PPROC
Reg_GetValueEx equ <__imp_Reg_GetValueEx>

externdef __imp_Reg_ReadGlobalsEx:PPROC
Reg_ReadGlobalsEx equ <__imp_Reg_ReadGlobalsEx>

externdef __imp_Send_AndRecvUdpWithParam:PPROC
Send_AndRecvUdpWithParam equ <__imp_Send_AndRecvUdpWithParam>

externdef __imp_Send_MessagePrivate:PPROC
Send_MessagePrivate equ <__imp_Send_MessagePrivate>

externdef __imp_Send_OpenTcpConnectionAndSend:PPROC
Send_OpenTcpConnectionAndSend equ <__imp_Send_OpenTcpConnectionAndSend>

externdef __imp_Socket_CacheCleanup:PPROC
Socket_CacheCleanup equ <__imp_Socket_CacheCleanup>

externdef __imp_Socket_CacheInit:PPROC
Socket_CacheInit equ <__imp_Socket_CacheInit>

externdef __imp_Socket_CleanupWinsock:PPROC
Socket_CleanupWinsock equ <__imp_Socket_CleanupWinsock>

externdef __imp_Socket_ClearMessageSockets:PPROC
Socket_ClearMessageSockets equ <__imp_Socket_ClearMessageSockets>

externdef __imp_Socket_CloseEx:PPROC
Socket_CloseEx equ <__imp_Socket_CloseEx>

externdef __imp_Socket_CloseMessageSockets:PPROC
Socket_CloseMessageSockets equ <__imp_Socket_CloseMessageSockets>

externdef __imp_Socket_Create:PPROC
Socket_Create equ <__imp_Socket_Create>

externdef __imp_Socket_CreateMulticast:PPROC
Socket_CreateMulticast equ <__imp_Socket_CreateMulticast>

externdef __imp_Socket_InitWinsock:PPROC
Socket_InitWinsock equ <__imp_Socket_InitWinsock>

externdef __imp_Util_IsIp6Running:PPROC
Util_IsIp6Running equ <__imp_Util_IsIp6Running>
