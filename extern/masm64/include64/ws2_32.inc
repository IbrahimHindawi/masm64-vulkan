externdef __imp_FreeAddrInfoW:PPROC
FreeAddrInfoW equ <__imp_FreeAddrInfoW>
  IFDEF __UNICODE__
    FreeAddrInfo equ <__imp_FreeAddrInfoW>
  ENDIF

externdef __imp_GetAddrInfoW:PPROC
GetAddrInfoW equ <__imp_GetAddrInfoW>
  IFDEF __UNICODE__
    GetAddrInfo equ <__imp_GetAddrInfoW>
  ENDIF

externdef __imp_GetNameInfoW:PPROC
GetNameInfoW equ <__imp_GetNameInfoW>
  IFDEF __UNICODE__
    GetNameInfo equ <__imp_GetNameInfoW>
  ENDIF

externdef __imp_WEP:PPROC
WEP equ <__imp_WEP>

externdef __imp_WPUCompleteOverlappedRequest:PPROC
WPUCompleteOverlappedRequest equ <__imp_WPUCompleteOverlappedRequest>

externdef __imp_WSAAccept:PPROC
WSAAccept equ <__imp_WSAAccept>

externdef __imp_WSAAddressToStringA:PPROC
WSAAddressToStringA equ <__imp_WSAAddressToStringA>
  IFNDEF __UNICODE__
    WSAAddressToString equ <__imp_WSAAddressToStringA>
  ENDIF

externdef __imp_WSAAddressToStringW:PPROC
WSAAddressToStringW equ <__imp_WSAAddressToStringW>
  IFDEF __UNICODE__
    WSAAddressToString equ <__imp_WSAAddressToStringW>
  ENDIF

externdef __imp_WSAAsyncGetHostByAddr:PPROC
WSAAsyncGetHostByAddr equ <__imp_WSAAsyncGetHostByAddr>

externdef __imp_WSAAsyncGetHostByName:PPROC
WSAAsyncGetHostByName equ <__imp_WSAAsyncGetHostByName>

externdef __imp_WSAAsyncGetProtoByName:PPROC
WSAAsyncGetProtoByName equ <__imp_WSAAsyncGetProtoByName>

externdef __imp_WSAAsyncGetProtoByNumber:PPROC
WSAAsyncGetProtoByNumber equ <__imp_WSAAsyncGetProtoByNumber>

externdef __imp_WSAAsyncGetServByName:PPROC
WSAAsyncGetServByName equ <__imp_WSAAsyncGetServByName>

externdef __imp_WSAAsyncGetServByPort:PPROC
WSAAsyncGetServByPort equ <__imp_WSAAsyncGetServByPort>

externdef __imp_WSAAsyncSelect:PPROC
WSAAsyncSelect equ <__imp_WSAAsyncSelect>

externdef __imp_WSACancelAsyncRequest:PPROC
WSACancelAsyncRequest equ <__imp_WSACancelAsyncRequest>

externdef __imp_WSACancelBlockingCall:PPROC
WSACancelBlockingCall equ <__imp_WSACancelBlockingCall>

externdef __imp_WSACleanup:PPROC
WSACleanup equ <__imp_WSACleanup>

externdef __imp_WSACloseEvent:PPROC
WSACloseEvent equ <__imp_WSACloseEvent>

externdef __imp_WSAConnect:PPROC
WSAConnect equ <__imp_WSAConnect>

externdef __imp_WSACreateEvent:PPROC
WSACreateEvent equ <__imp_WSACreateEvent>

externdef __imp_WSADuplicateSocketA:PPROC
WSADuplicateSocketA equ <__imp_WSADuplicateSocketA>
  IFNDEF __UNICODE__
    WSADuplicateSocket equ <__imp_WSADuplicateSocketA>
  ENDIF

externdef __imp_WSADuplicateSocketW:PPROC
WSADuplicateSocketW equ <__imp_WSADuplicateSocketW>
  IFDEF __UNICODE__
    WSADuplicateSocket equ <__imp_WSADuplicateSocketW>
  ENDIF

externdef __imp_WSAEnumNameSpaceProvidersA:PPROC
WSAEnumNameSpaceProvidersA equ <__imp_WSAEnumNameSpaceProvidersA>
  IFNDEF __UNICODE__
    WSAEnumNameSpaceProviders equ <__imp_WSAEnumNameSpaceProvidersA>
  ENDIF

externdef __imp_WSAEnumNameSpaceProvidersW:PPROC
WSAEnumNameSpaceProvidersW equ <__imp_WSAEnumNameSpaceProvidersW>
  IFDEF __UNICODE__
    WSAEnumNameSpaceProviders equ <__imp_WSAEnumNameSpaceProvidersW>
  ENDIF

externdef __imp_WSAEnumNetworkEvents:PPROC
WSAEnumNetworkEvents equ <__imp_WSAEnumNetworkEvents>

externdef __imp_WSAEnumProtocolsA:PPROC
WSAEnumProtocolsA equ <__imp_WSAEnumProtocolsA>
  IFNDEF __UNICODE__
    WSAEnumProtocols equ <__imp_WSAEnumProtocolsA>
  ENDIF

externdef __imp_WSAEnumProtocolsW:PPROC
WSAEnumProtocolsW equ <__imp_WSAEnumProtocolsW>
  IFDEF __UNICODE__
    WSAEnumProtocols equ <__imp_WSAEnumProtocolsW>
  ENDIF

externdef __imp_WSAEventSelect:PPROC
WSAEventSelect equ <__imp_WSAEventSelect>

externdef __imp_WSAGetLastError:PPROC
WSAGetLastError equ <__imp_WSAGetLastError>

externdef __imp_WSAGetOverlappedResult:PPROC
WSAGetOverlappedResult equ <__imp_WSAGetOverlappedResult>

externdef __imp_WSAGetQOSByName:PPROC
WSAGetQOSByName equ <__imp_WSAGetQOSByName>

externdef __imp_WSAGetServiceClassInfoA:PPROC
WSAGetServiceClassInfoA equ <__imp_WSAGetServiceClassInfoA>
  IFNDEF __UNICODE__
    WSAGetServiceClassInfo equ <__imp_WSAGetServiceClassInfoA>
  ENDIF

externdef __imp_WSAGetServiceClassInfoW:PPROC
WSAGetServiceClassInfoW equ <__imp_WSAGetServiceClassInfoW>
  IFDEF __UNICODE__
    WSAGetServiceClassInfo equ <__imp_WSAGetServiceClassInfoW>
  ENDIF

externdef __imp_WSAGetServiceClassNameByClassIdA:PPROC
WSAGetServiceClassNameByClassIdA equ <__imp_WSAGetServiceClassNameByClassIdA>
  IFNDEF __UNICODE__
    WSAGetServiceClassNameByClassId equ <__imp_WSAGetServiceClassNameByClassIdA>
  ENDIF

externdef __imp_WSAGetServiceClassNameByClassIdW:PPROC
WSAGetServiceClassNameByClassIdW equ <__imp_WSAGetServiceClassNameByClassIdW>
  IFDEF __UNICODE__
    WSAGetServiceClassNameByClassId equ <__imp_WSAGetServiceClassNameByClassIdW>
  ENDIF

externdef __imp_WSAHtonl:PPROC
WSAHtonl equ <__imp_WSAHtonl>

externdef __imp_WSAHtons:PPROC
WSAHtons equ <__imp_WSAHtons>

externdef __imp_WSAInstallServiceClassA:PPROC
WSAInstallServiceClassA equ <__imp_WSAInstallServiceClassA>
  IFNDEF __UNICODE__
    WSAInstallServiceClass equ <__imp_WSAInstallServiceClassA>
  ENDIF

externdef __imp_WSAInstallServiceClassW:PPROC
WSAInstallServiceClassW equ <__imp_WSAInstallServiceClassW>
  IFDEF __UNICODE__
    WSAInstallServiceClass equ <__imp_WSAInstallServiceClassW>
  ENDIF

externdef __imp_WSAIoctl:PPROC
WSAIoctl equ <__imp_WSAIoctl>

externdef __imp_WSAIsBlocking:PPROC
WSAIsBlocking equ <__imp_WSAIsBlocking>

externdef __imp_WSAJoinLeaf:PPROC
WSAJoinLeaf equ <__imp_WSAJoinLeaf>

externdef __imp_WSALookupServiceBeginA:PPROC
WSALookupServiceBeginA equ <__imp_WSALookupServiceBeginA>
  IFNDEF __UNICODE__
    WSALookupServiceBegin equ <__imp_WSALookupServiceBeginA>
  ENDIF

externdef __imp_WSALookupServiceBeginW:PPROC
WSALookupServiceBeginW equ <__imp_WSALookupServiceBeginW>
  IFDEF __UNICODE__
    WSALookupServiceBegin equ <__imp_WSALookupServiceBeginW>
  ENDIF

