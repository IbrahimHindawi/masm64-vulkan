externdef __imp_ACUIProviderInvokeUI:PPROC
ACUIProviderInvokeUI equ <__imp_ACUIProviderInvokeUI>

externdef __imp_CryptUIDlgCertMgr:PPROC
CryptUIDlgCertMgr equ <__imp_CryptUIDlgCertMgr>

externdef __imp_CryptUIDlgFreeCAContext:PPROC
CryptUIDlgFreeCAContext equ <__imp_CryptUIDlgFreeCAContext>

externdef __imp_CryptUIDlgSelectCA:PPROC
CryptUIDlgSelectCA equ <__imp_CryptUIDlgSelectCA>
  IFNDEF __UNICODE__
    CryptUIDlgSelectC equ <__imp_CryptUIDlgSelectCA>
  ENDIF

externdef __imp_CryptUIDlgSelectCertificateA:PPROC
CryptUIDlgSelectCertificateA equ <__imp_CryptUIDlgSelectCertificateA>
  IFNDEF __UNICODE__
    CryptUIDlgSelectCertificate equ <__imp_CryptUIDlgSelectCertificateA>
  ENDIF

externdef __imp_CryptUIDlgSelectCertificateFromStore:PPROC
CryptUIDlgSelectCertificateFromStore equ <__imp_CryptUIDlgSelectCertificateFromStore>

externdef __imp_CryptUIDlgSelectCertificateW:PPROC
CryptUIDlgSelectCertificateW equ <__imp_CryptUIDlgSelectCertificateW>
  IFDEF __UNICODE__
    CryptUIDlgSelectCertificate equ <__imp_CryptUIDlgSelectCertificateW>
  ENDIF

externdef __imp_CryptUIDlgSelectStoreA:PPROC
CryptUIDlgSelectStoreA equ <__imp_CryptUIDlgSelectStoreA>
  IFNDEF __UNICODE__
    CryptUIDlgSelectStore equ <__imp_CryptUIDlgSelectStoreA>
  ENDIF

externdef __imp_CryptUIDlgSelectStoreW:PPROC
CryptUIDlgSelectStoreW equ <__imp_CryptUIDlgSelectStoreW>
  IFDEF __UNICODE__
    CryptUIDlgSelectStore equ <__imp_CryptUIDlgSelectStoreW>
  ENDIF

externdef __imp_CryptUIDlgViewCRLA:PPROC
CryptUIDlgViewCRLA equ <__imp_CryptUIDlgViewCRLA>
  IFNDEF __UNICODE__
    CryptUIDlgViewCRL equ <__imp_CryptUIDlgViewCRLA>
  ENDIF

externdef __imp_CryptUIDlgViewCRLW:PPROC
CryptUIDlgViewCRLW equ <__imp_CryptUIDlgViewCRLW>
  IFDEF __UNICODE__
    CryptUIDlgViewCRL equ <__imp_CryptUIDlgViewCRLW>
  ENDIF

externdef __imp_CryptUIDlgViewCTLA:PPROC
CryptUIDlgViewCTLA equ <__imp_CryptUIDlgViewCTLA>
  IFNDEF __UNICODE__
    CryptUIDlgViewCTL equ <__imp_CryptUIDlgViewCTLA>
  ENDIF

externdef __imp_CryptUIDlgViewCTLW:PPROC
CryptUIDlgViewCTLW equ <__imp_CryptUIDlgViewCTLW>
  IFDEF __UNICODE__
    CryptUIDlgViewCTL equ <__imp_CryptUIDlgViewCTLW>
  ENDIF

externdef __imp_CryptUIDlgViewCertificateA:PPROC
CryptUIDlgViewCertificateA equ <__imp_CryptUIDlgViewCertificateA>
  IFNDEF __UNICODE__
    CryptUIDlgViewCertificate equ <__imp_CryptUIDlgViewCertificateA>
  ENDIF

