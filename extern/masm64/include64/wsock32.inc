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

externdef __imp_TransmitFile:PPROC
TransmitFile equ <__imp_TransmitFile>

externdef __imp_WEP:PPROC
WEP equ <__imp_WEP>

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

externdef __imp_WSAGetLastError:PPROC
WSAGetLastError equ <__imp_WSAGetLastError>

externdef __imp_WSAIsBlocking:PPROC
WSAIsBlocking equ <__imp_WSAIsBlocking>

externdef __imp_WSARecvEx:PPROC
WSARecvEx equ <__imp_WSARecvEx>

externdef __imp_WSASetBlockingHook:PPROC
WSASetBlockingHook equ <__imp_WSASetBlockingHook>

externdef __imp_WSASetLastError:PPROC
WSASetLastError equ <__imp_WSASetLastError>

externdef __imp_WSAStartup:PPROC
WSAStartup equ <__imp_WSAStartup>

externdef __imp_WSAUnhookBlockingHook:PPROC
WSAUnhookBlockingHook equ <__imp_WSAUnhookBlockingHook>

externdef __imp_WSApSetPostRoutine:PPROC
WSApSetPostRoutine equ <__imp_WSApSetPostRoutine>

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

externdef __imp_dn_expand:PPROC
dn_expand equ <__imp_dn_expand>

externdef __imp_gethostbyaddr:PPROC
gethostbyaddr equ <__imp_gethostbyaddr>

externdef __imp_gethostbyname:PPROC
gethostbyname equ <__imp_gethostbyname>

externdef __imp_gethostname:PPROC
gethostname equ <__imp_gethostname>

externdef __imp_getnetbyname:PPROC
getnetbyname equ <__imp_getnetbyname>

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

externdef __imp_inet_network:PPROC
inet_network equ <__imp_inet_network>

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

externdef __imp_rcmd:PPROC
rcmd equ <__imp_rcmd>

externdef __imp_recv:PPROC
recv equ <__imp_recv>

externdef __imp_recvfrom:PPROC
recvfrom equ <__imp_recvfrom>

externdef __imp_rexec:PPROC
rexec equ <__imp_rexec>

externdef __imp_rresvport:PPROC
rresvport equ <__imp_rresvport>

externdef __imp_s_perror:PPROC
s_perror equ <__imp_s_perror>

externdef __imp_select:PPROC
select equ <__imp_select>

externdef __imp_send:PPROC
send equ <__imp_send>

externdef __imp_sendto:PPROC
sendto equ <__imp_sendto>

externdef __imp_sethostname:PPROC
sethostname equ <__imp_sethostname>

externdef __imp_setsockopt:PPROC
setsockopt equ <__imp_setsockopt>

externdef __imp_shutdown:PPROC
shutdown equ <__imp_shutdown>

externdef __imp_socket:PPROC
socket equ <__imp_socket>

externdef __imp_wsock32_ordinal1001:PPROC
wsock32_ordinal1001 equ <__imp_wsock32_ordinal1001>

externdef __imp_wsock32_ordinal1002:PPROC
wsock32_ordinal1002 equ <__imp_wsock32_ordinal1002>

externdef __imp_wsock32_ordinal1003:PPROC
wsock32_ordinal1003 equ <__imp_wsock32_ordinal1003>

externdef __imp_wsock32_ordinal1004:PPROC
wsock32_ordinal1004 equ <__imp_wsock32_ordinal1004>

externdef __imp_wsock32_ordinal1005:PPROC
wsock32_ordinal1005 equ <__imp_wsock32_ordinal1005>

externdef __imp_wsock32_ordinal1006:PPROC
wsock32_ordinal1006 equ <__imp_wsock32_ordinal1006>

externdef __imp_wsock32_ordinal1007:PPROC
wsock32_ordinal1007 equ <__imp_wsock32_ordinal1007>

externdef __imp_wsock32_ordinal1008:PPROC
wsock32_ordinal1008 equ <__imp_wsock32_ordinal1008>

externdef __imp_wsock32_ordinal1009:PPROC
wsock32_ordinal1009 equ <__imp_wsock32_ordinal1009>

externdef __imp_wsock32_ordinal100:PPROC
wsock32_ordinal100 equ <__imp_wsock32_ordinal100>

externdef __imp_wsock32_ordinal1010:PPROC
wsock32_ordinal1010 equ <__imp_wsock32_ordinal1010>

externdef __imp_wsock32_ordinal1011:PPROC
wsock32_ordinal1011 equ <__imp_wsock32_ordinal1011>

externdef __imp_wsock32_ordinal1012:PPROC
wsock32_ordinal1012 equ <__imp_wsock32_ordinal1012>

externdef __imp_wsock32_ordinal1013:PPROC
wsock32_ordinal1013 equ <__imp_wsock32_ordinal1013>

externdef __imp_wsock32_ordinal1014:PPROC
wsock32_ordinal1014 equ <__imp_wsock32_ordinal1014>

externdef __imp_wsock32_ordinal1015:PPROC
wsock32_ordinal1015 equ <__imp_wsock32_ordinal1015>

externdef __imp_wsock32_ordinal1016:PPROC
wsock32_ordinal1016 equ <__imp_wsock32_ordinal1016>

externdef __imp_wsock32_ordinal1017:PPROC
wsock32_ordinal1017 equ <__imp_wsock32_ordinal1017>

externdef __imp_wsock32_ordinal1018:PPROC
wsock32_ordinal1018 equ <__imp_wsock32_ordinal1018>

externdef __imp_wsock32_ordinal1019:PPROC
wsock32_ordinal1019 equ <__imp_wsock32_ordinal1019>

externdef __imp_wsock32_ordinal1020:PPROC
wsock32_ordinal1020 equ <__imp_wsock32_ordinal1020>

externdef __imp_wsock32_ordinal1021:PPROC
wsock32_ordinal1021 equ <__imp_wsock32_ordinal1021>

externdef __imp_wsock32_ordinal1022:PPROC
wsock32_ordinal1022 equ <__imp_wsock32_ordinal1022>

externdef __imp_wsock32_ordinal1023:PPROC
wsock32_ordinal1023 equ <__imp_wsock32_ordinal1023>

externdef __imp_wsock32_ordinal1024:PPROC
wsock32_ordinal1024 equ <__imp_wsock32_ordinal1024>

externdef __imp_wsock32_ordinal1025:PPROC
wsock32_ordinal1025 equ <__imp_wsock32_ordinal1025>

externdef __imp_wsock32_ordinal1026:PPROC
wsock32_ordinal1026 equ <__imp_wsock32_ordinal1026>

externdef __imp_wsock32_ordinal1027:PPROC
wsock32_ordinal1027 equ <__imp_wsock32_ordinal1027>

externdef __imp_wsock32_ordinal1028:PPROC
wsock32_ordinal1028 equ <__imp_wsock32_ordinal1028>

externdef __imp_wsock32_ordinal1029:PPROC
wsock32_ordinal1029 equ <__imp_wsock32_ordinal1029>

externdef __imp_wsock32_ordinal1030:PPROC
wsock32_ordinal1030 equ <__imp_wsock32_ordinal1030>

externdef __imp_wsock32_ordinal1031:PPROC
wsock32_ordinal1031 equ <__imp_wsock32_ordinal1031>

externdef __imp_wsock32_ordinal1032:PPROC
wsock32_ordinal1032 equ <__imp_wsock32_ordinal1032>

externdef __imp_wsock32_ordinal1033:PPROC
wsock32_ordinal1033 equ <__imp_wsock32_ordinal1033>

externdef __imp_wsock32_ordinal1034:PPROC
wsock32_ordinal1034 equ <__imp_wsock32_ordinal1034>

externdef __imp_wsock32_ordinal1035:PPROC
wsock32_ordinal1035 equ <__imp_wsock32_ordinal1035>

externdef __imp_wsock32_ordinal1036:PPROC
wsock32_ordinal1036 equ <__imp_wsock32_ordinal1036>

externdef __imp_wsock32_ordinal1037:PPROC
wsock32_ordinal1037 equ <__imp_wsock32_ordinal1037>

externdef __imp_wsock32_ordinal1038:PPROC
wsock32_ordinal1038 equ <__imp_wsock32_ordinal1038>

externdef __imp_wsock32_ordinal1039:PPROC
wsock32_ordinal1039 equ <__imp_wsock32_ordinal1039>

externdef __imp_wsock32_ordinal1040:PPROC
wsock32_ordinal1040 equ <__imp_wsock32_ordinal1040>

externdef __imp_wsock32_ordinal1041:PPROC
wsock32_ordinal1041 equ <__imp_wsock32_ordinal1041>

externdef __imp_wsock32_ordinal1042:PPROC
wsock32_ordinal1042 equ <__imp_wsock32_ordinal1042>

externdef __imp_wsock32_ordinal1043:PPROC
wsock32_ordinal1043 equ <__imp_wsock32_ordinal1043>

externdef __imp_wsock32_ordinal1044:PPROC
wsock32_ordinal1044 equ <__imp_wsock32_ordinal1044>

externdef __imp_wsock32_ordinal1045:PPROC
wsock32_ordinal1045 equ <__imp_wsock32_ordinal1045>

externdef __imp_wsock32_ordinal1046:PPROC
wsock32_ordinal1046 equ <__imp_wsock32_ordinal1046>

externdef __imp_wsock32_ordinal1047:PPROC
wsock32_ordinal1047 equ <__imp_wsock32_ordinal1047>

externdef __imp_wsock32_ordinal1048:PPROC
wsock32_ordinal1048 equ <__imp_wsock32_ordinal1048>

externdef __imp_wsock32_ordinal1049:PPROC
wsock32_ordinal1049 equ <__imp_wsock32_ordinal1049>

externdef __imp_wsock32_ordinal1050:PPROC
wsock32_ordinal1050 equ <__imp_wsock32_ordinal1050>

externdef __imp_wsock32_ordinal1051:PPROC
wsock32_ordinal1051 equ <__imp_wsock32_ordinal1051>

externdef __imp_wsock32_ordinal1052:PPROC
wsock32_ordinal1052 equ <__imp_wsock32_ordinal1052>

externdef __imp_wsock32_ordinal1053:PPROC
wsock32_ordinal1053 equ <__imp_wsock32_ordinal1053>

externdef __imp_wsock32_ordinal1054:PPROC
wsock32_ordinal1054 equ <__imp_wsock32_ordinal1054>

externdef __imp_wsock32_ordinal1055:PPROC
wsock32_ordinal1055 equ <__imp_wsock32_ordinal1055>

externdef __imp_wsock32_ordinal1056:PPROC
wsock32_ordinal1056 equ <__imp_wsock32_ordinal1056>

externdef __imp_wsock32_ordinal1057:PPROC
wsock32_ordinal1057 equ <__imp_wsock32_ordinal1057>

externdef __imp_wsock32_ordinal1058:PPROC
wsock32_ordinal1058 equ <__imp_wsock32_ordinal1058>

externdef __imp_wsock32_ordinal1059:PPROC
wsock32_ordinal1059 equ <__imp_wsock32_ordinal1059>

externdef __imp_wsock32_ordinal1060:PPROC
wsock32_ordinal1060 equ <__imp_wsock32_ordinal1060>

externdef __imp_wsock32_ordinal1061:PPROC
wsock32_ordinal1061 equ <__imp_wsock32_ordinal1061>

externdef __imp_wsock32_ordinal1062:PPROC
wsock32_ordinal1062 equ <__imp_wsock32_ordinal1062>

externdef __imp_wsock32_ordinal1063:PPROC
wsock32_ordinal1063 equ <__imp_wsock32_ordinal1063>

externdef __imp_wsock32_ordinal1064:PPROC
wsock32_ordinal1064 equ <__imp_wsock32_ordinal1064>

externdef __imp_wsock32_ordinal1065:PPROC
wsock32_ordinal1065 equ <__imp_wsock32_ordinal1065>

externdef __imp_wsock32_ordinal1066:PPROC
wsock32_ordinal1066 equ <__imp_wsock32_ordinal1066>

externdef __imp_wsock32_ordinal1067:PPROC
wsock32_ordinal1067 equ <__imp_wsock32_ordinal1067>

externdef __imp_wsock32_ordinal1068:PPROC
wsock32_ordinal1068 equ <__imp_wsock32_ordinal1068>

externdef __imp_wsock32_ordinal1069:PPROC
wsock32_ordinal1069 equ <__imp_wsock32_ordinal1069>

externdef __imp_wsock32_ordinal1070:PPROC
wsock32_ordinal1070 equ <__imp_wsock32_ordinal1070>

externdef __imp_wsock32_ordinal1071:PPROC
wsock32_ordinal1071 equ <__imp_wsock32_ordinal1071>

externdef __imp_wsock32_ordinal1072:PPROC
wsock32_ordinal1072 equ <__imp_wsock32_ordinal1072>

externdef __imp_wsock32_ordinal1073:PPROC
wsock32_ordinal1073 equ <__imp_wsock32_ordinal1073>

externdef __imp_wsock32_ordinal1074:PPROC
wsock32_ordinal1074 equ <__imp_wsock32_ordinal1074>

externdef __imp_wsock32_ordinal1075:PPROC
wsock32_ordinal1075 equ <__imp_wsock32_ordinal1075>

externdef __imp_wsock32_ordinal1076:PPROC
wsock32_ordinal1076 equ <__imp_wsock32_ordinal1076>

externdef __imp_wsock32_ordinal1077:PPROC
wsock32_ordinal1077 equ <__imp_wsock32_ordinal1077>

externdef __imp_wsock32_ordinal1078:PPROC
wsock32_ordinal1078 equ <__imp_wsock32_ordinal1078>

externdef __imp_wsock32_ordinal1079:PPROC
wsock32_ordinal1079 equ <__imp_wsock32_ordinal1079>

externdef __imp_wsock32_ordinal1080:PPROC
wsock32_ordinal1080 equ <__imp_wsock32_ordinal1080>

externdef __imp_wsock32_ordinal1081:PPROC
wsock32_ordinal1081 equ <__imp_wsock32_ordinal1081>

externdef __imp_wsock32_ordinal1082:PPROC
wsock32_ordinal1082 equ <__imp_wsock32_ordinal1082>

externdef __imp_wsock32_ordinal1083:PPROC
wsock32_ordinal1083 equ <__imp_wsock32_ordinal1083>

externdef __imp_wsock32_ordinal1084:PPROC
wsock32_ordinal1084 equ <__imp_wsock32_ordinal1084>

externdef __imp_wsock32_ordinal1085:PPROC
wsock32_ordinal1085 equ <__imp_wsock32_ordinal1085>

externdef __imp_wsock32_ordinal1086:PPROC
wsock32_ordinal1086 equ <__imp_wsock32_ordinal1086>

externdef __imp_wsock32_ordinal1087:PPROC
wsock32_ordinal1087 equ <__imp_wsock32_ordinal1087>

externdef __imp_wsock32_ordinal1088:PPROC
wsock32_ordinal1088 equ <__imp_wsock32_ordinal1088>

externdef __imp_wsock32_ordinal1089:PPROC
wsock32_ordinal1089 equ <__imp_wsock32_ordinal1089>

externdef __imp_wsock32_ordinal1090:PPROC
wsock32_ordinal1090 equ <__imp_wsock32_ordinal1090>

externdef __imp_wsock32_ordinal1091:PPROC
wsock32_ordinal1091 equ <__imp_wsock32_ordinal1091>

externdef __imp_wsock32_ordinal1092:PPROC
wsock32_ordinal1092 equ <__imp_wsock32_ordinal1092>

externdef __imp_wsock32_ordinal1093:PPROC
wsock32_ordinal1093 equ <__imp_wsock32_ordinal1093>

externdef __imp_wsock32_ordinal1094:PPROC
wsock32_ordinal1094 equ <__imp_wsock32_ordinal1094>

externdef __imp_wsock32_ordinal1095:PPROC
wsock32_ordinal1095 equ <__imp_wsock32_ordinal1095>

externdef __imp_wsock32_ordinal1096:PPROC
wsock32_ordinal1096 equ <__imp_wsock32_ordinal1096>

externdef __imp_wsock32_ordinal1097:PPROC
wsock32_ordinal1097 equ <__imp_wsock32_ordinal1097>

externdef __imp_wsock32_ordinal1098:PPROC
wsock32_ordinal1098 equ <__imp_wsock32_ordinal1098>

externdef __imp_wsock32_ordinal1099:PPROC
wsock32_ordinal1099 equ <__imp_wsock32_ordinal1099>

externdef __imp_wsock32_ordinal1121:PPROC
wsock32_ordinal1121 equ <__imp_wsock32_ordinal1121>

externdef __imp_wsock32_ordinal1122:PPROC
wsock32_ordinal1122 equ <__imp_wsock32_ordinal1122>

externdef __imp_wsock32_ordinal1123:PPROC
wsock32_ordinal1123 equ <__imp_wsock32_ordinal1123>

externdef __imp_wsock32_ordinal1124:PPROC
wsock32_ordinal1124 equ <__imp_wsock32_ordinal1124>

externdef __imp_wsock32_ordinal1125:PPROC
wsock32_ordinal1125 equ <__imp_wsock32_ordinal1125>

externdef __imp_wsock32_ordinal1126:PPROC
wsock32_ordinal1126 equ <__imp_wsock32_ordinal1126>

externdef __imp_wsock32_ordinal1127:PPROC
wsock32_ordinal1127 equ <__imp_wsock32_ordinal1127>

externdef __imp_wsock32_ordinal1128:PPROC
wsock32_ordinal1128 equ <__imp_wsock32_ordinal1128>

externdef __imp_wsock32_ordinal1129:PPROC
wsock32_ordinal1129 equ <__imp_wsock32_ordinal1129>