externdef __imp_WSALookupServiceEnd:PPROC
WSALookupServiceEnd equ <__imp_WSALookupServiceEnd>

externdef __imp_WSALookupServiceNextA:PPROC
WSALookupServiceNextA equ <__imp_WSALookupServiceNextA>
  IFNDEF __UNICODE__
    WSALookupServiceNext equ <__imp_WSALookupServiceNextA>
  ENDIF

externdef __imp_WSALookupServiceNextW:PPROC
WSALookupServiceNextW equ <__imp_WSALookupServiceNextW>
  IFDEF __UNICODE__
    WSALookupServiceNext equ <__imp_WSALookupServiceNextW>
  ENDIF

externdef __imp_WSANSPIoctl:PPROC
WSANSPIoctl equ <__imp_WSANSPIoctl>

externdef __imp_WSANtohl:PPROC
WSANtohl equ <__imp_WSANtohl>

externdef __imp_WSANtohs:PPROC
WSANtohs equ <__imp_WSANtohs>

externdef __imp_WSAProviderConfigChange:PPROC
WSAProviderConfigChange equ <__imp_WSAProviderConfigChange>

externdef __imp_WSARecv:PPROC
WSARecv equ <__imp_WSARecv>

externdef __imp_WSARecvDisconnect:PPROC
WSARecvDisconnect equ <__imp_WSARecvDisconnect>

externdef __imp_WSARecvFrom:PPROC
WSARecvFrom equ <__imp_WSARecvFrom>

externdef __imp_WSARemoveServiceClass:PPROC
WSARemoveServiceClass equ <__imp_WSARemoveServiceClass>

externdef __imp_WSAResetEvent:PPROC
WSAResetEvent equ <__imp_WSAResetEvent>

externdef __imp_WSASend:PPROC
WSASend equ <__imp_WSASend>

externdef __imp_WSASendDisconnect:PPROC
WSASendDisconnect equ <__imp_WSASendDisconnect>

externdef __imp_WSASendTo:PPROC
WSASendTo equ <__imp_WSASendTo>

externdef __imp_WSASetBlockingHook:PPROC
WSASetBlockingHook equ <__imp_WSASetBlockingHook>

externdef __imp_WSASetEvent:PPROC
WSASetEvent equ <__imp_WSASetEvent>

externdef __imp_WSASetLastError:PPROC
WSASetLastError equ <__imp_WSASetLastError>

externdef __imp_WSASetServiceA:PPROC
WSASetServiceA equ <__imp_WSASetServiceA>
  IFNDEF __UNICODE__
    WSASetService equ <__imp_WSASetServiceA>
  ENDIF

externdef __imp_WSASetServiceW:PPROC
WSASetServiceW equ <__imp_WSASetServiceW>
  IFDEF __UNICODE__
    WSASetService equ <__imp_WSASetServiceW>
  ENDIF

externdef __imp_WSASocketA:PPROC
WSASocketA equ <__imp_WSASocketA>
  IFNDEF __UNICODE__
    WSASocket equ <__imp_WSASocketA>
  ENDIF

externdef __imp_WSASocketW:PPROC
WSASocketW equ <__imp_WSASocketW>
  IFDEF __UNICODE__
    WSASocket equ <__imp_WSASocketW>
  ENDIF

externdef __imp_WSAStartup:PPROC
WSAStartup equ <__imp_WSAStartup>

externdef __imp_WSAStringToAddressA:PPROC
WSAStringToAddressA equ <__imp_WSAStringToAddressA>
  IFNDEF __UNICODE__
    WSAStringToAddress equ <__imp_WSAStringToAddressA>
  ENDIF

externdef __imp_WSAStringToAddressW:PPROC
WSAStringToAddressW equ <__imp_WSAStringToAddressW>
  IFDEF __UNICODE__
    WSAStringToAddress equ <__imp_WSAStringToAddressW>
  ENDIF

externdef __imp_WSAUnhookBlockingHook:PPROC
WSAUnhookBlockingHook equ <__imp_WSAUnhookBlockingHook>

externdef __imp_WSAWaitForMultipleEvents:PPROC
WSAWaitForMultipleEvents equ <__imp_WSAWaitForMultipleEvents>

externdef __imp_WSApSetPostRoutine:PPROC
WSApSetPostRoutine equ <__imp_WSApSetPostRoutine>

externdef __imp_WSCDeinstallProvider32:PPROC
WSCDeinstallProvider32 equ <__imp_WSCDeinstallProvider32>

externdef __imp_WSCDeinstallProvider:PPROC
WSCDeinstallProvider equ <__imp_WSCDeinstallProvider>

externdef __imp_WSCEnableNSProvider32:PPROC
WSCEnableNSProvider32 equ <__imp_WSCEnableNSProvider32>

externdef __imp_WSCEnableNSProvider:PPROC
WSCEnableNSProvider equ <__imp_WSCEnableNSProvider>

externdef __imp_WSCEnumNameSpaceProviders32:PPROC
WSCEnumNameSpaceProviders32 equ <__imp_WSCEnumNameSpaceProviders32>

externdef __imp_WSCEnumProtocols32:PPROC
WSCEnumProtocols32 equ <__imp_WSCEnumProtocols32>

externdef __imp_WSCEnumProtocols:PPROC
WSCEnumProtocols equ <__imp_WSCEnumProtocols>

externdef __imp_WSCGetProviderPath32:PPROC
WSCGetProviderPath32 equ <__imp_WSCGetProviderPath32>

externdef __imp_WSCGetProviderPath:PPROC
WSCGetProviderPath equ <__imp_WSCGetProviderPath>

externdef __imp_WSCInstallNameSpace32:PPROC
WSCInstallNameSpace32 equ <__imp_WSCInstallNameSpace32>

externdef __imp_WSCInstallNameSpace:PPROC
WSCInstallNameSpace equ <__imp_WSCInstallNameSpace>

externdef __imp_WSCInstallProvider64_32:PPROC
WSCInstallProvider64_32 equ <__imp_WSCInstallProvider64_32>

externdef __imp_WSCInstallProvider:PPROC
WSCInstallProvider equ <__imp_WSCInstallProvider>

externdef __imp_WSCUnInstallNameSpace32:PPROC
WSCUnInstallNameSpace32 equ <__imp_WSCUnInstallNameSpace32>

externdef __imp_WSCUnInstallNameSpace:PPROC
WSCUnInstallNameSpace equ <__imp_WSCUnInstallNameSpace>

externdef __imp_WSCUpdateProvider32:PPROC
WSCUpdateProvider32 equ <__imp_WSCUpdateProvider32>

externdef __imp_WSCUpdateProvider:PPROC
WSCUpdateProvider equ <__imp_WSCUpdateProvider>

externdef __imp_WSCWriteNameSpaceOrder32:PPROC
WSCWriteNameSpaceOrder32 equ <__imp_WSCWriteNameSpaceOrder32>

externdef __imp_WSCWriteNameSpaceOrder:PPROC
WSCWriteNameSpaceOrder equ <__imp_WSCWriteNameSpaceOrder>

externdef __imp_WSCWriteProviderOrder32:PPROC
WSCWriteProviderOrder32 equ <__imp_WSCWriteProviderOrder32>

externdef __imp_WSCWriteProviderOrder:PPROC
WSCWriteProviderOrder equ <__imp_WSCWriteProviderOrder>

externdef __imp___WSAFDIsSet:PPROC
__WSAFDIsSet equ <__imp___WSAFDIsSet>

externdef __imp_accept:PPROC
accept equ <__imp_accept>

externdef __imp_bind:PPROC
bind equ <__imp_bind>

externdef __imp_closesocket:PPROC
closesocket equ <__imp_closesocket>

externdef __imp_connect:PPROC
connect equ <__imp_connect>

externdef __imp_freeaddrinfo:PPROC
freeaddrinfo equ <__imp_freeaddrinfo>

externdef __imp_getaddrinfo:PPROC
getaddrinfo equ <__imp_getaddrinfo>

externdef __imp_gethostbyaddr:PPROC
gethostbyaddr equ <__imp_gethostbyaddr>

externdef __imp_gethostbyname:PPROC
gethostbyname equ <__imp_gethostbyname>

externdef __imp_gethostname:PPROC
gethostname equ <__imp_gethostname>

externdef __imp_getnameinfo:PPROC
getnameinfo equ <__imp_getnameinfo>

externdef __imp_getpeername:PPROC
getpeername equ <__imp_getpeername>

externdef __imp_getprotobyname:PPROC
getprotobyname equ <__imp_getprotobyname>

externdef __imp_getprotobynumber:PPROC
getprotobynumber equ <__imp_getprotobynumber>

externdef __imp_getservbyname:PPROC
getservbyname equ <__imp_getservbyname>

externdef __imp_getservbyport:PPROC
getservbyport equ <__imp_getservbyport>

