externdef __imp_CreateEnvironmentBlock:PPROC
CreateEnvironmentBlock equ <__imp_CreateEnvironmentBlock>

externdef __imp_DeleteProfileA:PPROC
DeleteProfileA equ <__imp_DeleteProfileA>
  IFNDEF __UNICODE__
    DeleteProfile equ <__imp_DeleteProfileA>
  ENDIF

externdef __imp_DeleteProfileW:PPROC
DeleteProfileW equ <__imp_DeleteProfileW>
  IFDEF __UNICODE__
    DeleteProfile equ <__imp_DeleteProfileW>
  ENDIF

externdef __imp_DestroyEnvironmentBlock:PPROC
DestroyEnvironmentBlock equ <__imp_DestroyEnvironmentBlock>

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_DllInstall:PPROC
DllInstall equ <__imp_DllInstall>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>

externdef __imp_EnterCriticalPolicySection:PPROC
EnterCriticalPolicySection equ <__imp_EnterCriticalPolicySection>

externdef __imp_ExpandEnvironmentStringsForUserA:PPROC
ExpandEnvironmentStringsForUserA equ <__imp_ExpandEnvironmentStringsForUserA>
  IFNDEF __UNICODE__
    ExpandEnvironmentStringsForUser equ <__imp_ExpandEnvironmentStringsForUserA>
  ENDIF

externdef __imp_ExpandEnvironmentStringsForUserW:PPROC
ExpandEnvironmentStringsForUserW equ <__imp_ExpandEnvironmentStringsForUserW>
  IFDEF __UNICODE__
    ExpandEnvironmentStringsForUser equ <__imp_ExpandEnvironmentStringsForUserW>
  ENDIF

externdef __imp_ForceSyncFgPolicy:PPROC
ForceSyncFgPolicy equ <__imp_ForceSyncFgPolicy>

externdef __imp_FreeGPOListA:PPROC
FreeGPOListA equ <__imp_FreeGPOListA>
  IFNDEF __UNICODE__
    FreeGPOList equ <__imp_FreeGPOListA>
  ENDIF

externdef __imp_FreeGPOListW:PPROC
FreeGPOListW equ <__imp_FreeGPOListW>
  IFDEF __UNICODE__
    FreeGPOList equ <__imp_FreeGPOListW>
  ENDIF

externdef __imp_GenerateRsopPolicy:PPROC
GenerateRsopPolicy equ <__imp_GenerateRsopPolicy>

externdef __imp_GetAllUsersProfileDirectoryA:PPROC
GetAllUsersProfileDirectoryA equ <__imp_GetAllUsersProfileDirectoryA>
  IFNDEF __UNICODE__
    GetAllUsersProfileDirectory equ <__imp_GetAllUsersProfileDirectoryA>
  ENDIF

externdef __imp_GetAllUsersProfileDirectoryW:PPROC
GetAllUsersProfileDirectoryW equ <__imp_GetAllUsersProfileDirectoryW>
  IFDEF __UNICODE__
    GetAllUsersProfileDirectory equ <__imp_GetAllUsersProfileDirectoryW>
  ENDIF

externdef __imp_GetAppliedGPOListA:PPROC
GetAppliedGPOListA equ <__imp_GetAppliedGPOListA>
  IFNDEF __UNICODE__
    GetAppliedGPOList equ <__imp_GetAppliedGPOListA>
  ENDIF

externdef __imp_GetAppliedGPOListW:PPROC
GetAppliedGPOListW equ <__imp_GetAppliedGPOListW>
  IFDEF __UNICODE__
    GetAppliedGPOList equ <__imp_GetAppliedGPOListW>
  ENDIF

externdef __imp_GetDefaultUserProfileDirectoryA:PPROC
GetDefaultUserProfileDirectoryA equ <__imp_GetDefaultUserProfileDirectoryA>
  IFNDEF __UNICODE__
    GetDefaultUserProfileDirectory equ <__imp_GetDefaultUserProfileDirectoryA>
  ENDIF

externdef __imp_GetDefaultUserProfileDirectoryW:PPROC
GetDefaultUserProfileDirectoryW equ <__imp_GetDefaultUserProfileDirectoryW>
  IFDEF __UNICODE__
    GetDefaultUserProfileDirectory equ <__imp_GetDefaultUserProfileDirectoryW>
  ENDIF

externdef __imp_GetGPOListA:PPROC
GetGPOListA equ <__imp_GetGPOListA>
  IFNDEF __UNICODE__
    GetGPOList equ <__imp_GetGPOListA>
  ENDIF