externdef __imp_wsock32_ordinal1131:PPROC
wsock32_ordinal1131 equ <__imp_wsock32_ordinal1131>

externdef __imp_wsock32_ordinal1132:PPROC
wsock32_ordinal1132 equ <__imp_wsock32_ordinal1132>

externdef __imp_wsock32_ordinal1133:PPROC
wsock32_ordinal1133 equ <__imp_wsock32_ordinal1133>

externdef __imp_wsock32_ordinal1134:PPROC
wsock32_ordinal1134 equ <__imp_wsock32_ordinal1134>

externdef __imp_wsock32_ordinal1135:PPROC
wsock32_ordinal1135 equ <__imp_wsock32_ordinal1135>

externdef __imp_wsock32_ordinal1136:PPROC
wsock32_ordinal1136 equ <__imp_wsock32_ordinal1136>

externdef __imp_wsock32_ordinal1137:PPROC
wsock32_ordinal1137 equ <__imp_wsock32_ordinal1137>

externdef __imp_wsock32_ordinal1138:PPROC
wsock32_ordinal1138 equ <__imp_wsock32_ordinal1138>

externdef __imp_wsock32_ordinal1139:PPROC
wsock32_ordinal1139 equ <__imp_wsock32_ordinal1139>

externdef __imp_wsock32_ordinal117:PPROC
wsock32_ordinal117 equ <__imp_wsock32_ordinal117>

externdef __imp_wsock32_ordinal118:PPROC
wsock32_ordinal118 equ <__imp_wsock32_ordinal118>

externdef __imp_wsock32_ordinal119:PPROC
wsock32_ordinal119 equ <__imp_wsock32_ordinal119>

externdef __imp_wsock32_ordinal120:PPROC
wsock32_ordinal120 equ <__imp_wsock32_ordinal120>

externdef __imp_wsock32_ordinal121:PPROC
wsock32_ordinal121 equ <__imp_wsock32_ordinal121>

externdef __imp_wsock32_ordinal122:PPROC
wsock32_ordinal122 equ <__imp_wsock32_ordinal122>

externdef __imp_wsock32_ordinal123:PPROC
wsock32_ordinal123 equ <__imp_wsock32_ordinal123>

externdef __imp_wsock32_ordinal124:PPROC
wsock32_ordinal124 equ <__imp_wsock32_ordinal124>

externdef __imp_wsock32_ordinal125:PPROC
wsock32_ordinal125 equ <__imp_wsock32_ordinal125>

externdef __imp_wsock32_ordinal126:PPROC
wsock32_ordinal126 equ <__imp_wsock32_ordinal126>

externdef __imp_wsock32_ordinal127:PPROC
wsock32_ordinal127 equ <__imp_wsock32_ordinal127>

externdef __imp_wsock32_ordinal128:PPROC
wsock32_ordinal128 equ <__imp_wsock32_ordinal128>

externdef __imp_wsock32_ordinal129:PPROC
wsock32_ordinal129 equ <__imp_wsock32_ordinal129>

externdef __imp_wsock32_ordinal130:PPROC
wsock32_ordinal130 equ <__imp_wsock32_ordinal130>

externdef __imp_wsock32_ordinal131:PPROC
wsock32_ordinal131 equ <__imp_wsock32_ordinal131>

externdef __imp_wsock32_ordinal132:PPROC
wsock32_ordinal132 equ <__imp_wsock32_ordinal132>

externdef __imp_wsock32_ordinal133:PPROC
wsock32_ordinal133 equ <__imp_wsock32_ordinal133>

externdef __imp_wsock32_ordinal134:PPROC
wsock32_ordinal134 equ <__imp_wsock32_ordinal134>

externdef __imp_wsock32_ordinal135:PPROC
wsock32_ordinal135 equ <__imp_wsock32_ordinal135>

externdef __imp_wsock32_ordinal136:PPROC
wsock32_ordinal136 equ <__imp_wsock32_ordinal136>

externdef __imp_wsock32_ordinal137:PPROC
wsock32_ordinal137 equ <__imp_wsock32_ordinal137>

externdef __imp_wsock32_ordinal138:PPROC
wsock32_ordinal138 equ <__imp_wsock32_ordinal138>

externdef __imp_wsock32_ordinal139:PPROC
wsock32_ordinal139 equ <__imp_wsock32_ordinal139>

externdef __imp_wsock32_ordinal140:PPROC
wsock32_ordinal140 equ <__imp_wsock32_ordinal140>

externdef __imp_wsock32_ordinal141:PPROC
wsock32_ordinal141 equ <__imp_wsock32_ordinal141>

externdef __imp_wsock32_ordinal142:PPROC
wsock32_ordinal142 equ <__imp_wsock32_ordinal142>

externdef __imp_wsock32_ordinal143:PPROC
wsock32_ordinal143 equ <__imp_wsock32_ordinal143>

externdef __imp_wsock32_ordinal144:PPROC
wsock32_ordinal144 equ <__imp_wsock32_ordinal144>

externdef __imp_wsock32_ordinal145:PPROC
wsock32_ordinal145 equ <__imp_wsock32_ordinal145>

externdef __imp_wsock32_ordinal146:PPROC
wsock32_ordinal146 equ <__imp_wsock32_ordinal146>

externdef __imp_wsock32_ordinal147:PPROC
wsock32_ordinal147 equ <__imp_wsock32_ordinal147>

externdef __imp_wsock32_ordinal148:PPROC
wsock32_ordinal148 equ <__imp_wsock32_ordinal148>

externdef __imp_wsock32_ordinal149:PPROC
wsock32_ordinal149 equ <__imp_wsock32_ordinal149>

externdef __imp_wsock32_ordinal150:PPROC
wsock32_ordinal150 equ <__imp_wsock32_ordinal150>

externdef __imp_wsock32_ordinal152:PPROC
wsock32_ordinal152 equ <__imp_wsock32_ordinal152>

externdef __imp_wsock32_ordinal153:PPROC
wsock32_ordinal153 equ <__imp_wsock32_ordinal153>

externdef __imp_wsock32_ordinal154:PPROC
wsock32_ordinal154 equ <__imp_wsock32_ordinal154>

externdef __imp_wsock32_ordinal155:PPROC
wsock32_ordinal155 equ <__imp_wsock32_ordinal155>

externdef __imp_wsock32_ordinal156:PPROC
wsock32_ordinal156 equ <__imp_wsock32_ordinal156>

externdef __imp_wsock32_ordinal157:PPROC
wsock32_ordinal157 equ <__imp_wsock32_ordinal157>

externdef __imp_wsock32_ordinal158:PPROC
wsock32_ordinal158 equ <__imp_wsock32_ordinal158>

externdef __imp_wsock32_ordinal159:PPROC
wsock32_ordinal159 equ <__imp_wsock32_ordinal159>

externdef __imp_wsock32_ordinal160:PPROC
wsock32_ordinal160 equ <__imp_wsock32_ordinal160>

externdef __imp_wsock32_ordinal161:PPROC
wsock32_ordinal161 equ <__imp_wsock32_ordinal161>

externdef __imp_wsock32_ordinal162:PPROC
wsock32_ordinal162 equ <__imp_wsock32_ordinal162>

externdef __imp_wsock32_ordinal163:PPROC
wsock32_ordinal163 equ <__imp_wsock32_ordinal163>

externdef __imp_wsock32_ordinal164:PPROC
wsock32_ordinal164 equ <__imp_wsock32_ordinal164>

externdef __imp_wsock32_ordinal165:PPROC
wsock32_ordinal165 equ <__imp_wsock32_ordinal165>

externdef __imp_wsock32_ordinal166:PPROC
wsock32_ordinal166 equ <__imp_wsock32_ordinal166>

externdef __imp_wsock32_ordinal167:PPROC
wsock32_ordinal167 equ <__imp_wsock32_ordinal167>

externdef __imp_wsock32_ordinal168:PPROC
wsock32_ordinal168 equ <__imp_wsock32_ordinal168>

externdef __imp_wsock32_ordinal169:PPROC
wsock32_ordinal169 equ <__imp_wsock32_ordinal169>

externdef __imp_wsock32_ordinal170:PPROC
wsock32_ordinal170 equ <__imp_wsock32_ordinal170>

externdef __imp_wsock32_ordinal171:PPROC
wsock32_ordinal171 equ <__imp_wsock32_ordinal171>

externdef __imp_wsock32_ordinal172:PPROC
wsock32_ordinal172 equ <__imp_wsock32_ordinal172>

externdef __imp_wsock32_ordinal173:PPROC
wsock32_ordinal173 equ <__imp_wsock32_ordinal173>

externdef __imp_wsock32_ordinal174:PPROC
wsock32_ordinal174 equ <__imp_wsock32_ordinal174>

externdef __imp_wsock32_ordinal175:PPROC
wsock32_ordinal175 equ <__imp_wsock32_ordinal175>

externdef __imp_wsock32_ordinal176:PPROC
wsock32_ordinal176 equ <__imp_wsock32_ordinal176>

externdef __imp_wsock32_ordinal177:PPROC
wsock32_ordinal177 equ <__imp_wsock32_ordinal177>

externdef __imp_wsock32_ordinal178:PPROC
wsock32_ordinal178 equ <__imp_wsock32_ordinal178>

externdef __imp_wsock32_ordinal179:PPROC
wsock32_ordinal179 equ <__imp_wsock32_ordinal179>

externdef __imp_wsock32_ordinal180:PPROC
wsock32_ordinal180 equ <__imp_wsock32_ordinal180>

externdef __imp_wsock32_ordinal181:PPROC
wsock32_ordinal181 equ <__imp_wsock32_ordinal181>

externdef __imp_wsock32_ordinal182:PPROC
wsock32_ordinal182 equ <__imp_wsock32_ordinal182>

externdef __imp_wsock32_ordinal183:PPROC
wsock32_ordinal183 equ <__imp_wsock32_ordinal183>

externdef __imp_wsock32_ordinal184:PPROC
wsock32_ordinal184 equ <__imp_wsock32_ordinal184>

externdef __imp_wsock32_ordinal185:PPROC
wsock32_ordinal185 equ <__imp_wsock32_ordinal185>

externdef __imp_wsock32_ordinal186:PPROC
wsock32_ordinal186 equ <__imp_wsock32_ordinal186>

externdef __imp_wsock32_ordinal187:PPROC
wsock32_ordinal187 equ <__imp_wsock32_ordinal187>

externdef __imp_wsock32_ordinal188:PPROC
wsock32_ordinal188 equ <__imp_wsock32_ordinal188>

externdef __imp_wsock32_ordinal189:PPROC
wsock32_ordinal189 equ <__imp_wsock32_ordinal189>

externdef __imp_wsock32_ordinal190:PPROC
wsock32_ordinal190 equ <__imp_wsock32_ordinal190>

externdef __imp_wsock32_ordinal191:PPROC
wsock32_ordinal191 equ <__imp_wsock32_ordinal191>

externdef __imp_wsock32_ordinal192:PPROC
wsock32_ordinal192 equ <__imp_wsock32_ordinal192>

externdef __imp_wsock32_ordinal193:PPROC
wsock32_ordinal193 equ <__imp_wsock32_ordinal193>

externdef __imp_wsock32_ordinal194:PPROC
wsock32_ordinal194 equ <__imp_wsock32_ordinal194>

externdef __imp_wsock32_ordinal195:PPROC
wsock32_ordinal195 equ <__imp_wsock32_ordinal195>

externdef __imp_wsock32_ordinal196:PPROC
wsock32_ordinal196 equ <__imp_wsock32_ordinal196>

externdef __imp_wsock32_ordinal197:PPROC
wsock32_ordinal197 equ <__imp_wsock32_ordinal197>

externdef __imp_wsock32_ordinal198:PPROC
wsock32_ordinal198 equ <__imp_wsock32_ordinal198>

externdef __imp_wsock32_ordinal199:PPROC
wsock32_ordinal199 equ <__imp_wsock32_ordinal199>

externdef __imp_wsock32_ordinal200:PPROC
wsock32_ordinal200 equ <__imp_wsock32_ordinal200>

externdef __imp_wsock32_ordinal201:PPROC
wsock32_ordinal201 equ <__imp_wsock32_ordinal201>

externdef __imp_wsock32_ordinal202:PPROC
wsock32_ordinal202 equ <__imp_wsock32_ordinal202>

externdef __imp_wsock32_ordinal203:PPROC
wsock32_ordinal203 equ <__imp_wsock32_ordinal203>

externdef __imp_wsock32_ordinal204:PPROC
wsock32_ordinal204 equ <__imp_wsock32_ordinal204>

externdef __imp_wsock32_ordinal205:PPROC
wsock32_ordinal205 equ <__imp_wsock32_ordinal205>

externdef __imp_wsock32_ordinal206:PPROC
wsock32_ordinal206 equ <__imp_wsock32_ordinal206>

externdef __imp_wsock32_ordinal207:PPROC
wsock32_ordinal207 equ <__imp_wsock32_ordinal207>

externdef __imp_wsock32_ordinal208:PPROC
wsock32_ordinal208 equ <__imp_wsock32_ordinal208>

externdef __imp_wsock32_ordinal209:PPROC
wsock32_ordinal209 equ <__imp_wsock32_ordinal209>

externdef __imp_wsock32_ordinal210:PPROC
wsock32_ordinal210 equ <__imp_wsock32_ordinal210>

externdef __imp_wsock32_ordinal211:PPROC
wsock32_ordinal211 equ <__imp_wsock32_ordinal211>

externdef __imp_wsock32_ordinal212:PPROC
wsock32_ordinal212 equ <__imp_wsock32_ordinal212>

externdef __imp_wsock32_ordinal213:PPROC
wsock32_ordinal213 equ <__imp_wsock32_ordinal213>

externdef __imp_wsock32_ordinal214:PPROC
wsock32_ordinal214 equ <__imp_wsock32_ordinal214>

externdef __imp_wsock32_ordinal215:PPROC
wsock32_ordinal215 equ <__imp_wsock32_ordinal215>

externdef __imp_wsock32_ordinal216:PPROC
wsock32_ordinal216 equ <__imp_wsock32_ordinal216>

externdef __imp_wsock32_ordinal217:PPROC
wsock32_ordinal217 equ <__imp_wsock32_ordinal217>

externdef __imp_wsock32_ordinal218:PPROC
wsock32_ordinal218 equ <__imp_wsock32_ordinal218>

externdef __imp_wsock32_ordinal219:PPROC
wsock32_ordinal219 equ <__imp_wsock32_ordinal219>

externdef __imp_wsock32_ordinal220:PPROC
wsock32_ordinal220 equ <__imp_wsock32_ordinal220>

externdef __imp_wsock32_ordinal221:PPROC
wsock32_ordinal221 equ <__imp_wsock32_ordinal221>

externdef __imp_wsock32_ordinal222:PPROC
wsock32_ordinal222 equ <__imp_wsock32_ordinal222>

externdef __imp_wsock32_ordinal223:PPROC
wsock32_ordinal223 equ <__imp_wsock32_ordinal223>

externdef __imp_wsock32_ordinal224:PPROC
wsock32_ordinal224 equ <__imp_wsock32_ordinal224>

externdef __imp_wsock32_ordinal225:PPROC
wsock32_ordinal225 equ <__imp_wsock32_ordinal225>

externdef __imp_wsock32_ordinal226:PPROC
wsock32_ordinal226 equ <__imp_wsock32_ordinal226>

externdef __imp_wsock32_ordinal227:PPROC
wsock32_ordinal227 equ <__imp_wsock32_ordinal227>

externdef __imp_wsock32_ordinal228:PPROC
wsock32_ordinal228 equ <__imp_wsock32_ordinal228>

externdef __imp_wsock32_ordinal229:PPROC
wsock32_ordinal229 equ <__imp_wsock32_ordinal229>

externdef __imp_wsock32_ordinal230:PPROC
wsock32_ordinal230 equ <__imp_wsock32_ordinal230>

externdef __imp_wsock32_ordinal231:PPROC
wsock32_ordinal231 equ <__imp_wsock32_ordinal231>

externdef __imp_wsock32_ordinal232:PPROC
wsock32_ordinal232 equ <__imp_wsock32_ordinal232>

externdef __imp_wsock32_ordinal233:PPROC
wsock32_ordinal233 equ <__imp_wsock32_ordinal233>

externdef __imp_wsock32_ordinal234:PPROC
wsock32_ordinal234 equ <__imp_wsock32_ordinal234>

externdef __imp_wsock32_ordinal235:PPROC
wsock32_ordinal235 equ <__imp_wsock32_ordinal235>

externdef __imp_wsock32_ordinal236:PPROC
wsock32_ordinal236 equ <__imp_wsock32_ordinal236>

externdef __imp_wsock32_ordinal237:PPROC
wsock32_ordinal237 equ <__imp_wsock32_ordinal237>

externdef __imp_wsock32_ordinal238:PPROC
wsock32_ordinal238 equ <__imp_wsock32_ordinal238>

externdef __imp_wsock32_ordinal239:PPROC
wsock32_ordinal239 equ <__imp_wsock32_ordinal239>

externdef __imp_wsock32_ordinal240:PPROC
wsock32_ordinal240 equ <__imp_wsock32_ordinal240>

externdef __imp_wsock32_ordinal241:PPROC
wsock32_ordinal241 equ <__imp_wsock32_ordinal241>

externdef __imp_wsock32_ordinal242:PPROC
wsock32_ordinal242 equ <__imp_wsock32_ordinal242>

externdef __imp_wsock32_ordinal243:PPROC
wsock32_ordinal243 equ <__imp_wsock32_ordinal243>

externdef __imp_wsock32_ordinal244:PPROC
wsock32_ordinal244 equ <__imp_wsock32_ordinal244>

externdef __imp_wsock32_ordinal245:PPROC
wsock32_ordinal245 equ <__imp_wsock32_ordinal245>

