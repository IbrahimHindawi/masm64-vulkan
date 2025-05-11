externdef __imp_CMCheckColors:PPROC
CMCheckColors equ <__imp_CMCheckColors>

externdef __imp_CMCheckColorsInGamut:PPROC
CMCheckColorsInGamut equ <__imp_CMCheckColorsInGamut>

externdef __imp_CMCheckRGBs:PPROC
CMCheckRGBs equ <__imp_CMCheckRGBs>

externdef __imp_CMConvertColorNameToIndex:PPROC
CMConvertColorNameToIndex equ <__imp_CMConvertColorNameToIndex>

externdef __imp_CMConvertIndexToColorName:PPROC
CMConvertIndexToColorName equ <__imp_CMConvertIndexToColorName>

externdef __imp_CMCreateDeviceLinkProfile:PPROC
CMCreateDeviceLinkProfile equ <__imp_CMCreateDeviceLinkProfile>

externdef __imp_CMCreateMultiProfileTransform:PPROC
CMCreateMultiProfileTransform equ <__imp_CMCreateMultiProfileTransform>

externdef __imp_CMCreateProfile:PPROC
CMCreateProfile equ <__imp_CMCreateProfile>

externdef __imp_CMCreateProfileW:PPROC
CMCreateProfileW equ <__imp_CMCreateProfileW>
  IFDEF __UNICODE__
    CMCreateProfile equ <__imp_CMCreateProfileW>
  ENDIF

externdef __imp_CMCreateTransform:PPROC
CMCreateTransform equ <__imp_CMCreateTransform>

externdef __imp_CMCreateTransformExt:PPROC
CMCreateTransformExt equ <__imp_CMCreateTransformExt>

externdef __imp_CMCreateTransformExtW:PPROC
CMCreateTransformExtW equ <__imp_CMCreateTransformExtW>
  IFDEF __UNICODE__
    CMCreateTransformExt equ <__imp_CMCreateTransformExtW>
  ENDIF

externdef __imp_CMCreateTransformW:PPROC
CMCreateTransformW equ <__imp_CMCreateTransformW>
  IFDEF __UNICODE__
    CMCreateTransform equ <__imp_CMCreateTransformW>
  ENDIF

externdef __imp_CMDeleteTransform:PPROC
CMDeleteTransform equ <__imp_CMDeleteTransform>

externdef __imp_CMGetInfo:PPROC
CMGetInfo equ <__imp_CMGetInfo>

externdef __imp_CMGetNamedProfileInfo:PPROC
CMGetNamedProfileInfo equ <__imp_CMGetNamedProfileInfo>

externdef __imp_CMIsProfileValid:PPROC
CMIsProfileValid equ <__imp_CMIsProfileValid>

externdef __imp_CMTranslateColors:PPROC
CMTranslateColors equ <__imp_CMTranslateColors>

externdef __imp_CMTranslateRGB:PPROC
CMTranslateRGB equ <__imp_CMTranslateRGB>

externdef __imp_CMTranslateRGBs:PPROC
CMTranslateRGBs equ <__imp_CMTranslateRGBs>

externdef __imp_CMTranslateRGBsExt:PPROC
CMTranslateRGBsExt equ <__imp_CMTranslateRGBsExt>