externdef __imp_getsockname:PPROC
getsockname equ <__imp_getsockname>

externdef __imp_getsockopt:PPROC
getsockopt equ <__imp_getsockopt>

externdef __imp_htonl:PPROC
htonl equ <__imp_htonl>

externdef __imp_htons:PPROC
htons equ <__imp_htons>

externdef __imp_inet_addr:PPROC
inet_addr equ <__imp_inet_addr>

externdef __imp_inet_ntoa:PPROC
inet_ntoa equ <__imp_inet_ntoa>

externdef __imp_ioctlsocket:PPROC
ioctlsocket equ <__imp_ioctlsocket>

externdef __imp_listen:PPROC
listen equ <__imp_listen>

externdef __imp_ntohl:PPROC
ntohl equ <__imp_ntohl>

externdef __imp_ntohs:PPROC
ntohs equ <__imp_ntohs>

externdef __imp_recv:PPROC
recv equ <__imp_recv>

externdef __imp_recvfrom:PPROC
recvfrom equ <__imp_recvfrom>

externdef __imp_select:PPROC
select equ <__imp_select>

externdef __imp_send:PPROC
send equ <__imp_send>

externdef __imp_sendto:PPROC
sendto equ <__imp_sendto>

externdef __imp_setsockopt:PPROC
setsockopt equ <__imp_setsockopt>

externdef __imp_shutdown:PPROC
shutdown equ <__imp_shutdown>

externdef __imp_socket:PPROC
socket equ <__imp_socket>

externdef __imp_ws2_32_ordinal127:PPROC
ws2_32_ordinal127 equ <__imp_ws2_32_ordinal127>

externdef __imp_ws2_32_ordinal128:PPROC
ws2_32_ordinal128 equ <__imp_ws2_32_ordinal128>

externdef __imp_ws2_32_ordinal129:PPROC
ws2_32_ordinal129 equ <__imp_ws2_32_ordinal129>

externdef __imp_ws2_32_ordinal130:PPROC
ws2_32_ordinal130 equ <__imp_ws2_32_ordinal130>

externdef __imp_ws2_32_ordinal131:PPROC
ws2_32_ordinal131 equ <__imp_ws2_32_ordinal131>

externdef __imp_ws2_32_ordinal132:PPROC
ws2_32_ordinal132 equ <__imp_ws2_32_ordinal132>

externdef __imp_ws2_32_ordinal133:PPROC
ws2_32_ordinal133 equ <__imp_ws2_32_ordinal133>

externdef __imp_ws2_32_ordinal134:PPROC
ws2_32_ordinal134 equ <__imp_ws2_32_ordinal134>

externdef __imp_ws2_32_ordinal135:PPROC
ws2_32_ordinal135 equ <__imp_ws2_32_ordinal135>

externdef __imp_ws2_32_ordinal136:PPROC
ws2_32_ordinal136 equ <__imp_ws2_32_ordinal136>

externdef __imp_ws2_32_ordinal137:PPROC
ws2_32_ordinal137 equ <__imp_ws2_32_ordinal137>

externdef __imp_ws2_32_ordinal138:PPROC
ws2_32_ordinal138 equ <__imp_ws2_32_ordinal138>

externdef __imp_ws2_32_ordinal139:PPROC
ws2_32_ordinal139 equ <__imp_ws2_32_ordinal139>

externdef __imp_ws2_32_ordinal140:PPROC
ws2_32_ordinal140 equ <__imp_ws2_32_ordinal140>

externdef __imp_ws2_32_ordinal141:PPROC
ws2_32_ordinal141 equ <__imp_ws2_32_ordinal141>

externdef __imp_ws2_32_ordinal142:PPROC
ws2_32_ordinal142 equ <__imp_ws2_32_ordinal142>

externdef __imp_ws2_32_ordinal143:PPROC
ws2_32_ordinal143 equ <__imp_ws2_32_ordinal143>

externdef __imp_ws2_32_ordinal144:PPROC
ws2_32_ordinal144 equ <__imp_ws2_32_ordinal144>

externdef __imp_ws2_32_ordinal145:PPROC
ws2_32_ordinal145 equ <__imp_ws2_32_ordinal145>

externdef __imp_ws2_32_ordinal146:PPROC
ws2_32_ordinal146 equ <__imp_ws2_32_ordinal146>

externdef __imp_ws2_32_ordinal147:PPROC
ws2_32_ordinal147 equ <__imp_ws2_32_ordinal147>

externdef __imp_ws2_32_ordinal148:PPROC
ws2_32_ordinal148 equ <__imp_ws2_32_ordinal148>

externdef __imp_ws2_32_ordinal149:PPROC
ws2_32_ordinal149 equ <__imp_ws2_32_ordinal149>

externdef __imp_ws2_32_ordinal150:PPROC
ws2_32_ordinal150 equ <__imp_ws2_32_ordinal150>

externdef __imp_ws2_32_ordinal152:PPROC
ws2_32_ordinal152 equ <__imp_ws2_32_ordinal152>

externdef __imp_ws2_32_ordinal153:PPROC
ws2_32_ordinal153 equ <__imp_ws2_32_ordinal153>

externdef __imp_ws2_32_ordinal154:PPROC
ws2_32_ordinal154 equ <__imp_ws2_32_ordinal154>

externdef __imp_ws2_32_ordinal155:PPROC
ws2_32_ordinal155 equ <__imp_ws2_32_ordinal155>

externdef __imp_ws2_32_ordinal156:PPROC
ws2_32_ordinal156 equ <__imp_ws2_32_ordinal156>

externdef __imp_ws2_32_ordinal157:PPROC
ws2_32_ordinal157 equ <__imp_ws2_32_ordinal157>

externdef __imp_ws2_32_ordinal158:PPROC
ws2_32_ordinal158 equ <__imp_ws2_32_ordinal158>

externdef __imp_ws2_32_ordinal159:PPROC
ws2_32_ordinal159 equ <__imp_ws2_32_ordinal159>

externdef __imp_ws2_32_ordinal160:PPROC
ws2_32_ordinal160 equ <__imp_ws2_32_ordinal160>

externdef __imp_ws2_32_ordinal161:PPROC
ws2_32_ordinal161 equ <__imp_ws2_32_ordinal161>

externdef __imp_ws2_32_ordinal162:PPROC
ws2_32_ordinal162 equ <__imp_ws2_32_ordinal162>

externdef __imp_ws2_32_ordinal163:PPROC
ws2_32_ordinal163 equ <__imp_ws2_32_ordinal163>

externdef __imp_ws2_32_ordinal164:PPROC
ws2_32_ordinal164 equ <__imp_ws2_32_ordinal164>

externdef __imp_ws2_32_ordinal165:PPROC
ws2_32_ordinal165 equ <__imp_ws2_32_ordinal165>

externdef __imp_ws2_32_ordinal166:PPROC
ws2_32_ordinal166 equ <__imp_ws2_32_ordinal166>

externdef __imp_ws2_32_ordinal167:PPROC
ws2_32_ordinal167 equ <__imp_ws2_32_ordinal167>

externdef __imp_ws2_32_ordinal168:PPROC
ws2_32_ordinal168 equ <__imp_ws2_32_ordinal168>

externdef __imp_ws2_32_ordinal169:PPROC
ws2_32_ordinal169 equ <__imp_ws2_32_ordinal169>

externdef __imp_ws2_32_ordinal170:PPROC
ws2_32_ordinal170 equ <__imp_ws2_32_ordinal170>

externdef __imp_ws2_32_ordinal171:PPROC
ws2_32_ordinal171 equ <__imp_ws2_32_ordinal171>

externdef __imp_ws2_32_ordinal172:PPROC
ws2_32_ordinal172 equ <__imp_ws2_32_ordinal172>

externdef __imp_ws2_32_ordinal173:PPROC
ws2_32_ordinal173 equ <__imp_ws2_32_ordinal173>

externdef __imp_ws2_32_ordinal174:PPROC
ws2_32_ordinal174 equ <__imp_ws2_32_ordinal174>

externdef __imp_ws2_32_ordinal175:PPROC
ws2_32_ordinal175 equ <__imp_ws2_32_ordinal175>

externdef __imp_ws2_32_ordinal176:PPROC
ws2_32_ordinal176 equ <__imp_ws2_32_ordinal176>

externdef __imp_ws2_32_ordinal177:PPROC
ws2_32_ordinal177 equ <__imp_ws2_32_ordinal177>

externdef __imp_ws2_32_ordinal178:PPROC
ws2_32_ordinal178 equ <__imp_ws2_32_ordinal178>

externdef __imp_ws2_32_ordinal179:PPROC
ws2_32_ordinal179 equ <__imp_ws2_32_ordinal179>

externdef __imp_ws2_32_ordinal180:PPROC
ws2_32_ordinal180 equ <__imp_ws2_32_ordinal180>

