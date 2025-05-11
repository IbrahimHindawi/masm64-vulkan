externdef __imp_DllMain:PPROC
DllMain equ <__imp_DllMain>

externdef __imp_InitializeProfileMappingApi:PPROC
InitializeProfileMappingApi equ <__imp_InitializeProfileMappingApi>

externdef __imp_RemapAndMoveUserA:PPROC
RemapAndMoveUserA equ <__imp_RemapAndMoveUserA>
  IFNDEF __UNICODE__
    RemapAndMoveUser equ <__imp_RemapAndMoveUserA>
  ENDIF

externdef __imp_RemapAndMoveUserW:PPROC
RemapAndMoveUserW equ <__imp_RemapAndMoveUserW>
  IFDEF __UNICODE__
    RemapAndMoveUser equ <__imp_RemapAndMoveUserW>
  ENDIF

externdef __imp_RemapUserProfileA:PPROC
RemapUserProfileA equ <__imp_RemapUserProfileA>
  IFNDEF __UNICODE__
    RemapUserProfile equ <__imp_RemapUserProfileA>
  ENDIF

externdef __imp_RemapUserProfileW:PPROC
RemapUserProfileW equ <__imp_RemapUserProfileW>
  IFDEF __UNICODE__
    RemapUserProfile equ <__imp_RemapUserProfileW>
  ENDIF
