externdef __imp_AssociateColorProfileWithDeviceA:PPROC
AssociateColorProfileWithDeviceA equ <__imp_AssociateColorProfileWithDeviceA>
  IFNDEF __UNICODE__
    AssociateColorProfileWithDevice equ <__imp_AssociateColorProfileWithDeviceA>
  ENDIF

externdef __imp_AssociateColorProfileWithDeviceW:PPROC
AssociateColorProfileWithDeviceW equ <__imp_AssociateColorProfileWithDeviceW>
  IFDEF __UNICODE__
    AssociateColorProfileWithDevice equ <__imp_AssociateColorProfileWithDeviceW>
  ENDIF

externdef __imp_CheckBitmapBits:PPROC
CheckBitmapBits equ <__imp_CheckBitmapBits>

externdef __imp_CheckColors:PPROC
CheckColors equ <__imp_CheckColors>

externdef __imp_CloseColorProfile:PPROC
CloseColorProfile equ <__imp_CloseColorProfile>

externdef __imp_ConvertColorNameToIndex:PPROC
ConvertColorNameToIndex equ <__imp_ConvertColorNameToIndex>

externdef __imp_ConvertIndexToColorName:PPROC
ConvertIndexToColorName equ <__imp_ConvertIndexToColorName>

externdef __imp_CreateColorTransformA:PPROC
CreateColorTransformA equ <__imp_CreateColorTransformA>
  IFNDEF __UNICODE__
    CreateColorTransform equ <__imp_CreateColorTransformA>
  ENDIF

externdef __imp_CreateColorTransformW:PPROC
CreateColorTransformW equ <__imp_CreateColorTransformW>
  IFDEF __UNICODE__
    CreateColorTransform equ <__imp_CreateColorTransformW>
  ENDIF

externdef __imp_CreateDeviceLinkProfile:PPROC
CreateDeviceLinkProfile equ <__imp_CreateDeviceLinkProfile>

externdef __imp_CreateMultiProfileTransform:PPROC
CreateMultiProfileTransform equ <__imp_CreateMultiProfileTransform>

externdef __imp_CreateProfileFromLogColorSpaceA:PPROC
CreateProfileFromLogColorSpaceA equ <__imp_CreateProfileFromLogColorSpaceA>
  IFNDEF __UNICODE__
    CreateProfileFromLogColorSpace equ <__imp_CreateProfileFromLogColorSpaceA>
  ENDIF

externdef __imp_CreateProfileFromLogColorSpaceW:PPROC
CreateProfileFromLogColorSpaceW equ <__imp_CreateProfileFromLogColorSpaceW>
  IFDEF __UNICODE__
    CreateProfileFromLogColorSpace equ <__imp_CreateProfileFromLogColorSpaceW>
  ENDIF

externdef __imp_DeleteColorTransform:PPROC
DeleteColorTransform equ <__imp_DeleteColorTransform>

externdef __imp_DisassociateColorProfileFromDeviceA:PPROC
DisassociateColorProfileFromDeviceA equ <__imp_DisassociateColorProfileFromDeviceA>
  IFNDEF __UNICODE__
    DisassociateColorProfileFromDevice equ <__imp_DisassociateColorProfileFromDeviceA>
  ENDIF

externdef __imp_DisassociateColorProfileFromDeviceW:PPROC
DisassociateColorProfileFromDeviceW equ <__imp_DisassociateColorProfileFromDeviceW>
  IFDEF __UNICODE__
    DisassociateColorProfileFromDevice equ <__imp_DisassociateColorProfileFromDeviceW>
  ENDIF

externdef __imp_EnumColorProfilesA:PPROC
EnumColorProfilesA equ <__imp_EnumColorProfilesA>
  IFNDEF __UNICODE__
    EnumColorProfiles equ <__imp_EnumColorProfilesA>
  ENDIF

externdef __imp_EnumColorProfilesW:PPROC
EnumColorProfilesW equ <__imp_EnumColorProfilesW>
  IFDEF __UNICODE__
    EnumColorProfiles equ <__imp_EnumColorProfilesW>
  ENDIF

