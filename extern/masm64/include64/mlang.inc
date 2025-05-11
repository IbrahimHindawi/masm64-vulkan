externdef __imp_ConvertINetMultiByteToUnicode:PPROC
ConvertINetMultiByteToUnicode equ <__imp_ConvertINetMultiByteToUnicode>

externdef __imp_ConvertINetReset:PPROC
ConvertINetReset equ <__imp_ConvertINetReset>

externdef __imp_ConvertINetString:PPROC
ConvertINetString equ <__imp_ConvertINetString>

externdef __imp_ConvertINetUnicodeToMultiByte:PPROC
ConvertINetUnicodeToMultiByte equ <__imp_ConvertINetUnicodeToMultiByte>

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>

externdef __imp_GetGlobalFontLinkObject:PPROC
GetGlobalFontLinkObject equ <__imp_GetGlobalFontLinkObject>

externdef __imp_IsConvertINetStringAvailable:PPROC
IsConvertINetStringAvailable equ <__imp_IsConvertINetStringAvailable>

externdef __imp_LcidToRfc1766A:PPROC
LcidToRfc1766A equ <__imp_LcidToRfc1766A>
  IFNDEF __UNICODE__
    LcidToRfc1766 equ <__imp_LcidToRfc1766A>
  ENDIF

externdef __imp_LcidToRfc1766W:PPROC
LcidToRfc1766W equ <__imp_LcidToRfc1766W>
  IFDEF __UNICODE__
    LcidToRfc1766 equ <__imp_LcidToRfc1766W>
  ENDIF

externdef __imp_Rfc1766ToLcidA:PPROC
Rfc1766ToLcidA equ <__imp_Rfc1766ToLcidA>
  IFNDEF __UNICODE__
    Rfc1766ToLcid equ <__imp_Rfc1766ToLcidA>
  ENDIF

externdef __imp_Rfc1766ToLcidW:PPROC
Rfc1766ToLcidW equ <__imp_Rfc1766ToLcidW>
  IFDEF __UNICODE__
    Rfc1766ToLcid equ <__imp_Rfc1766ToLcidW>
  ENDIF