externdef __imp_GetGPOListW:PPROC
GetGPOListW equ <__imp_GetGPOListW>
  IFDEF __UNICODE__
    GetGPOList equ <__imp_GetGPOListW>
  ENDIF

externdef __imp_GetNextFgPolicyRefreshInfo:PPROC
GetNextFgPolicyRefreshInfo equ <__imp_GetNextFgPolicyRefreshInfo>

externdef __imp_GetPreviousFgPolicyRefreshInfo:PPROC
GetPreviousFgPolicyRefreshInfo equ <__imp_GetPreviousFgPolicyRefreshInfo>

externdef __imp_GetProfileType:PPROC
GetProfileType equ <__imp_GetProfileType>

externdef __imp_GetProfilesDirectoryA:PPROC
GetProfilesDirectoryA equ <__imp_GetProfilesDirectoryA>
  IFNDEF __UNICODE__
    GetProfilesDirectory equ <__imp_GetProfilesDirectoryA>
  ENDIF

externdef __imp_GetProfilesDirectoryW:PPROC
GetProfilesDirectoryW equ <__imp_GetProfilesDirectoryW>
  IFDEF __UNICODE__
    GetProfilesDirectory equ <__imp_GetProfilesDirectoryW>
  ENDIF

externdef __imp_GetUserProfileDirectoryA:PPROC
GetUserProfileDirectoryA equ <__imp_GetUserProfileDirectoryA>
  IFNDEF __UNICODE__
    GetUserProfileDirectory equ <__imp_GetUserProfileDirectoryA>
  ENDIF

externdef __imp_GetUserProfileDirectoryW:PPROC
GetUserProfileDirectoryW equ <__imp_GetUserProfileDirectoryW>
  IFDEF __UNICODE__
    GetUserProfileDirectory equ <__imp_GetUserProfileDirectoryW>
  ENDIF

externdef __imp_LeaveCriticalPolicySection:PPROC
LeaveCriticalPolicySection equ <__imp_LeaveCriticalPolicySection>

externdef __imp_LoadUserProfileA:PPROC
LoadUserProfileA equ <__imp_LoadUserProfileA>
  IFNDEF __UNICODE__
    LoadUserProfile equ <__imp_LoadUserProfileA>
  ENDIF

externdef __imp_LoadUserProfileW:PPROC
LoadUserProfileW equ <__imp_LoadUserProfileW>
  IFDEF __UNICODE__
    LoadUserProfile equ <__imp_LoadUserProfileW>
  ENDIF

externdef __imp_ProcessGroupPolicyCompleted:PPROC
ProcessGroupPolicyCompleted equ <__imp_ProcessGroupPolicyCompleted>

externdef __imp_ProcessGroupPolicyCompletedEx:PPROC
ProcessGroupPolicyCompletedEx equ <__imp_ProcessGroupPolicyCompletedEx>

externdef __imp_RefreshPolicy:PPROC
RefreshPolicy equ <__imp_RefreshPolicy>

externdef __imp_RefreshPolicyEx:PPROC
RefreshPolicyEx equ <__imp_RefreshPolicyEx>

externdef __imp_RegisterGPNotification:PPROC
RegisterGPNotification equ <__imp_RegisterGPNotification>

externdef __imp_RsopAccessCheckByType:PPROC
RsopAccessCheckByType equ <__imp_RsopAccessCheckByType>

externdef __imp_RsopFileAccessCheck:PPROC
RsopFileAccessCheck equ <__imp_RsopFileAccessCheck>

externdef __imp_RsopLoggingEnabled:PPROC
RsopLoggingEnabled equ <__imp_RsopLoggingEnabled>

externdef __imp_RsopResetPolicySettingStatus:PPROC
RsopResetPolicySettingStatus equ <__imp_RsopResetPolicySettingStatus>

externdef __imp_RsopSetPolicySettingStatus:PPROC
RsopSetPolicySettingStatus equ <__imp_RsopSetPolicySettingStatus>

externdef __imp_UnloadUserProfile:PPROC
UnloadUserProfile equ <__imp_UnloadUserProfile>

externdef __imp_UnregisterGPNotification:PPROC
UnregisterGPNotification equ <__imp_UnregisterGPNotification>

externdef __imp_WaitForMachinePolicyForegroundProcessing:PPROC
WaitForMachinePolicyForegroundProcessing equ <__imp_WaitForMachinePolicyForegroundProcessing>

externdef __imp_WaitForUserPolicyForegroundProcessing:PPROC
WaitForUserPolicyForegroundProcessing equ <__imp_WaitForUserPolicyForegroundProcessing>

externdef __imp_userenv_ordinal100:PPROC
userenv_ordinal100 equ <__imp_userenv_ordinal100>