externdef __imp_ws2_32_ordinal181:PPROC
ws2_32_ordinal181 equ <__imp_ws2_32_ordinal181>

externdef __imp_ws2_32_ordinal182:PPROC
ws2_32_ordinal182 equ <__imp_ws2_32_ordinal182>

externdef __imp_ws2_32_ordinal183:PPROC
ws2_32_ordinal183 equ <__imp_ws2_32_ordinal183>

externdef __imp_ws2_32_ordinal184:PPROC
ws2_32_ordinal184 equ <__imp_ws2_32_ordinal184>

externdef __imp_ws2_32_ordinal185:PPROC
ws2_32_ordinal185 equ <__imp_ws2_32_ordinal185>

externdef __imp_ws2_32_ordinal186:PPROC
ws2_32_ordinal186 equ <__imp_ws2_32_ordinal186>

externdef __imp_ws2_32_ordinal187:PPROC
ws2_32_ordinal187 equ <__imp_ws2_32_ordinal187>

externdef __imp_ws2_32_ordinal188:PPROC
ws2_32_ordinal188 equ <__imp_ws2_32_ordinal188>

externdef __imp_ws2_32_ordinal189:PPROC
ws2_32_ordinal189 equ <__imp_ws2_32_ordinal189>

externdef __imp_ws2_32_ordinal190:PPROC
ws2_32_ordinal190 equ <__imp_ws2_32_ordinal190>

externdef __imp_ws2_32_ordinal191:PPROC
ws2_32_ordinal191 equ <__imp_ws2_32_ordinal191>

externdef __imp_ws2_32_ordinal192:PPROC
ws2_32_ordinal192 equ <__imp_ws2_32_ordinal192>

externdef __imp_ws2_32_ordinal193:PPROC
ws2_32_ordinal193 equ <__imp_ws2_32_ordinal193>

externdef __imp_ws2_32_ordinal194:PPROC
ws2_32_ordinal194 equ <__imp_ws2_32_ordinal194>

externdef __imp_ws2_32_ordinal195:PPROC
ws2_32_ordinal195 equ <__imp_ws2_32_ordinal195>

externdef __imp_ws2_32_ordinal196:PPROC
ws2_32_ordinal196 equ <__imp_ws2_32_ordinal196>

externdef __imp_ws2_32_ordinal197:PPROC
ws2_32_ordinal197 equ <__imp_ws2_32_ordinal197>

externdef __imp_ws2_32_ordinal198:PPROC
ws2_32_ordinal198 equ <__imp_ws2_32_ordinal198>

externdef __imp_ws2_32_ordinal199:PPROC
ws2_32_ordinal199 equ <__imp_ws2_32_ordinal199>

externdef __imp_ws2_32_ordinal200:PPROC
ws2_32_ordinal200 equ <__imp_ws2_32_ordinal200>

externdef __imp_ws2_32_ordinal201:PPROC
ws2_32_ordinal201 equ <__imp_ws2_32_ordinal201>

externdef __imp_ws2_32_ordinal202:PPROC
ws2_32_ordinal202 equ <__imp_ws2_32_ordinal202>

externdef __imp_ws2_32_ordinal203:PPROC
ws2_32_ordinal203 equ <__imp_ws2_32_ordinal203>

externdef __imp_ws2_32_ordinal204:PPROC
ws2_32_ordinal204 equ <__imp_ws2_32_ordinal204>

externdef __imp_ws2_32_ordinal205:PPROC
ws2_32_ordinal205 equ <__imp_ws2_32_ordinal205>

externdef __imp_ws2_32_ordinal206:PPROC
ws2_32_ordinal206 equ <__imp_ws2_32_ordinal206>

externdef __imp_ws2_32_ordinal207:PPROC
ws2_32_ordinal207 equ <__imp_ws2_32_ordinal207>

externdef __imp_ws2_32_ordinal208:PPROC
ws2_32_ordinal208 equ <__imp_ws2_32_ordinal208>

externdef __imp_ws2_32_ordinal209:PPROC
ws2_32_ordinal209 equ <__imp_ws2_32_ordinal209>

externdef __imp_ws2_32_ordinal210:PPROC
ws2_32_ordinal210 equ <__imp_ws2_32_ordinal210>

externdef __imp_ws2_32_ordinal211:PPROC
ws2_32_ordinal211 equ <__imp_ws2_32_ordinal211>

externdef __imp_ws2_32_ordinal212:PPROC
ws2_32_ordinal212 equ <__imp_ws2_32_ordinal212>

externdef __imp_ws2_32_ordinal213:PPROC
ws2_32_ordinal213 equ <__imp_ws2_32_ordinal213>

externdef __imp_ws2_32_ordinal214:PPROC
ws2_32_ordinal214 equ <__imp_ws2_32_ordinal214>

externdef __imp_ws2_32_ordinal215:PPROC
ws2_32_ordinal215 equ <__imp_ws2_32_ordinal215>

externdef __imp_ws2_32_ordinal216:PPROC
ws2_32_ordinal216 equ <__imp_ws2_32_ordinal216>

externdef __imp_ws2_32_ordinal217:PPROC
ws2_32_ordinal217 equ <__imp_ws2_32_ordinal217>

externdef __imp_ws2_32_ordinal218:PPROC
ws2_32_ordinal218 equ <__imp_ws2_32_ordinal218>

externdef __imp_ws2_32_ordinal219:PPROC
ws2_32_ordinal219 equ <__imp_ws2_32_ordinal219>

externdef __imp_ws2_32_ordinal220:PPROC
ws2_32_ordinal220 equ <__imp_ws2_32_ordinal220>

externdef __imp_ws2_32_ordinal221:PPROC
ws2_32_ordinal221 equ <__imp_ws2_32_ordinal221>

externdef __imp_ws2_32_ordinal222:PPROC
ws2_32_ordinal222 equ <__imp_ws2_32_ordinal222>

externdef __imp_ws2_32_ordinal223:PPROC
ws2_32_ordinal223 equ <__imp_ws2_32_ordinal223>

externdef __imp_ws2_32_ordinal224:PPROC
ws2_32_ordinal224 equ <__imp_ws2_32_ordinal224>

externdef __imp_ws2_32_ordinal225:PPROC
ws2_32_ordinal225 equ <__imp_ws2_32_ordinal225>

externdef __imp_ws2_32_ordinal226:PPROC
ws2_32_ordinal226 equ <__imp_ws2_32_ordinal226>

externdef __imp_ws2_32_ordinal227:PPROC
ws2_32_ordinal227 equ <__imp_ws2_32_ordinal227>

externdef __imp_ws2_32_ordinal228:PPROC
ws2_32_ordinal228 equ <__imp_ws2_32_ordinal228>

externdef __imp_ws2_32_ordinal229:PPROC
ws2_32_ordinal229 equ <__imp_ws2_32_ordinal229>

externdef __imp_ws2_32_ordinal230:PPROC
ws2_32_ordinal230 equ <__imp_ws2_32_ordinal230>

externdef __imp_ws2_32_ordinal231:PPROC
ws2_32_ordinal231 equ <__imp_ws2_32_ordinal231>

externdef __imp_ws2_32_ordinal232:PPROC
ws2_32_ordinal232 equ <__imp_ws2_32_ordinal232>

externdef __imp_ws2_32_ordinal233:PPROC
ws2_32_ordinal233 equ <__imp_ws2_32_ordinal233>

externdef __imp_ws2_32_ordinal234:PPROC
ws2_32_ordinal234 equ <__imp_ws2_32_ordinal234>

externdef __imp_ws2_32_ordinal235:PPROC
ws2_32_ordinal235 equ <__imp_ws2_32_ordinal235>

externdef __imp_ws2_32_ordinal236:PPROC
ws2_32_ordinal236 equ <__imp_ws2_32_ordinal236>

externdef __imp_ws2_32_ordinal237:PPROC
ws2_32_ordinal237 equ <__imp_ws2_32_ordinal237>

externdef __imp_ws2_32_ordinal238:PPROC
ws2_32_ordinal238 equ <__imp_ws2_32_ordinal238>

externdef __imp_ws2_32_ordinal239:PPROC
ws2_32_ordinal239 equ <__imp_ws2_32_ordinal239>

externdef __imp_ws2_32_ordinal240:PPROC
ws2_32_ordinal240 equ <__imp_ws2_32_ordinal240>

externdef __imp_ws2_32_ordinal241:PPROC
ws2_32_ordinal241 equ <__imp_ws2_32_ordinal241>

externdef __imp_ws2_32_ordinal242:PPROC
ws2_32_ordinal242 equ <__imp_ws2_32_ordinal242>

externdef __imp_ws2_32_ordinal243:PPROC
ws2_32_ordinal243 equ <__imp_ws2_32_ordinal243>

externdef __imp_ws2_32_ordinal244:PPROC
ws2_32_ordinal244 equ <__imp_ws2_32_ordinal244>

