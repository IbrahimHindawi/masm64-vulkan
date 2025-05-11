externdef __imp_BreakConnections:PPROC
BreakConnections equ <__imp_BreakConnections>

externdef __imp_CSCBeginSynchronizationW:PPROC
CSCBeginSynchronizationW equ <__imp_CSCBeginSynchronizationW>
  IFDEF __UNICODE__
    CSCBeginSynchronization equ <__imp_CSCBeginSynchronizationW>
  ENDIF

externdef __imp_CSCCheckShareOnlineA:PPROC
CSCCheckShareOnlineA equ <__imp_CSCCheckShareOnlineA>
  IFNDEF __UNICODE__
    CSCCheckShareOnline equ <__imp_CSCCheckShareOnlineA>
  ENDIF

externdef __imp_CSCCheckShareOnlineExW:PPROC
CSCCheckShareOnlineExW equ <__imp_CSCCheckShareOnlineExW>
  IFDEF __UNICODE__
    CSCCheckShareOnlineEx equ <__imp_CSCCheckShareOnlineExW>
  ENDIF

externdef __imp_CSCCheckShareOnlineW:PPROC
CSCCheckShareOnlineW equ <__imp_CSCCheckShareOnlineW>
  IFDEF __UNICODE__
    CSCCheckShareOnline equ <__imp_CSCCheckShareOnlineW>
  ENDIF

externdef __imp_CSCCopyReplicaA:PPROC
CSCCopyReplicaA equ <__imp_CSCCopyReplicaA>
  IFNDEF __UNICODE__
    CSCCopyReplica equ <__imp_CSCCopyReplicaA>
  ENDIF

externdef __imp_CSCCopyReplicaW:PPROC
CSCCopyReplicaW equ <__imp_CSCCopyReplicaW>
  IFDEF __UNICODE__
    CSCCopyReplica equ <__imp_CSCCopyReplicaW>
  ENDIF

externdef __imp_CSCDeleteA:PPROC
CSCDeleteA equ <__imp_CSCDeleteA>
  IFNDEF __UNICODE__
    CSCDelete equ <__imp_CSCDeleteA>
  ENDIF

externdef __imp_CSCDeleteW:PPROC
CSCDeleteW equ <__imp_CSCDeleteW>
  IFDEF __UNICODE__
    CSCDelete equ <__imp_CSCDeleteW>
  ENDIF

externdef __imp_CSCDoEnableDisable:PPROC
CSCDoEnableDisable equ <__imp_CSCDoEnableDisable>

externdef __imp_CSCDoLocalRenameA:PPROC
CSCDoLocalRenameA equ <__imp_CSCDoLocalRenameA>
  IFNDEF __UNICODE__
    CSCDoLocalRename equ <__imp_CSCDoLocalRenameA>
  ENDIF

externdef __imp_CSCDoLocalRenameExW:PPROC
CSCDoLocalRenameExW equ <__imp_CSCDoLocalRenameExW>
  IFDEF __UNICODE__
    CSCDoLocalRenameEx equ <__imp_CSCDoLocalRenameExW>
  ENDIF

externdef __imp_CSCDoLocalRenameW:PPROC
CSCDoLocalRenameW equ <__imp_CSCDoLocalRenameW>
  IFDEF __UNICODE__
    CSCDoLocalRename equ <__imp_CSCDoLocalRenameW>
  ENDIF

externdef __imp_CSCEncryptDecryptDatabase:PPROC
CSCEncryptDecryptDatabase equ <__imp_CSCEncryptDecryptDatabase>

externdef __imp_CSCEndSynchronizationW:PPROC
CSCEndSynchronizationW equ <__imp_CSCEndSynchronizationW>
  IFDEF __UNICODE__
    CSCEndSynchronization equ <__imp_CSCEndSynchronizationW>
  ENDIF

externdef __imp_CSCEnumForStatsA:PPROC
CSCEnumForStatsA equ <__imp_CSCEnumForStatsA>
  IFNDEF __UNICODE__
    CSCEnumForStats equ <__imp_CSCEnumForStatsA>
  ENDIF

