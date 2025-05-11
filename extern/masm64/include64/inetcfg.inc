externdef __imp_CheckConnectionWizard:PPROC
CheckConnectionWizard equ <__imp_CheckConnectionWizard>

externdef __imp_ConfigureSystemForInternet:PPROC
ConfigureSystemForInternet equ <__imp_ConfigureSystemForInternet>

externdef __imp_ConfigureSystemForInternetA:PPROC
ConfigureSystemForInternetA equ <__imp_ConfigureSystemForInternetA>
  IFNDEF __UNICODE__
    ConfigureSystemForInternet equ <__imp_ConfigureSystemForInternetA>
  ENDIF

externdef __imp_ConfigureSystemForInternetW:PPROC
ConfigureSystemForInternetW equ <__imp_ConfigureSystemForInternetW>
  IFDEF __UNICODE__
    ConfigureSystemForInternet equ <__imp_ConfigureSystemForInternetW>
  ENDIF

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>

externdef __imp_FreeSignupWizard:PPROC
FreeSignupWizard equ <__imp_FreeSignupWizard>

externdef __imp_InetConfigClient:PPROC
InetConfigClient equ <__imp_InetConfigClient>

externdef __imp_InetConfigClientA:PPROC
InetConfigClientA equ <__imp_InetConfigClientA>
  IFNDEF __UNICODE__
    InetConfigClient equ <__imp_InetConfigClientA>
  ENDIF

externdef __imp_InetConfigClientW:PPROC
InetConfigClientW equ <__imp_InetConfigClientW>
  IFDEF __UNICODE__
    InetConfigClient equ <__imp_InetConfigClientW>
  ENDIF

externdef __imp_InetConfigSystem:PPROC
InetConfigSystem equ <__imp_InetConfigSystem>

externdef __imp_InetConfigSystemFromPath:PPROC
InetConfigSystemFromPath equ <__imp_InetConfigSystemFromPath>

externdef __imp_InetConfigSystemFromPathA:PPROC
InetConfigSystemFromPathA equ <__imp_InetConfigSystemFromPathA>
  IFNDEF __UNICODE__
    InetConfigSystemFromPath equ <__imp_InetConfigSystemFromPathA>
  ENDIF

externdef __imp_InetConfigSystemFromPathW:PPROC
InetConfigSystemFromPathW equ <__imp_InetConfigSystemFromPathW>
  IFDEF __UNICODE__
    InetConfigSystemFromPath equ <__imp_InetConfigSystemFromPathW>
  ENDIF

externdef __imp_InetGetAutodial:PPROC
InetGetAutodial equ <__imp_InetGetAutodial>

externdef __imp_InetGetAutodialA:PPROC
InetGetAutodialA equ <__imp_InetGetAutodialA>
  IFNDEF __UNICODE__
    InetGetAutodial equ <__imp_InetGetAutodialA>
  ENDIF

externdef __imp_InetGetAutodialW:PPROC
InetGetAutodialW equ <__imp_InetGetAutodialW>
  IFDEF __UNICODE__
    InetGetAutodial equ <__imp_InetGetAutodialW>
  ENDIF

externdef __imp_InetGetClientInfo:PPROC
InetGetClientInfo equ <__imp_InetGetClientInfo>

externdef __imp_InetGetClientInfoA:PPROC
InetGetClientInfoA equ <__imp_InetGetClientInfoA>
  IFNDEF __UNICODE__
    InetGetClientInfo equ <__imp_InetGetClientInfoA>
  ENDIF

externdef __imp_InetGetClientInfoW:PPROC
InetGetClientInfoW equ <__imp_InetGetClientInfoW>
  IFDEF __UNICODE__
    InetGetClientInfo equ <__imp_InetGetClientInfoW>
  ENDIF

externdef __imp_InetGetProxy:PPROC
InetGetProxy equ <__imp_InetGetProxy>

externdef __imp_InetGetProxyA:PPROC
InetGetProxyA equ <__imp_InetGetProxyA>
  IFNDEF __UNICODE__
    InetGetProxy equ <__imp_InetGetProxyA>
  ENDIF

externdef __imp_InetGetProxyW:PPROC
InetGetProxyW equ <__imp_InetGetProxyW>
  IFDEF __UNICODE__
    InetGetProxy equ <__imp_InetGetProxyW>
  ENDIF

externdef __imp_InetNeedModem:PPROC
InetNeedModem equ <__imp_InetNeedModem>

externdef __imp_InetNeedSystemComponents:PPROC
InetNeedSystemComponents equ <__imp_InetNeedSystemComponents>

externdef __imp_InetPerformSecurityCheck:PPROC
InetPerformSecurityCheck equ <__imp_InetPerformSecurityCheck>

