externdef __imp_AsyncGetClassBits:PPROC
AsyncGetClassBits equ <__imp_AsyncGetClassBits>

externdef __imp_AsyncInstallDistributionUnit:PPROC
AsyncInstallDistributionUnit equ <__imp_AsyncInstallDistributionUnit>

externdef __imp_BindAsyncMoniker:PPROC
BindAsyncMoniker equ <__imp_BindAsyncMoniker>

externdef __imp_CDLGetLongPathNameA:PPROC
CDLGetLongPathNameA equ <__imp_CDLGetLongPathNameA>
  IFNDEF __UNICODE__
    CDLGetLongPathName equ <__imp_CDLGetLongPathNameA>
  ENDIF

externdef __imp_CDLGetLongPathNameW:PPROC
CDLGetLongPathNameW equ <__imp_CDLGetLongPathNameW>
  IFDEF __UNICODE__
    CDLGetLongPathName equ <__imp_CDLGetLongPathNameW>
  ENDIF

externdef __imp_CoGetClassObjectFromURL:PPROC
CoGetClassObjectFromURL equ <__imp_CoGetClassObjectFromURL>

externdef __imp_CoInstall:PPROC
CoInstall equ <__imp_CoInstall>

externdef __imp_CoInternetCombineUrl:PPROC
CoInternetCombineUrl equ <__imp_CoInternetCombineUrl>

externdef __imp_CoInternetCompareUrl:PPROC
CoInternetCompareUrl equ <__imp_CoInternetCompareUrl>

externdef __imp_CoInternetCreateSecurityManager:PPROC
CoInternetCreateSecurityManager equ <__imp_CoInternetCreateSecurityManager>

externdef __imp_CoInternetCreateZoneManager:PPROC
CoInternetCreateZoneManager equ <__imp_CoInternetCreateZoneManager>

externdef __imp_CoInternetFeatureSettingsChanged:PPROC
CoInternetFeatureSettingsChanged equ <__imp_CoInternetFeatureSettingsChanged>

externdef __imp_CoInternetGetProtocolFlags:PPROC
CoInternetGetProtocolFlags equ <__imp_CoInternetGetProtocolFlags>

externdef __imp_CoInternetGetSecurityUrl:PPROC
CoInternetGetSecurityUrl equ <__imp_CoInternetGetSecurityUrl>

externdef __imp_CoInternetGetSession:PPROC
CoInternetGetSession equ <__imp_CoInternetGetSession>

externdef __imp_CoInternetIsFeatureEnabled:PPROC
CoInternetIsFeatureEnabled equ <__imp_CoInternetIsFeatureEnabled>

externdef __imp_CoInternetIsFeatureEnabledForUrl:PPROC
CoInternetIsFeatureEnabledForUrl equ <__imp_CoInternetIsFeatureEnabledForUrl>

externdef __imp_CoInternetIsFeatureZoneElevationEnabled:PPROC
CoInternetIsFeatureZoneElevationEnabled equ <__imp_CoInternetIsFeatureZoneElevationEnabled>

externdef __imp_CoInternetParseUrl:PPROC
CoInternetParseUrl equ <__imp_CoInternetParseUrl>

externdef __imp_CoInternetQueryInfo:PPROC
CoInternetQueryInfo equ <__imp_CoInternetQueryInfo>

externdef __imp_CoInternetSetFeatureEnabled:PPROC
CoInternetSetFeatureEnabled equ <__imp_CoInternetSetFeatureEnabled>

externdef __imp_CompareSecurityIds:PPROC
CompareSecurityIds equ <__imp_CompareSecurityIds>

externdef __imp_CompatFlagsFromClsid:PPROC
CompatFlagsFromClsid equ <__imp_CompatFlagsFromClsid>

externdef __imp_CopyBindInfo:PPROC
CopyBindInfo equ <__imp_CopyBindInfo>

externdef __imp_CopyStgMedium:PPROC
CopyStgMedium equ <__imp_CopyStgMedium>

externdef __imp_CreateAsyncBindCtx:PPROC
CreateAsyncBindCtx equ <__imp_CreateAsyncBindCtx>

externdef __imp_CreateAsyncBindCtxEx:PPROC
CreateAsyncBindCtxEx equ <__imp_CreateAsyncBindCtxEx>

externdef __imp_CreateFormatEnumerator:PPROC
CreateFormatEnumerator equ <__imp_CreateFormatEnumerator>

externdef __imp_CreateURLMoniker:PPROC
CreateURLMoniker equ <__imp_CreateURLMoniker>

