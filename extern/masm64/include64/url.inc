externdef __imp_AddMIMEFileTypesPS:PPROC
AddMIMEFileTypesPS equ <__imp_AddMIMEFileTypesPS>

externdef __imp_AutodialHookCallback:PPROC
AutodialHookCallback equ <__imp_AutodialHookCallback>

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_FileProtocolHandler:PPROC
FileProtocolHandler equ <__imp_FileProtocolHandler>

externdef __imp_FileProtocolHandlerA:PPROC
FileProtocolHandlerA equ <__imp_FileProtocolHandlerA>
  IFNDEF __UNICODE__
    FileProtocolHandler equ <__imp_FileProtocolHandlerA>
  ENDIF

externdef __imp_InetIsOffline:PPROC
InetIsOffline equ <__imp_InetIsOffline>

externdef __imp_MIMEAssociationDialogA:PPROC
MIMEAssociationDialogA equ <__imp_MIMEAssociationDialogA>
  IFNDEF __UNICODE__
    MIMEAssociationDialog equ <__imp_MIMEAssociationDialogA>
  ENDIF

externdef __imp_MIMEAssociationDialogW:PPROC
MIMEAssociationDialogW equ <__imp_MIMEAssociationDialogW>
  IFDEF __UNICODE__
    MIMEAssociationDialog equ <__imp_MIMEAssociationDialogW>
  ENDIF

externdef __imp_MailToProtocolHandler:PPROC
MailToProtocolHandler equ <__imp_MailToProtocolHandler>

externdef __imp_MailToProtocolHandlerA:PPROC
MailToProtocolHandlerA equ <__imp_MailToProtocolHandlerA>
  IFNDEF __UNICODE__
    MailToProtocolHandler equ <__imp_MailToProtocolHandlerA>
  ENDIF

externdef __imp_NewsProtocolHandler:PPROC
NewsProtocolHandler equ <__imp_NewsProtocolHandler>

externdef __imp_NewsProtocolHandlerA:PPROC
NewsProtocolHandlerA equ <__imp_NewsProtocolHandlerA>
  IFNDEF __UNICODE__
    NewsProtocolHandler equ <__imp_NewsProtocolHandlerA>
  ENDIF

externdef __imp_OpenURL:PPROC
OpenURL equ <__imp_OpenURL>

externdef __imp_OpenURLA:PPROC
OpenURLA equ <__imp_OpenURLA>
  IFNDEF __UNICODE__
    OpenURL equ <__imp_OpenURLA>
  ENDIF

externdef __imp_TelnetProtocolHandler:PPROC
TelnetProtocolHandler equ <__imp_TelnetProtocolHandler>

externdef __imp_TelnetProtocolHandlerA:PPROC
TelnetProtocolHandlerA equ <__imp_TelnetProtocolHandlerA>
  IFNDEF __UNICODE__
    TelnetProtocolHandler equ <__imp_TelnetProtocolHandlerA>
  ENDIF

externdef __imp_TranslateURLA:PPROC
TranslateURLA equ <__imp_TranslateURLA>
  IFNDEF __UNICODE__
    TranslateURL equ <__imp_TranslateURLA>
  ENDIF

externdef __imp_TranslateURLW:PPROC
TranslateURLW equ <__imp_TranslateURLW>
  IFDEF __UNICODE__
    TranslateURL equ <__imp_TranslateURLW>
  ENDIF

externdef __imp_URLAssociationDialogA:PPROC
URLAssociationDialogA equ <__imp_URLAssociationDialogA>
  IFNDEF __UNICODE__
    URLAssociationDialog equ <__imp_URLAssociationDialogA>
  ENDIF

externdef __imp_URLAssociationDialogW:PPROC
URLAssociationDialogW equ <__imp_URLAssociationDialogW>
  IFDEF __UNICODE__
    URLAssociationDialog equ <__imp_URLAssociationDialogW>
  ENDIF

externdef __imp_url_ordinal101:PPROC
url_ordinal101 equ <__imp_url_ordinal101>