externdef __imp_CSCEnumForStatsExA:PPROC
CSCEnumForStatsExA equ <__imp_CSCEnumForStatsExA>
  IFNDEF __UNICODE__
    CSCEnumForStatsEx equ <__imp_CSCEnumForStatsExA>
  ENDIF

externdef __imp_CSCEnumForStatsExW:PPROC
CSCEnumForStatsExW equ <__imp_CSCEnumForStatsExW>
  IFDEF __UNICODE__
    CSCEnumForStatsEx equ <__imp_CSCEnumForStatsExW>
  ENDIF

externdef __imp_CSCEnumForStatsW:PPROC
CSCEnumForStatsW equ <__imp_CSCEnumForStatsW>
  IFDEF __UNICODE__
    CSCEnumForStats equ <__imp_CSCEnumForStatsW>
  ENDIF

externdef __imp_CSCFillSparseFilesA:PPROC
CSCFillSparseFilesA equ <__imp_CSCFillSparseFilesA>
  IFNDEF __UNICODE__
    CSCFillSparseFiles equ <__imp_CSCFillSparseFilesA>
  ENDIF

externdef __imp_CSCFillSparseFilesW:PPROC
CSCFillSparseFilesW equ <__imp_CSCFillSparseFilesW>
  IFDEF __UNICODE__
    CSCFillSparseFiles equ <__imp_CSCFillSparseFilesW>
  ENDIF

externdef __imp_CSCFindClose:PPROC
CSCFindClose equ <__imp_CSCFindClose>

externdef __imp_CSCFindFirstFileA:PPROC
CSCFindFirstFileA equ <__imp_CSCFindFirstFileA>
  IFNDEF __UNICODE__
    CSCFindFirstFile equ <__imp_CSCFindFirstFileA>
  ENDIF

externdef __imp_CSCFindFirstFileForSidA:PPROC
CSCFindFirstFileForSidA equ <__imp_CSCFindFirstFileForSidA>
  IFNDEF __UNICODE__
    CSCFindFirstFileForSid equ <__imp_CSCFindFirstFileForSidA>
  ENDIF

externdef __imp_CSCFindFirstFileForSidW:PPROC
CSCFindFirstFileForSidW equ <__imp_CSCFindFirstFileForSidW>
  IFDEF __UNICODE__
    CSCFindFirstFileForSid equ <__imp_CSCFindFirstFileForSidW>
  ENDIF

externdef __imp_CSCFindFirstFileW:PPROC
CSCFindFirstFileW equ <__imp_CSCFindFirstFileW>
  IFDEF __UNICODE__
    CSCFindFirstFile equ <__imp_CSCFindFirstFileW>
  ENDIF

externdef __imp_CSCFindNextFileA:PPROC
CSCFindNextFileA equ <__imp_CSCFindNextFileA>
  IFNDEF __UNICODE__
    CSCFindNextFile equ <__imp_CSCFindNextFileA>
  ENDIF

externdef __imp_CSCFindNextFileW:PPROC
CSCFindNextFileW equ <__imp_CSCFindNextFileW>
  IFDEF __UNICODE__
    CSCFindNextFile equ <__imp_CSCFindNextFileW>
  ENDIF

externdef __imp_CSCFreeSpace:PPROC
CSCFreeSpace equ <__imp_CSCFreeSpace>

externdef __imp_CSCGetSpaceUsageA:PPROC
CSCGetSpaceUsageA equ <__imp_CSCGetSpaceUsageA>
  IFNDEF __UNICODE__
    CSCGetSpaceUsage equ <__imp_CSCGetSpaceUsageA>
  ENDIF

externdef __imp_CSCGetSpaceUsageW:PPROC
CSCGetSpaceUsageW equ <__imp_CSCGetSpaceUsageW>
  IFDEF __UNICODE__
    CSCGetSpaceUsage equ <__imp_CSCGetSpaceUsageW>
  ENDIF

externdef __imp_CSCIsCSCEnabled:PPROC
CSCIsCSCEnabled equ <__imp_CSCIsCSCEnabled>

externdef __imp_CSCIsServerOfflineA:PPROC
CSCIsServerOfflineA equ <__imp_CSCIsServerOfflineA>
  IFNDEF __UNICODE__
    CSCIsServerOffline equ <__imp_CSCIsServerOfflineA>
  ENDIF