externdef __imp_userenv_ordinal101:PPROC
userenv_ordinal101 equ <__imp_userenv_ordinal101>

externdef __imp_userenv_ordinal102:PPROC
userenv_ordinal102 equ <__imp_userenv_ordinal102>

externdef __imp_userenv_ordinal103:PPROC
userenv_ordinal103 equ <__imp_userenv_ordinal103>

externdef __imp_userenv_ordinal104:PPROC
userenv_ordinal104 equ <__imp_userenv_ordinal104>

externdef __imp_userenv_ordinal105:PPROC
userenv_ordinal105 equ <__imp_userenv_ordinal105>

externdef __imp_userenv_ordinal106:PPROC
userenv_ordinal106 equ <__imp_userenv_ordinal106>

externdef __imp_userenv_ordinal107:PPROC
userenv_ordinal107 equ <__imp_userenv_ordinal107>

externdef __imp_userenv_ordinal108:PPROC
userenv_ordinal108 equ <__imp_userenv_ordinal108>

externdef __imp_userenv_ordinal109:PPROC
userenv_ordinal109 equ <__imp_userenv_ordinal109>

externdef __imp_userenv_ordinal110:PPROC
userenv_ordinal110 equ <__imp_userenv_ordinal110>

externdef __imp_userenv_ordinal111:PPROC
userenv_ordinal111 equ <__imp_userenv_ordinal111>

externdef __imp_userenv_ordinal112:PPROC
userenv_ordinal112 equ <__imp_userenv_ordinal112>

externdef __imp_userenv_ordinal113:PPROC
userenv_ordinal113 equ <__imp_userenv_ordinal113>

externdef __imp_userenv_ordinal114:PPROC
userenv_ordinal114 equ <__imp_userenv_ordinal114>

externdef __imp_userenv_ordinal115:PPROC
userenv_ordinal115 equ <__imp_userenv_ordinal115>

externdef __imp_userenv_ordinal116:PPROC
userenv_ordinal116 equ <__imp_userenv_ordinal116>

externdef __imp_userenv_ordinal117:PPROC
userenv_ordinal117 equ <__imp_userenv_ordinal117>

externdef __imp_userenv_ordinal118:PPROC
userenv_ordinal118 equ <__imp_userenv_ordinal118>

externdef __imp_userenv_ordinal119:PPROC
userenv_ordinal119 equ <__imp_userenv_ordinal119>

externdef __imp_userenv_ordinal120:PPROC
userenv_ordinal120 equ <__imp_userenv_ordinal120>

externdef __imp_userenv_ordinal121:PPROC
userenv_ordinal121 equ <__imp_userenv_ordinal121>

externdef __imp_userenv_ordinal122:PPROC
userenv_ordinal122 equ <__imp_userenv_ordinal122>

externdef __imp_userenv_ordinal123:PPROC
userenv_ordinal123 equ <__imp_userenv_ordinal123>

externdef __imp_userenv_ordinal124:PPROC
userenv_ordinal124 equ <__imp_userenv_ordinal124>

externdef __imp_userenv_ordinal125:PPROC
userenv_ordinal125 equ <__imp_userenv_ordinal125>

externdef __imp_userenv_ordinal126:PPROC
userenv_ordinal126 equ <__imp_userenv_ordinal126>

externdef __imp_userenv_ordinal127:PPROC
userenv_ordinal127 equ <__imp_userenv_ordinal127>

externdef __imp_userenv_ordinal128:PPROC
userenv_ordinal128 equ <__imp_userenv_ordinal128>

externdef __imp_userenv_ordinal129:PPROC
userenv_ordinal129 equ <__imp_userenv_ordinal129>

externdef __imp_userenv_ordinal130:PPROC
userenv_ordinal130 equ <__imp_userenv_ordinal130>

externdef __imp_userenv_ordinal131:PPROC
userenv_ordinal131 equ <__imp_userenv_ordinal131>

externdef __imp_userenv_ordinal135:PPROC
userenv_ordinal135 equ <__imp_userenv_ordinal135>

externdef __imp_userenv_ordinal136:PPROC
userenv_ordinal136 equ <__imp_userenv_ordinal136>

externdef __imp_userenv_ordinal137:PPROC
userenv_ordinal137 equ <__imp_userenv_ordinal137>

externdef __imp_userenv_ordinal138:PPROC
userenv_ordinal138 equ <__imp_userenv_ordinal138>

externdef __imp_userenv_ordinal139:PPROC
userenv_ordinal139 equ <__imp_userenv_ordinal139>

externdef __imp_userenv_ordinal140:PPROC
userenv_ordinal140 equ <__imp_userenv_ordinal140>