externdef __imp_ws2_32_ordinal245:PPROC
ws2_32_ordinal245 equ <__imp_ws2_32_ordinal245>

externdef __imp_ws2_32_ordinal246:PPROC
ws2_32_ordinal246 equ <__imp_ws2_32_ordinal246>

externdef __imp_ws2_32_ordinal247:PPROC
ws2_32_ordinal247 equ <__imp_ws2_32_ordinal247>

externdef __imp_ws2_32_ordinal248:PPROC
ws2_32_ordinal248 equ <__imp_ws2_32_ordinal248>

externdef __imp_ws2_32_ordinal249:PPROC
ws2_32_ordinal249 equ <__imp_ws2_32_ordinal249>

externdef __imp_ws2_32_ordinal250:PPROC
ws2_32_ordinal250 equ <__imp_ws2_32_ordinal250>

externdef __imp_ws2_32_ordinal251:PPROC
ws2_32_ordinal251 equ <__imp_ws2_32_ordinal251>

externdef __imp_ws2_32_ordinal252:PPROC
ws2_32_ordinal252 equ <__imp_ws2_32_ordinal252>

externdef __imp_ws2_32_ordinal253:PPROC
ws2_32_ordinal253 equ <__imp_ws2_32_ordinal253>

externdef __imp_ws2_32_ordinal254:PPROC
ws2_32_ordinal254 equ <__imp_ws2_32_ordinal254>

externdef __imp_ws2_32_ordinal255:PPROC
ws2_32_ordinal255 equ <__imp_ws2_32_ordinal255>

externdef __imp_ws2_32_ordinal256:PPROC
ws2_32_ordinal256 equ <__imp_ws2_32_ordinal256>

externdef __imp_ws2_32_ordinal257:PPROC
ws2_32_ordinal257 equ <__imp_ws2_32_ordinal257>

externdef __imp_ws2_32_ordinal258:PPROC
ws2_32_ordinal258 equ <__imp_ws2_32_ordinal258>

externdef __imp_ws2_32_ordinal259:PPROC
ws2_32_ordinal259 equ <__imp_ws2_32_ordinal259>

externdef __imp_ws2_32_ordinal260:PPROC
ws2_32_ordinal260 equ <__imp_ws2_32_ordinal260>

externdef __imp_ws2_32_ordinal261:PPROC
ws2_32_ordinal261 equ <__imp_ws2_32_ordinal261>

externdef __imp_ws2_32_ordinal262:PPROC
ws2_32_ordinal262 equ <__imp_ws2_32_ordinal262>

externdef __imp_ws2_32_ordinal263:PPROC
ws2_32_ordinal263 equ <__imp_ws2_32_ordinal263>

externdef __imp_ws2_32_ordinal264:PPROC
ws2_32_ordinal264 equ <__imp_ws2_32_ordinal264>

externdef __imp_ws2_32_ordinal265:PPROC
ws2_32_ordinal265 equ <__imp_ws2_32_ordinal265>

externdef __imp_ws2_32_ordinal266:PPROC
ws2_32_ordinal266 equ <__imp_ws2_32_ordinal266>

externdef __imp_ws2_32_ordinal267:PPROC
ws2_32_ordinal267 equ <__imp_ws2_32_ordinal267>

externdef __imp_ws2_32_ordinal268:PPROC
ws2_32_ordinal268 equ <__imp_ws2_32_ordinal268>

externdef __imp_ws2_32_ordinal269:PPROC
ws2_32_ordinal269 equ <__imp_ws2_32_ordinal269>

externdef __imp_ws2_32_ordinal270:PPROC
ws2_32_ordinal270 equ <__imp_ws2_32_ordinal270>

externdef __imp_ws2_32_ordinal271:PPROC
ws2_32_ordinal271 equ <__imp_ws2_32_ordinal271>

externdef __imp_ws2_32_ordinal272:PPROC
ws2_32_ordinal272 equ <__imp_ws2_32_ordinal272>

externdef __imp_ws2_32_ordinal273:PPROC
ws2_32_ordinal273 equ <__imp_ws2_32_ordinal273>

externdef __imp_ws2_32_ordinal274:PPROC
ws2_32_ordinal274 equ <__imp_ws2_32_ordinal274>

externdef __imp_ws2_32_ordinal275:PPROC
ws2_32_ordinal275 equ <__imp_ws2_32_ordinal275>

externdef __imp_ws2_32_ordinal276:PPROC
ws2_32_ordinal276 equ <__imp_ws2_32_ordinal276>

externdef __imp_ws2_32_ordinal277:PPROC
ws2_32_ordinal277 equ <__imp_ws2_32_ordinal277>

externdef __imp_ws2_32_ordinal278:PPROC
ws2_32_ordinal278 equ <__imp_ws2_32_ordinal278>

externdef __imp_ws2_32_ordinal279:PPROC
ws2_32_ordinal279 equ <__imp_ws2_32_ordinal279>

externdef __imp_ws2_32_ordinal280:PPROC
ws2_32_ordinal280 equ <__imp_ws2_32_ordinal280>

externdef __imp_ws2_32_ordinal281:PPROC
ws2_32_ordinal281 equ <__imp_ws2_32_ordinal281>

externdef __imp_ws2_32_ordinal282:PPROC
ws2_32_ordinal282 equ <__imp_ws2_32_ordinal282>

externdef __imp_ws2_32_ordinal283:PPROC
ws2_32_ordinal283 equ <__imp_ws2_32_ordinal283>

externdef __imp_ws2_32_ordinal284:PPROC
ws2_32_ordinal284 equ <__imp_ws2_32_ordinal284>

externdef __imp_ws2_32_ordinal285:PPROC
ws2_32_ordinal285 equ <__imp_ws2_32_ordinal285>

externdef __imp_ws2_32_ordinal286:PPROC
ws2_32_ordinal286 equ <__imp_ws2_32_ordinal286>

externdef __imp_ws2_32_ordinal287:PPROC
ws2_32_ordinal287 equ <__imp_ws2_32_ordinal287>

externdef __imp_ws2_32_ordinal288:PPROC
ws2_32_ordinal288 equ <__imp_ws2_32_ordinal288>

externdef __imp_ws2_32_ordinal289:PPROC
ws2_32_ordinal289 equ <__imp_ws2_32_ordinal289>

externdef __imp_ws2_32_ordinal290:PPROC
ws2_32_ordinal290 equ <__imp_ws2_32_ordinal290>

externdef __imp_ws2_32_ordinal291:PPROC
ws2_32_ordinal291 equ <__imp_ws2_32_ordinal291>

externdef __imp_ws2_32_ordinal292:PPROC
ws2_32_ordinal292 equ <__imp_ws2_32_ordinal292>

externdef __imp_ws2_32_ordinal293:PPROC
ws2_32_ordinal293 equ <__imp_ws2_32_ordinal293>

externdef __imp_ws2_32_ordinal294:PPROC
ws2_32_ordinal294 equ <__imp_ws2_32_ordinal294>

externdef __imp_ws2_32_ordinal295:PPROC
ws2_32_ordinal295 equ <__imp_ws2_32_ordinal295>

externdef __imp_ws2_32_ordinal296:PPROC
ws2_32_ordinal296 equ <__imp_ws2_32_ordinal296>

externdef __imp_ws2_32_ordinal297:PPROC
ws2_32_ordinal297 equ <__imp_ws2_32_ordinal297>

externdef __imp_ws2_32_ordinal298:PPROC
ws2_32_ordinal298 equ <__imp_ws2_32_ordinal298>

externdef __imp_ws2_32_ordinal299:PPROC
ws2_32_ordinal299 equ <__imp_ws2_32_ordinal299>

externdef __imp_ws2_32_ordinal300:PPROC
ws2_32_ordinal300 equ <__imp_ws2_32_ordinal300>

externdef __imp_ws2_32_ordinal301:PPROC
ws2_32_ordinal301 equ <__imp_ws2_32_ordinal301>

externdef __imp_ws2_32_ordinal302:PPROC
ws2_32_ordinal302 equ <__imp_ws2_32_ordinal302>

externdef __imp_ws2_32_ordinal303:PPROC
ws2_32_ordinal303 equ <__imp_ws2_32_ordinal303>

externdef __imp_ws2_32_ordinal304:PPROC
ws2_32_ordinal304 equ <__imp_ws2_32_ordinal304>

externdef __imp_ws2_32_ordinal305:PPROC
ws2_32_ordinal305 equ <__imp_ws2_32_ordinal305>

externdef __imp_ws2_32_ordinal306:PPROC
ws2_32_ordinal306 equ <__imp_ws2_32_ordinal306>

externdef __imp_ws2_32_ordinal307:PPROC
ws2_32_ordinal307 equ <__imp_ws2_32_ordinal307>

externdef __imp_ws2_32_ordinal308:PPROC
ws2_32_ordinal308 equ <__imp_ws2_32_ordinal308>

