externdef __imp_CompareLinkInfoReferents:PPROC
CompareLinkInfoReferents equ <__imp_CompareLinkInfoReferents>

externdef __imp_CompareLinkInfoVolumes:PPROC
CompareLinkInfoVolumes equ <__imp_CompareLinkInfoVolumes>

externdef __imp_CreateLinkInfo:PPROC
CreateLinkInfo equ <__imp_CreateLinkInfo>

externdef __imp_CreateLinkInfoA:PPROC
CreateLinkInfoA equ <__imp_CreateLinkInfoA>
  IFNDEF __UNICODE__
    CreateLinkInfo equ <__imp_CreateLinkInfoA>
  ENDIF

externdef __imp_CreateLinkInfoW:PPROC
CreateLinkInfoW equ <__imp_CreateLinkInfoW>
  IFDEF __UNICODE__
    CreateLinkInfo equ <__imp_CreateLinkInfoW>
  ENDIF

externdef __imp_DestroyLinkInfo:PPROC
DestroyLinkInfo equ <__imp_DestroyLinkInfo>

externdef __imp_DisconnectLinkInfo:PPROC
DisconnectLinkInfo equ <__imp_DisconnectLinkInfo>

externdef __imp_GetCanonicalPathInfo:PPROC
GetCanonicalPathInfo equ <__imp_GetCanonicalPathInfo>

externdef __imp_GetCanonicalPathInfoA:PPROC
GetCanonicalPathInfoA equ <__imp_GetCanonicalPathInfoA>
  IFNDEF __UNICODE__
    GetCanonicalPathInfo equ <__imp_GetCanonicalPathInfoA>
  ENDIF

externdef __imp_GetCanonicalPathInfoW:PPROC
GetCanonicalPathInfoW equ <__imp_GetCanonicalPathInfoW>
  IFDEF __UNICODE__
    GetCanonicalPathInfo equ <__imp_GetCanonicalPathInfoW>
  ENDIF

externdef __imp_GetLinkInfoData:PPROC
GetLinkInfoData equ <__imp_GetLinkInfoData>

externdef __imp_IsValidLinkInfo:PPROC
IsValidLinkInfo equ <__imp_IsValidLinkInfo>

externdef __imp_ResolveLinkInfo:PPROC
ResolveLinkInfo equ <__imp_ResolveLinkInfo>

externdef __imp_ResolveLinkInfoA:PPROC
ResolveLinkInfoA equ <__imp_ResolveLinkInfoA>
  IFNDEF __UNICODE__
    ResolveLinkInfo equ <__imp_ResolveLinkInfoA>
  ENDIF

externdef __imp_ResolveLinkInfoW:PPROC
ResolveLinkInfoW equ <__imp_ResolveLinkInfoW>
  IFDEF __UNICODE__
    ResolveLinkInfo equ <__imp_ResolveLinkInfoW>
  ENDIF