externdef __imp_CryptUIDlgViewCertificatePropertiesA:PPROC
CryptUIDlgViewCertificatePropertiesA equ <__imp_CryptUIDlgViewCertificatePropertiesA>
  IFNDEF __UNICODE__
    CryptUIDlgViewCertificateProperties equ <__imp_CryptUIDlgViewCertificatePropertiesA>
  ENDIF

externdef __imp_CryptUIDlgViewCertificatePropertiesW:PPROC
CryptUIDlgViewCertificatePropertiesW equ <__imp_CryptUIDlgViewCertificatePropertiesW>
  IFDEF __UNICODE__
    CryptUIDlgViewCertificateProperties equ <__imp_CryptUIDlgViewCertificatePropertiesW>
  ENDIF

externdef __imp_CryptUIDlgViewCertificateW:PPROC
CryptUIDlgViewCertificateW equ <__imp_CryptUIDlgViewCertificateW>
  IFDEF __UNICODE__
    CryptUIDlgViewCertificate equ <__imp_CryptUIDlgViewCertificateW>
  ENDIF

externdef __imp_CryptUIDlgViewContext:PPROC
CryptUIDlgViewContext equ <__imp_CryptUIDlgViewContext>

externdef __imp_CryptUIDlgViewSignerInfoA:PPROC
CryptUIDlgViewSignerInfoA equ <__imp_CryptUIDlgViewSignerInfoA>
  IFNDEF __UNICODE__
    CryptUIDlgViewSignerInfo equ <__imp_CryptUIDlgViewSignerInfoA>
  ENDIF

externdef __imp_CryptUIDlgViewSignerInfoW:PPROC
CryptUIDlgViewSignerInfoW equ <__imp_CryptUIDlgViewSignerInfoW>
  IFDEF __UNICODE__
    CryptUIDlgViewSignerInfo equ <__imp_CryptUIDlgViewSignerInfoW>
  ENDIF

externdef __imp_CryptUIFreeCertificatePropertiesPagesA:PPROC
CryptUIFreeCertificatePropertiesPagesA equ <__imp_CryptUIFreeCertificatePropertiesPagesA>
  IFNDEF __UNICODE__
    CryptUIFreeCertificatePropertiesPages equ <__imp_CryptUIFreeCertificatePropertiesPagesA>
  ENDIF

externdef __imp_CryptUIFreeCertificatePropertiesPagesW:PPROC
CryptUIFreeCertificatePropertiesPagesW equ <__imp_CryptUIFreeCertificatePropertiesPagesW>
  IFDEF __UNICODE__
    CryptUIFreeCertificatePropertiesPages equ <__imp_CryptUIFreeCertificatePropertiesPagesW>
  ENDIF

externdef __imp_CryptUIFreeViewSignaturesPagesA:PPROC
CryptUIFreeViewSignaturesPagesA equ <__imp_CryptUIFreeViewSignaturesPagesA>
  IFNDEF __UNICODE__
    CryptUIFreeViewSignaturesPages equ <__imp_CryptUIFreeViewSignaturesPagesA>
  ENDIF

externdef __imp_CryptUIFreeViewSignaturesPagesW:PPROC
CryptUIFreeViewSignaturesPagesW equ <__imp_CryptUIFreeViewSignaturesPagesW>
  IFDEF __UNICODE__
    CryptUIFreeViewSignaturesPages equ <__imp_CryptUIFreeViewSignaturesPagesW>
  ENDIF

externdef __imp_CryptUIGetCertificatePropertiesPagesA:PPROC
CryptUIGetCertificatePropertiesPagesA equ <__imp_CryptUIGetCertificatePropertiesPagesA>
  IFNDEF __UNICODE__
    CryptUIGetCertificatePropertiesPages equ <__imp_CryptUIGetCertificatePropertiesPagesA>
  ENDIF

