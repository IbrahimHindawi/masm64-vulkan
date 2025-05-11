externdef __imp_CredUICmdLinePromptForCredentialsA:PPROC
CredUICmdLinePromptForCredentialsA equ <__imp_CredUICmdLinePromptForCredentialsA>
  IFNDEF __UNICODE__
    CredUICmdLinePromptForCredentials equ <__imp_CredUICmdLinePromptForCredentialsA>
  ENDIF

externdef __imp_CredUICmdLinePromptForCredentialsW:PPROC
CredUICmdLinePromptForCredentialsW equ <__imp_CredUICmdLinePromptForCredentialsW>
  IFDEF __UNICODE__
    CredUICmdLinePromptForCredentials equ <__imp_CredUICmdLinePromptForCredentialsW>
  ENDIF

externdef __imp_CredUIConfirmCredentialsA:PPROC
CredUIConfirmCredentialsA equ <__imp_CredUIConfirmCredentialsA>
  IFNDEF __UNICODE__
    CredUIConfirmCredentials equ <__imp_CredUIConfirmCredentialsA>
  ENDIF

externdef __imp_CredUIConfirmCredentialsW:PPROC
CredUIConfirmCredentialsW equ <__imp_CredUIConfirmCredentialsW>
  IFDEF __UNICODE__
    CredUIConfirmCredentials equ <__imp_CredUIConfirmCredentialsW>
  ENDIF

externdef __imp_CredUIInitControls:PPROC
CredUIInitControls equ <__imp_CredUIInitControls>

externdef __imp_CredUIParseUserNameA:PPROC
CredUIParseUserNameA equ <__imp_CredUIParseUserNameA>
  IFNDEF __UNICODE__
    CredUIParseUserName equ <__imp_CredUIParseUserNameA>
  ENDIF

externdef __imp_CredUIParseUserNameW:PPROC
CredUIParseUserNameW equ <__imp_CredUIParseUserNameW>
  IFDEF __UNICODE__
    CredUIParseUserName equ <__imp_CredUIParseUserNameW>
  ENDIF

externdef __imp_CredUIPromptForCredentialsA:PPROC
CredUIPromptForCredentialsA equ <__imp_CredUIPromptForCredentialsA>
  IFNDEF __UNICODE__
    CredUIPromptForCredentials equ <__imp_CredUIPromptForCredentialsA>
  ENDIF

externdef __imp_CredUIPromptForCredentialsW:PPROC
CredUIPromptForCredentialsW equ <__imp_CredUIPromptForCredentialsW>
  IFDEF __UNICODE__
    CredUIPromptForCredentials equ <__imp_CredUIPromptForCredentialsW>
  ENDIF

externdef __imp_CredUIReadSSOCredA:PPROC
CredUIReadSSOCredA equ <__imp_CredUIReadSSOCredA>
  IFNDEF __UNICODE__
    CredUIReadSSOCred equ <__imp_CredUIReadSSOCredA>
  ENDIF

externdef __imp_CredUIReadSSOCredW:PPROC
CredUIReadSSOCredW equ <__imp_CredUIReadSSOCredW>
  IFDEF __UNICODE__
    CredUIReadSSOCred equ <__imp_CredUIReadSSOCredW>
  ENDIF

externdef __imp_CredUIStoreSSOCredA:PPROC
CredUIStoreSSOCredA equ <__imp_CredUIStoreSSOCredA>
  IFNDEF __UNICODE__
    CredUIStoreSSOCred equ <__imp_CredUIStoreSSOCredA>
  ENDIF

externdef __imp_CredUIStoreSSOCredW:PPROC
CredUIStoreSSOCredW equ <__imp_CredUIStoreSSOCredW>
  IFDEF __UNICODE__
    CredUIStoreSSOCred equ <__imp_CredUIStoreSSOCredW>
  ENDIF

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>