externdef __imp_ws2_32_ordinal309:PPROC
ws2_32_ordinal309 equ <__imp_ws2_32_ordinal309>

externdef __imp_ws2_32_ordinal310:PPROC
ws2_32_ordinal310 equ <__imp_ws2_32_ordinal310>

externdef __imp_ws2_32_ordinal311:PPROC
ws2_32_ordinal311 equ <__imp_ws2_32_ordinal311>

externdef __imp_ws2_32_ordinal312:PPROC
ws2_32_ordinal312 equ <__imp_ws2_32_ordinal312>

externdef __imp_ws2_32_ordinal313:PPROC
ws2_32_ordinal313 equ <__imp_ws2_32_ordinal313>

externdef __imp_ws2_32_ordinal314:PPROC
ws2_32_ordinal314 equ <__imp_ws2_32_ordinal314>

externdef __imp_ws2_32_ordinal315:PPROC
ws2_32_ordinal315 equ <__imp_ws2_32_ordinal315>

externdef __imp_ws2_32_ordinal316:PPROC
ws2_32_ordinal316 equ <__imp_ws2_32_ordinal316>

externdef __imp_ws2_32_ordinal317:PPROC
ws2_32_ordinal317 equ <__imp_ws2_32_ordinal317>

externdef __imp_ws2_32_ordinal318:PPROC
ws2_32_ordinal318 equ <__imp_ws2_32_ordinal318>

externdef __imp_ws2_32_ordinal319:PPROC
ws2_32_ordinal319 equ <__imp_ws2_32_ordinal319>

externdef __imp_ws2_32_ordinal320:PPROC
ws2_32_ordinal320 equ <__imp_ws2_32_ordinal320>

externdef __imp_ws2_32_ordinal321:PPROC
ws2_32_ordinal321 equ <__imp_ws2_32_ordinal321>

externdef __imp_ws2_32_ordinal322:PPROC
ws2_32_ordinal322 equ <__imp_ws2_32_ordinal322>

externdef __imp_ws2_32_ordinal323:PPROC
ws2_32_ordinal323 equ <__imp_ws2_32_ordinal323>

externdef __imp_ws2_32_ordinal324:PPROC
ws2_32_ordinal324 equ <__imp_ws2_32_ordinal324>

externdef __imp_ws2_32_ordinal325:PPROC
ws2_32_ordinal325 equ <__imp_ws2_32_ordinal325>

externdef __imp_ws2_32_ordinal326:PPROC
ws2_32_ordinal326 equ <__imp_ws2_32_ordinal326>

externdef __imp_ws2_32_ordinal327:PPROC
ws2_32_ordinal327 equ <__imp_ws2_32_ordinal327>

externdef __imp_ws2_32_ordinal328:PPROC
ws2_32_ordinal328 equ <__imp_ws2_32_ordinal328>

externdef __imp_ws2_32_ordinal329:PPROC
ws2_32_ordinal329 equ <__imp_ws2_32_ordinal329>

externdef __imp_ws2_32_ordinal330:PPROC
ws2_32_ordinal330 equ <__imp_ws2_32_ordinal330>

externdef __imp_ws2_32_ordinal331:PPROC
ws2_32_ordinal331 equ <__imp_ws2_32_ordinal331>

externdef __imp_ws2_32_ordinal332:PPROC
ws2_32_ordinal332 equ <__imp_ws2_32_ordinal332>

externdef __imp_ws2_32_ordinal333:PPROC
ws2_32_ordinal333 equ <__imp_ws2_32_ordinal333>

externdef __imp_ws2_32_ordinal334:PPROC
ws2_32_ordinal334 equ <__imp_ws2_32_ordinal334>

externdef __imp_ws2_32_ordinal335:PPROC
ws2_32_ordinal335 equ <__imp_ws2_32_ordinal335>

externdef __imp_ws2_32_ordinal336:PPROC
ws2_32_ordinal336 equ <__imp_ws2_32_ordinal336>

externdef __imp_ws2_32_ordinal337:PPROC
ws2_32_ordinal337 equ <__imp_ws2_32_ordinal337>

externdef __imp_ws2_32_ordinal338:PPROC
ws2_32_ordinal338 equ <__imp_ws2_32_ordinal338>

externdef __imp_ws2_32_ordinal339:PPROC
ws2_32_ordinal339 equ <__imp_ws2_32_ordinal339>

externdef __imp_ws2_32_ordinal340:PPROC
ws2_32_ordinal340 equ <__imp_ws2_32_ordinal340>

externdef __imp_ws2_32_ordinal341:PPROC
ws2_32_ordinal341 equ <__imp_ws2_32_ordinal341>

externdef __imp_ws2_32_ordinal342:PPROC
ws2_32_ordinal342 equ <__imp_ws2_32_ordinal342>

externdef __imp_ws2_32_ordinal343:PPROC
ws2_32_ordinal343 equ <__imp_ws2_32_ordinal343>

externdef __imp_ws2_32_ordinal344:PPROC
ws2_32_ordinal344 equ <__imp_ws2_32_ordinal344>

externdef __imp_ws2_32_ordinal345:PPROC
ws2_32_ordinal345 equ <__imp_ws2_32_ordinal345>

externdef __imp_ws2_32_ordinal346:PPROC
ws2_32_ordinal346 equ <__imp_ws2_32_ordinal346>

externdef __imp_ws2_32_ordinal347:PPROC
ws2_32_ordinal347 equ <__imp_ws2_32_ordinal347>

externdef __imp_ws2_32_ordinal348:PPROC
ws2_32_ordinal348 equ <__imp_ws2_32_ordinal348>

externdef __imp_ws2_32_ordinal349:PPROC
ws2_32_ordinal349 equ <__imp_ws2_32_ordinal349>

externdef __imp_ws2_32_ordinal350:PPROC
ws2_32_ordinal350 equ <__imp_ws2_32_ordinal350>

externdef __imp_ws2_32_ordinal351:PPROC
ws2_32_ordinal351 equ <__imp_ws2_32_ordinal351>

externdef __imp_ws2_32_ordinal352:PPROC
ws2_32_ordinal352 equ <__imp_ws2_32_ordinal352>

externdef __imp_ws2_32_ordinal353:PPROC
ws2_32_ordinal353 equ <__imp_ws2_32_ordinal353>

externdef __imp_ws2_32_ordinal354:PPROC
ws2_32_ordinal354 equ <__imp_ws2_32_ordinal354>

externdef __imp_ws2_32_ordinal355:PPROC
ws2_32_ordinal355 equ <__imp_ws2_32_ordinal355>

externdef __imp_ws2_32_ordinal356:PPROC
ws2_32_ordinal356 equ <__imp_ws2_32_ordinal356>

externdef __imp_ws2_32_ordinal357:PPROC
ws2_32_ordinal357 equ <__imp_ws2_32_ordinal357>

externdef __imp_ws2_32_ordinal358:PPROC
ws2_32_ordinal358 equ <__imp_ws2_32_ordinal358>

externdef __imp_ws2_32_ordinal359:PPROC
ws2_32_ordinal359 equ <__imp_ws2_32_ordinal359>

externdef __imp_ws2_32_ordinal360:PPROC
ws2_32_ordinal360 equ <__imp_ws2_32_ordinal360>

externdef __imp_ws2_32_ordinal361:PPROC
ws2_32_ordinal361 equ <__imp_ws2_32_ordinal361>

externdef __imp_ws2_32_ordinal362:PPROC
ws2_32_ordinal362 equ <__imp_ws2_32_ordinal362>

externdef __imp_ws2_32_ordinal363:PPROC
ws2_32_ordinal363 equ <__imp_ws2_32_ordinal363>

externdef __imp_ws2_32_ordinal364:PPROC
ws2_32_ordinal364 equ <__imp_ws2_32_ordinal364>

externdef __imp_ws2_32_ordinal365:PPROC
ws2_32_ordinal365 equ <__imp_ws2_32_ordinal365>

externdef __imp_ws2_32_ordinal366:PPROC
ws2_32_ordinal366 equ <__imp_ws2_32_ordinal366>

externdef __imp_ws2_32_ordinal367:PPROC
ws2_32_ordinal367 equ <__imp_ws2_32_ordinal367>

externdef __imp_ws2_32_ordinal368:PPROC
ws2_32_ordinal368 equ <__imp_ws2_32_ordinal368>

externdef __imp_ws2_32_ordinal369:PPROC
ws2_32_ordinal369 equ <__imp_ws2_32_ordinal369>

externdef __imp_ws2_32_ordinal370:PPROC
ws2_32_ordinal370 equ <__imp_ws2_32_ordinal370>

externdef __imp_ws2_32_ordinal371:PPROC
ws2_32_ordinal371 equ <__imp_ws2_32_ordinal371>

externdef __imp_ws2_32_ordinal372:PPROC
ws2_32_ordinal372 equ <__imp_ws2_32_ordinal372>