externdef __imp_wsock32_ordinal246:PPROC
wsock32_ordinal246 equ <__imp_wsock32_ordinal246>

externdef __imp_wsock32_ordinal247:PPROC
wsock32_ordinal247 equ <__imp_wsock32_ordinal247>

externdef __imp_wsock32_ordinal248:PPROC
wsock32_ordinal248 equ <__imp_wsock32_ordinal248>

externdef __imp_wsock32_ordinal249:PPROC
wsock32_ordinal249 equ <__imp_wsock32_ordinal249>

externdef __imp_wsock32_ordinal250:PPROC
wsock32_ordinal250 equ <__imp_wsock32_ordinal250>

externdef __imp_wsock32_ordinal251:PPROC
wsock32_ordinal251 equ <__imp_wsock32_ordinal251>

externdef __imp_wsock32_ordinal252:PPROC
wsock32_ordinal252 equ <__imp_wsock32_ordinal252>

externdef __imp_wsock32_ordinal253:PPROC
wsock32_ordinal253 equ <__imp_wsock32_ordinal253>

externdef __imp_wsock32_ordinal254:PPROC
wsock32_ordinal254 equ <__imp_wsock32_ordinal254>

externdef __imp_wsock32_ordinal255:PPROC
wsock32_ordinal255 equ <__imp_wsock32_ordinal255>

externdef __imp_wsock32_ordinal256:PPROC
wsock32_ordinal256 equ <__imp_wsock32_ordinal256>

externdef __imp_wsock32_ordinal257:PPROC
wsock32_ordinal257 equ <__imp_wsock32_ordinal257>

externdef __imp_wsock32_ordinal258:PPROC
wsock32_ordinal258 equ <__imp_wsock32_ordinal258>

externdef __imp_wsock32_ordinal259:PPROC
wsock32_ordinal259 equ <__imp_wsock32_ordinal259>

externdef __imp_wsock32_ordinal25:PPROC
wsock32_ordinal25 equ <__imp_wsock32_ordinal25>

externdef __imp_wsock32_ordinal260:PPROC
wsock32_ordinal260 equ <__imp_wsock32_ordinal260>

externdef __imp_wsock32_ordinal261:PPROC
wsock32_ordinal261 equ <__imp_wsock32_ordinal261>

externdef __imp_wsock32_ordinal262:PPROC
wsock32_ordinal262 equ <__imp_wsock32_ordinal262>

externdef __imp_wsock32_ordinal263:PPROC
wsock32_ordinal263 equ <__imp_wsock32_ordinal263>

externdef __imp_wsock32_ordinal264:PPROC
wsock32_ordinal264 equ <__imp_wsock32_ordinal264>

externdef __imp_wsock32_ordinal265:PPROC
wsock32_ordinal265 equ <__imp_wsock32_ordinal265>

externdef __imp_wsock32_ordinal266:PPROC
wsock32_ordinal266 equ <__imp_wsock32_ordinal266>

externdef __imp_wsock32_ordinal267:PPROC
wsock32_ordinal267 equ <__imp_wsock32_ordinal267>

externdef __imp_wsock32_ordinal268:PPROC
wsock32_ordinal268 equ <__imp_wsock32_ordinal268>

externdef __imp_wsock32_ordinal269:PPROC
wsock32_ordinal269 equ <__imp_wsock32_ordinal269>

externdef __imp_wsock32_ordinal26:PPROC
wsock32_ordinal26 equ <__imp_wsock32_ordinal26>

externdef __imp_wsock32_ordinal270:PPROC
wsock32_ordinal270 equ <__imp_wsock32_ordinal270>

externdef __imp_wsock32_ordinal271:PPROC
wsock32_ordinal271 equ <__imp_wsock32_ordinal271>

externdef __imp_wsock32_ordinal272:PPROC
wsock32_ordinal272 equ <__imp_wsock32_ordinal272>

externdef __imp_wsock32_ordinal273:PPROC
wsock32_ordinal273 equ <__imp_wsock32_ordinal273>

externdef __imp_wsock32_ordinal274:PPROC
wsock32_ordinal274 equ <__imp_wsock32_ordinal274>

externdef __imp_wsock32_ordinal275:PPROC
wsock32_ordinal275 equ <__imp_wsock32_ordinal275>

externdef __imp_wsock32_ordinal276:PPROC
wsock32_ordinal276 equ <__imp_wsock32_ordinal276>

externdef __imp_wsock32_ordinal277:PPROC
wsock32_ordinal277 equ <__imp_wsock32_ordinal277>

externdef __imp_wsock32_ordinal278:PPROC
wsock32_ordinal278 equ <__imp_wsock32_ordinal278>

externdef __imp_wsock32_ordinal279:PPROC
wsock32_ordinal279 equ <__imp_wsock32_ordinal279>

externdef __imp_wsock32_ordinal27:PPROC
wsock32_ordinal27 equ <__imp_wsock32_ordinal27>

externdef __imp_wsock32_ordinal280:PPROC
wsock32_ordinal280 equ <__imp_wsock32_ordinal280>

externdef __imp_wsock32_ordinal281:PPROC
wsock32_ordinal281 equ <__imp_wsock32_ordinal281>

externdef __imp_wsock32_ordinal282:PPROC
wsock32_ordinal282 equ <__imp_wsock32_ordinal282>

externdef __imp_wsock32_ordinal283:PPROC
wsock32_ordinal283 equ <__imp_wsock32_ordinal283>

externdef __imp_wsock32_ordinal284:PPROC
wsock32_ordinal284 equ <__imp_wsock32_ordinal284>

externdef __imp_wsock32_ordinal285:PPROC
wsock32_ordinal285 equ <__imp_wsock32_ordinal285>

externdef __imp_wsock32_ordinal286:PPROC
wsock32_ordinal286 equ <__imp_wsock32_ordinal286>

externdef __imp_wsock32_ordinal287:PPROC
wsock32_ordinal287 equ <__imp_wsock32_ordinal287>

externdef __imp_wsock32_ordinal288:PPROC
wsock32_ordinal288 equ <__imp_wsock32_ordinal288>

externdef __imp_wsock32_ordinal289:PPROC
wsock32_ordinal289 equ <__imp_wsock32_ordinal289>

externdef __imp_wsock32_ordinal28:PPROC
wsock32_ordinal28 equ <__imp_wsock32_ordinal28>

externdef __imp_wsock32_ordinal290:PPROC
wsock32_ordinal290 equ <__imp_wsock32_ordinal290>

externdef __imp_wsock32_ordinal291:PPROC
wsock32_ordinal291 equ <__imp_wsock32_ordinal291>

externdef __imp_wsock32_ordinal292:PPROC
wsock32_ordinal292 equ <__imp_wsock32_ordinal292>

externdef __imp_wsock32_ordinal293:PPROC
wsock32_ordinal293 equ <__imp_wsock32_ordinal293>

externdef __imp_wsock32_ordinal294:PPROC
wsock32_ordinal294 equ <__imp_wsock32_ordinal294>

externdef __imp_wsock32_ordinal295:PPROC
wsock32_ordinal295 equ <__imp_wsock32_ordinal295>

externdef __imp_wsock32_ordinal296:PPROC
wsock32_ordinal296 equ <__imp_wsock32_ordinal296>

externdef __imp_wsock32_ordinal297:PPROC
wsock32_ordinal297 equ <__imp_wsock32_ordinal297>

externdef __imp_wsock32_ordinal298:PPROC
wsock32_ordinal298 equ <__imp_wsock32_ordinal298>

externdef __imp_wsock32_ordinal299:PPROC
wsock32_ordinal299 equ <__imp_wsock32_ordinal299>

externdef __imp_wsock32_ordinal29:PPROC
wsock32_ordinal29 equ <__imp_wsock32_ordinal29>

externdef __imp_wsock32_ordinal300:PPROC
wsock32_ordinal300 equ <__imp_wsock32_ordinal300>

externdef __imp_wsock32_ordinal301:PPROC
wsock32_ordinal301 equ <__imp_wsock32_ordinal301>

externdef __imp_wsock32_ordinal302:PPROC
wsock32_ordinal302 equ <__imp_wsock32_ordinal302>

externdef __imp_wsock32_ordinal303:PPROC
wsock32_ordinal303 equ <__imp_wsock32_ordinal303>

externdef __imp_wsock32_ordinal304:PPROC
wsock32_ordinal304 equ <__imp_wsock32_ordinal304>

externdef __imp_wsock32_ordinal305:PPROC
wsock32_ordinal305 equ <__imp_wsock32_ordinal305>

externdef __imp_wsock32_ordinal306:PPROC
wsock32_ordinal306 equ <__imp_wsock32_ordinal306>

externdef __imp_wsock32_ordinal307:PPROC
wsock32_ordinal307 equ <__imp_wsock32_ordinal307>

externdef __imp_wsock32_ordinal308:PPROC
wsock32_ordinal308 equ <__imp_wsock32_ordinal308>

externdef __imp_wsock32_ordinal309:PPROC
wsock32_ordinal309 equ <__imp_wsock32_ordinal309>

externdef __imp_wsock32_ordinal30:PPROC
wsock32_ordinal30 equ <__imp_wsock32_ordinal30>

externdef __imp_wsock32_ordinal310:PPROC
wsock32_ordinal310 equ <__imp_wsock32_ordinal310>

externdef __imp_wsock32_ordinal311:PPROC
wsock32_ordinal311 equ <__imp_wsock32_ordinal311>

externdef __imp_wsock32_ordinal312:PPROC
wsock32_ordinal312 equ <__imp_wsock32_ordinal312>

externdef __imp_wsock32_ordinal313:PPROC
wsock32_ordinal313 equ <__imp_wsock32_ordinal313>

externdef __imp_wsock32_ordinal314:PPROC
wsock32_ordinal314 equ <__imp_wsock32_ordinal314>

externdef __imp_wsock32_ordinal315:PPROC
wsock32_ordinal315 equ <__imp_wsock32_ordinal315>

externdef __imp_wsock32_ordinal316:PPROC
wsock32_ordinal316 equ <__imp_wsock32_ordinal316>

externdef __imp_wsock32_ordinal317:PPROC
wsock32_ordinal317 equ <__imp_wsock32_ordinal317>

externdef __imp_wsock32_ordinal318:PPROC
wsock32_ordinal318 equ <__imp_wsock32_ordinal318>

externdef __imp_wsock32_ordinal319:PPROC
wsock32_ordinal319 equ <__imp_wsock32_ordinal319>

externdef __imp_wsock32_ordinal31:PPROC
wsock32_ordinal31 equ <__imp_wsock32_ordinal31>

externdef __imp_wsock32_ordinal320:PPROC
wsock32_ordinal320 equ <__imp_wsock32_ordinal320>

externdef __imp_wsock32_ordinal321:PPROC
wsock32_ordinal321 equ <__imp_wsock32_ordinal321>

externdef __imp_wsock32_ordinal322:PPROC
wsock32_ordinal322 equ <__imp_wsock32_ordinal322>

externdef __imp_wsock32_ordinal323:PPROC
wsock32_ordinal323 equ <__imp_wsock32_ordinal323>

externdef __imp_wsock32_ordinal324:PPROC
wsock32_ordinal324 equ <__imp_wsock32_ordinal324>

externdef __imp_wsock32_ordinal325:PPROC
wsock32_ordinal325 equ <__imp_wsock32_ordinal325>

externdef __imp_wsock32_ordinal326:PPROC
wsock32_ordinal326 equ <__imp_wsock32_ordinal326>

externdef __imp_wsock32_ordinal327:PPROC
wsock32_ordinal327 equ <__imp_wsock32_ordinal327>

externdef __imp_wsock32_ordinal328:PPROC
wsock32_ordinal328 equ <__imp_wsock32_ordinal328>

externdef __imp_wsock32_ordinal329:PPROC
wsock32_ordinal329 equ <__imp_wsock32_ordinal329>

externdef __imp_wsock32_ordinal32:PPROC
wsock32_ordinal32 equ <__imp_wsock32_ordinal32>

externdef __imp_wsock32_ordinal330:PPROC
wsock32_ordinal330 equ <__imp_wsock32_ordinal330>

externdef __imp_wsock32_ordinal331:PPROC
wsock32_ordinal331 equ <__imp_wsock32_ordinal331>

externdef __imp_wsock32_ordinal332:PPROC
wsock32_ordinal332 equ <__imp_wsock32_ordinal332>

externdef __imp_wsock32_ordinal333:PPROC
wsock32_ordinal333 equ <__imp_wsock32_ordinal333>

externdef __imp_wsock32_ordinal334:PPROC
wsock32_ordinal334 equ <__imp_wsock32_ordinal334>

externdef __imp_wsock32_ordinal335:PPROC
wsock32_ordinal335 equ <__imp_wsock32_ordinal335>

externdef __imp_wsock32_ordinal336:PPROC
wsock32_ordinal336 equ <__imp_wsock32_ordinal336>

externdef __imp_wsock32_ordinal337:PPROC
wsock32_ordinal337 equ <__imp_wsock32_ordinal337>

externdef __imp_wsock32_ordinal338:PPROC
wsock32_ordinal338 equ <__imp_wsock32_ordinal338>

externdef __imp_wsock32_ordinal339:PPROC
wsock32_ordinal339 equ <__imp_wsock32_ordinal339>

externdef __imp_wsock32_ordinal33:PPROC
wsock32_ordinal33 equ <__imp_wsock32_ordinal33>

externdef __imp_wsock32_ordinal340:PPROC
wsock32_ordinal340 equ <__imp_wsock32_ordinal340>

externdef __imp_wsock32_ordinal341:PPROC
wsock32_ordinal341 equ <__imp_wsock32_ordinal341>

externdef __imp_wsock32_ordinal342:PPROC
wsock32_ordinal342 equ <__imp_wsock32_ordinal342>

externdef __imp_wsock32_ordinal343:PPROC
wsock32_ordinal343 equ <__imp_wsock32_ordinal343>

externdef __imp_wsock32_ordinal344:PPROC
wsock32_ordinal344 equ <__imp_wsock32_ordinal344>

externdef __imp_wsock32_ordinal345:PPROC
wsock32_ordinal345 equ <__imp_wsock32_ordinal345>

externdef __imp_wsock32_ordinal346:PPROC
wsock32_ordinal346 equ <__imp_wsock32_ordinal346>

externdef __imp_wsock32_ordinal347:PPROC
wsock32_ordinal347 equ <__imp_wsock32_ordinal347>

externdef __imp_wsock32_ordinal348:PPROC
wsock32_ordinal348 equ <__imp_wsock32_ordinal348>

externdef __imp_wsock32_ordinal349:PPROC
wsock32_ordinal349 equ <__imp_wsock32_ordinal349>

externdef __imp_wsock32_ordinal34:PPROC
wsock32_ordinal34 equ <__imp_wsock32_ordinal34>

externdef __imp_wsock32_ordinal350:PPROC
wsock32_ordinal350 equ <__imp_wsock32_ordinal350>

externdef __imp_wsock32_ordinal351:PPROC
wsock32_ordinal351 equ <__imp_wsock32_ordinal351>

externdef __imp_wsock32_ordinal352:PPROC
wsock32_ordinal352 equ <__imp_wsock32_ordinal352>

externdef __imp_wsock32_ordinal353:PPROC
wsock32_ordinal353 equ <__imp_wsock32_ordinal353>

externdef __imp_wsock32_ordinal354:PPROC
wsock32_ordinal354 equ <__imp_wsock32_ordinal354>

externdef __imp_wsock32_ordinal355:PPROC
wsock32_ordinal355 equ <__imp_wsock32_ordinal355>

externdef __imp_wsock32_ordinal356:PPROC
wsock32_ordinal356 equ <__imp_wsock32_ordinal356>

externdef __imp_wsock32_ordinal357:PPROC
wsock32_ordinal357 equ <__imp_wsock32_ordinal357>

externdef __imp_wsock32_ordinal358:PPROC
wsock32_ordinal358 equ <__imp_wsock32_ordinal358>

externdef __imp_wsock32_ordinal359:PPROC
wsock32_ordinal359 equ <__imp_wsock32_ordinal359>

externdef __imp_wsock32_ordinal35:PPROC
wsock32_ordinal35 equ <__imp_wsock32_ordinal35>

externdef __imp_wsock32_ordinal360:PPROC
wsock32_ordinal360 equ <__imp_wsock32_ordinal360>

externdef __imp_wsock32_ordinal361:PPROC
wsock32_ordinal361 equ <__imp_wsock32_ordinal361>

externdef __imp_wsock32_ordinal362:PPROC
wsock32_ordinal362 equ <__imp_wsock32_ordinal362>

externdef __imp_wsock32_ordinal363:PPROC
wsock32_ordinal363 equ <__imp_wsock32_ordinal363>

externdef __imp_wsock32_ordinal364:PPROC
wsock32_ordinal364 equ <__imp_wsock32_ordinal364>

externdef __imp_wsock32_ordinal365:PPROC
wsock32_ordinal365 equ <__imp_wsock32_ordinal365>

externdef __imp_wsock32_ordinal366:PPROC
wsock32_ordinal366 equ <__imp_wsock32_ordinal366>

externdef __imp_wsock32_ordinal367:PPROC
wsock32_ordinal367 equ <__imp_wsock32_ordinal367>

externdef __imp_wsock32_ordinal368:PPROC
wsock32_ordinal368 equ <__imp_wsock32_ordinal368>

externdef __imp_wsock32_ordinal369:PPROC
wsock32_ordinal369 equ <__imp_wsock32_ordinal369>

externdef __imp_wsock32_ordinal36:PPROC
wsock32_ordinal36 equ <__imp_wsock32_ordinal36>

externdef __imp_wsock32_ordinal370:PPROC
wsock32_ordinal370 equ <__imp_wsock32_ordinal370>