externdef __imp_GenerateCopyFilePaths:PPROC
GenerateCopyFilePaths equ <__imp_GenerateCopyFilePaths>

externdef __imp_GetCMMInfo:PPROC
GetCMMInfo equ <__imp_GetCMMInfo>

externdef __imp_GetColorDirectoryA:PPROC
GetColorDirectoryA equ <__imp_GetColorDirectoryA>
  IFNDEF __UNICODE__
    GetColorDirectory equ <__imp_GetColorDirectoryA>
  ENDIF

externdef __imp_GetColorDirectoryW:PPROC
GetColorDirectoryW equ <__imp_GetColorDirectoryW>
  IFDEF __UNICODE__
    GetColorDirectory equ <__imp_GetColorDirectoryW>
  ENDIF

externdef __imp_GetColorProfileElement:PPROC
GetColorProfileElement equ <__imp_GetColorProfileElement>

externdef __imp_GetColorProfileElementTag:PPROC
GetColorProfileElementTag equ <__imp_GetColorProfileElementTag>

externdef __imp_GetColorProfileFromHandle:PPROC
GetColorProfileFromHandle equ <__imp_GetColorProfileFromHandle>

externdef __imp_GetColorProfileHeader:PPROC
GetColorProfileHeader equ <__imp_GetColorProfileHeader>

externdef __imp_GetCountColorProfileElements:PPROC
GetCountColorProfileElements equ <__imp_GetCountColorProfileElements>

externdef __imp_GetNamedProfileInfo:PPROC
GetNamedProfileInfo equ <__imp_GetNamedProfileInfo>

externdef __imp_GetPS2ColorRenderingDictionary:PPROC
GetPS2ColorRenderingDictionary equ <__imp_GetPS2ColorRenderingDictionary>

externdef __imp_GetPS2ColorRenderingIntent:PPROC
GetPS2ColorRenderingIntent equ <__imp_GetPS2ColorRenderingIntent>

externdef __imp_GetPS2ColorSpaceArray:PPROC
GetPS2ColorSpaceArray equ <__imp_GetPS2ColorSpaceArray>

externdef __imp_GetStandardColorSpaceProfileA:PPROC
GetStandardColorSpaceProfileA equ <__imp_GetStandardColorSpaceProfileA>
  IFNDEF __UNICODE__
    GetStandardColorSpaceProfile equ <__imp_GetStandardColorSpaceProfileA>
  ENDIF

externdef __imp_GetStandardColorSpaceProfileW:PPROC
GetStandardColorSpaceProfileW equ <__imp_GetStandardColorSpaceProfileW>
  IFDEF __UNICODE__
    GetStandardColorSpaceProfile equ <__imp_GetStandardColorSpaceProfileW>
  ENDIF

externdef __imp_InstallColorProfileA:PPROC
InstallColorProfileA equ <__imp_InstallColorProfileA>
  IFNDEF __UNICODE__
    InstallColorProfile equ <__imp_InstallColorProfileA>
  ENDIF

externdef __imp_InstallColorProfileW:PPROC
InstallColorProfileW equ <__imp_InstallColorProfileW>
  IFDEF __UNICODE__
    InstallColorProfile equ <__imp_InstallColorProfileW>
  ENDIF

externdef __imp_InternalGetDeviceConfig:PPROC
InternalGetDeviceConfig equ <__imp_InternalGetDeviceConfig>

externdef __imp_InternalGetPS2CSAFromLCS:PPROC
InternalGetPS2CSAFromLCS equ <__imp_InternalGetPS2CSAFromLCS>

externdef __imp_InternalGetPS2ColorRenderingDictionary:PPROC
InternalGetPS2ColorRenderingDictionary equ <__imp_InternalGetPS2ColorRenderingDictionary>

externdef __imp_InternalGetPS2ColorSpaceArray:PPROC
InternalGetPS2ColorSpaceArray equ <__imp_InternalGetPS2ColorSpaceArray>

externdef __imp_InternalGetPS2PreviewCRD:PPROC
InternalGetPS2PreviewCRD equ <__imp_InternalGetPS2PreviewCRD>