externdef __imp_CSCIsServerOfflineW:PPROC
CSCIsServerOfflineW equ <__imp_CSCIsServerOfflineW>
  IFDEF __UNICODE__
    CSCIsServerOffline equ <__imp_CSCIsServerOfflineW>
  ENDIF

externdef __imp_CSCMergeShareA:PPROC
CSCMergeShareA equ <__imp_CSCMergeShareA>
  IFNDEF __UNICODE__
    CSCMergeShare equ <__imp_CSCMergeShareA>
  ENDIF

externdef __imp_CSCMergeShareW:PPROC
CSCMergeShareW equ <__imp_CSCMergeShareW>
  IFDEF __UNICODE__
    CSCMergeShare equ <__imp_CSCMergeShareW>
  ENDIF

externdef __imp_CSCPinFileA:PPROC
CSCPinFileA equ <__imp_CSCPinFileA>
  IFNDEF __UNICODE__
    CSCPinFile equ <__imp_CSCPinFileA>
  ENDIF

externdef __imp_CSCPinFileW:PPROC
CSCPinFileW equ <__imp_CSCPinFileW>
  IFDEF __UNICODE__
    CSCPinFile equ <__imp_CSCPinFileW>
  ENDIF

externdef __imp_CSCPurgeUnpinnedFiles:PPROC
CSCPurgeUnpinnedFiles equ <__imp_CSCPurgeUnpinnedFiles>

externdef __imp_CSCQueryDatabaseStatus:PPROC
CSCQueryDatabaseStatus equ <__imp_CSCQueryDatabaseStatus>

externdef __imp_CSCQueryFileStatusA:PPROC
CSCQueryFileStatusA equ <__imp_CSCQueryFileStatusA>
  IFNDEF __UNICODE__
    CSCQueryFileStatus equ <__imp_CSCQueryFileStatusA>
  ENDIF

externdef __imp_CSCQueryFileStatusExA:PPROC
CSCQueryFileStatusExA equ <__imp_CSCQueryFileStatusExA>
  IFNDEF __UNICODE__
    CSCQueryFileStatusEx equ <__imp_CSCQueryFileStatusExA>
  ENDIF

externdef __imp_CSCQueryFileStatusExW:PPROC
CSCQueryFileStatusExW equ <__imp_CSCQueryFileStatusExW>
  IFDEF __UNICODE__
    CSCQueryFileStatusEx equ <__imp_CSCQueryFileStatusExW>
  ENDIF

externdef __imp_CSCQueryFileStatusW:PPROC
CSCQueryFileStatusW equ <__imp_CSCQueryFileStatusW>
  IFDEF __UNICODE__
    CSCQueryFileStatus equ <__imp_CSCQueryFileStatusW>
  ENDIF

externdef __imp_CSCQueryShareStatusA:PPROC
CSCQueryShareStatusA equ <__imp_CSCQueryShareStatusA>
  IFNDEF __UNICODE__
    CSCQueryShareStatus equ <__imp_CSCQueryShareStatusA>
  ENDIF

externdef __imp_CSCQueryShareStatusW:PPROC
CSCQueryShareStatusW equ <__imp_CSCQueryShareStatusW>
  IFDEF __UNICODE__
    CSCQueryShareStatus equ <__imp_CSCQueryShareStatusW>
  ENDIF

externdef __imp_CSCSetMaxSpace:PPROC
CSCSetMaxSpace equ <__imp_CSCSetMaxSpace>

externdef __imp_CSCShareIdToShareName:PPROC
CSCShareIdToShareName equ <__imp_CSCShareIdToShareName>

externdef __imp_CSCTransitionServerOnlineA:PPROC
CSCTransitionServerOnlineA equ <__imp_CSCTransitionServerOnlineA>
  IFNDEF __UNICODE__
    CSCTransitionServerOnline equ <__imp_CSCTransitionServerOnlineA>
  ENDIF

externdef __imp_CSCTransitionServerOnlineW:PPROC
CSCTransitionServerOnlineW equ <__imp_CSCTransitionServerOnlineW>
  IFDEF __UNICODE__
    CSCTransitionServerOnline equ <__imp_CSCTransitionServerOnlineW>
  ENDIF