externdef __imp_CreateURLMonikerEx:PPROC
CreateURLMonikerEx equ <__imp_CreateURLMonikerEx>

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_DllInstall:PPROC
DllInstall equ <__imp_DllInstall>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllRegisterServerEx:PPROC
DllRegisterServerEx equ <__imp_DllRegisterServerEx>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>

externdef __imp_Extract:PPROC
Extract equ <__imp_Extract>

externdef __imp_FaultInIEFeature:PPROC
FaultInIEFeature equ <__imp_FaultInIEFeature>

externdef __imp_FindMediaType:PPROC
FindMediaType equ <__imp_FindMediaType>

externdef __imp_FindMediaTypeClass:PPROC
FindMediaTypeClass equ <__imp_FindMediaTypeClass>

externdef __imp_FindMimeFromData:PPROC
FindMimeFromData equ <__imp_FindMimeFromData>

externdef __imp_GetAddSitesFileUrl:PPROC
GetAddSitesFileUrl equ <__imp_GetAddSitesFileUrl>

externdef __imp_GetClassFileOrMime:PPROC
GetClassFileOrMime equ <__imp_GetClassFileOrMime>

externdef __imp_GetClassURL:PPROC
GetClassURL equ <__imp_GetClassURL>

externdef __imp_GetComponentIDFromCLSSPEC:PPROC
GetComponentIDFromCLSSPEC equ <__imp_GetComponentIDFromCLSSPEC>

externdef __imp_GetMarkOfTheWeb:PPROC
GetMarkOfTheWeb equ <__imp_GetMarkOfTheWeb>

externdef __imp_GetSoftwareUpdateInfo:PPROC
GetSoftwareUpdateInfo equ <__imp_GetSoftwareUpdateInfo>

externdef __imp_HlinkGoBack:PPROC
HlinkGoBack equ <__imp_HlinkGoBack>

externdef __imp_HlinkGoForward:PPROC
HlinkGoForward equ <__imp_HlinkGoForward>

externdef __imp_HlinkNavigateMoniker:PPROC
HlinkNavigateMoniker equ <__imp_HlinkNavigateMoniker>

externdef __imp_HlinkNavigateString:PPROC
HlinkNavigateString equ <__imp_HlinkNavigateString>

externdef __imp_HlinkSimpleNavigateToMoniker:PPROC
HlinkSimpleNavigateToMoniker equ <__imp_HlinkSimpleNavigateToMoniker>

externdef __imp_HlinkSimpleNavigateToString:PPROC
HlinkSimpleNavigateToString equ <__imp_HlinkSimpleNavigateToString>

externdef __imp_InstallFlash:PPROC
InstallFlash equ <__imp_InstallFlash>

externdef __imp_IsAsyncMoniker:PPROC
IsAsyncMoniker equ <__imp_IsAsyncMoniker>

externdef __imp_IsJITInProgress:PPROC
IsJITInProgress equ <__imp_IsJITInProgress>

externdef __imp_IsLoggingEnabledA:PPROC
IsLoggingEnabledA equ <__imp_IsLoggingEnabledA>
  IFNDEF __UNICODE__
    IsLoggingEnabled equ <__imp_IsLoggingEnabledA>
  ENDIF

externdef __imp_IsLoggingEnabledW:PPROC
IsLoggingEnabledW equ <__imp_IsLoggingEnabledW>
  IFDEF __UNICODE__
    IsLoggingEnabled equ <__imp_IsLoggingEnabledW>
  ENDIF

externdef __imp_IsValidURL:PPROC
IsValidURL equ <__imp_IsValidURL>

externdef __imp_MkParseDisplayNameEx:PPROC
MkParseDisplayNameEx equ <__imp_MkParseDisplayNameEx>

externdef __imp_ObtainUserAgentString:PPROC
ObtainUserAgentString equ <__imp_ObtainUserAgentString>

externdef __imp_PrivateCoInstall:PPROC
PrivateCoInstall equ <__imp_PrivateCoInstall>

externdef __imp_RegisterBindStatusCallback:PPROC
RegisterBindStatusCallback equ <__imp_RegisterBindStatusCallback>

externdef __imp_RegisterFormatEnumerator:PPROC
RegisterFormatEnumerator equ <__imp_RegisterFormatEnumerator>

externdef __imp_RegisterMediaTypeClass:PPROC
RegisterMediaTypeClass equ <__imp_RegisterMediaTypeClass>

externdef __imp_RegisterMediaTypes:PPROC
RegisterMediaTypes equ <__imp_RegisterMediaTypes>

externdef __imp_ReleaseBindInfo:PPROC
ReleaseBindInfo equ <__imp_ReleaseBindInfo>