externdef __imp_wsock32_ordinal371:PPROC
wsock32_ordinal371 equ <__imp_wsock32_ordinal371>

externdef __imp_wsock32_ordinal372:PPROC
wsock32_ordinal372 equ <__imp_wsock32_ordinal372>

externdef __imp_wsock32_ordinal373:PPROC
wsock32_ordinal373 equ <__imp_wsock32_ordinal373>

externdef __imp_wsock32_ordinal374:PPROC
wsock32_ordinal374 equ <__imp_wsock32_ordinal374>

externdef __imp_wsock32_ordinal375:PPROC
wsock32_ordinal375 equ <__imp_wsock32_ordinal375>

externdef __imp_wsock32_ordinal376:PPROC
wsock32_ordinal376 equ <__imp_wsock32_ordinal376>

externdef __imp_wsock32_ordinal377:PPROC
wsock32_ordinal377 equ <__imp_wsock32_ordinal377>

externdef __imp_wsock32_ordinal378:PPROC
wsock32_ordinal378 equ <__imp_wsock32_ordinal378>

externdef __imp_wsock32_ordinal379:PPROC
wsock32_ordinal379 equ <__imp_wsock32_ordinal379>

externdef __imp_wsock32_ordinal37:PPROC
wsock32_ordinal37 equ <__imp_wsock32_ordinal37>

externdef __imp_wsock32_ordinal380:PPROC
wsock32_ordinal380 equ <__imp_wsock32_ordinal380>

externdef __imp_wsock32_ordinal381:PPROC
wsock32_ordinal381 equ <__imp_wsock32_ordinal381>

externdef __imp_wsock32_ordinal382:PPROC
wsock32_ordinal382 equ <__imp_wsock32_ordinal382>

externdef __imp_wsock32_ordinal383:PPROC
wsock32_ordinal383 equ <__imp_wsock32_ordinal383>

externdef __imp_wsock32_ordinal384:PPROC
wsock32_ordinal384 equ <__imp_wsock32_ordinal384>

externdef __imp_wsock32_ordinal385:PPROC
wsock32_ordinal385 equ <__imp_wsock32_ordinal385>

externdef __imp_wsock32_ordinal386:PPROC
wsock32_ordinal386 equ <__imp_wsock32_ordinal386>

externdef __imp_wsock32_ordinal387:PPROC
wsock32_ordinal387 equ <__imp_wsock32_ordinal387>

externdef __imp_wsock32_ordinal388:PPROC
wsock32_ordinal388 equ <__imp_wsock32_ordinal388>

externdef __imp_wsock32_ordinal389:PPROC
wsock32_ordinal389 equ <__imp_wsock32_ordinal389>

externdef __imp_wsock32_ordinal38:PPROC
wsock32_ordinal38 equ <__imp_wsock32_ordinal38>

externdef __imp_wsock32_ordinal390:PPROC
wsock32_ordinal390 equ <__imp_wsock32_ordinal390>

externdef __imp_wsock32_ordinal391:PPROC
wsock32_ordinal391 equ <__imp_wsock32_ordinal391>

externdef __imp_wsock32_ordinal392:PPROC
wsock32_ordinal392 equ <__imp_wsock32_ordinal392>

externdef __imp_wsock32_ordinal393:PPROC
wsock32_ordinal393 equ <__imp_wsock32_ordinal393>

externdef __imp_wsock32_ordinal394:PPROC
wsock32_ordinal394 equ <__imp_wsock32_ordinal394>

externdef __imp_wsock32_ordinal395:PPROC
wsock32_ordinal395 equ <__imp_wsock32_ordinal395>

externdef __imp_wsock32_ordinal396:PPROC
wsock32_ordinal396 equ <__imp_wsock32_ordinal396>

externdef __imp_wsock32_ordinal397:PPROC
wsock32_ordinal397 equ <__imp_wsock32_ordinal397>

externdef __imp_wsock32_ordinal398:PPROC
wsock32_ordinal398 equ <__imp_wsock32_ordinal398>

externdef __imp_wsock32_ordinal399:PPROC
wsock32_ordinal399 equ <__imp_wsock32_ordinal399>

externdef __imp_wsock32_ordinal39:PPROC
wsock32_ordinal39 equ <__imp_wsock32_ordinal39>

externdef __imp_wsock32_ordinal400:PPROC
wsock32_ordinal400 equ <__imp_wsock32_ordinal400>

externdef __imp_wsock32_ordinal401:PPROC
wsock32_ordinal401 equ <__imp_wsock32_ordinal401>

externdef __imp_wsock32_ordinal402:PPROC
wsock32_ordinal402 equ <__imp_wsock32_ordinal402>

externdef __imp_wsock32_ordinal403:PPROC
wsock32_ordinal403 equ <__imp_wsock32_ordinal403>

externdef __imp_wsock32_ordinal404:PPROC
wsock32_ordinal404 equ <__imp_wsock32_ordinal404>

externdef __imp_wsock32_ordinal405:PPROC
wsock32_ordinal405 equ <__imp_wsock32_ordinal405>

externdef __imp_wsock32_ordinal406:PPROC
wsock32_ordinal406 equ <__imp_wsock32_ordinal406>

externdef __imp_wsock32_ordinal407:PPROC
wsock32_ordinal407 equ <__imp_wsock32_ordinal407>

externdef __imp_wsock32_ordinal408:PPROC
wsock32_ordinal408 equ <__imp_wsock32_ordinal408>

externdef __imp_wsock32_ordinal409:PPROC
wsock32_ordinal409 equ <__imp_wsock32_ordinal409>

externdef __imp_wsock32_ordinal40:PPROC
wsock32_ordinal40 equ <__imp_wsock32_ordinal40>

externdef __imp_wsock32_ordinal410:PPROC
wsock32_ordinal410 equ <__imp_wsock32_ordinal410>

externdef __imp_wsock32_ordinal411:PPROC
wsock32_ordinal411 equ <__imp_wsock32_ordinal411>

externdef __imp_wsock32_ordinal412:PPROC
wsock32_ordinal412 equ <__imp_wsock32_ordinal412>

externdef __imp_wsock32_ordinal413:PPROC
wsock32_ordinal413 equ <__imp_wsock32_ordinal413>

externdef __imp_wsock32_ordinal414:PPROC
wsock32_ordinal414 equ <__imp_wsock32_ordinal414>

externdef __imp_wsock32_ordinal415:PPROC
wsock32_ordinal415 equ <__imp_wsock32_ordinal415>

externdef __imp_wsock32_ordinal416:PPROC
wsock32_ordinal416 equ <__imp_wsock32_ordinal416>

externdef __imp_wsock32_ordinal417:PPROC
wsock32_ordinal417 equ <__imp_wsock32_ordinal417>

externdef __imp_wsock32_ordinal418:PPROC
wsock32_ordinal418 equ <__imp_wsock32_ordinal418>

externdef __imp_wsock32_ordinal419:PPROC
wsock32_ordinal419 equ <__imp_wsock32_ordinal419>

externdef __imp_wsock32_ordinal41:PPROC
wsock32_ordinal41 equ <__imp_wsock32_ordinal41>

externdef __imp_wsock32_ordinal420:PPROC
wsock32_ordinal420 equ <__imp_wsock32_ordinal420>

externdef __imp_wsock32_ordinal421:PPROC
wsock32_ordinal421 equ <__imp_wsock32_ordinal421>

externdef __imp_wsock32_ordinal422:PPROC
wsock32_ordinal422 equ <__imp_wsock32_ordinal422>

externdef __imp_wsock32_ordinal423:PPROC
wsock32_ordinal423 equ <__imp_wsock32_ordinal423>

externdef __imp_wsock32_ordinal424:PPROC
wsock32_ordinal424 equ <__imp_wsock32_ordinal424>

externdef __imp_wsock32_ordinal425:PPROC
wsock32_ordinal425 equ <__imp_wsock32_ordinal425>

externdef __imp_wsock32_ordinal426:PPROC
wsock32_ordinal426 equ <__imp_wsock32_ordinal426>

externdef __imp_wsock32_ordinal427:PPROC
wsock32_ordinal427 equ <__imp_wsock32_ordinal427>

externdef __imp_wsock32_ordinal428:PPROC
wsock32_ordinal428 equ <__imp_wsock32_ordinal428>

externdef __imp_wsock32_ordinal429:PPROC
wsock32_ordinal429 equ <__imp_wsock32_ordinal429>

externdef __imp_wsock32_ordinal42:PPROC
wsock32_ordinal42 equ <__imp_wsock32_ordinal42>

externdef __imp_wsock32_ordinal430:PPROC
wsock32_ordinal430 equ <__imp_wsock32_ordinal430>

externdef __imp_wsock32_ordinal431:PPROC
wsock32_ordinal431 equ <__imp_wsock32_ordinal431>

externdef __imp_wsock32_ordinal432:PPROC
wsock32_ordinal432 equ <__imp_wsock32_ordinal432>

externdef __imp_wsock32_ordinal433:PPROC
wsock32_ordinal433 equ <__imp_wsock32_ordinal433>

externdef __imp_wsock32_ordinal434:PPROC
wsock32_ordinal434 equ <__imp_wsock32_ordinal434>

externdef __imp_wsock32_ordinal435:PPROC
wsock32_ordinal435 equ <__imp_wsock32_ordinal435>

externdef __imp_wsock32_ordinal436:PPROC
wsock32_ordinal436 equ <__imp_wsock32_ordinal436>

externdef __imp_wsock32_ordinal437:PPROC
wsock32_ordinal437 equ <__imp_wsock32_ordinal437>

externdef __imp_wsock32_ordinal438:PPROC
wsock32_ordinal438 equ <__imp_wsock32_ordinal438>

externdef __imp_wsock32_ordinal439:PPROC
wsock32_ordinal439 equ <__imp_wsock32_ordinal439>

externdef __imp_wsock32_ordinal43:PPROC
wsock32_ordinal43 equ <__imp_wsock32_ordinal43>

externdef __imp_wsock32_ordinal440:PPROC
wsock32_ordinal440 equ <__imp_wsock32_ordinal440>

externdef __imp_wsock32_ordinal441:PPROC
wsock32_ordinal441 equ <__imp_wsock32_ordinal441>

externdef __imp_wsock32_ordinal442:PPROC
wsock32_ordinal442 equ <__imp_wsock32_ordinal442>

externdef __imp_wsock32_ordinal443:PPROC
wsock32_ordinal443 equ <__imp_wsock32_ordinal443>

externdef __imp_wsock32_ordinal444:PPROC
wsock32_ordinal444 equ <__imp_wsock32_ordinal444>

externdef __imp_wsock32_ordinal445:PPROC
wsock32_ordinal445 equ <__imp_wsock32_ordinal445>

externdef __imp_wsock32_ordinal446:PPROC
wsock32_ordinal446 equ <__imp_wsock32_ordinal446>

externdef __imp_wsock32_ordinal447:PPROC
wsock32_ordinal447 equ <__imp_wsock32_ordinal447>

externdef __imp_wsock32_ordinal448:PPROC
wsock32_ordinal448 equ <__imp_wsock32_ordinal448>

externdef __imp_wsock32_ordinal449:PPROC
wsock32_ordinal449 equ <__imp_wsock32_ordinal449>

externdef __imp_wsock32_ordinal44:PPROC
wsock32_ordinal44 equ <__imp_wsock32_ordinal44>

externdef __imp_wsock32_ordinal450:PPROC
wsock32_ordinal450 equ <__imp_wsock32_ordinal450>

externdef __imp_wsock32_ordinal451:PPROC
wsock32_ordinal451 equ <__imp_wsock32_ordinal451>

externdef __imp_wsock32_ordinal452:PPROC
wsock32_ordinal452 equ <__imp_wsock32_ordinal452>

externdef __imp_wsock32_ordinal453:PPROC
wsock32_ordinal453 equ <__imp_wsock32_ordinal453>

externdef __imp_wsock32_ordinal454:PPROC
wsock32_ordinal454 equ <__imp_wsock32_ordinal454>

externdef __imp_wsock32_ordinal455:PPROC
wsock32_ordinal455 equ <__imp_wsock32_ordinal455>

externdef __imp_wsock32_ordinal456:PPROC
wsock32_ordinal456 equ <__imp_wsock32_ordinal456>

externdef __imp_wsock32_ordinal457:PPROC
wsock32_ordinal457 equ <__imp_wsock32_ordinal457>

externdef __imp_wsock32_ordinal458:PPROC
wsock32_ordinal458 equ <__imp_wsock32_ordinal458>

externdef __imp_wsock32_ordinal459:PPROC
wsock32_ordinal459 equ <__imp_wsock32_ordinal459>

externdef __imp_wsock32_ordinal45:PPROC
wsock32_ordinal45 equ <__imp_wsock32_ordinal45>

externdef __imp_wsock32_ordinal460:PPROC
wsock32_ordinal460 equ <__imp_wsock32_ordinal460>

externdef __imp_wsock32_ordinal461:PPROC
wsock32_ordinal461 equ <__imp_wsock32_ordinal461>

externdef __imp_wsock32_ordinal462:PPROC
wsock32_ordinal462 equ <__imp_wsock32_ordinal462>

externdef __imp_wsock32_ordinal463:PPROC
wsock32_ordinal463 equ <__imp_wsock32_ordinal463>

externdef __imp_wsock32_ordinal464:PPROC
wsock32_ordinal464 equ <__imp_wsock32_ordinal464>

externdef __imp_wsock32_ordinal465:PPROC
wsock32_ordinal465 equ <__imp_wsock32_ordinal465>

externdef __imp_wsock32_ordinal466:PPROC
wsock32_ordinal466 equ <__imp_wsock32_ordinal466>

externdef __imp_wsock32_ordinal467:PPROC
wsock32_ordinal467 equ <__imp_wsock32_ordinal467>

externdef __imp_wsock32_ordinal468:PPROC
wsock32_ordinal468 equ <__imp_wsock32_ordinal468>

externdef __imp_wsock32_ordinal469:PPROC
wsock32_ordinal469 equ <__imp_wsock32_ordinal469>

externdef __imp_wsock32_ordinal46:PPROC
wsock32_ordinal46 equ <__imp_wsock32_ordinal46>

externdef __imp_wsock32_ordinal470:PPROC
wsock32_ordinal470 equ <__imp_wsock32_ordinal470>

externdef __imp_wsock32_ordinal471:PPROC
wsock32_ordinal471 equ <__imp_wsock32_ordinal471>

externdef __imp_wsock32_ordinal472:PPROC
wsock32_ordinal472 equ <__imp_wsock32_ordinal472>

externdef __imp_wsock32_ordinal473:PPROC
wsock32_ordinal473 equ <__imp_wsock32_ordinal473>

externdef __imp_wsock32_ordinal474:PPROC
wsock32_ordinal474 equ <__imp_wsock32_ordinal474>

externdef __imp_wsock32_ordinal475:PPROC
wsock32_ordinal475 equ <__imp_wsock32_ordinal475>

externdef __imp_wsock32_ordinal476:PPROC
wsock32_ordinal476 equ <__imp_wsock32_ordinal476>

externdef __imp_wsock32_ordinal477:PPROC
wsock32_ordinal477 equ <__imp_wsock32_ordinal477>

externdef __imp_wsock32_ordinal478:PPROC
wsock32_ordinal478 equ <__imp_wsock32_ordinal478>

externdef __imp_wsock32_ordinal479:PPROC
wsock32_ordinal479 equ <__imp_wsock32_ordinal479>

externdef __imp_wsock32_ordinal47:PPROC
wsock32_ordinal47 equ <__imp_wsock32_ordinal47>

externdef __imp_wsock32_ordinal480:PPROC
wsock32_ordinal480 equ <__imp_wsock32_ordinal480>

externdef __imp_wsock32_ordinal481:PPROC
wsock32_ordinal481 equ <__imp_wsock32_ordinal481>

externdef __imp_wsock32_ordinal482:PPROC
wsock32_ordinal482 equ <__imp_wsock32_ordinal482>

externdef __imp_wsock32_ordinal483:PPROC
wsock32_ordinal483 equ <__imp_wsock32_ordinal483>

externdef __imp_wsock32_ordinal484:PPROC
wsock32_ordinal484 equ <__imp_wsock32_ordinal484>

externdef __imp_wsock32_ordinal485:PPROC
wsock32_ordinal485 equ <__imp_wsock32_ordinal485>

externdef __imp_wsock32_ordinal486:PPROC
wsock32_ordinal486 equ <__imp_wsock32_ordinal486>

externdef __imp_wsock32_ordinal487:PPROC
wsock32_ordinal487 equ <__imp_wsock32_ordinal487>

externdef __imp_wsock32_ordinal488:PPROC
wsock32_ordinal488 equ <__imp_wsock32_ordinal488>

externdef __imp_wsock32_ordinal489:PPROC
wsock32_ordinal489 equ <__imp_wsock32_ordinal489>

externdef __imp_wsock32_ordinal48:PPROC
wsock32_ordinal48 equ <__imp_wsock32_ordinal48>

externdef __imp_wsock32_ordinal490:PPROC
wsock32_ordinal490 equ <__imp_wsock32_ordinal490>

externdef __imp_wsock32_ordinal491:PPROC
wsock32_ordinal491 equ <__imp_wsock32_ordinal491>

externdef __imp_wsock32_ordinal492:PPROC
wsock32_ordinal492 equ <__imp_wsock32_ordinal492>

externdef __imp_wsock32_ordinal493:PPROC
wsock32_ordinal493 equ <__imp_wsock32_ordinal493>

externdef __imp_wsock32_ordinal494:PPROC
wsock32_ordinal494 equ <__imp_wsock32_ordinal494>