externdef __imp_CSCUnpinFileA:PPROC
CSCUnpinFileA equ <__imp_CSCUnpinFileA>
  IFNDEF __UNICODE__
    CSCUnpinFile equ <__imp_CSCUnpinFileA>
  ENDIF

externdef __imp_CSCUnpinFileW:PPROC
CSCUnpinFileW equ <__imp_CSCUnpinFileW>
  IFDEF __UNICODE__
    CSCUnpinFile equ <__imp_CSCUnpinFileW>
  ENDIF

externdef __imp_CheckCSC:PPROC
CheckCSC equ <__imp_CheckCSC>

externdef __imp_CheckCSCEx:PPROC
CheckCSCEx equ <__imp_CheckCSCEx>

externdef __imp_LogoffHappened:PPROC
LogoffHappened equ <__imp_LogoffHappened>

externdef __imp_LogonHappened:PPROC
LogonHappened equ <__imp_LogonHappened>

externdef __imp_MprServiceProc:PPROC
MprServiceProc equ <__imp_MprServiceProc>

externdef __imp_ReInt_WndProc:PPROC
ReInt_WndProc equ <__imp_ReInt_WndProc>

externdef __imp_RefreshConnections:PPROC
RefreshConnections equ <__imp_RefreshConnections>

externdef __imp_Update:PPROC
Update equ <__imp_Update>

externdef __imp_WinlogonLockEvent:PPROC
WinlogonLockEvent equ <__imp_WinlogonLockEvent>

externdef __imp_WinlogonLogoffEvent:PPROC
WinlogonLogoffEvent equ <__imp_WinlogonLogoffEvent>

externdef __imp_WinlogonLogonEvent:PPROC
WinlogonLogonEvent equ <__imp_WinlogonLogonEvent>

externdef __imp_WinlogonScreenSaverEvent:PPROC
WinlogonScreenSaverEvent equ <__imp_WinlogonScreenSaverEvent>

externdef __imp_WinlogonShutdownEvent:PPROC
WinlogonShutdownEvent equ <__imp_WinlogonShutdownEvent>

externdef __imp_WinlogonStartShellEvent:PPROC
WinlogonStartShellEvent equ <__imp_WinlogonStartShellEvent>

externdef __imp_WinlogonStartupEvent:PPROC
WinlogonStartupEvent equ <__imp_WinlogonStartupEvent>

externdef __imp_WinlogonUnlockEvent:PPROC
WinlogonUnlockEvent equ <__imp_WinlogonUnlockEvent>

externdef __imp_cscdll_ordinal100:PPROC
cscdll_ordinal100 equ <__imp_cscdll_ordinal100>

externdef __imp_cscdll_ordinal101:PPROC
cscdll_ordinal101 equ <__imp_cscdll_ordinal101>

externdef __imp_cscdll_ordinal102:PPROC
cscdll_ordinal102 equ <__imp_cscdll_ordinal102>

externdef __imp_cscdll_ordinal103:PPROC
cscdll_ordinal103 equ <__imp_cscdll_ordinal103>

externdef __imp_cscdll_ordinal104:PPROC
cscdll_ordinal104 equ <__imp_cscdll_ordinal104>

externdef __imp_cscdll_ordinal105:PPROC
cscdll_ordinal105 equ <__imp_cscdll_ordinal105>

externdef __imp_cscdll_ordinal106:PPROC
cscdll_ordinal106 equ <__imp_cscdll_ordinal106>

externdef __imp_cscdll_ordinal107:PPROC
cscdll_ordinal107 equ <__imp_cscdll_ordinal107>

externdef __imp_cscdll_ordinal108:PPROC
cscdll_ordinal108 equ <__imp_cscdll_ordinal108>

externdef __imp_cscdll_ordinal109:PPROC
cscdll_ordinal109 equ <__imp_cscdll_ordinal109>

externdef __imp_cscdll_ordinal110:PPROC
cscdll_ordinal110 equ <__imp_cscdll_ordinal110>

externdef __imp_cscdll_ordinal111:PPROC
cscdll_ordinal111 equ <__imp_cscdll_ordinal111>

externdef __imp_cscdll_ordinal112:PPROC
cscdll_ordinal112 equ <__imp_cscdll_ordinal112>