externdef __imp_userenv_ordinal141:PPROC
userenv_ordinal141 equ <__imp_userenv_ordinal141>

externdef __imp_userenv_ordinal142:PPROC
userenv_ordinal142 equ <__imp_userenv_ordinal142>

externdef __imp_userenv_ordinal143:PPROC
userenv_ordinal143 equ <__imp_userenv_ordinal143>

externdef __imp_userenv_ordinal144:PPROC
userenv_ordinal144 equ <__imp_userenv_ordinal144>

externdef __imp_userenv_ordinal145:PPROC
userenv_ordinal145 equ <__imp_userenv_ordinal145>

externdef __imp_userenv_ordinal146:PPROC
userenv_ordinal146 equ <__imp_userenv_ordinal146>

externdef __imp_userenv_ordinal147:PPROC
userenv_ordinal147 equ <__imp_userenv_ordinal147>

externdef __imp_userenv_ordinal148:PPROC
userenv_ordinal148 equ <__imp_userenv_ordinal148>

externdef __imp_userenv_ordinal149:PPROC
userenv_ordinal149 equ <__imp_userenv_ordinal149>

externdef __imp_userenv_ordinal150:PPROC
userenv_ordinal150 equ <__imp_userenv_ordinal150>

externdef __imp_userenv_ordinal151:PPROC
userenv_ordinal151 equ <__imp_userenv_ordinal151>

externdef __imp_userenv_ordinal152:PPROC
userenv_ordinal152 equ <__imp_userenv_ordinal152>

externdef __imp_userenv_ordinal153:PPROC
userenv_ordinal153 equ <__imp_userenv_ordinal153>

externdef __imp_userenv_ordinal154:PPROC
userenv_ordinal154 equ <__imp_userenv_ordinal154>

externdef __imp_userenv_ordinal155:PPROC
userenv_ordinal155 equ <__imp_userenv_ordinal155>

externdef __imp_userenv_ordinal156:PPROC
userenv_ordinal156 equ <__imp_userenv_ordinal156>

externdef __imp_userenv_ordinal157:PPROC
userenv_ordinal157 equ <__imp_userenv_ordinal157>

externdef __imp_userenv_ordinal158:PPROC
userenv_ordinal158 equ <__imp_userenv_ordinal158>

externdef __imp_userenv_ordinal159:PPROC
userenv_ordinal159 equ <__imp_userenv_ordinal159>

externdef __imp_userenv_ordinal160:PPROC
userenv_ordinal160 equ <__imp_userenv_ordinal160>

externdef __imp_userenv_ordinal161:PPROC
userenv_ordinal161 equ <__imp_userenv_ordinal161>

externdef __imp_userenv_ordinal162:PPROC
userenv_ordinal162 equ <__imp_userenv_ordinal162>

externdef __imp_userenv_ordinal163:PPROC
userenv_ordinal163 equ <__imp_userenv_ordinal163>

externdef __imp_userenv_ordinal164:PPROC
userenv_ordinal164 equ <__imp_userenv_ordinal164>

externdef __imp_userenv_ordinal165:PPROC
userenv_ordinal165 equ <__imp_userenv_ordinal165>

externdef __imp_userenv_ordinal166:PPROC
userenv_ordinal166 equ <__imp_userenv_ordinal166>

externdef __imp_userenv_ordinal167:PPROC
userenv_ordinal167 equ <__imp_userenv_ordinal167>

externdef __imp_userenv_ordinal168:PPROC
userenv_ordinal168 equ <__imp_userenv_ordinal168>

externdef __imp_userenv_ordinal169:PPROC
userenv_ordinal169 equ <__imp_userenv_ordinal169>

externdef __imp_userenv_ordinal170:PPROC
userenv_ordinal170 equ <__imp_userenv_ordinal170>

externdef __imp_userenv_ordinal171:PPROC
userenv_ordinal171 equ <__imp_userenv_ordinal171>

externdef __imp_userenv_ordinal172:PPROC
userenv_ordinal172 equ <__imp_userenv_ordinal172>

externdef __imp_userenv_ordinal173:PPROC
userenv_ordinal173 equ <__imp_userenv_ordinal173>

externdef __imp_userenv_ordinal174:PPROC
userenv_ordinal174 equ <__imp_userenv_ordinal174>

externdef __imp_userenv_ordinal175:PPROC
userenv_ordinal175 equ <__imp_userenv_ordinal175>

externdef __imp_userenv_ordinal200:PPROC
userenv_ordinal200 equ <__imp_userenv_ordinal200>

externdef __imp_userenv_ordinal201:PPROC
userenv_ordinal201 equ <__imp_userenv_ordinal201>