externdef __imp_wsock32_ordinal495:PPROC
wsock32_ordinal495 equ <__imp_wsock32_ordinal495>

externdef __imp_wsock32_ordinal496:PPROC
wsock32_ordinal496 equ <__imp_wsock32_ordinal496>

externdef __imp_wsock32_ordinal497:PPROC
wsock32_ordinal497 equ <__imp_wsock32_ordinal497>

externdef __imp_wsock32_ordinal498:PPROC
wsock32_ordinal498 equ <__imp_wsock32_ordinal498>

externdef __imp_wsock32_ordinal499:PPROC
wsock32_ordinal499 equ <__imp_wsock32_ordinal499>

externdef __imp_wsock32_ordinal49:PPROC
wsock32_ordinal49 equ <__imp_wsock32_ordinal49>

externdef __imp_wsock32_ordinal501:PPROC
wsock32_ordinal501 equ <__imp_wsock32_ordinal501>

externdef __imp_wsock32_ordinal502:PPROC
wsock32_ordinal502 equ <__imp_wsock32_ordinal502>

externdef __imp_wsock32_ordinal503:PPROC
wsock32_ordinal503 equ <__imp_wsock32_ordinal503>

externdef __imp_wsock32_ordinal504:PPROC
wsock32_ordinal504 equ <__imp_wsock32_ordinal504>

externdef __imp_wsock32_ordinal505:PPROC
wsock32_ordinal505 equ <__imp_wsock32_ordinal505>

externdef __imp_wsock32_ordinal506:PPROC
wsock32_ordinal506 equ <__imp_wsock32_ordinal506>

externdef __imp_wsock32_ordinal507:PPROC
wsock32_ordinal507 equ <__imp_wsock32_ordinal507>

externdef __imp_wsock32_ordinal508:PPROC
wsock32_ordinal508 equ <__imp_wsock32_ordinal508>

externdef __imp_wsock32_ordinal509:PPROC
wsock32_ordinal509 equ <__imp_wsock32_ordinal509>

externdef __imp_wsock32_ordinal50:PPROC
wsock32_ordinal50 equ <__imp_wsock32_ordinal50>

externdef __imp_wsock32_ordinal510:PPROC
wsock32_ordinal510 equ <__imp_wsock32_ordinal510>

externdef __imp_wsock32_ordinal511:PPROC
wsock32_ordinal511 equ <__imp_wsock32_ordinal511>

externdef __imp_wsock32_ordinal512:PPROC
wsock32_ordinal512 equ <__imp_wsock32_ordinal512>

externdef __imp_wsock32_ordinal513:PPROC
wsock32_ordinal513 equ <__imp_wsock32_ordinal513>

externdef __imp_wsock32_ordinal514:PPROC
wsock32_ordinal514 equ <__imp_wsock32_ordinal514>

externdef __imp_wsock32_ordinal515:PPROC
wsock32_ordinal515 equ <__imp_wsock32_ordinal515>

externdef __imp_wsock32_ordinal516:PPROC
wsock32_ordinal516 equ <__imp_wsock32_ordinal516>

externdef __imp_wsock32_ordinal517:PPROC
wsock32_ordinal517 equ <__imp_wsock32_ordinal517>

externdef __imp_wsock32_ordinal518:PPROC
wsock32_ordinal518 equ <__imp_wsock32_ordinal518>

externdef __imp_wsock32_ordinal519:PPROC
wsock32_ordinal519 equ <__imp_wsock32_ordinal519>

externdef __imp_wsock32_ordinal520:PPROC
wsock32_ordinal520 equ <__imp_wsock32_ordinal520>

externdef __imp_wsock32_ordinal521:PPROC
wsock32_ordinal521 equ <__imp_wsock32_ordinal521>

externdef __imp_wsock32_ordinal522:PPROC
wsock32_ordinal522 equ <__imp_wsock32_ordinal522>

externdef __imp_wsock32_ordinal523:PPROC
wsock32_ordinal523 equ <__imp_wsock32_ordinal523>

externdef __imp_wsock32_ordinal524:PPROC
wsock32_ordinal524 equ <__imp_wsock32_ordinal524>

externdef __imp_wsock32_ordinal525:PPROC
wsock32_ordinal525 equ <__imp_wsock32_ordinal525>

externdef __imp_wsock32_ordinal526:PPROC
wsock32_ordinal526 equ <__imp_wsock32_ordinal526>

externdef __imp_wsock32_ordinal527:PPROC
wsock32_ordinal527 equ <__imp_wsock32_ordinal527>

externdef __imp_wsock32_ordinal528:PPROC
wsock32_ordinal528 equ <__imp_wsock32_ordinal528>

externdef __imp_wsock32_ordinal529:PPROC
wsock32_ordinal529 equ <__imp_wsock32_ordinal529>

externdef __imp_wsock32_ordinal530:PPROC
wsock32_ordinal530 equ <__imp_wsock32_ordinal530>

externdef __imp_wsock32_ordinal531:PPROC
wsock32_ordinal531 equ <__imp_wsock32_ordinal531>

externdef __imp_wsock32_ordinal532:PPROC
wsock32_ordinal532 equ <__imp_wsock32_ordinal532>

externdef __imp_wsock32_ordinal533:PPROC
wsock32_ordinal533 equ <__imp_wsock32_ordinal533>

externdef __imp_wsock32_ordinal534:PPROC
wsock32_ordinal534 equ <__imp_wsock32_ordinal534>

externdef __imp_wsock32_ordinal535:PPROC
wsock32_ordinal535 equ <__imp_wsock32_ordinal535>

externdef __imp_wsock32_ordinal536:PPROC
wsock32_ordinal536 equ <__imp_wsock32_ordinal536>

externdef __imp_wsock32_ordinal537:PPROC
wsock32_ordinal537 equ <__imp_wsock32_ordinal537>

externdef __imp_wsock32_ordinal538:PPROC
wsock32_ordinal538 equ <__imp_wsock32_ordinal538>

externdef __imp_wsock32_ordinal539:PPROC
wsock32_ordinal539 equ <__imp_wsock32_ordinal539>

externdef __imp_wsock32_ordinal540:PPROC
wsock32_ordinal540 equ <__imp_wsock32_ordinal540>

externdef __imp_wsock32_ordinal541:PPROC
wsock32_ordinal541 equ <__imp_wsock32_ordinal541>

externdef __imp_wsock32_ordinal542:PPROC
wsock32_ordinal542 equ <__imp_wsock32_ordinal542>

externdef __imp_wsock32_ordinal543:PPROC
wsock32_ordinal543 equ <__imp_wsock32_ordinal543>

externdef __imp_wsock32_ordinal544:PPROC
wsock32_ordinal544 equ <__imp_wsock32_ordinal544>

externdef __imp_wsock32_ordinal545:PPROC
wsock32_ordinal545 equ <__imp_wsock32_ordinal545>

externdef __imp_wsock32_ordinal546:PPROC
wsock32_ordinal546 equ <__imp_wsock32_ordinal546>

externdef __imp_wsock32_ordinal547:PPROC
wsock32_ordinal547 equ <__imp_wsock32_ordinal547>

externdef __imp_wsock32_ordinal548:PPROC
wsock32_ordinal548 equ <__imp_wsock32_ordinal548>

externdef __imp_wsock32_ordinal549:PPROC
wsock32_ordinal549 equ <__imp_wsock32_ordinal549>

externdef __imp_wsock32_ordinal550:PPROC
wsock32_ordinal550 equ <__imp_wsock32_ordinal550>

externdef __imp_wsock32_ordinal551:PPROC
wsock32_ordinal551 equ <__imp_wsock32_ordinal551>

externdef __imp_wsock32_ordinal552:PPROC
wsock32_ordinal552 equ <__imp_wsock32_ordinal552>

externdef __imp_wsock32_ordinal553:PPROC
wsock32_ordinal553 equ <__imp_wsock32_ordinal553>

externdef __imp_wsock32_ordinal554:PPROC
wsock32_ordinal554 equ <__imp_wsock32_ordinal554>

externdef __imp_wsock32_ordinal555:PPROC
wsock32_ordinal555 equ <__imp_wsock32_ordinal555>

externdef __imp_wsock32_ordinal556:PPROC
wsock32_ordinal556 equ <__imp_wsock32_ordinal556>

externdef __imp_wsock32_ordinal557:PPROC
wsock32_ordinal557 equ <__imp_wsock32_ordinal557>

externdef __imp_wsock32_ordinal558:PPROC
wsock32_ordinal558 equ <__imp_wsock32_ordinal558>

externdef __imp_wsock32_ordinal559:PPROC
wsock32_ordinal559 equ <__imp_wsock32_ordinal559>

externdef __imp_wsock32_ordinal560:PPROC
wsock32_ordinal560 equ <__imp_wsock32_ordinal560>

externdef __imp_wsock32_ordinal561:PPROC
wsock32_ordinal561 equ <__imp_wsock32_ordinal561>

externdef __imp_wsock32_ordinal562:PPROC
wsock32_ordinal562 equ <__imp_wsock32_ordinal562>

externdef __imp_wsock32_ordinal563:PPROC
wsock32_ordinal563 equ <__imp_wsock32_ordinal563>

externdef __imp_wsock32_ordinal564:PPROC
wsock32_ordinal564 equ <__imp_wsock32_ordinal564>

externdef __imp_wsock32_ordinal565:PPROC
wsock32_ordinal565 equ <__imp_wsock32_ordinal565>

externdef __imp_wsock32_ordinal566:PPROC
wsock32_ordinal566 equ <__imp_wsock32_ordinal566>

externdef __imp_wsock32_ordinal567:PPROC
wsock32_ordinal567 equ <__imp_wsock32_ordinal567>

externdef __imp_wsock32_ordinal568:PPROC
wsock32_ordinal568 equ <__imp_wsock32_ordinal568>

externdef __imp_wsock32_ordinal569:PPROC
wsock32_ordinal569 equ <__imp_wsock32_ordinal569>

externdef __imp_wsock32_ordinal570:PPROC
wsock32_ordinal570 equ <__imp_wsock32_ordinal570>

externdef __imp_wsock32_ordinal571:PPROC
wsock32_ordinal571 equ <__imp_wsock32_ordinal571>

externdef __imp_wsock32_ordinal572:PPROC
wsock32_ordinal572 equ <__imp_wsock32_ordinal572>

externdef __imp_wsock32_ordinal573:PPROC
wsock32_ordinal573 equ <__imp_wsock32_ordinal573>

externdef __imp_wsock32_ordinal574:PPROC
wsock32_ordinal574 equ <__imp_wsock32_ordinal574>

externdef __imp_wsock32_ordinal575:PPROC
wsock32_ordinal575 equ <__imp_wsock32_ordinal575>

externdef __imp_wsock32_ordinal576:PPROC
wsock32_ordinal576 equ <__imp_wsock32_ordinal576>

externdef __imp_wsock32_ordinal577:PPROC
wsock32_ordinal577 equ <__imp_wsock32_ordinal577>

externdef __imp_wsock32_ordinal578:PPROC
wsock32_ordinal578 equ <__imp_wsock32_ordinal578>

externdef __imp_wsock32_ordinal579:PPROC
wsock32_ordinal579 equ <__imp_wsock32_ordinal579>

externdef __imp_wsock32_ordinal580:PPROC
wsock32_ordinal580 equ <__imp_wsock32_ordinal580>

externdef __imp_wsock32_ordinal581:PPROC
wsock32_ordinal581 equ <__imp_wsock32_ordinal581>

externdef __imp_wsock32_ordinal582:PPROC
wsock32_ordinal582 equ <__imp_wsock32_ordinal582>

externdef __imp_wsock32_ordinal583:PPROC
wsock32_ordinal583 equ <__imp_wsock32_ordinal583>

externdef __imp_wsock32_ordinal584:PPROC
wsock32_ordinal584 equ <__imp_wsock32_ordinal584>

externdef __imp_wsock32_ordinal585:PPROC
wsock32_ordinal585 equ <__imp_wsock32_ordinal585>

externdef __imp_wsock32_ordinal586:PPROC
wsock32_ordinal586 equ <__imp_wsock32_ordinal586>

externdef __imp_wsock32_ordinal587:PPROC
wsock32_ordinal587 equ <__imp_wsock32_ordinal587>

externdef __imp_wsock32_ordinal588:PPROC
wsock32_ordinal588 equ <__imp_wsock32_ordinal588>

externdef __imp_wsock32_ordinal589:PPROC
wsock32_ordinal589 equ <__imp_wsock32_ordinal589>

externdef __imp_wsock32_ordinal58:PPROC
wsock32_ordinal58 equ <__imp_wsock32_ordinal58>

externdef __imp_wsock32_ordinal590:PPROC
wsock32_ordinal590 equ <__imp_wsock32_ordinal590>

externdef __imp_wsock32_ordinal591:PPROC
wsock32_ordinal591 equ <__imp_wsock32_ordinal591>

externdef __imp_wsock32_ordinal592:PPROC
wsock32_ordinal592 equ <__imp_wsock32_ordinal592>

externdef __imp_wsock32_ordinal593:PPROC
wsock32_ordinal593 equ <__imp_wsock32_ordinal593>

externdef __imp_wsock32_ordinal594:PPROC
wsock32_ordinal594 equ <__imp_wsock32_ordinal594>

externdef __imp_wsock32_ordinal595:PPROC
wsock32_ordinal595 equ <__imp_wsock32_ordinal595>

externdef __imp_wsock32_ordinal596:PPROC
wsock32_ordinal596 equ <__imp_wsock32_ordinal596>

externdef __imp_wsock32_ordinal597:PPROC
wsock32_ordinal597 equ <__imp_wsock32_ordinal597>

externdef __imp_wsock32_ordinal598:PPROC
wsock32_ordinal598 equ <__imp_wsock32_ordinal598>

externdef __imp_wsock32_ordinal599:PPROC
wsock32_ordinal599 equ <__imp_wsock32_ordinal599>

externdef __imp_wsock32_ordinal59:PPROC
wsock32_ordinal59 equ <__imp_wsock32_ordinal59>

externdef __imp_wsock32_ordinal600:PPROC
wsock32_ordinal600 equ <__imp_wsock32_ordinal600>

externdef __imp_wsock32_ordinal601:PPROC
wsock32_ordinal601 equ <__imp_wsock32_ordinal601>

externdef __imp_wsock32_ordinal602:PPROC
wsock32_ordinal602 equ <__imp_wsock32_ordinal602>

externdef __imp_wsock32_ordinal603:PPROC
wsock32_ordinal603 equ <__imp_wsock32_ordinal603>

externdef __imp_wsock32_ordinal604:PPROC
wsock32_ordinal604 equ <__imp_wsock32_ordinal604>

externdef __imp_wsock32_ordinal605:PPROC
wsock32_ordinal605 equ <__imp_wsock32_ordinal605>

externdef __imp_wsock32_ordinal606:PPROC
wsock32_ordinal606 equ <__imp_wsock32_ordinal606>

externdef __imp_wsock32_ordinal607:PPROC
wsock32_ordinal607 equ <__imp_wsock32_ordinal607>

externdef __imp_wsock32_ordinal608:PPROC
wsock32_ordinal608 equ <__imp_wsock32_ordinal608>

externdef __imp_wsock32_ordinal609:PPROC
wsock32_ordinal609 equ <__imp_wsock32_ordinal609>

externdef __imp_wsock32_ordinal60:PPROC
wsock32_ordinal60 equ <__imp_wsock32_ordinal60>

externdef __imp_wsock32_ordinal610:PPROC
wsock32_ordinal610 equ <__imp_wsock32_ordinal610>

externdef __imp_wsock32_ordinal611:PPROC
wsock32_ordinal611 equ <__imp_wsock32_ordinal611>

externdef __imp_wsock32_ordinal612:PPROC
wsock32_ordinal612 equ <__imp_wsock32_ordinal612>

externdef __imp_wsock32_ordinal613:PPROC
wsock32_ordinal613 equ <__imp_wsock32_ordinal613>

externdef __imp_wsock32_ordinal614:PPROC
wsock32_ordinal614 equ <__imp_wsock32_ordinal614>

externdef __imp_wsock32_ordinal615:PPROC
wsock32_ordinal615 equ <__imp_wsock32_ordinal615>

externdef __imp_wsock32_ordinal616:PPROC
wsock32_ordinal616 equ <__imp_wsock32_ordinal616>

externdef __imp_wsock32_ordinal617:PPROC
wsock32_ordinal617 equ <__imp_wsock32_ordinal617>

externdef __imp_wsock32_ordinal618:PPROC
wsock32_ordinal618 equ <__imp_wsock32_ordinal618>

externdef __imp_wsock32_ordinal619:PPROC
wsock32_ordinal619 equ <__imp_wsock32_ordinal619>

externdef __imp_wsock32_ordinal61:PPROC
wsock32_ordinal61 equ <__imp_wsock32_ordinal61>

externdef __imp_wsock32_ordinal620:PPROC
wsock32_ordinal620 equ <__imp_wsock32_ordinal620>

externdef __imp_wsock32_ordinal621:PPROC
wsock32_ordinal621 equ <__imp_wsock32_ordinal621>

externdef __imp_wsock32_ordinal622:PPROC
wsock32_ordinal622 equ <__imp_wsock32_ordinal622>

externdef __imp_wsock32_ordinal623:PPROC
wsock32_ordinal623 equ <__imp_wsock32_ordinal623>

externdef __imp_wsock32_ordinal624:PPROC
wsock32_ordinal624 equ <__imp_wsock32_ordinal624>

externdef __imp_wsock32_ordinal625:PPROC
wsock32_ordinal625 equ <__imp_wsock32_ordinal625>

externdef __imp_wsock32_ordinal626:PPROC
wsock32_ordinal626 equ <__imp_wsock32_ordinal626>

