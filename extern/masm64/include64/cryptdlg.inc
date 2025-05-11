externdef __imp_CertConfigureTrustA:PPROC
CertConfigureTrustA equ <__imp_CertConfigureTrustA>
  IFNDEF __UNICODE__
    CertConfigureTrust equ <__imp_CertConfigureTrustA>
  ENDIF

externdef __imp_CertConfigureTrustW:PPROC
CertConfigureTrustW equ <__imp_CertConfigureTrustW>
  IFDEF __UNICODE__
    CertConfigureTrust equ <__imp_CertConfigureTrustW>
  ENDIF

externdef __imp_CertModifyCertificatesToTrust:PPROC
CertModifyCertificatesToTrust equ <__imp_CertModifyCertificatesToTrust>

externdef __imp_CertSelectCertificateA:PPROC
CertSelectCertificateA equ <__imp_CertSelectCertificateA>
  IFNDEF __UNICODE__
    CertSelectCertificate equ <__imp_CertSelectCertificateA>
  ENDIF

externdef __imp_CertSelectCertificateW:PPROC
CertSelectCertificateW equ <__imp_CertSelectCertificateW>
  IFDEF __UNICODE__
    CertSelectCertificate equ <__imp_CertSelectCertificateW>
  ENDIF

externdef __imp_CertTrustCertPolicy:PPROC
CertTrustCertPolicy equ <__imp_CertTrustCertPolicy>

externdef __imp_CertTrustCleanup:PPROC
CertTrustCleanup equ <__imp_CertTrustCleanup>

externdef __imp_CertTrustFinalPolicy:PPROC
CertTrustFinalPolicy equ <__imp_CertTrustFinalPolicy>

externdef __imp_CertTrustInit:PPROC
CertTrustInit equ <__imp_CertTrustInit>

externdef __imp_CertViewPropertiesA:PPROC
CertViewPropertiesA equ <__imp_CertViewPropertiesA>
  IFNDEF __UNICODE__
    CertViewProperties equ <__imp_CertViewPropertiesA>
  ENDIF

externdef __imp_CertViewPropertiesW:PPROC
CertViewPropertiesW equ <__imp_CertViewPropertiesW>
  IFDEF __UNICODE__
    CertViewProperties equ <__imp_CertViewPropertiesW>
  ENDIF

externdef __imp_DecodeAttrSequence:PPROC
DecodeAttrSequence equ <__imp_DecodeAttrSequence>

externdef __imp_DecodeRecipientID:PPROC
DecodeRecipientID equ <__imp_DecodeRecipientID>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>

externdef __imp_EncodeAttrSequence:PPROC
EncodeAttrSequence equ <__imp_EncodeAttrSequence>

externdef __imp_EncodeRecipientID:PPROC
EncodeRecipientID equ <__imp_EncodeRecipientID>

externdef __imp_FormatPKIXEmailProtection:PPROC
FormatPKIXEmailProtection equ <__imp_FormatPKIXEmailProtection>

externdef __imp_FormatVerisignExtension:PPROC
FormatVerisignExtension equ <__imp_FormatVerisignExtension>

externdef __imp_GetFriendlyNameOfCertA:PPROC
GetFriendlyNameOfCertA equ <__imp_GetFriendlyNameOfCertA>
  IFNDEF __UNICODE__
    GetFriendlyNameOfCert equ <__imp_GetFriendlyNameOfCertA>
  ENDIF

externdef __imp_GetFriendlyNameOfCertW:PPROC
GetFriendlyNameOfCertW equ <__imp_GetFriendlyNameOfCertW>
  IFDEF __UNICODE__
    GetFriendlyNameOfCert equ <__imp_GetFriendlyNameOfCertW>
  ENDIF