externdef __imp_cscdll_ordinal113:PPROC
cscdll_ordinal113 equ <__imp_cscdll_ordinal113>

externdef __imp_cscdll_ordinal114:PPROC
cscdll_ordinal114 equ <__imp_cscdll_ordinal114>

externdef __imp_cscdll_ordinal115:PPROC
cscdll_ordinal115 equ <__imp_cscdll_ordinal115>

externdef __imp_cscdll_ordinal116:PPROC
cscdll_ordinal116 equ <__imp_cscdll_ordinal116>

externdef __imp_cscdll_ordinal117:PPROC
cscdll_ordinal117 equ <__imp_cscdll_ordinal117>

externdef __imp_cscdll_ordinal118:PPROC
cscdll_ordinal118 equ <__imp_cscdll_ordinal118>

externdef __imp_cscdll_ordinal119:PPROC
cscdll_ordinal119 equ <__imp_cscdll_ordinal119>

externdef __imp_cscdll_ordinal120:PPROC
cscdll_ordinal120 equ <__imp_cscdll_ordinal120>

externdef __imp_cscdll_ordinal121:PPROC
cscdll_ordinal121 equ <__imp_cscdll_ordinal121>

externdef __imp_cscdll_ordinal122:PPROC
cscdll_ordinal122 equ <__imp_cscdll_ordinal122>

externdef __imp_cscdll_ordinal123:PPROC
cscdll_ordinal123 equ <__imp_cscdll_ordinal123>

externdef __imp_cscdll_ordinal124:PPROC
cscdll_ordinal124 equ <__imp_cscdll_ordinal124>

externdef __imp_cscdll_ordinal125:PPROC
cscdll_ordinal125 equ <__imp_cscdll_ordinal125>

externdef __imp_cscdll_ordinal126:PPROC
cscdll_ordinal126 equ <__imp_cscdll_ordinal126>

externdef __imp_cscdll_ordinal127:PPROC
cscdll_ordinal127 equ <__imp_cscdll_ordinal127>

externdef __imp_cscdll_ordinal128:PPROC
cscdll_ordinal128 equ <__imp_cscdll_ordinal128>

externdef __imp_cscdll_ordinal129:PPROC
cscdll_ordinal129 equ <__imp_cscdll_ordinal129>

externdef __imp_cscdll_ordinal130:PPROC
cscdll_ordinal130 equ <__imp_cscdll_ordinal130>

externdef __imp_cscdll_ordinal131:PPROC
cscdll_ordinal131 equ <__imp_cscdll_ordinal131>

externdef __imp_cscdll_ordinal132:PPROC
cscdll_ordinal132 equ <__imp_cscdll_ordinal132>

externdef __imp_cscdll_ordinal133:PPROC
cscdll_ordinal133 equ <__imp_cscdll_ordinal133>

externdef __imp_cscdll_ordinal134:PPROC
cscdll_ordinal134 equ <__imp_cscdll_ordinal134>

externdef __imp_cscdll_ordinal135:PPROC
cscdll_ordinal135 equ <__imp_cscdll_ordinal135>

externdef __imp_cscdll_ordinal136:PPROC
cscdll_ordinal136 equ <__imp_cscdll_ordinal136>

externdef __imp_cscdll_ordinal137:PPROC
cscdll_ordinal137 equ <__imp_cscdll_ordinal137>

externdef __imp_cscdll_ordinal138:PPROC
cscdll_ordinal138 equ <__imp_cscdll_ordinal138>

externdef __imp_cscdll_ordinal139:PPROC
cscdll_ordinal139 equ <__imp_cscdll_ordinal139>

externdef __imp_cscdll_ordinal140:PPROC
cscdll_ordinal140 equ <__imp_cscdll_ordinal140>

externdef __imp_cscdll_ordinal141:PPROC
cscdll_ordinal141 equ <__imp_cscdll_ordinal141>

externdef __imp_cscdll_ordinal142:PPROC
cscdll_ordinal142 equ <__imp_cscdll_ordinal142>

externdef __imp_cscdll_ordinal143:PPROC
cscdll_ordinal143 equ <__imp_cscdll_ordinal143>