externdef __imp_InetSetAutodial:PPROC
InetSetAutodial equ <__imp_InetSetAutodial>

externdef __imp_InetSetAutodialA:PPROC
InetSetAutodialA equ <__imp_InetSetAutodialA>
  IFNDEF __UNICODE__
    InetSetAutodial equ <__imp_InetSetAutodialA>
  ENDIF

externdef __imp_InetSetAutodialW:PPROC
InetSetAutodialW equ <__imp_InetSetAutodialW>
  IFDEF __UNICODE__
    InetSetAutodial equ <__imp_InetSetAutodialW>
  ENDIF

externdef __imp_InetSetClientInfo:PPROC
InetSetClientInfo equ <__imp_InetSetClientInfo>

externdef __imp_InetSetClientInfoA:PPROC
InetSetClientInfoA equ <__imp_InetSetClientInfoA>
  IFNDEF __UNICODE__
    InetSetClientInfo equ <__imp_InetSetClientInfoA>
  ENDIF

externdef __imp_InetSetClientInfoW:PPROC
InetSetClientInfoW equ <__imp_InetSetClientInfoW>
  IFDEF __UNICODE__
    InetSetClientInfo equ <__imp_InetSetClientInfoW>
  ENDIF

externdef __imp_InetSetProxy:PPROC
InetSetProxy equ <__imp_InetSetProxy>

externdef __imp_InetSetProxyA:PPROC
InetSetProxyA equ <__imp_InetSetProxyA>
  IFNDEF __UNICODE__
    InetSetProxy equ <__imp_InetSetProxyA>
  ENDIF

externdef __imp_InetSetProxyEx:PPROC
InetSetProxyEx equ <__imp_InetSetProxyEx>

externdef __imp_InetSetProxyExA:PPROC
InetSetProxyExA equ <__imp_InetSetProxyExA>
  IFNDEF __UNICODE__
    InetSetProxyEx equ <__imp_InetSetProxyExA>
  ENDIF

externdef __imp_InetSetProxyExW:PPROC
InetSetProxyExW equ <__imp_InetSetProxyExW>
  IFDEF __UNICODE__
    InetSetProxyEx equ <__imp_InetSetProxyExW>
  ENDIF

externdef __imp_InetSetProxyW:PPROC
InetSetProxyW equ <__imp_InetSetProxyW>
  IFDEF __UNICODE__
    InetSetProxy equ <__imp_InetSetProxyW>
  ENDIF

externdef __imp_InetStartServices:PPROC
InetStartServices equ <__imp_InetStartServices>

externdef __imp_IsSmartStart:PPROC
IsSmartStart equ <__imp_IsSmartStart>

externdef __imp_IsSmartStartEx:PPROC
IsSmartStartEx equ <__imp_IsSmartStartEx>

externdef __imp_LaunchSignupWizard:PPROC
LaunchSignupWizard equ <__imp_LaunchSignupWizard>

externdef __imp_LaunchSignupWizardEx:PPROC
LaunchSignupWizardEx equ <__imp_LaunchSignupWizardEx>

externdef __imp_SetAutoProxyConnectoid:PPROC
SetAutoProxyConnectoid equ <__imp_SetAutoProxyConnectoid>

externdef __imp_SetInternetPhoneNumber:PPROC
SetInternetPhoneNumber equ <__imp_SetInternetPhoneNumber>

externdef __imp_SetInternetPhoneNumberA:PPROC
SetInternetPhoneNumberA equ <__imp_SetInternetPhoneNumberA>
  IFNDEF __UNICODE__
    SetInternetPhoneNumber equ <__imp_SetInternetPhoneNumberA>
  ENDIF

externdef __imp_SetInternetPhoneNumberW:PPROC
SetInternetPhoneNumberW equ <__imp_SetInternetPhoneNumberW>
  IFDEF __UNICODE__
    SetInternetPhoneNumber equ <__imp_SetInternetPhoneNumberW>
  ENDIF

externdef __imp_SetShellNext:PPROC
SetShellNext equ <__imp_SetShellNext>

externdef __imp_SetShellNextA:PPROC
SetShellNextA equ <__imp_SetShellNextA>
  IFNDEF __UNICODE__
    SetShellNext equ <__imp_SetShellNextA>
  ENDIF

externdef __imp_SetShellNextW:PPROC
SetShellNextW equ <__imp_SetShellNextW>
  IFDEF __UNICODE__
    SetShellNext equ <__imp_SetShellNextW>
  ENDIF

externdef __imp__LaunchSignupWizardEx:PPROC
_LaunchSignupWizardEx equ <__imp__LaunchSignupWizardEx>
