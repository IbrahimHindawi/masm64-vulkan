externdef __imp_NtLSFreeHandle:PPROC
NtLSFreeHandle equ <__imp_NtLSFreeHandle>

externdef __imp_NtLicenseRequestA:PPROC
NtLicenseRequestA equ <__imp_NtLicenseRequestA>
  IFNDEF __UNICODE__
    NtLicenseRequest equ <__imp_NtLicenseRequestA>
  ENDIF

externdef __imp_NtLicenseRequestW:PPROC
NtLicenseRequestW equ <__imp_NtLicenseRequestW>
  IFDEF __UNICODE__
    NtLicenseRequest equ <__imp_NtLicenseRequestW>
  ENDIF