externdef __imp_wsock32_ordinal627:PPROC
wsock32_ordinal627 equ <__imp_wsock32_ordinal627>

externdef __imp_wsock32_ordinal628:PPROC
wsock32_ordinal628 equ <__imp_wsock32_ordinal628>

externdef __imp_wsock32_ordinal629:PPROC
wsock32_ordinal629 equ <__imp_wsock32_ordinal629>

externdef __imp_wsock32_ordinal62:PPROC
wsock32_ordinal62 equ <__imp_wsock32_ordinal62>

externdef __imp_wsock32_ordinal630:PPROC
wsock32_ordinal630 equ <__imp_wsock32_ordinal630>

externdef __imp_wsock32_ordinal631:PPROC
wsock32_ordinal631 equ <__imp_wsock32_ordinal631>

externdef __imp_wsock32_ordinal632:PPROC
wsock32_ordinal632 equ <__imp_wsock32_ordinal632>

externdef __imp_wsock32_ordinal633:PPROC
wsock32_ordinal633 equ <__imp_wsock32_ordinal633>

externdef __imp_wsock32_ordinal634:PPROC
wsock32_ordinal634 equ <__imp_wsock32_ordinal634>

externdef __imp_wsock32_ordinal635:PPROC
wsock32_ordinal635 equ <__imp_wsock32_ordinal635>

externdef __imp_wsock32_ordinal636:PPROC
wsock32_ordinal636 equ <__imp_wsock32_ordinal636>

externdef __imp_wsock32_ordinal637:PPROC
wsock32_ordinal637 equ <__imp_wsock32_ordinal637>

externdef __imp_wsock32_ordinal638:PPROC
wsock32_ordinal638 equ <__imp_wsock32_ordinal638>

externdef __imp_wsock32_ordinal639:PPROC
wsock32_ordinal639 equ <__imp_wsock32_ordinal639>

externdef __imp_wsock32_ordinal63:PPROC
wsock32_ordinal63 equ <__imp_wsock32_ordinal63>

externdef __imp_wsock32_ordinal640:PPROC
wsock32_ordinal640 equ <__imp_wsock32_ordinal640>

externdef __imp_wsock32_ordinal641:PPROC
wsock32_ordinal641 equ <__imp_wsock32_ordinal641>

externdef __imp_wsock32_ordinal642:PPROC
wsock32_ordinal642 equ <__imp_wsock32_ordinal642>

externdef __imp_wsock32_ordinal643:PPROC
wsock32_ordinal643 equ <__imp_wsock32_ordinal643>

externdef __imp_wsock32_ordinal644:PPROC
wsock32_ordinal644 equ <__imp_wsock32_ordinal644>

externdef __imp_wsock32_ordinal645:PPROC
wsock32_ordinal645 equ <__imp_wsock32_ordinal645>

externdef __imp_wsock32_ordinal646:PPROC
wsock32_ordinal646 equ <__imp_wsock32_ordinal646>

externdef __imp_wsock32_ordinal647:PPROC
wsock32_ordinal647 equ <__imp_wsock32_ordinal647>

externdef __imp_wsock32_ordinal648:PPROC
wsock32_ordinal648 equ <__imp_wsock32_ordinal648>

externdef __imp_wsock32_ordinal649:PPROC
wsock32_ordinal649 equ <__imp_wsock32_ordinal649>

externdef __imp_wsock32_ordinal64:PPROC
wsock32_ordinal64 equ <__imp_wsock32_ordinal64>

externdef __imp_wsock32_ordinal650:PPROC
wsock32_ordinal650 equ <__imp_wsock32_ordinal650>

externdef __imp_wsock32_ordinal651:PPROC
wsock32_ordinal651 equ <__imp_wsock32_ordinal651>

externdef __imp_wsock32_ordinal652:PPROC
wsock32_ordinal652 equ <__imp_wsock32_ordinal652>

externdef __imp_wsock32_ordinal653:PPROC
wsock32_ordinal653 equ <__imp_wsock32_ordinal653>

externdef __imp_wsock32_ordinal654:PPROC
wsock32_ordinal654 equ <__imp_wsock32_ordinal654>

externdef __imp_wsock32_ordinal655:PPROC
wsock32_ordinal655 equ <__imp_wsock32_ordinal655>

externdef __imp_wsock32_ordinal656:PPROC
wsock32_ordinal656 equ <__imp_wsock32_ordinal656>

externdef __imp_wsock32_ordinal657:PPROC
wsock32_ordinal657 equ <__imp_wsock32_ordinal657>

externdef __imp_wsock32_ordinal658:PPROC
wsock32_ordinal658 equ <__imp_wsock32_ordinal658>

externdef __imp_wsock32_ordinal659:PPROC
wsock32_ordinal659 equ <__imp_wsock32_ordinal659>

externdef __imp_wsock32_ordinal65:PPROC
wsock32_ordinal65 equ <__imp_wsock32_ordinal65>

externdef __imp_wsock32_ordinal660:PPROC
wsock32_ordinal660 equ <__imp_wsock32_ordinal660>

externdef __imp_wsock32_ordinal661:PPROC
wsock32_ordinal661 equ <__imp_wsock32_ordinal661>

externdef __imp_wsock32_ordinal662:PPROC
wsock32_ordinal662 equ <__imp_wsock32_ordinal662>

externdef __imp_wsock32_ordinal663:PPROC
wsock32_ordinal663 equ <__imp_wsock32_ordinal663>

externdef __imp_wsock32_ordinal664:PPROC
wsock32_ordinal664 equ <__imp_wsock32_ordinal664>

externdef __imp_wsock32_ordinal665:PPROC
wsock32_ordinal665 equ <__imp_wsock32_ordinal665>

externdef __imp_wsock32_ordinal666:PPROC
wsock32_ordinal666 equ <__imp_wsock32_ordinal666>

externdef __imp_wsock32_ordinal667:PPROC
wsock32_ordinal667 equ <__imp_wsock32_ordinal667>

externdef __imp_wsock32_ordinal668:PPROC
wsock32_ordinal668 equ <__imp_wsock32_ordinal668>

externdef __imp_wsock32_ordinal669:PPROC
wsock32_ordinal669 equ <__imp_wsock32_ordinal669>

externdef __imp_wsock32_ordinal66:PPROC
wsock32_ordinal66 equ <__imp_wsock32_ordinal66>

externdef __imp_wsock32_ordinal670:PPROC
wsock32_ordinal670 equ <__imp_wsock32_ordinal670>

externdef __imp_wsock32_ordinal671:PPROC
wsock32_ordinal671 equ <__imp_wsock32_ordinal671>

externdef __imp_wsock32_ordinal672:PPROC
wsock32_ordinal672 equ <__imp_wsock32_ordinal672>

externdef __imp_wsock32_ordinal673:PPROC
wsock32_ordinal673 equ <__imp_wsock32_ordinal673>

externdef __imp_wsock32_ordinal674:PPROC
wsock32_ordinal674 equ <__imp_wsock32_ordinal674>

externdef __imp_wsock32_ordinal675:PPROC
wsock32_ordinal675 equ <__imp_wsock32_ordinal675>

externdef __imp_wsock32_ordinal676:PPROC
wsock32_ordinal676 equ <__imp_wsock32_ordinal676>

externdef __imp_wsock32_ordinal677:PPROC
wsock32_ordinal677 equ <__imp_wsock32_ordinal677>

externdef __imp_wsock32_ordinal678:PPROC
wsock32_ordinal678 equ <__imp_wsock32_ordinal678>

externdef __imp_wsock32_ordinal679:PPROC
wsock32_ordinal679 equ <__imp_wsock32_ordinal679>

externdef __imp_wsock32_ordinal67:PPROC
wsock32_ordinal67 equ <__imp_wsock32_ordinal67>

externdef __imp_wsock32_ordinal680:PPROC
wsock32_ordinal680 equ <__imp_wsock32_ordinal680>

externdef __imp_wsock32_ordinal681:PPROC
wsock32_ordinal681 equ <__imp_wsock32_ordinal681>

externdef __imp_wsock32_ordinal682:PPROC
wsock32_ordinal682 equ <__imp_wsock32_ordinal682>

externdef __imp_wsock32_ordinal683:PPROC
wsock32_ordinal683 equ <__imp_wsock32_ordinal683>

externdef __imp_wsock32_ordinal684:PPROC
wsock32_ordinal684 equ <__imp_wsock32_ordinal684>

externdef __imp_wsock32_ordinal685:PPROC
wsock32_ordinal685 equ <__imp_wsock32_ordinal685>

externdef __imp_wsock32_ordinal686:PPROC
wsock32_ordinal686 equ <__imp_wsock32_ordinal686>

externdef __imp_wsock32_ordinal687:PPROC
wsock32_ordinal687 equ <__imp_wsock32_ordinal687>

externdef __imp_wsock32_ordinal688:PPROC
wsock32_ordinal688 equ <__imp_wsock32_ordinal688>

externdef __imp_wsock32_ordinal689:PPROC
wsock32_ordinal689 equ <__imp_wsock32_ordinal689>

externdef __imp_wsock32_ordinal68:PPROC
wsock32_ordinal68 equ <__imp_wsock32_ordinal68>

externdef __imp_wsock32_ordinal690:PPROC
wsock32_ordinal690 equ <__imp_wsock32_ordinal690>

externdef __imp_wsock32_ordinal691:PPROC
wsock32_ordinal691 equ <__imp_wsock32_ordinal691>

externdef __imp_wsock32_ordinal692:PPROC
wsock32_ordinal692 equ <__imp_wsock32_ordinal692>

externdef __imp_wsock32_ordinal693:PPROC
wsock32_ordinal693 equ <__imp_wsock32_ordinal693>

externdef __imp_wsock32_ordinal694:PPROC
wsock32_ordinal694 equ <__imp_wsock32_ordinal694>

externdef __imp_wsock32_ordinal695:PPROC
wsock32_ordinal695 equ <__imp_wsock32_ordinal695>

externdef __imp_wsock32_ordinal696:PPROC
wsock32_ordinal696 equ <__imp_wsock32_ordinal696>

externdef __imp_wsock32_ordinal697:PPROC
wsock32_ordinal697 equ <__imp_wsock32_ordinal697>

externdef __imp_wsock32_ordinal698:PPROC
wsock32_ordinal698 equ <__imp_wsock32_ordinal698>

externdef __imp_wsock32_ordinal699:PPROC
wsock32_ordinal699 equ <__imp_wsock32_ordinal699>

externdef __imp_wsock32_ordinal69:PPROC
wsock32_ordinal69 equ <__imp_wsock32_ordinal69>

externdef __imp_wsock32_ordinal700:PPROC
wsock32_ordinal700 equ <__imp_wsock32_ordinal700>

externdef __imp_wsock32_ordinal701:PPROC
wsock32_ordinal701 equ <__imp_wsock32_ordinal701>

externdef __imp_wsock32_ordinal702:PPROC
wsock32_ordinal702 equ <__imp_wsock32_ordinal702>

externdef __imp_wsock32_ordinal703:PPROC
wsock32_ordinal703 equ <__imp_wsock32_ordinal703>

externdef __imp_wsock32_ordinal704:PPROC
wsock32_ordinal704 equ <__imp_wsock32_ordinal704>

externdef __imp_wsock32_ordinal705:PPROC
wsock32_ordinal705 equ <__imp_wsock32_ordinal705>

externdef __imp_wsock32_ordinal706:PPROC
wsock32_ordinal706 equ <__imp_wsock32_ordinal706>

externdef __imp_wsock32_ordinal707:PPROC
wsock32_ordinal707 equ <__imp_wsock32_ordinal707>

externdef __imp_wsock32_ordinal708:PPROC
wsock32_ordinal708 equ <__imp_wsock32_ordinal708>

externdef __imp_wsock32_ordinal709:PPROC
wsock32_ordinal709 equ <__imp_wsock32_ordinal709>

externdef __imp_wsock32_ordinal70:PPROC
wsock32_ordinal70 equ <__imp_wsock32_ordinal70>

externdef __imp_wsock32_ordinal710:PPROC
wsock32_ordinal710 equ <__imp_wsock32_ordinal710>

externdef __imp_wsock32_ordinal711:PPROC
wsock32_ordinal711 equ <__imp_wsock32_ordinal711>

externdef __imp_wsock32_ordinal712:PPROC
wsock32_ordinal712 equ <__imp_wsock32_ordinal712>

externdef __imp_wsock32_ordinal713:PPROC
wsock32_ordinal713 equ <__imp_wsock32_ordinal713>

externdef __imp_wsock32_ordinal714:PPROC
wsock32_ordinal714 equ <__imp_wsock32_ordinal714>

externdef __imp_wsock32_ordinal715:PPROC
wsock32_ordinal715 equ <__imp_wsock32_ordinal715>

externdef __imp_wsock32_ordinal716:PPROC
wsock32_ordinal716 equ <__imp_wsock32_ordinal716>

externdef __imp_wsock32_ordinal717:PPROC
wsock32_ordinal717 equ <__imp_wsock32_ordinal717>

externdef __imp_wsock32_ordinal718:PPROC
wsock32_ordinal718 equ <__imp_wsock32_ordinal718>

externdef __imp_wsock32_ordinal719:PPROC
wsock32_ordinal719 equ <__imp_wsock32_ordinal719>

externdef __imp_wsock32_ordinal71:PPROC
wsock32_ordinal71 equ <__imp_wsock32_ordinal71>

externdef __imp_wsock32_ordinal720:PPROC
wsock32_ordinal720 equ <__imp_wsock32_ordinal720>

externdef __imp_wsock32_ordinal721:PPROC
wsock32_ordinal721 equ <__imp_wsock32_ordinal721>

externdef __imp_wsock32_ordinal722:PPROC
wsock32_ordinal722 equ <__imp_wsock32_ordinal722>

externdef __imp_wsock32_ordinal723:PPROC
wsock32_ordinal723 equ <__imp_wsock32_ordinal723>

externdef __imp_wsock32_ordinal724:PPROC
wsock32_ordinal724 equ <__imp_wsock32_ordinal724>

externdef __imp_wsock32_ordinal725:PPROC
wsock32_ordinal725 equ <__imp_wsock32_ordinal725>

externdef __imp_wsock32_ordinal726:PPROC
wsock32_ordinal726 equ <__imp_wsock32_ordinal726>

externdef __imp_wsock32_ordinal727:PPROC
wsock32_ordinal727 equ <__imp_wsock32_ordinal727>

externdef __imp_wsock32_ordinal728:PPROC
wsock32_ordinal728 equ <__imp_wsock32_ordinal728>

externdef __imp_wsock32_ordinal729:PPROC
wsock32_ordinal729 equ <__imp_wsock32_ordinal729>

externdef __imp_wsock32_ordinal72:PPROC
wsock32_ordinal72 equ <__imp_wsock32_ordinal72>

externdef __imp_wsock32_ordinal730:PPROC
wsock32_ordinal730 equ <__imp_wsock32_ordinal730>

externdef __imp_wsock32_ordinal731:PPROC
wsock32_ordinal731 equ <__imp_wsock32_ordinal731>

externdef __imp_wsock32_ordinal732:PPROC
wsock32_ordinal732 equ <__imp_wsock32_ordinal732>

externdef __imp_wsock32_ordinal733:PPROC
wsock32_ordinal733 equ <__imp_wsock32_ordinal733>

externdef __imp_wsock32_ordinal734:PPROC
wsock32_ordinal734 equ <__imp_wsock32_ordinal734>

externdef __imp_wsock32_ordinal735:PPROC
wsock32_ordinal735 equ <__imp_wsock32_ordinal735>

externdef __imp_wsock32_ordinal736:PPROC
wsock32_ordinal736 equ <__imp_wsock32_ordinal736>

externdef __imp_wsock32_ordinal737:PPROC
wsock32_ordinal737 equ <__imp_wsock32_ordinal737>

externdef __imp_wsock32_ordinal738:PPROC
wsock32_ordinal738 equ <__imp_wsock32_ordinal738>

externdef __imp_wsock32_ordinal739:PPROC
wsock32_ordinal739 equ <__imp_wsock32_ordinal739>

externdef __imp_wsock32_ordinal73:PPROC
wsock32_ordinal73 equ <__imp_wsock32_ordinal73>

externdef __imp_wsock32_ordinal740:PPROC
wsock32_ordinal740 equ <__imp_wsock32_ordinal740>

externdef __imp_wsock32_ordinal741:PPROC
wsock32_ordinal741 equ <__imp_wsock32_ordinal741>

externdef __imp_wsock32_ordinal742:PPROC
wsock32_ordinal742 equ <__imp_wsock32_ordinal742>

externdef __imp_wsock32_ordinal743:PPROC
wsock32_ordinal743 equ <__imp_wsock32_ordinal743>

externdef __imp_wsock32_ordinal744:PPROC
wsock32_ordinal744 equ <__imp_wsock32_ordinal744>

externdef __imp_wsock32_ordinal745:PPROC
wsock32_ordinal745 equ <__imp_wsock32_ordinal745>

externdef __imp_wsock32_ordinal746:PPROC
wsock32_ordinal746 equ <__imp_wsock32_ordinal746>

externdef __imp_wsock32_ordinal747:PPROC
wsock32_ordinal747 equ <__imp_wsock32_ordinal747>

externdef __imp_wsock32_ordinal748:PPROC
wsock32_ordinal748 equ <__imp_wsock32_ordinal748>

externdef __imp_wsock32_ordinal749:PPROC
wsock32_ordinal749 equ <__imp_wsock32_ordinal749>

externdef __imp_wsock32_ordinal74:PPROC
wsock32_ordinal74 equ <__imp_wsock32_ordinal74>

externdef __imp_wsock32_ordinal750:PPROC
wsock32_ordinal750 equ <__imp_wsock32_ordinal750>