externdef __imp_RevokeBindStatusCallback:PPROC
RevokeBindStatusCallback equ <__imp_RevokeBindStatusCallback>

externdef __imp_RevokeFormatEnumerator:PPROC
RevokeFormatEnumerator equ <__imp_RevokeFormatEnumerator>

externdef __imp_SetSoftwareUpdateAdvertisementState:PPROC
SetSoftwareUpdateAdvertisementState equ <__imp_SetSoftwareUpdateAdvertisementState>

externdef __imp_ShowTrustAlertDialog:PPROC
ShowTrustAlertDialog equ <__imp_ShowTrustAlertDialog>

externdef __imp_URLDownloadA:PPROC
URLDownloadA equ <__imp_URLDownloadA>
  IFNDEF __UNICODE__
    URLDownload equ <__imp_URLDownloadA>
  ENDIF

externdef __imp_URLDownloadToCacheFileA:PPROC
URLDownloadToCacheFileA equ <__imp_URLDownloadToCacheFileA>
  IFNDEF __UNICODE__
    URLDownloadToCacheFile equ <__imp_URLDownloadToCacheFileA>
  ENDIF

externdef __imp_URLDownloadToCacheFileW:PPROC
URLDownloadToCacheFileW equ <__imp_URLDownloadToCacheFileW>
  IFDEF __UNICODE__
    URLDownloadToCacheFile equ <__imp_URLDownloadToCacheFileW>
  ENDIF

externdef __imp_URLDownloadToFileA:PPROC
URLDownloadToFileA equ <__imp_URLDownloadToFileA>
  IFNDEF __UNICODE__
    URLDownloadToFile equ <__imp_URLDownloadToFileA>
  ENDIF

externdef __imp_URLDownloadToFileW:PPROC
URLDownloadToFileW equ <__imp_URLDownloadToFileW>
  IFDEF __UNICODE__
    URLDownloadToFile equ <__imp_URLDownloadToFileW>
  ENDIF

externdef __imp_URLDownloadW:PPROC
URLDownloadW equ <__imp_URLDownloadW>
  IFDEF __UNICODE__
    URLDownload equ <__imp_URLDownloadW>
  ENDIF

externdef __imp_URLOpenBlockingStreamA:PPROC
URLOpenBlockingStreamA equ <__imp_URLOpenBlockingStreamA>
  IFNDEF __UNICODE__
    URLOpenBlockingStream equ <__imp_URLOpenBlockingStreamA>
  ENDIF

externdef __imp_URLOpenBlockingStreamW:PPROC
URLOpenBlockingStreamW equ <__imp_URLOpenBlockingStreamW>
  IFDEF __UNICODE__
    URLOpenBlockingStream equ <__imp_URLOpenBlockingStreamW>
  ENDIF

externdef __imp_URLOpenPullStreamA:PPROC
URLOpenPullStreamA equ <__imp_URLOpenPullStreamA>
  IFNDEF __UNICODE__
    URLOpenPullStream equ <__imp_URLOpenPullStreamA>
  ENDIF

externdef __imp_URLOpenPullStreamW:PPROC
URLOpenPullStreamW equ <__imp_URLOpenPullStreamW>
  IFDEF __UNICODE__
    URLOpenPullStream equ <__imp_URLOpenPullStreamW>
  ENDIF

externdef __imp_URLOpenStreamA:PPROC
URLOpenStreamA equ <__imp_URLOpenStreamA>
  IFNDEF __UNICODE__
    URLOpenStream equ <__imp_URLOpenStreamA>
  ENDIF

externdef __imp_URLOpenStreamW:PPROC
URLOpenStreamW equ <__imp_URLOpenStreamW>
  IFDEF __UNICODE__
    URLOpenStream equ <__imp_URLOpenStreamW>
  ENDIF

externdef __imp_UrlMkBuildVersion:PPROC
UrlMkBuildVersion equ <__imp_UrlMkBuildVersion>

externdef __imp_UrlMkGetSessionOption:PPROC
UrlMkGetSessionOption equ <__imp_UrlMkGetSessionOption>

externdef __imp_UrlMkSetSessionOption:PPROC
UrlMkSetSessionOption equ <__imp_UrlMkSetSessionOption>

externdef __imp_WriteHitLogging:PPROC
WriteHitLogging equ <__imp_WriteHitLogging>

externdef __imp_ZonesReInit:PPROC
ZonesReInit equ <__imp_ZonesReInit>

externdef __imp_urlmon_ordinal100:PPROC
urlmon_ordinal100 equ <__imp_urlmon_ordinal100>