externdef __imp_cscdll_ordinal144:PPROC
cscdll_ordinal144 equ <__imp_cscdll_ordinal144>

externdef __imp_cscdll_ordinal145:PPROC
cscdll_ordinal145 equ <__imp_cscdll_ordinal145>

externdef __imp_cscdll_ordinal146:PPROC
cscdll_ordinal146 equ <__imp_cscdll_ordinal146>

externdef __imp_cscdll_ordinal147:PPROC
cscdll_ordinal147 equ <__imp_cscdll_ordinal147>

externdef __imp_cscdll_ordinal148:PPROC
cscdll_ordinal148 equ <__imp_cscdll_ordinal148>

externdef __imp_cscdll_ordinal149:PPROC
cscdll_ordinal149 equ <__imp_cscdll_ordinal149>

externdef __imp_cscdll_ordinal150:PPROC
cscdll_ordinal150 equ <__imp_cscdll_ordinal150>

externdef __imp_cscdll_ordinal151:PPROC
cscdll_ordinal151 equ <__imp_cscdll_ordinal151>

externdef __imp_cscdll_ordinal152:PPROC
cscdll_ordinal152 equ <__imp_cscdll_ordinal152>

externdef __imp_cscdll_ordinal153:PPROC
cscdll_ordinal153 equ <__imp_cscdll_ordinal153>

externdef __imp_cscdll_ordinal154:PPROC
cscdll_ordinal154 equ <__imp_cscdll_ordinal154>

externdef __imp_cscdll_ordinal155:PPROC
cscdll_ordinal155 equ <__imp_cscdll_ordinal155>

externdef __imp_cscdll_ordinal156:PPROC
cscdll_ordinal156 equ <__imp_cscdll_ordinal156>

externdef __imp_cscdll_ordinal157:PPROC
cscdll_ordinal157 equ <__imp_cscdll_ordinal157>

externdef __imp_cscdll_ordinal158:PPROC
cscdll_ordinal158 equ <__imp_cscdll_ordinal158>

externdef __imp_cscdll_ordinal159:PPROC
cscdll_ordinal159 equ <__imp_cscdll_ordinal159>

externdef __imp_cscdll_ordinal15:PPROC
cscdll_ordinal15 equ <__imp_cscdll_ordinal15>

externdef __imp_cscdll_ordinal160:PPROC
cscdll_ordinal160 equ <__imp_cscdll_ordinal160>

externdef __imp_cscdll_ordinal161:PPROC
cscdll_ordinal161 equ <__imp_cscdll_ordinal161>

externdef __imp_cscdll_ordinal162:PPROC
cscdll_ordinal162 equ <__imp_cscdll_ordinal162>

externdef __imp_cscdll_ordinal163:PPROC
cscdll_ordinal163 equ <__imp_cscdll_ordinal163>

externdef __imp_cscdll_ordinal164:PPROC
cscdll_ordinal164 equ <__imp_cscdll_ordinal164>

externdef __imp_cscdll_ordinal165:PPROC
cscdll_ordinal165 equ <__imp_cscdll_ordinal165>

externdef __imp_cscdll_ordinal166:PPROC
cscdll_ordinal166 equ <__imp_cscdll_ordinal166>

externdef __imp_cscdll_ordinal167:PPROC
cscdll_ordinal167 equ <__imp_cscdll_ordinal167>

externdef __imp_cscdll_ordinal168:PPROC
cscdll_ordinal168 equ <__imp_cscdll_ordinal168>

externdef __imp_cscdll_ordinal169:PPROC
cscdll_ordinal169 equ <__imp_cscdll_ordinal169>

externdef __imp_cscdll_ordinal16:PPROC
cscdll_ordinal16 equ <__imp_cscdll_ordinal16>

externdef __imp_cscdll_ordinal170:PPROC
cscdll_ordinal170 equ <__imp_cscdll_ordinal170>

externdef __imp_cscdll_ordinal171:PPROC
cscdll_ordinal171 equ <__imp_cscdll_ordinal171>

externdef __imp_cscdll_ordinal172:PPROC
cscdll_ordinal172 equ <__imp_cscdll_ordinal172>

externdef __imp_cscdll_ordinal173:PPROC
cscdll_ordinal173 equ <__imp_cscdll_ordinal173>