externdef __imp_wsock32_ordinal751:PPROC
wsock32_ordinal751 equ <__imp_wsock32_ordinal751>

externdef __imp_wsock32_ordinal752:PPROC
wsock32_ordinal752 equ <__imp_wsock32_ordinal752>

externdef __imp_wsock32_ordinal753:PPROC
wsock32_ordinal753 equ <__imp_wsock32_ordinal753>

externdef __imp_wsock32_ordinal754:PPROC
wsock32_ordinal754 equ <__imp_wsock32_ordinal754>

externdef __imp_wsock32_ordinal755:PPROC
wsock32_ordinal755 equ <__imp_wsock32_ordinal755>

externdef __imp_wsock32_ordinal756:PPROC
wsock32_ordinal756 equ <__imp_wsock32_ordinal756>

externdef __imp_wsock32_ordinal757:PPROC
wsock32_ordinal757 equ <__imp_wsock32_ordinal757>

externdef __imp_wsock32_ordinal758:PPROC
wsock32_ordinal758 equ <__imp_wsock32_ordinal758>

externdef __imp_wsock32_ordinal759:PPROC
wsock32_ordinal759 equ <__imp_wsock32_ordinal759>

externdef __imp_wsock32_ordinal75:PPROC
wsock32_ordinal75 equ <__imp_wsock32_ordinal75>

externdef __imp_wsock32_ordinal760:PPROC
wsock32_ordinal760 equ <__imp_wsock32_ordinal760>

externdef __imp_wsock32_ordinal761:PPROC
wsock32_ordinal761 equ <__imp_wsock32_ordinal761>

externdef __imp_wsock32_ordinal762:PPROC
wsock32_ordinal762 equ <__imp_wsock32_ordinal762>

externdef __imp_wsock32_ordinal763:PPROC
wsock32_ordinal763 equ <__imp_wsock32_ordinal763>

externdef __imp_wsock32_ordinal764:PPROC
wsock32_ordinal764 equ <__imp_wsock32_ordinal764>

externdef __imp_wsock32_ordinal765:PPROC
wsock32_ordinal765 equ <__imp_wsock32_ordinal765>

externdef __imp_wsock32_ordinal766:PPROC
wsock32_ordinal766 equ <__imp_wsock32_ordinal766>

externdef __imp_wsock32_ordinal767:PPROC
wsock32_ordinal767 equ <__imp_wsock32_ordinal767>

externdef __imp_wsock32_ordinal768:PPROC
wsock32_ordinal768 equ <__imp_wsock32_ordinal768>

externdef __imp_wsock32_ordinal769:PPROC
wsock32_ordinal769 equ <__imp_wsock32_ordinal769>

externdef __imp_wsock32_ordinal76:PPROC
wsock32_ordinal76 equ <__imp_wsock32_ordinal76>

externdef __imp_wsock32_ordinal770:PPROC
wsock32_ordinal770 equ <__imp_wsock32_ordinal770>

externdef __imp_wsock32_ordinal771:PPROC
wsock32_ordinal771 equ <__imp_wsock32_ordinal771>

externdef __imp_wsock32_ordinal772:PPROC
wsock32_ordinal772 equ <__imp_wsock32_ordinal772>

externdef __imp_wsock32_ordinal773:PPROC
wsock32_ordinal773 equ <__imp_wsock32_ordinal773>

externdef __imp_wsock32_ordinal774:PPROC
wsock32_ordinal774 equ <__imp_wsock32_ordinal774>

externdef __imp_wsock32_ordinal775:PPROC
wsock32_ordinal775 equ <__imp_wsock32_ordinal775>

externdef __imp_wsock32_ordinal776:PPROC
wsock32_ordinal776 equ <__imp_wsock32_ordinal776>

externdef __imp_wsock32_ordinal777:PPROC
wsock32_ordinal777 equ <__imp_wsock32_ordinal777>

externdef __imp_wsock32_ordinal778:PPROC
wsock32_ordinal778 equ <__imp_wsock32_ordinal778>

externdef __imp_wsock32_ordinal779:PPROC
wsock32_ordinal779 equ <__imp_wsock32_ordinal779>

externdef __imp_wsock32_ordinal77:PPROC
wsock32_ordinal77 equ <__imp_wsock32_ordinal77>

externdef __imp_wsock32_ordinal780:PPROC
wsock32_ordinal780 equ <__imp_wsock32_ordinal780>

externdef __imp_wsock32_ordinal781:PPROC
wsock32_ordinal781 equ <__imp_wsock32_ordinal781>

externdef __imp_wsock32_ordinal782:PPROC
wsock32_ordinal782 equ <__imp_wsock32_ordinal782>

externdef __imp_wsock32_ordinal783:PPROC
wsock32_ordinal783 equ <__imp_wsock32_ordinal783>

externdef __imp_wsock32_ordinal784:PPROC
wsock32_ordinal784 equ <__imp_wsock32_ordinal784>

externdef __imp_wsock32_ordinal785:PPROC
wsock32_ordinal785 equ <__imp_wsock32_ordinal785>

externdef __imp_wsock32_ordinal786:PPROC
wsock32_ordinal786 equ <__imp_wsock32_ordinal786>

externdef __imp_wsock32_ordinal787:PPROC
wsock32_ordinal787 equ <__imp_wsock32_ordinal787>

externdef __imp_wsock32_ordinal788:PPROC
wsock32_ordinal788 equ <__imp_wsock32_ordinal788>

externdef __imp_wsock32_ordinal789:PPROC
wsock32_ordinal789 equ <__imp_wsock32_ordinal789>

externdef __imp_wsock32_ordinal78:PPROC
wsock32_ordinal78 equ <__imp_wsock32_ordinal78>

externdef __imp_wsock32_ordinal790:PPROC
wsock32_ordinal790 equ <__imp_wsock32_ordinal790>

externdef __imp_wsock32_ordinal791:PPROC
wsock32_ordinal791 equ <__imp_wsock32_ordinal791>

externdef __imp_wsock32_ordinal792:PPROC
wsock32_ordinal792 equ <__imp_wsock32_ordinal792>

externdef __imp_wsock32_ordinal793:PPROC
wsock32_ordinal793 equ <__imp_wsock32_ordinal793>

externdef __imp_wsock32_ordinal794:PPROC
wsock32_ordinal794 equ <__imp_wsock32_ordinal794>

externdef __imp_wsock32_ordinal795:PPROC
wsock32_ordinal795 equ <__imp_wsock32_ordinal795>

externdef __imp_wsock32_ordinal796:PPROC
wsock32_ordinal796 equ <__imp_wsock32_ordinal796>

externdef __imp_wsock32_ordinal797:PPROC
wsock32_ordinal797 equ <__imp_wsock32_ordinal797>

externdef __imp_wsock32_ordinal798:PPROC
wsock32_ordinal798 equ <__imp_wsock32_ordinal798>

externdef __imp_wsock32_ordinal799:PPROC
wsock32_ordinal799 equ <__imp_wsock32_ordinal799>

externdef __imp_wsock32_ordinal79:PPROC
wsock32_ordinal79 equ <__imp_wsock32_ordinal79>

externdef __imp_wsock32_ordinal800:PPROC
wsock32_ordinal800 equ <__imp_wsock32_ordinal800>

externdef __imp_wsock32_ordinal801:PPROC
wsock32_ordinal801 equ <__imp_wsock32_ordinal801>

externdef __imp_wsock32_ordinal802:PPROC
wsock32_ordinal802 equ <__imp_wsock32_ordinal802>

externdef __imp_wsock32_ordinal803:PPROC
wsock32_ordinal803 equ <__imp_wsock32_ordinal803>

externdef __imp_wsock32_ordinal804:PPROC
wsock32_ordinal804 equ <__imp_wsock32_ordinal804>

externdef __imp_wsock32_ordinal805:PPROC
wsock32_ordinal805 equ <__imp_wsock32_ordinal805>

externdef __imp_wsock32_ordinal806:PPROC
wsock32_ordinal806 equ <__imp_wsock32_ordinal806>

externdef __imp_wsock32_ordinal807:PPROC
wsock32_ordinal807 equ <__imp_wsock32_ordinal807>

externdef __imp_wsock32_ordinal808:PPROC
wsock32_ordinal808 equ <__imp_wsock32_ordinal808>

externdef __imp_wsock32_ordinal809:PPROC
wsock32_ordinal809 equ <__imp_wsock32_ordinal809>

externdef __imp_wsock32_ordinal80:PPROC
wsock32_ordinal80 equ <__imp_wsock32_ordinal80>

externdef __imp_wsock32_ordinal810:PPROC
wsock32_ordinal810 equ <__imp_wsock32_ordinal810>

externdef __imp_wsock32_ordinal811:PPROC
wsock32_ordinal811 equ <__imp_wsock32_ordinal811>

externdef __imp_wsock32_ordinal812:PPROC
wsock32_ordinal812 equ <__imp_wsock32_ordinal812>

externdef __imp_wsock32_ordinal813:PPROC
wsock32_ordinal813 equ <__imp_wsock32_ordinal813>

externdef __imp_wsock32_ordinal814:PPROC
wsock32_ordinal814 equ <__imp_wsock32_ordinal814>

externdef __imp_wsock32_ordinal815:PPROC
wsock32_ordinal815 equ <__imp_wsock32_ordinal815>

externdef __imp_wsock32_ordinal816:PPROC
wsock32_ordinal816 equ <__imp_wsock32_ordinal816>

externdef __imp_wsock32_ordinal817:PPROC
wsock32_ordinal817 equ <__imp_wsock32_ordinal817>

externdef __imp_wsock32_ordinal818:PPROC
wsock32_ordinal818 equ <__imp_wsock32_ordinal818>

externdef __imp_wsock32_ordinal819:PPROC
wsock32_ordinal819 equ <__imp_wsock32_ordinal819>

externdef __imp_wsock32_ordinal81:PPROC
wsock32_ordinal81 equ <__imp_wsock32_ordinal81>

externdef __imp_wsock32_ordinal820:PPROC
wsock32_ordinal820 equ <__imp_wsock32_ordinal820>

externdef __imp_wsock32_ordinal821:PPROC
wsock32_ordinal821 equ <__imp_wsock32_ordinal821>

externdef __imp_wsock32_ordinal822:PPROC
wsock32_ordinal822 equ <__imp_wsock32_ordinal822>

externdef __imp_wsock32_ordinal823:PPROC
wsock32_ordinal823 equ <__imp_wsock32_ordinal823>

externdef __imp_wsock32_ordinal824:PPROC
wsock32_ordinal824 equ <__imp_wsock32_ordinal824>

externdef __imp_wsock32_ordinal825:PPROC
wsock32_ordinal825 equ <__imp_wsock32_ordinal825>

externdef __imp_wsock32_ordinal826:PPROC
wsock32_ordinal826 equ <__imp_wsock32_ordinal826>

externdef __imp_wsock32_ordinal827:PPROC
wsock32_ordinal827 equ <__imp_wsock32_ordinal827>

externdef __imp_wsock32_ordinal828:PPROC
wsock32_ordinal828 equ <__imp_wsock32_ordinal828>

externdef __imp_wsock32_ordinal829:PPROC
wsock32_ordinal829 equ <__imp_wsock32_ordinal829>

externdef __imp_wsock32_ordinal82:PPROC
wsock32_ordinal82 equ <__imp_wsock32_ordinal82>

externdef __imp_wsock32_ordinal830:PPROC
wsock32_ordinal830 equ <__imp_wsock32_ordinal830>

externdef __imp_wsock32_ordinal831:PPROC
wsock32_ordinal831 equ <__imp_wsock32_ordinal831>

externdef __imp_wsock32_ordinal832:PPROC
wsock32_ordinal832 equ <__imp_wsock32_ordinal832>

externdef __imp_wsock32_ordinal833:PPROC
wsock32_ordinal833 equ <__imp_wsock32_ordinal833>

externdef __imp_wsock32_ordinal834:PPROC
wsock32_ordinal834 equ <__imp_wsock32_ordinal834>

externdef __imp_wsock32_ordinal835:PPROC
wsock32_ordinal835 equ <__imp_wsock32_ordinal835>

externdef __imp_wsock32_ordinal836:PPROC
wsock32_ordinal836 equ <__imp_wsock32_ordinal836>

externdef __imp_wsock32_ordinal837:PPROC
wsock32_ordinal837 equ <__imp_wsock32_ordinal837>

externdef __imp_wsock32_ordinal838:PPROC
wsock32_ordinal838 equ <__imp_wsock32_ordinal838>

externdef __imp_wsock32_ordinal839:PPROC
wsock32_ordinal839 equ <__imp_wsock32_ordinal839>

externdef __imp_wsock32_ordinal83:PPROC
wsock32_ordinal83 equ <__imp_wsock32_ordinal83>

externdef __imp_wsock32_ordinal840:PPROC
wsock32_ordinal840 equ <__imp_wsock32_ordinal840>

externdef __imp_wsock32_ordinal841:PPROC
wsock32_ordinal841 equ <__imp_wsock32_ordinal841>

externdef __imp_wsock32_ordinal842:PPROC
wsock32_ordinal842 equ <__imp_wsock32_ordinal842>

externdef __imp_wsock32_ordinal843:PPROC
wsock32_ordinal843 equ <__imp_wsock32_ordinal843>

externdef __imp_wsock32_ordinal844:PPROC
wsock32_ordinal844 equ <__imp_wsock32_ordinal844>

externdef __imp_wsock32_ordinal845:PPROC
wsock32_ordinal845 equ <__imp_wsock32_ordinal845>

externdef __imp_wsock32_ordinal846:PPROC
wsock32_ordinal846 equ <__imp_wsock32_ordinal846>

externdef __imp_wsock32_ordinal847:PPROC
wsock32_ordinal847 equ <__imp_wsock32_ordinal847>

externdef __imp_wsock32_ordinal848:PPROC
wsock32_ordinal848 equ <__imp_wsock32_ordinal848>

externdef __imp_wsock32_ordinal849:PPROC
wsock32_ordinal849 equ <__imp_wsock32_ordinal849>

externdef __imp_wsock32_ordinal84:PPROC
wsock32_ordinal84 equ <__imp_wsock32_ordinal84>

externdef __imp_wsock32_ordinal850:PPROC
wsock32_ordinal850 equ <__imp_wsock32_ordinal850>

externdef __imp_wsock32_ordinal851:PPROC
wsock32_ordinal851 equ <__imp_wsock32_ordinal851>

externdef __imp_wsock32_ordinal852:PPROC
wsock32_ordinal852 equ <__imp_wsock32_ordinal852>

externdef __imp_wsock32_ordinal853:PPROC
wsock32_ordinal853 equ <__imp_wsock32_ordinal853>

externdef __imp_wsock32_ordinal854:PPROC
wsock32_ordinal854 equ <__imp_wsock32_ordinal854>

externdef __imp_wsock32_ordinal855:PPROC
wsock32_ordinal855 equ <__imp_wsock32_ordinal855>

externdef __imp_wsock32_ordinal856:PPROC
wsock32_ordinal856 equ <__imp_wsock32_ordinal856>

externdef __imp_wsock32_ordinal857:PPROC
wsock32_ordinal857 equ <__imp_wsock32_ordinal857>

externdef __imp_wsock32_ordinal858:PPROC
wsock32_ordinal858 equ <__imp_wsock32_ordinal858>

externdef __imp_wsock32_ordinal859:PPROC
wsock32_ordinal859 equ <__imp_wsock32_ordinal859>

externdef __imp_wsock32_ordinal85:PPROC
wsock32_ordinal85 equ <__imp_wsock32_ordinal85>

externdef __imp_wsock32_ordinal860:PPROC
wsock32_ordinal860 equ <__imp_wsock32_ordinal860>

externdef __imp_wsock32_ordinal861:PPROC
wsock32_ordinal861 equ <__imp_wsock32_ordinal861>

externdef __imp_wsock32_ordinal862:PPROC
wsock32_ordinal862 equ <__imp_wsock32_ordinal862>

externdef __imp_wsock32_ordinal863:PPROC
wsock32_ordinal863 equ <__imp_wsock32_ordinal863>

externdef __imp_wsock32_ordinal864:PPROC
wsock32_ordinal864 equ <__imp_wsock32_ordinal864>

externdef __imp_wsock32_ordinal865:PPROC
wsock32_ordinal865 equ <__imp_wsock32_ordinal865>

externdef __imp_wsock32_ordinal866:PPROC
wsock32_ordinal866 equ <__imp_wsock32_ordinal866>

externdef __imp_wsock32_ordinal867:PPROC
wsock32_ordinal867 equ <__imp_wsock32_ordinal867>

externdef __imp_wsock32_ordinal868:PPROC
wsock32_ordinal868 equ <__imp_wsock32_ordinal868>

externdef __imp_wsock32_ordinal869:PPROC
wsock32_ordinal869 equ <__imp_wsock32_ordinal869>

externdef __imp_wsock32_ordinal86:PPROC
wsock32_ordinal86 equ <__imp_wsock32_ordinal86>

externdef __imp_wsock32_ordinal870:PPROC
wsock32_ordinal870 equ <__imp_wsock32_ordinal870>

externdef __imp_wsock32_ordinal871:PPROC
wsock32_ordinal871 equ <__imp_wsock32_ordinal871>

externdef __imp_wsock32_ordinal872:PPROC
wsock32_ordinal872 equ <__imp_wsock32_ordinal872>

externdef __imp_wsock32_ordinal873:PPROC
wsock32_ordinal873 equ <__imp_wsock32_ordinal873>

externdef __imp_wsock32_ordinal874:PPROC
wsock32_ordinal874 equ <__imp_wsock32_ordinal874>

externdef __imp_wsock32_ordinal875:PPROC
wsock32_ordinal875 equ <__imp_wsock32_ordinal875>