externdef __imp_InternalSetDeviceConfig:PPROC
InternalSetDeviceConfig equ <__imp_InternalSetDeviceConfig>

externdef __imp_IsColorProfileTagPresent:PPROC
IsColorProfileTagPresent equ <__imp_IsColorProfileTagPresent>

externdef __imp_IsColorProfileValid:PPROC
IsColorProfileValid equ <__imp_IsColorProfileValid>

externdef __imp_OpenColorProfileA:PPROC
OpenColorProfileA equ <__imp_OpenColorProfileA>
  IFNDEF __UNICODE__
    OpenColorProfile equ <__imp_OpenColorProfileA>
  ENDIF

externdef __imp_OpenColorProfileW:PPROC
OpenColorProfileW equ <__imp_OpenColorProfileW>
  IFDEF __UNICODE__
    OpenColorProfile equ <__imp_OpenColorProfileW>
  ENDIF

externdef __imp_RegisterCMMA:PPROC
RegisterCMMA equ <__imp_RegisterCMMA>
  IFNDEF __UNICODE__
    RegisterCMM equ <__imp_RegisterCMMA>
  ENDIF

externdef __imp_RegisterCMMW:PPROC
RegisterCMMW equ <__imp_RegisterCMMW>
  IFDEF __UNICODE__
    RegisterCMM equ <__imp_RegisterCMMW>
  ENDIF

externdef __imp_SelectCMM:PPROC
SelectCMM equ <__imp_SelectCMM>

externdef __imp_SetColorProfileElement:PPROC
SetColorProfileElement equ <__imp_SetColorProfileElement>

externdef __imp_SetColorProfileElementReference:PPROC
SetColorProfileElementReference equ <__imp_SetColorProfileElementReference>

externdef __imp_SetColorProfileElementSize:PPROC
SetColorProfileElementSize equ <__imp_SetColorProfileElementSize>

externdef __imp_SetColorProfileHeader:PPROC
SetColorProfileHeader equ <__imp_SetColorProfileHeader>

externdef __imp_SetStandardColorSpaceProfileA:PPROC
SetStandardColorSpaceProfileA equ <__imp_SetStandardColorSpaceProfileA>
  IFNDEF __UNICODE__
    SetStandardColorSpaceProfile equ <__imp_SetStandardColorSpaceProfileA>
  ENDIF

externdef __imp_SetStandardColorSpaceProfileW:PPROC
SetStandardColorSpaceProfileW equ <__imp_SetStandardColorSpaceProfileW>
  IFDEF __UNICODE__
    SetStandardColorSpaceProfile equ <__imp_SetStandardColorSpaceProfileW>
  ENDIF

externdef __imp_SpoolerCopyFileEvent:PPROC
SpoolerCopyFileEvent equ <__imp_SpoolerCopyFileEvent>

externdef __imp_TranslateBitmapBits:PPROC
TranslateBitmapBits equ <__imp_TranslateBitmapBits>

externdef __imp_TranslateColors:PPROC
TranslateColors equ <__imp_TranslateColors>

externdef __imp_UninstallColorProfileA:PPROC
UninstallColorProfileA equ <__imp_UninstallColorProfileA>
  IFNDEF __UNICODE__
    UninstallColorProfile equ <__imp_UninstallColorProfileA>
  ENDIF

externdef __imp_UninstallColorProfileW:PPROC
UninstallColorProfileW equ <__imp_UninstallColorProfileW>
  IFDEF __UNICODE__
    UninstallColorProfile equ <__imp_UninstallColorProfileW>
  ENDIF

externdef __imp_UnregisterCMMA:PPROC
UnregisterCMMA equ <__imp_UnregisterCMMA>
  IFNDEF __UNICODE__
    UnregisterCMM equ <__imp_UnregisterCMMA>
  ENDIF

externdef __imp_UnregisterCMMW:PPROC
UnregisterCMMW equ <__imp_UnregisterCMMW>
  IFDEF __UNICODE__
    UnregisterCMM equ <__imp_UnregisterCMMW>
  ENDIF