externdef __imp_cscdll_ordinal174:PPROC
cscdll_ordinal174 equ <__imp_cscdll_ordinal174>

externdef __imp_cscdll_ordinal175:PPROC
cscdll_ordinal175 equ <__imp_cscdll_ordinal175>

externdef __imp_cscdll_ordinal176:PPROC
cscdll_ordinal176 equ <__imp_cscdll_ordinal176>

externdef __imp_cscdll_ordinal177:PPROC
cscdll_ordinal177 equ <__imp_cscdll_ordinal177>

externdef __imp_cscdll_ordinal178:PPROC
cscdll_ordinal178 equ <__imp_cscdll_ordinal178>

externdef __imp_cscdll_ordinal179:PPROC
cscdll_ordinal179 equ <__imp_cscdll_ordinal179>

externdef __imp_cscdll_ordinal17:PPROC
cscdll_ordinal17 equ <__imp_cscdll_ordinal17>

externdef __imp_cscdll_ordinal180:PPROC
cscdll_ordinal180 equ <__imp_cscdll_ordinal180>

externdef __imp_cscdll_ordinal181:PPROC
cscdll_ordinal181 equ <__imp_cscdll_ordinal181>

externdef __imp_cscdll_ordinal182:PPROC
cscdll_ordinal182 equ <__imp_cscdll_ordinal182>

externdef __imp_cscdll_ordinal183:PPROC
cscdll_ordinal183 equ <__imp_cscdll_ordinal183>

externdef __imp_cscdll_ordinal184:PPROC
cscdll_ordinal184 equ <__imp_cscdll_ordinal184>

externdef __imp_cscdll_ordinal185:PPROC
cscdll_ordinal185 equ <__imp_cscdll_ordinal185>

externdef __imp_cscdll_ordinal186:PPROC
cscdll_ordinal186 equ <__imp_cscdll_ordinal186>

externdef __imp_cscdll_ordinal187:PPROC
cscdll_ordinal187 equ <__imp_cscdll_ordinal187>

externdef __imp_cscdll_ordinal188:PPROC
cscdll_ordinal188 equ <__imp_cscdll_ordinal188>

externdef __imp_cscdll_ordinal189:PPROC
cscdll_ordinal189 equ <__imp_cscdll_ordinal189>

externdef __imp_cscdll_ordinal18:PPROC
cscdll_ordinal18 equ <__imp_cscdll_ordinal18>

externdef __imp_cscdll_ordinal190:PPROC
cscdll_ordinal190 equ <__imp_cscdll_ordinal190>

externdef __imp_cscdll_ordinal191:PPROC
cscdll_ordinal191 equ <__imp_cscdll_ordinal191>

externdef __imp_cscdll_ordinal192:PPROC
cscdll_ordinal192 equ <__imp_cscdll_ordinal192>

externdef __imp_cscdll_ordinal193:PPROC
cscdll_ordinal193 equ <__imp_cscdll_ordinal193>

externdef __imp_cscdll_ordinal194:PPROC
cscdll_ordinal194 equ <__imp_cscdll_ordinal194>

externdef __imp_cscdll_ordinal195:PPROC
cscdll_ordinal195 equ <__imp_cscdll_ordinal195>

externdef __imp_cscdll_ordinal196:PPROC
cscdll_ordinal196 equ <__imp_cscdll_ordinal196>

externdef __imp_cscdll_ordinal197:PPROC
cscdll_ordinal197 equ <__imp_cscdll_ordinal197>

externdef __imp_cscdll_ordinal198:PPROC
cscdll_ordinal198 equ <__imp_cscdll_ordinal198>

externdef __imp_cscdll_ordinal199:PPROC
cscdll_ordinal199 equ <__imp_cscdll_ordinal199>

externdef __imp_cscdll_ordinal19:PPROC
cscdll_ordinal19 equ <__imp_cscdll_ordinal19>

externdef __imp_cscdll_ordinal61:PPROC
cscdll_ordinal61 equ <__imp_cscdll_ordinal61>

externdef __imp_cscdll_ordinal67:PPROC
cscdll_ordinal67 equ <__imp_cscdll_ordinal67>

