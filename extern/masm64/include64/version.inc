externdef __imp_GetFileVersionInfoA:PPROC
GetFileVersionInfoA equ <__imp_GetFileVersionInfoA>
  IFNDEF __UNICODE__
    GetFileVersionInfo equ <__imp_GetFileVersionInfoA>
  ENDIF

externdef __imp_GetFileVersionInfoSizeA:PPROC
GetFileVersionInfoSizeA equ <__imp_GetFileVersionInfoSizeA>
  IFNDEF __UNICODE__
    GetFileVersionInfoSize equ <__imp_GetFileVersionInfoSizeA>
  ENDIF

externdef __imp_GetFileVersionInfoSizeW:PPROC
GetFileVersionInfoSizeW equ <__imp_GetFileVersionInfoSizeW>
  IFDEF __UNICODE__
    GetFileVersionInfoSize equ <__imp_GetFileVersionInfoSizeW>
  ENDIF

externdef __imp_GetFileVersionInfoW:PPROC
GetFileVersionInfoW equ <__imp_GetFileVersionInfoW>
  IFDEF __UNICODE__
    GetFileVersionInfo equ <__imp_GetFileVersionInfoW>
  ENDIF

externdef __imp_VerFindFileA:PPROC
VerFindFileA equ <__imp_VerFindFileA>
  IFNDEF __UNICODE__
    VerFindFile equ <__imp_VerFindFileA>
  ENDIF

externdef __imp_VerFindFileW:PPROC
VerFindFileW equ <__imp_VerFindFileW>
  IFDEF __UNICODE__
    VerFindFile equ <__imp_VerFindFileW>
  ENDIF

externdef __imp_VerInstallFileA:PPROC
VerInstallFileA equ <__imp_VerInstallFileA>
  IFNDEF __UNICODE__
    VerInstallFile equ <__imp_VerInstallFileA>
  ENDIF

externdef __imp_VerInstallFileW:PPROC
VerInstallFileW equ <__imp_VerInstallFileW>
  IFDEF __UNICODE__
    VerInstallFile equ <__imp_VerInstallFileW>
  ENDIF

externdef __imp_VerLanguageNameA:PPROC
VerLanguageNameA equ <__imp_VerLanguageNameA>
  IFNDEF __UNICODE__
    VerLanguageName equ <__imp_VerLanguageNameA>
  ENDIF

externdef __imp_VerLanguageNameW:PPROC
VerLanguageNameW equ <__imp_VerLanguageNameW>
  IFDEF __UNICODE__
    VerLanguageName equ <__imp_VerLanguageNameW>
  ENDIF

externdef __imp_VerQueryValueA:PPROC
VerQueryValueA equ <__imp_VerQueryValueA>
  IFNDEF __UNICODE__
    VerQueryValue equ <__imp_VerQueryValueA>
  ENDIF

externdef __imp_VerQueryValueIndexA:PPROC
VerQueryValueIndexA equ <__imp_VerQueryValueIndexA>
  IFNDEF __UNICODE__
    VerQueryValueIndex equ <__imp_VerQueryValueIndexA>
  ENDIF

externdef __imp_VerQueryValueIndexW:PPROC
VerQueryValueIndexW equ <__imp_VerQueryValueIndexW>
  IFDEF __UNICODE__
    VerQueryValueIndex equ <__imp_VerQueryValueIndexW>
  ENDIF

externdef __imp_VerQueryValueW:PPROC
VerQueryValueW equ <__imp_VerQueryValueW>
  IFDEF __UNICODE__
    VerQueryValue equ <__imp_VerQueryValueW>
  ENDIF