externdef __imp_CryptUIGetCertificatePropertiesPagesW:PPROC
CryptUIGetCertificatePropertiesPagesW equ <__imp_CryptUIGetCertificatePropertiesPagesW>
  IFDEF __UNICODE__
    CryptUIGetCertificatePropertiesPages equ <__imp_CryptUIGetCertificatePropertiesPagesW>
  ENDIF

externdef __imp_CryptUIGetViewSignaturesPagesA:PPROC
CryptUIGetViewSignaturesPagesA equ <__imp_CryptUIGetViewSignaturesPagesA>
  IFNDEF __UNICODE__
    CryptUIGetViewSignaturesPages equ <__imp_CryptUIGetViewSignaturesPagesA>
  ENDIF

externdef __imp_CryptUIGetViewSignaturesPagesW:PPROC
CryptUIGetViewSignaturesPagesW equ <__imp_CryptUIGetViewSignaturesPagesW>
  IFDEF __UNICODE__
    CryptUIGetViewSignaturesPages equ <__imp_CryptUIGetViewSignaturesPagesW>
  ENDIF

externdef __imp_CryptUIStartCertMgr:PPROC
CryptUIStartCertMgr equ <__imp_CryptUIStartCertMgr>

externdef __imp_CryptUIWizBuildCTL:PPROC
CryptUIWizBuildCTL equ <__imp_CryptUIWizBuildCTL>

externdef __imp_CryptUIWizCertRequest:PPROC
CryptUIWizCertRequest equ <__imp_CryptUIWizCertRequest>

externdef __imp_CryptUIWizCreateCertRequestNoDS:PPROC
CryptUIWizCreateCertRequestNoDS equ <__imp_CryptUIWizCreateCertRequestNoDS>

externdef __imp_CryptUIWizDigitalSign:PPROC
CryptUIWizDigitalSign equ <__imp_CryptUIWizDigitalSign>

externdef __imp_CryptUIWizExport:PPROC
CryptUIWizExport equ <__imp_CryptUIWizExport>

externdef __imp_CryptUIWizFreeCertRequestNoDS:PPROC
CryptUIWizFreeCertRequestNoDS equ <__imp_CryptUIWizFreeCertRequestNoDS>

externdef __imp_CryptUIWizFreeDigitalSignContext:PPROC
CryptUIWizFreeDigitalSignContext equ <__imp_CryptUIWizFreeDigitalSignContext>

externdef __imp_CryptUIWizImport:PPROC
CryptUIWizImport equ <__imp_CryptUIWizImport>

externdef __imp_CryptUIWizQueryCertRequestNoDS:PPROC
CryptUIWizQueryCertRequestNoDS equ <__imp_CryptUIWizQueryCertRequestNoDS>

externdef __imp_CryptUIWizSubmitCertRequestNoDS:PPROC
CryptUIWizSubmitCertRequestNoDS equ <__imp_CryptUIWizSubmitCertRequestNoDS>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>

externdef __imp_EnrollmentCOMObjectFactory_getInstance:PPROC
EnrollmentCOMObjectFactory_getInstance equ <__imp_EnrollmentCOMObjectFactory_getInstance>

externdef __imp_I_CryptUIProtect:PPROC
I_CryptUIProtect equ <__imp_I_CryptUIProtect>

externdef __imp_I_CryptUIProtectFailure:PPROC
I_CryptUIProtectFailure equ <__imp_I_CryptUIProtectFailure>

externdef __imp_LocalEnroll:PPROC
LocalEnroll equ <__imp_LocalEnroll>

externdef __imp_LocalEnrollNoDS:PPROC
LocalEnrollNoDS equ <__imp_LocalEnrollNoDS>

externdef __imp_RetrievePKCS7FromCA:PPROC
RetrievePKCS7FromCA equ <__imp_RetrievePKCS7FromCA>
  IFNDEF __UNICODE__
    RetrievePKCS7FromC equ <__imp_RetrievePKCS7FromCA>
  ENDIF

externdef __imp_WizardFree:PPROC
WizardFree equ <__imp_WizardFree>