externdef __imp_cscdll_ordinal68:PPROC
cscdll_ordinal68 equ <__imp_cscdll_ordinal68>

externdef __imp_cscdll_ordinal69:PPROC
cscdll_ordinal69 equ <__imp_cscdll_ordinal69>

externdef __imp_cscdll_ordinal70:PPROC
cscdll_ordinal70 equ <__imp_cscdll_ordinal70>

externdef __imp_cscdll_ordinal71:PPROC
cscdll_ordinal71 equ <__imp_cscdll_ordinal71>

externdef __imp_cscdll_ordinal72:PPROC
cscdll_ordinal72 equ <__imp_cscdll_ordinal72>

externdef __imp_cscdll_ordinal73:PPROC
cscdll_ordinal73 equ <__imp_cscdll_ordinal73>

externdef __imp_cscdll_ordinal74:PPROC
cscdll_ordinal74 equ <__imp_cscdll_ordinal74>

externdef __imp_cscdll_ordinal75:PPROC
cscdll_ordinal75 equ <__imp_cscdll_ordinal75>

externdef __imp_cscdll_ordinal76:PPROC
cscdll_ordinal76 equ <__imp_cscdll_ordinal76>

externdef __imp_cscdll_ordinal77:PPROC
cscdll_ordinal77 equ <__imp_cscdll_ordinal77>

externdef __imp_cscdll_ordinal78:PPROC
cscdll_ordinal78 equ <__imp_cscdll_ordinal78>

externdef __imp_cscdll_ordinal79:PPROC
cscdll_ordinal79 equ <__imp_cscdll_ordinal79>

externdef __imp_cscdll_ordinal80:PPROC
cscdll_ordinal80 equ <__imp_cscdll_ordinal80>

externdef __imp_cscdll_ordinal81:PPROC
cscdll_ordinal81 equ <__imp_cscdll_ordinal81>

externdef __imp_cscdll_ordinal82:PPROC
cscdll_ordinal82 equ <__imp_cscdll_ordinal82>

externdef __imp_cscdll_ordinal83:PPROC
cscdll_ordinal83 equ <__imp_cscdll_ordinal83>

externdef __imp_cscdll_ordinal84:PPROC
cscdll_ordinal84 equ <__imp_cscdll_ordinal84>

externdef __imp_cscdll_ordinal85:PPROC
cscdll_ordinal85 equ <__imp_cscdll_ordinal85>

externdef __imp_cscdll_ordinal86:PPROC
cscdll_ordinal86 equ <__imp_cscdll_ordinal86>

externdef __imp_cscdll_ordinal87:PPROC
cscdll_ordinal87 equ <__imp_cscdll_ordinal87>

externdef __imp_cscdll_ordinal88:PPROC
cscdll_ordinal88 equ <__imp_cscdll_ordinal88>

externdef __imp_cscdll_ordinal89:PPROC
cscdll_ordinal89 equ <__imp_cscdll_ordinal89>

externdef __imp_cscdll_ordinal90:PPROC
cscdll_ordinal90 equ <__imp_cscdll_ordinal90>

externdef __imp_cscdll_ordinal91:PPROC
cscdll_ordinal91 equ <__imp_cscdll_ordinal91>

externdef __imp_cscdll_ordinal92:PPROC
cscdll_ordinal92 equ <__imp_cscdll_ordinal92>

externdef __imp_cscdll_ordinal93:PPROC
cscdll_ordinal93 equ <__imp_cscdll_ordinal93>

externdef __imp_cscdll_ordinal94:PPROC
cscdll_ordinal94 equ <__imp_cscdll_ordinal94>

externdef __imp_cscdll_ordinal95:PPROC
cscdll_ordinal95 equ <__imp_cscdll_ordinal95>

externdef __imp_cscdll_ordinal96:PPROC
cscdll_ordinal96 equ <__imp_cscdll_ordinal96>

externdef __imp_cscdll_ordinal97:PPROC
cscdll_ordinal97 equ <__imp_cscdll_ordinal97>

externdef __imp_cscdll_ordinal98:PPROC
cscdll_ordinal98 equ <__imp_cscdll_ordinal98>

externdef __imp_cscdll_ordinal99:PPROC
cscdll_ordinal99 equ <__imp_cscdll_ordinal99>
