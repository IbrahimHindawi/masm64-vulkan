externdef __imp_DMOEnum:PPROC
DMOEnum equ <__imp_DMOEnum>

externdef __imp_DMOGetName:PPROC
DMOGetName equ <__imp_DMOGetName>

externdef __imp_DMOGetTypes:PPROC
DMOGetTypes equ <__imp_DMOGetTypes>

externdef __imp_DMOGuidToStrA:PPROC
DMOGuidToStrA equ <__imp_DMOGuidToStrA>
  IFNDEF __UNICODE__
    DMOGuidToStr equ <__imp_DMOGuidToStrA>
  ENDIF

externdef __imp_DMOGuidToStrW:PPROC
DMOGuidToStrW equ <__imp_DMOGuidToStrW>
  IFDEF __UNICODE__
    DMOGuidToStr equ <__imp_DMOGuidToStrW>
  ENDIF

externdef __imp_DMORegister:PPROC
DMORegister equ <__imp_DMORegister>

externdef __imp_DMOStrToGuidA:PPROC
DMOStrToGuidA equ <__imp_DMOStrToGuidA>
  IFNDEF __UNICODE__
    DMOStrToGuid equ <__imp_DMOStrToGuidA>
  ENDIF

externdef __imp_DMOStrToGuidW:PPROC
DMOStrToGuidW equ <__imp_DMOStrToGuidW>
  IFDEF __UNICODE__
    DMOStrToGuid equ <__imp_DMOStrToGuidW>
  ENDIF

externdef __imp_DMOUnregister:PPROC
DMOUnregister equ <__imp_DMOUnregister>

externdef __imp_MoCopyMediaType:PPROC
MoCopyMediaType equ <__imp_MoCopyMediaType>

externdef __imp_MoCreateMediaType:PPROC
MoCreateMediaType equ <__imp_MoCreateMediaType>

externdef __imp_MoDeleteMediaType:PPROC
MoDeleteMediaType equ <__imp_MoDeleteMediaType>

externdef __imp_MoDuplicateMediaType:PPROC
MoDuplicateMediaType equ <__imp_MoDuplicateMediaType>

externdef __imp_MoFreeMediaType:PPROC
MoFreeMediaType equ <__imp_MoFreeMediaType>

externdef __imp_MoInitMediaType:PPROC
MoInitMediaType equ <__imp_MoInitMediaType>
