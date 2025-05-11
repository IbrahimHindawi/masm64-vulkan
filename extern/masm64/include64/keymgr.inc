externdef __imp_CPlApplet:PPROC
CPlApplet equ <__imp_CPlApplet>

externdef __imp_DllMain:PPROC
DllMain equ <__imp_DllMain>

externdef __imp_KRShowKeyMgr:PPROC
KRShowKeyMgr equ <__imp_KRShowKeyMgr>

externdef __imp_PRShowRestoreFromMsginaW:PPROC
PRShowRestoreFromMsginaW equ <__imp_PRShowRestoreFromMsginaW>
  IFDEF __UNICODE__
    PRShowRestoreFromMsgina equ <__imp_PRShowRestoreFromMsginaW>
  ENDIF

externdef __imp_PRShowRestoreWizardExW:PPROC
PRShowRestoreWizardExW equ <__imp_PRShowRestoreWizardExW>
  IFDEF __UNICODE__
    PRShowRestoreWizardEx equ <__imp_PRShowRestoreWizardExW>
  ENDIF

externdef __imp_PRShowRestoreWizardW:PPROC
PRShowRestoreWizardW equ <__imp_PRShowRestoreWizardW>
  IFDEF __UNICODE__
    PRShowRestoreWizard equ <__imp_PRShowRestoreWizardW>
  ENDIF

externdef __imp_PRShowSaveFromMsginaW:PPROC
PRShowSaveFromMsginaW equ <__imp_PRShowSaveFromMsginaW>
  IFDEF __UNICODE__
    PRShowSaveFromMsgina equ <__imp_PRShowSaveFromMsginaW>
  ENDIF

externdef __imp_PRShowSaveWizardExW:PPROC
PRShowSaveWizardExW equ <__imp_PRShowSaveWizardExW>
  IFDEF __UNICODE__
    PRShowSaveWizardEx equ <__imp_PRShowSaveWizardExW>
  ENDIF