externdef __imp_ws2_32_ordinal373:PPROC
ws2_32_ordinal373 equ <__imp_ws2_32_ordinal373>

externdef __imp_ws2_32_ordinal374:PPROC
ws2_32_ordinal374 equ <__imp_ws2_32_ordinal374>

externdef __imp_ws2_32_ordinal375:PPROC
ws2_32_ordinal375 equ <__imp_ws2_32_ordinal375>

externdef __imp_ws2_32_ordinal376:PPROC
ws2_32_ordinal376 equ <__imp_ws2_32_ordinal376>

externdef __imp_ws2_32_ordinal377:PPROC
ws2_32_ordinal377 equ <__imp_ws2_32_ordinal377>

externdef __imp_ws2_32_ordinal378:PPROC
ws2_32_ordinal378 equ <__imp_ws2_32_ordinal378>

externdef __imp_ws2_32_ordinal379:PPROC
ws2_32_ordinal379 equ <__imp_ws2_32_ordinal379>

externdef __imp_ws2_32_ordinal380:PPROC
ws2_32_ordinal380 equ <__imp_ws2_32_ordinal380>

externdef __imp_ws2_32_ordinal381:PPROC
ws2_32_ordinal381 equ <__imp_ws2_32_ordinal381>

externdef __imp_ws2_32_ordinal382:PPROC
ws2_32_ordinal382 equ <__imp_ws2_32_ordinal382>

externdef __imp_ws2_32_ordinal383:PPROC
ws2_32_ordinal383 equ <__imp_ws2_32_ordinal383>

externdef __imp_ws2_32_ordinal384:PPROC
ws2_32_ordinal384 equ <__imp_ws2_32_ordinal384>

externdef __imp_ws2_32_ordinal385:PPROC
ws2_32_ordinal385 equ <__imp_ws2_32_ordinal385>

externdef __imp_ws2_32_ordinal386:PPROC
ws2_32_ordinal386 equ <__imp_ws2_32_ordinal386>

externdef __imp_ws2_32_ordinal387:PPROC
ws2_32_ordinal387 equ <__imp_ws2_32_ordinal387>

externdef __imp_ws2_32_ordinal388:PPROC
ws2_32_ordinal388 equ <__imp_ws2_32_ordinal388>

externdef __imp_ws2_32_ordinal389:PPROC
ws2_32_ordinal389 equ <__imp_ws2_32_ordinal389>

externdef __imp_ws2_32_ordinal390:PPROC
ws2_32_ordinal390 equ <__imp_ws2_32_ordinal390>

externdef __imp_ws2_32_ordinal391:PPROC
ws2_32_ordinal391 equ <__imp_ws2_32_ordinal391>

externdef __imp_ws2_32_ordinal392:PPROC
ws2_32_ordinal392 equ <__imp_ws2_32_ordinal392>

externdef __imp_ws2_32_ordinal393:PPROC
ws2_32_ordinal393 equ <__imp_ws2_32_ordinal393>

externdef __imp_ws2_32_ordinal394:PPROC
ws2_32_ordinal394 equ <__imp_ws2_32_ordinal394>

externdef __imp_ws2_32_ordinal395:PPROC
ws2_32_ordinal395 equ <__imp_ws2_32_ordinal395>

externdef __imp_ws2_32_ordinal396:PPROC
ws2_32_ordinal396 equ <__imp_ws2_32_ordinal396>

externdef __imp_ws2_32_ordinal397:PPROC
ws2_32_ordinal397 equ <__imp_ws2_32_ordinal397>

externdef __imp_ws2_32_ordinal398:PPROC
ws2_32_ordinal398 equ <__imp_ws2_32_ordinal398>

externdef __imp_ws2_32_ordinal399:PPROC
ws2_32_ordinal399 equ <__imp_ws2_32_ordinal399>

externdef __imp_ws2_32_ordinal400:PPROC
ws2_32_ordinal400 equ <__imp_ws2_32_ordinal400>

externdef __imp_ws2_32_ordinal401:PPROC
ws2_32_ordinal401 equ <__imp_ws2_32_ordinal401>

externdef __imp_ws2_32_ordinal402:PPROC
ws2_32_ordinal402 equ <__imp_ws2_32_ordinal402>

externdef __imp_ws2_32_ordinal403:PPROC
ws2_32_ordinal403 equ <__imp_ws2_32_ordinal403>

externdef __imp_ws2_32_ordinal404:PPROC
ws2_32_ordinal404 equ <__imp_ws2_32_ordinal404>

externdef __imp_ws2_32_ordinal405:PPROC
ws2_32_ordinal405 equ <__imp_ws2_32_ordinal405>

externdef __imp_ws2_32_ordinal406:PPROC
ws2_32_ordinal406 equ <__imp_ws2_32_ordinal406>

externdef __imp_ws2_32_ordinal407:PPROC
ws2_32_ordinal407 equ <__imp_ws2_32_ordinal407>

externdef __imp_ws2_32_ordinal408:PPROC
ws2_32_ordinal408 equ <__imp_ws2_32_ordinal408>

externdef __imp_ws2_32_ordinal409:PPROC
ws2_32_ordinal409 equ <__imp_ws2_32_ordinal409>

externdef __imp_ws2_32_ordinal410:PPROC
ws2_32_ordinal410 equ <__imp_ws2_32_ordinal410>

externdef __imp_ws2_32_ordinal411:PPROC
ws2_32_ordinal411 equ <__imp_ws2_32_ordinal411>

externdef __imp_ws2_32_ordinal412:PPROC
ws2_32_ordinal412 equ <__imp_ws2_32_ordinal412>

externdef __imp_ws2_32_ordinal413:PPROC
ws2_32_ordinal413 equ <__imp_ws2_32_ordinal413>

externdef __imp_ws2_32_ordinal414:PPROC
ws2_32_ordinal414 equ <__imp_ws2_32_ordinal414>

externdef __imp_ws2_32_ordinal415:PPROC
ws2_32_ordinal415 equ <__imp_ws2_32_ordinal415>

externdef __imp_ws2_32_ordinal416:PPROC
ws2_32_ordinal416 equ <__imp_ws2_32_ordinal416>

externdef __imp_ws2_32_ordinal417:PPROC
ws2_32_ordinal417 equ <__imp_ws2_32_ordinal417>

externdef __imp_ws2_32_ordinal418:PPROC
ws2_32_ordinal418 equ <__imp_ws2_32_ordinal418>

externdef __imp_ws2_32_ordinal419:PPROC
ws2_32_ordinal419 equ <__imp_ws2_32_ordinal419>

externdef __imp_ws2_32_ordinal420:PPROC
ws2_32_ordinal420 equ <__imp_ws2_32_ordinal420>

externdef __imp_ws2_32_ordinal421:PPROC
ws2_32_ordinal421 equ <__imp_ws2_32_ordinal421>

externdef __imp_ws2_32_ordinal422:PPROC
ws2_32_ordinal422 equ <__imp_ws2_32_ordinal422>

externdef __imp_ws2_32_ordinal423:PPROC
ws2_32_ordinal423 equ <__imp_ws2_32_ordinal423>

externdef __imp_ws2_32_ordinal424:PPROC
ws2_32_ordinal424 equ <__imp_ws2_32_ordinal424>

externdef __imp_ws2_32_ordinal425:PPROC
ws2_32_ordinal425 equ <__imp_ws2_32_ordinal425>

externdef __imp_ws2_32_ordinal426:PPROC
ws2_32_ordinal426 equ <__imp_ws2_32_ordinal426>

externdef __imp_ws2_32_ordinal427:PPROC
ws2_32_ordinal427 equ <__imp_ws2_32_ordinal427>

externdef __imp_ws2_32_ordinal428:PPROC
ws2_32_ordinal428 equ <__imp_ws2_32_ordinal428>

externdef __imp_ws2_32_ordinal429:PPROC
ws2_32_ordinal429 equ <__imp_ws2_32_ordinal429>

externdef __imp_ws2_32_ordinal430:PPROC
ws2_32_ordinal430 equ <__imp_ws2_32_ordinal430>

externdef __imp_ws2_32_ordinal431:PPROC
ws2_32_ordinal431 equ <__imp_ws2_32_ordinal431>

externdef __imp_ws2_32_ordinal432:PPROC
ws2_32_ordinal432 equ <__imp_ws2_32_ordinal432>

externdef __imp_ws2_32_ordinal433:PPROC
ws2_32_ordinal433 equ <__imp_ws2_32_ordinal433>

externdef __imp_ws2_32_ordinal434:PPROC
ws2_32_ordinal434 equ <__imp_ws2_32_ordinal434>

externdef __imp_ws2_32_ordinal435:PPROC
ws2_32_ordinal435 equ <__imp_ws2_32_ordinal435>