externdef __imp_wsock32_ordinal876:PPROC
wsock32_ordinal876 equ <__imp_wsock32_ordinal876>

externdef __imp_wsock32_ordinal877:PPROC
wsock32_ordinal877 equ <__imp_wsock32_ordinal877>

externdef __imp_wsock32_ordinal878:PPROC
wsock32_ordinal878 equ <__imp_wsock32_ordinal878>

externdef __imp_wsock32_ordinal879:PPROC
wsock32_ordinal879 equ <__imp_wsock32_ordinal879>

externdef __imp_wsock32_ordinal87:PPROC
wsock32_ordinal87 equ <__imp_wsock32_ordinal87>

externdef __imp_wsock32_ordinal880:PPROC
wsock32_ordinal880 equ <__imp_wsock32_ordinal880>

externdef __imp_wsock32_ordinal881:PPROC
wsock32_ordinal881 equ <__imp_wsock32_ordinal881>

externdef __imp_wsock32_ordinal882:PPROC
wsock32_ordinal882 equ <__imp_wsock32_ordinal882>

externdef __imp_wsock32_ordinal883:PPROC
wsock32_ordinal883 equ <__imp_wsock32_ordinal883>

externdef __imp_wsock32_ordinal884:PPROC
wsock32_ordinal884 equ <__imp_wsock32_ordinal884>

externdef __imp_wsock32_ordinal885:PPROC
wsock32_ordinal885 equ <__imp_wsock32_ordinal885>

externdef __imp_wsock32_ordinal886:PPROC
wsock32_ordinal886 equ <__imp_wsock32_ordinal886>

externdef __imp_wsock32_ordinal887:PPROC
wsock32_ordinal887 equ <__imp_wsock32_ordinal887>

externdef __imp_wsock32_ordinal888:PPROC
wsock32_ordinal888 equ <__imp_wsock32_ordinal888>

externdef __imp_wsock32_ordinal889:PPROC
wsock32_ordinal889 equ <__imp_wsock32_ordinal889>

externdef __imp_wsock32_ordinal88:PPROC
wsock32_ordinal88 equ <__imp_wsock32_ordinal88>

externdef __imp_wsock32_ordinal890:PPROC
wsock32_ordinal890 equ <__imp_wsock32_ordinal890>

externdef __imp_wsock32_ordinal891:PPROC
wsock32_ordinal891 equ <__imp_wsock32_ordinal891>

externdef __imp_wsock32_ordinal892:PPROC
wsock32_ordinal892 equ <__imp_wsock32_ordinal892>

externdef __imp_wsock32_ordinal893:PPROC
wsock32_ordinal893 equ <__imp_wsock32_ordinal893>

externdef __imp_wsock32_ordinal894:PPROC
wsock32_ordinal894 equ <__imp_wsock32_ordinal894>

externdef __imp_wsock32_ordinal895:PPROC
wsock32_ordinal895 equ <__imp_wsock32_ordinal895>

externdef __imp_wsock32_ordinal896:PPROC
wsock32_ordinal896 equ <__imp_wsock32_ordinal896>

externdef __imp_wsock32_ordinal897:PPROC
wsock32_ordinal897 equ <__imp_wsock32_ordinal897>

externdef __imp_wsock32_ordinal898:PPROC
wsock32_ordinal898 equ <__imp_wsock32_ordinal898>

externdef __imp_wsock32_ordinal899:PPROC
wsock32_ordinal899 equ <__imp_wsock32_ordinal899>

externdef __imp_wsock32_ordinal89:PPROC
wsock32_ordinal89 equ <__imp_wsock32_ordinal89>

externdef __imp_wsock32_ordinal900:PPROC
wsock32_ordinal900 equ <__imp_wsock32_ordinal900>

externdef __imp_wsock32_ordinal901:PPROC
wsock32_ordinal901 equ <__imp_wsock32_ordinal901>

externdef __imp_wsock32_ordinal902:PPROC
wsock32_ordinal902 equ <__imp_wsock32_ordinal902>

externdef __imp_wsock32_ordinal903:PPROC
wsock32_ordinal903 equ <__imp_wsock32_ordinal903>

externdef __imp_wsock32_ordinal904:PPROC
wsock32_ordinal904 equ <__imp_wsock32_ordinal904>

externdef __imp_wsock32_ordinal905:PPROC
wsock32_ordinal905 equ <__imp_wsock32_ordinal905>

externdef __imp_wsock32_ordinal906:PPROC
wsock32_ordinal906 equ <__imp_wsock32_ordinal906>

externdef __imp_wsock32_ordinal907:PPROC
wsock32_ordinal907 equ <__imp_wsock32_ordinal907>

externdef __imp_wsock32_ordinal908:PPROC
wsock32_ordinal908 equ <__imp_wsock32_ordinal908>

externdef __imp_wsock32_ordinal909:PPROC
wsock32_ordinal909 equ <__imp_wsock32_ordinal909>

externdef __imp_wsock32_ordinal90:PPROC
wsock32_ordinal90 equ <__imp_wsock32_ordinal90>

externdef __imp_wsock32_ordinal910:PPROC
wsock32_ordinal910 equ <__imp_wsock32_ordinal910>

externdef __imp_wsock32_ordinal911:PPROC
wsock32_ordinal911 equ <__imp_wsock32_ordinal911>

externdef __imp_wsock32_ordinal912:PPROC
wsock32_ordinal912 equ <__imp_wsock32_ordinal912>

externdef __imp_wsock32_ordinal913:PPROC
wsock32_ordinal913 equ <__imp_wsock32_ordinal913>

externdef __imp_wsock32_ordinal914:PPROC
wsock32_ordinal914 equ <__imp_wsock32_ordinal914>

externdef __imp_wsock32_ordinal915:PPROC
wsock32_ordinal915 equ <__imp_wsock32_ordinal915>

externdef __imp_wsock32_ordinal916:PPROC
wsock32_ordinal916 equ <__imp_wsock32_ordinal916>

externdef __imp_wsock32_ordinal917:PPROC
wsock32_ordinal917 equ <__imp_wsock32_ordinal917>

externdef __imp_wsock32_ordinal918:PPROC
wsock32_ordinal918 equ <__imp_wsock32_ordinal918>

externdef __imp_wsock32_ordinal919:PPROC
wsock32_ordinal919 equ <__imp_wsock32_ordinal919>

externdef __imp_wsock32_ordinal91:PPROC
wsock32_ordinal91 equ <__imp_wsock32_ordinal91>

externdef __imp_wsock32_ordinal920:PPROC
wsock32_ordinal920 equ <__imp_wsock32_ordinal920>

externdef __imp_wsock32_ordinal921:PPROC
wsock32_ordinal921 equ <__imp_wsock32_ordinal921>

externdef __imp_wsock32_ordinal922:PPROC
wsock32_ordinal922 equ <__imp_wsock32_ordinal922>

externdef __imp_wsock32_ordinal923:PPROC
wsock32_ordinal923 equ <__imp_wsock32_ordinal923>

externdef __imp_wsock32_ordinal924:PPROC
wsock32_ordinal924 equ <__imp_wsock32_ordinal924>

externdef __imp_wsock32_ordinal925:PPROC
wsock32_ordinal925 equ <__imp_wsock32_ordinal925>

externdef __imp_wsock32_ordinal926:PPROC
wsock32_ordinal926 equ <__imp_wsock32_ordinal926>

externdef __imp_wsock32_ordinal927:PPROC
wsock32_ordinal927 equ <__imp_wsock32_ordinal927>

externdef __imp_wsock32_ordinal928:PPROC
wsock32_ordinal928 equ <__imp_wsock32_ordinal928>

externdef __imp_wsock32_ordinal929:PPROC
wsock32_ordinal929 equ <__imp_wsock32_ordinal929>

externdef __imp_wsock32_ordinal92:PPROC
wsock32_ordinal92 equ <__imp_wsock32_ordinal92>

externdef __imp_wsock32_ordinal930:PPROC
wsock32_ordinal930 equ <__imp_wsock32_ordinal930>

externdef __imp_wsock32_ordinal931:PPROC
wsock32_ordinal931 equ <__imp_wsock32_ordinal931>

externdef __imp_wsock32_ordinal932:PPROC
wsock32_ordinal932 equ <__imp_wsock32_ordinal932>

externdef __imp_wsock32_ordinal933:PPROC
wsock32_ordinal933 equ <__imp_wsock32_ordinal933>

externdef __imp_wsock32_ordinal934:PPROC
wsock32_ordinal934 equ <__imp_wsock32_ordinal934>

externdef __imp_wsock32_ordinal935:PPROC
wsock32_ordinal935 equ <__imp_wsock32_ordinal935>

externdef __imp_wsock32_ordinal936:PPROC
wsock32_ordinal936 equ <__imp_wsock32_ordinal936>

externdef __imp_wsock32_ordinal937:PPROC
wsock32_ordinal937 equ <__imp_wsock32_ordinal937>

externdef __imp_wsock32_ordinal938:PPROC
wsock32_ordinal938 equ <__imp_wsock32_ordinal938>

externdef __imp_wsock32_ordinal939:PPROC
wsock32_ordinal939 equ <__imp_wsock32_ordinal939>

externdef __imp_wsock32_ordinal93:PPROC
wsock32_ordinal93 equ <__imp_wsock32_ordinal93>

externdef __imp_wsock32_ordinal940:PPROC
wsock32_ordinal940 equ <__imp_wsock32_ordinal940>

externdef __imp_wsock32_ordinal941:PPROC
wsock32_ordinal941 equ <__imp_wsock32_ordinal941>

externdef __imp_wsock32_ordinal942:PPROC
wsock32_ordinal942 equ <__imp_wsock32_ordinal942>

externdef __imp_wsock32_ordinal943:PPROC
wsock32_ordinal943 equ <__imp_wsock32_ordinal943>

externdef __imp_wsock32_ordinal944:PPROC
wsock32_ordinal944 equ <__imp_wsock32_ordinal944>

externdef __imp_wsock32_ordinal945:PPROC
wsock32_ordinal945 equ <__imp_wsock32_ordinal945>

externdef __imp_wsock32_ordinal946:PPROC
wsock32_ordinal946 equ <__imp_wsock32_ordinal946>

externdef __imp_wsock32_ordinal947:PPROC
wsock32_ordinal947 equ <__imp_wsock32_ordinal947>

externdef __imp_wsock32_ordinal948:PPROC
wsock32_ordinal948 equ <__imp_wsock32_ordinal948>

externdef __imp_wsock32_ordinal949:PPROC
wsock32_ordinal949 equ <__imp_wsock32_ordinal949>

externdef __imp_wsock32_ordinal94:PPROC
wsock32_ordinal94 equ <__imp_wsock32_ordinal94>

externdef __imp_wsock32_ordinal950:PPROC
wsock32_ordinal950 equ <__imp_wsock32_ordinal950>

externdef __imp_wsock32_ordinal951:PPROC
wsock32_ordinal951 equ <__imp_wsock32_ordinal951>

externdef __imp_wsock32_ordinal952:PPROC
wsock32_ordinal952 equ <__imp_wsock32_ordinal952>

externdef __imp_wsock32_ordinal953:PPROC
wsock32_ordinal953 equ <__imp_wsock32_ordinal953>

externdef __imp_wsock32_ordinal954:PPROC
wsock32_ordinal954 equ <__imp_wsock32_ordinal954>

externdef __imp_wsock32_ordinal955:PPROC
wsock32_ordinal955 equ <__imp_wsock32_ordinal955>

externdef __imp_wsock32_ordinal956:PPROC
wsock32_ordinal956 equ <__imp_wsock32_ordinal956>

externdef __imp_wsock32_ordinal957:PPROC
wsock32_ordinal957 equ <__imp_wsock32_ordinal957>

externdef __imp_wsock32_ordinal958:PPROC
wsock32_ordinal958 equ <__imp_wsock32_ordinal958>

externdef __imp_wsock32_ordinal959:PPROC
wsock32_ordinal959 equ <__imp_wsock32_ordinal959>

externdef __imp_wsock32_ordinal95:PPROC
wsock32_ordinal95 equ <__imp_wsock32_ordinal95>

externdef __imp_wsock32_ordinal960:PPROC
wsock32_ordinal960 equ <__imp_wsock32_ordinal960>

externdef __imp_wsock32_ordinal961:PPROC
wsock32_ordinal961 equ <__imp_wsock32_ordinal961>

externdef __imp_wsock32_ordinal962:PPROC
wsock32_ordinal962 equ <__imp_wsock32_ordinal962>

externdef __imp_wsock32_ordinal963:PPROC
wsock32_ordinal963 equ <__imp_wsock32_ordinal963>

externdef __imp_wsock32_ordinal964:PPROC
wsock32_ordinal964 equ <__imp_wsock32_ordinal964>

externdef __imp_wsock32_ordinal965:PPROC
wsock32_ordinal965 equ <__imp_wsock32_ordinal965>

externdef __imp_wsock32_ordinal966:PPROC
wsock32_ordinal966 equ <__imp_wsock32_ordinal966>

externdef __imp_wsock32_ordinal967:PPROC
wsock32_ordinal967 equ <__imp_wsock32_ordinal967>

externdef __imp_wsock32_ordinal968:PPROC
wsock32_ordinal968 equ <__imp_wsock32_ordinal968>

externdef __imp_wsock32_ordinal969:PPROC
wsock32_ordinal969 equ <__imp_wsock32_ordinal969>

externdef __imp_wsock32_ordinal96:PPROC
wsock32_ordinal96 equ <__imp_wsock32_ordinal96>

externdef __imp_wsock32_ordinal970:PPROC
wsock32_ordinal970 equ <__imp_wsock32_ordinal970>

externdef __imp_wsock32_ordinal971:PPROC
wsock32_ordinal971 equ <__imp_wsock32_ordinal971>

externdef __imp_wsock32_ordinal972:PPROC
wsock32_ordinal972 equ <__imp_wsock32_ordinal972>

externdef __imp_wsock32_ordinal973:PPROC
wsock32_ordinal973 equ <__imp_wsock32_ordinal973>

externdef __imp_wsock32_ordinal974:PPROC
wsock32_ordinal974 equ <__imp_wsock32_ordinal974>

externdef __imp_wsock32_ordinal975:PPROC
wsock32_ordinal975 equ <__imp_wsock32_ordinal975>

externdef __imp_wsock32_ordinal976:PPROC
wsock32_ordinal976 equ <__imp_wsock32_ordinal976>

externdef __imp_wsock32_ordinal977:PPROC
wsock32_ordinal977 equ <__imp_wsock32_ordinal977>

externdef __imp_wsock32_ordinal978:PPROC
wsock32_ordinal978 equ <__imp_wsock32_ordinal978>

externdef __imp_wsock32_ordinal979:PPROC
wsock32_ordinal979 equ <__imp_wsock32_ordinal979>

externdef __imp_wsock32_ordinal97:PPROC
wsock32_ordinal97 equ <__imp_wsock32_ordinal97>

externdef __imp_wsock32_ordinal980:PPROC
wsock32_ordinal980 equ <__imp_wsock32_ordinal980>

externdef __imp_wsock32_ordinal981:PPROC
wsock32_ordinal981 equ <__imp_wsock32_ordinal981>

externdef __imp_wsock32_ordinal982:PPROC
wsock32_ordinal982 equ <__imp_wsock32_ordinal982>

externdef __imp_wsock32_ordinal983:PPROC
wsock32_ordinal983 equ <__imp_wsock32_ordinal983>

externdef __imp_wsock32_ordinal984:PPROC
wsock32_ordinal984 equ <__imp_wsock32_ordinal984>

externdef __imp_wsock32_ordinal985:PPROC
wsock32_ordinal985 equ <__imp_wsock32_ordinal985>

externdef __imp_wsock32_ordinal986:PPROC
wsock32_ordinal986 equ <__imp_wsock32_ordinal986>

externdef __imp_wsock32_ordinal987:PPROC
wsock32_ordinal987 equ <__imp_wsock32_ordinal987>

externdef __imp_wsock32_ordinal988:PPROC
wsock32_ordinal988 equ <__imp_wsock32_ordinal988>

externdef __imp_wsock32_ordinal989:PPROC
wsock32_ordinal989 equ <__imp_wsock32_ordinal989>

externdef __imp_wsock32_ordinal98:PPROC
wsock32_ordinal98 equ <__imp_wsock32_ordinal98>

externdef __imp_wsock32_ordinal990:PPROC
wsock32_ordinal990 equ <__imp_wsock32_ordinal990>

externdef __imp_wsock32_ordinal991:PPROC
wsock32_ordinal991 equ <__imp_wsock32_ordinal991>

externdef __imp_wsock32_ordinal992:PPROC
wsock32_ordinal992 equ <__imp_wsock32_ordinal992>

externdef __imp_wsock32_ordinal993:PPROC
wsock32_ordinal993 equ <__imp_wsock32_ordinal993>

externdef __imp_wsock32_ordinal994:PPROC
wsock32_ordinal994 equ <__imp_wsock32_ordinal994>

externdef __imp_wsock32_ordinal995:PPROC
wsock32_ordinal995 equ <__imp_wsock32_ordinal995>

externdef __imp_wsock32_ordinal996:PPROC
wsock32_ordinal996 equ <__imp_wsock32_ordinal996>

externdef __imp_wsock32_ordinal997:PPROC
wsock32_ordinal997 equ <__imp_wsock32_ordinal997>

externdef __imp_wsock32_ordinal998:PPROC
wsock32_ordinal998 equ <__imp_wsock32_ordinal998>

externdef __imp_wsock32_ordinal999:PPROC
wsock32_ordinal999 equ <__imp_wsock32_ordinal999>

externdef __imp_wsock32_ordinal99:PPROC
wsock32_ordinal99 equ <__imp_wsock32_ordinal99>