externdef __imp_ws2_32_ordinal436:PPROC
ws2_32_ordinal436 equ <__imp_ws2_32_ordinal436>

externdef __imp_ws2_32_ordinal437:PPROC
ws2_32_ordinal437 equ <__imp_ws2_32_ordinal437>

externdef __imp_ws2_32_ordinal438:PPROC
ws2_32_ordinal438 equ <__imp_ws2_32_ordinal438>

externdef __imp_ws2_32_ordinal439:PPROC
ws2_32_ordinal439 equ <__imp_ws2_32_ordinal439>

externdef __imp_ws2_32_ordinal440:PPROC
ws2_32_ordinal440 equ <__imp_ws2_32_ordinal440>

externdef __imp_ws2_32_ordinal441:PPROC
ws2_32_ordinal441 equ <__imp_ws2_32_ordinal441>

externdef __imp_ws2_32_ordinal442:PPROC
ws2_32_ordinal442 equ <__imp_ws2_32_ordinal442>

externdef __imp_ws2_32_ordinal443:PPROC
ws2_32_ordinal443 equ <__imp_ws2_32_ordinal443>

externdef __imp_ws2_32_ordinal444:PPROC
ws2_32_ordinal444 equ <__imp_ws2_32_ordinal444>

externdef __imp_ws2_32_ordinal445:PPROC
ws2_32_ordinal445 equ <__imp_ws2_32_ordinal445>

externdef __imp_ws2_32_ordinal446:PPROC
ws2_32_ordinal446 equ <__imp_ws2_32_ordinal446>

externdef __imp_ws2_32_ordinal447:PPROC
ws2_32_ordinal447 equ <__imp_ws2_32_ordinal447>

externdef __imp_ws2_32_ordinal448:PPROC
ws2_32_ordinal448 equ <__imp_ws2_32_ordinal448>

externdef __imp_ws2_32_ordinal449:PPROC
ws2_32_ordinal449 equ <__imp_ws2_32_ordinal449>

externdef __imp_ws2_32_ordinal450:PPROC
ws2_32_ordinal450 equ <__imp_ws2_32_ordinal450>

externdef __imp_ws2_32_ordinal451:PPROC
ws2_32_ordinal451 equ <__imp_ws2_32_ordinal451>

externdef __imp_ws2_32_ordinal452:PPROC
ws2_32_ordinal452 equ <__imp_ws2_32_ordinal452>

externdef __imp_ws2_32_ordinal453:PPROC
ws2_32_ordinal453 equ <__imp_ws2_32_ordinal453>

externdef __imp_ws2_32_ordinal454:PPROC
ws2_32_ordinal454 equ <__imp_ws2_32_ordinal454>

externdef __imp_ws2_32_ordinal455:PPROC
ws2_32_ordinal455 equ <__imp_ws2_32_ordinal455>

externdef __imp_ws2_32_ordinal456:PPROC
ws2_32_ordinal456 equ <__imp_ws2_32_ordinal456>

externdef __imp_ws2_32_ordinal457:PPROC
ws2_32_ordinal457 equ <__imp_ws2_32_ordinal457>

externdef __imp_ws2_32_ordinal458:PPROC
ws2_32_ordinal458 equ <__imp_ws2_32_ordinal458>

externdef __imp_ws2_32_ordinal459:PPROC
ws2_32_ordinal459 equ <__imp_ws2_32_ordinal459>

externdef __imp_ws2_32_ordinal460:PPROC
ws2_32_ordinal460 equ <__imp_ws2_32_ordinal460>

externdef __imp_ws2_32_ordinal461:PPROC
ws2_32_ordinal461 equ <__imp_ws2_32_ordinal461>

externdef __imp_ws2_32_ordinal462:PPROC
ws2_32_ordinal462 equ <__imp_ws2_32_ordinal462>

externdef __imp_ws2_32_ordinal463:PPROC
ws2_32_ordinal463 equ <__imp_ws2_32_ordinal463>

externdef __imp_ws2_32_ordinal464:PPROC
ws2_32_ordinal464 equ <__imp_ws2_32_ordinal464>

externdef __imp_ws2_32_ordinal465:PPROC
ws2_32_ordinal465 equ <__imp_ws2_32_ordinal465>

externdef __imp_ws2_32_ordinal466:PPROC
ws2_32_ordinal466 equ <__imp_ws2_32_ordinal466>

externdef __imp_ws2_32_ordinal467:PPROC
ws2_32_ordinal467 equ <__imp_ws2_32_ordinal467>

externdef __imp_ws2_32_ordinal468:PPROC
ws2_32_ordinal468 equ <__imp_ws2_32_ordinal468>

externdef __imp_ws2_32_ordinal469:PPROC
ws2_32_ordinal469 equ <__imp_ws2_32_ordinal469>

externdef __imp_ws2_32_ordinal470:PPROC
ws2_32_ordinal470 equ <__imp_ws2_32_ordinal470>

externdef __imp_ws2_32_ordinal471:PPROC
ws2_32_ordinal471 equ <__imp_ws2_32_ordinal471>

externdef __imp_ws2_32_ordinal472:PPROC
ws2_32_ordinal472 equ <__imp_ws2_32_ordinal472>

externdef __imp_ws2_32_ordinal473:PPROC
ws2_32_ordinal473 equ <__imp_ws2_32_ordinal473>

externdef __imp_ws2_32_ordinal474:PPROC
ws2_32_ordinal474 equ <__imp_ws2_32_ordinal474>

externdef __imp_ws2_32_ordinal475:PPROC
ws2_32_ordinal475 equ <__imp_ws2_32_ordinal475>

externdef __imp_ws2_32_ordinal476:PPROC
ws2_32_ordinal476 equ <__imp_ws2_32_ordinal476>

externdef __imp_ws2_32_ordinal477:PPROC
ws2_32_ordinal477 equ <__imp_ws2_32_ordinal477>

externdef __imp_ws2_32_ordinal478:PPROC
ws2_32_ordinal478 equ <__imp_ws2_32_ordinal478>

externdef __imp_ws2_32_ordinal479:PPROC
ws2_32_ordinal479 equ <__imp_ws2_32_ordinal479>

externdef __imp_ws2_32_ordinal480:PPROC
ws2_32_ordinal480 equ <__imp_ws2_32_ordinal480>

externdef __imp_ws2_32_ordinal481:PPROC
ws2_32_ordinal481 equ <__imp_ws2_32_ordinal481>

externdef __imp_ws2_32_ordinal482:PPROC
ws2_32_ordinal482 equ <__imp_ws2_32_ordinal482>

externdef __imp_ws2_32_ordinal483:PPROC
ws2_32_ordinal483 equ <__imp_ws2_32_ordinal483>

externdef __imp_ws2_32_ordinal484:PPROC
ws2_32_ordinal484 equ <__imp_ws2_32_ordinal484>

externdef __imp_ws2_32_ordinal485:PPROC
ws2_32_ordinal485 equ <__imp_ws2_32_ordinal485>

externdef __imp_ws2_32_ordinal486:PPROC
ws2_32_ordinal486 equ <__imp_ws2_32_ordinal486>

externdef __imp_ws2_32_ordinal487:PPROC
ws2_32_ordinal487 equ <__imp_ws2_32_ordinal487>

externdef __imp_ws2_32_ordinal488:PPROC
ws2_32_ordinal488 equ <__imp_ws2_32_ordinal488>

externdef __imp_ws2_32_ordinal489:PPROC
ws2_32_ordinal489 equ <__imp_ws2_32_ordinal489>

externdef __imp_ws2_32_ordinal490:PPROC
ws2_32_ordinal490 equ <__imp_ws2_32_ordinal490>

externdef __imp_ws2_32_ordinal491:PPROC
ws2_32_ordinal491 equ <__imp_ws2_32_ordinal491>

externdef __imp_ws2_32_ordinal492:PPROC
ws2_32_ordinal492 equ <__imp_ws2_32_ordinal492>

externdef __imp_ws2_32_ordinal493:PPROC
ws2_32_ordinal493 equ <__imp_ws2_32_ordinal493>

externdef __imp_ws2_32_ordinal494:PPROC
ws2_32_ordinal494 equ <__imp_ws2_32_ordinal494>

externdef __imp_ws2_32_ordinal495:PPROC
ws2_32_ordinal495 equ <__imp_ws2_32_ordinal495>

externdef __imp_ws2_32_ordinal496:PPROC
ws2_32_ordinal496 equ <__imp_ws2_32_ordinal496>

externdef __imp_ws2_32_ordinal497:PPROC
ws2_32_ordinal497 equ <__imp_ws2_32_ordinal497>

externdef __imp_ws2_32_ordinal498:PPROC
ws2_32_ordinal498 equ <__imp_ws2_32_ordinal498>

externdef __imp_ws2_32_ordinal499:PPROC
ws2_32_ordinal499 equ <__imp_ws2_32_ordinal499>
