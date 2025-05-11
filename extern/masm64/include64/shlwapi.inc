externdef __imp_AssocCreate:PPROC
AssocCreate equ <__imp_AssocCreate>

externdef __imp_AssocGetPerceivedType:PPROC
AssocGetPerceivedType equ <__imp_AssocGetPerceivedType>

externdef __imp_AssocIsDangerous:PPROC
AssocIsDangerous equ <__imp_AssocIsDangerous>

externdef __imp_AssocQueryKeyA:PPROC
AssocQueryKeyA equ <__imp_AssocQueryKeyA>
  IFNDEF __UNICODE__
    AssocQueryKey equ <__imp_AssocQueryKeyA>
  ENDIF

externdef __imp_AssocQueryKeyW:PPROC
AssocQueryKeyW equ <__imp_AssocQueryKeyW>
  IFDEF __UNICODE__
    AssocQueryKey equ <__imp_AssocQueryKeyW>
  ENDIF

externdef __imp_AssocQueryStringA:PPROC
AssocQueryStringA equ <__imp_AssocQueryStringA>
  IFNDEF __UNICODE__
    AssocQueryString equ <__imp_AssocQueryStringA>
  ENDIF

externdef __imp_AssocQueryStringByKeyA:PPROC
AssocQueryStringByKeyA equ <__imp_AssocQueryStringByKeyA>
  IFNDEF __UNICODE__
    AssocQueryStringByKey equ <__imp_AssocQueryStringByKeyA>
  ENDIF

externdef __imp_AssocQueryStringByKeyW:PPROC
AssocQueryStringByKeyW equ <__imp_AssocQueryStringByKeyW>
  IFDEF __UNICODE__
    AssocQueryStringByKey equ <__imp_AssocQueryStringByKeyW>
  ENDIF

externdef __imp_AssocQueryStringW:PPROC
AssocQueryStringW equ <__imp_AssocQueryStringW>
  IFDEF __UNICODE__
    AssocQueryString equ <__imp_AssocQueryStringW>
  ENDIF

externdef __imp_ChrCmpIA:PPROC
ChrCmpIA equ <__imp_ChrCmpIA>
  IFNDEF __UNICODE__
    ChrCmpI equ <__imp_ChrCmpIA>
  ENDIF

externdef __imp_ChrCmpIW:PPROC
ChrCmpIW equ <__imp_ChrCmpIW>
  IFDEF __UNICODE__
    ChrCmpI equ <__imp_ChrCmpIW>
  ENDIF

externdef __imp_ColorAdjustLuma:PPROC
ColorAdjustLuma equ <__imp_ColorAdjustLuma>

externdef __imp_ColorHLSToRGB:PPROC
ColorHLSToRGB equ <__imp_ColorHLSToRGB>

externdef __imp_ColorRGBToHLS:PPROC
ColorRGBToHLS equ <__imp_ColorRGBToHLS>

externdef __imp_DelayLoadFailureHook:PPROC
DelayLoadFailureHook equ <__imp_DelayLoadFailureHook>

externdef __imp_DllGetVersion:PPROC
DllGetVersion equ <__imp_DllGetVersion>

externdef __imp_GetAcceptLanguagesA:PPROC
GetAcceptLanguagesA equ <__imp_GetAcceptLanguagesA>
  IFNDEF __UNICODE__
    GetAcceptLanguages equ <__imp_GetAcceptLanguagesA>
  ENDIF

externdef __imp_GetAcceptLanguagesW:PPROC
GetAcceptLanguagesW equ <__imp_GetAcceptLanguagesW>
  IFDEF __UNICODE__
    GetAcceptLanguages equ <__imp_GetAcceptLanguagesW>
  ENDIF

externdef __imp_GetMenuPosFromID:PPROC
GetMenuPosFromID equ <__imp_GetMenuPosFromID>

externdef __imp_HashData:PPROC
HashData equ <__imp_HashData>

externdef __imp_IntlStrEqWorkerA:PPROC
IntlStrEqWorkerA equ <__imp_IntlStrEqWorkerA>
  IFNDEF __UNICODE__
    IntlStrEqWorker equ <__imp_IntlStrEqWorkerA>
  ENDIF

externdef __imp_IntlStrEqWorkerW:PPROC
IntlStrEqWorkerW equ <__imp_IntlStrEqWorkerW>
  IFDEF __UNICODE__
    IntlStrEqWorker equ <__imp_IntlStrEqWorkerW>
  ENDIF

externdef __imp_IsCharSpaceA:PPROC
IsCharSpaceA equ <__imp_IsCharSpaceA>
  IFNDEF __UNICODE__
    IsCharSpace equ <__imp_IsCharSpaceA>
  ENDIF

externdef __imp_IsCharSpaceW:PPROC
IsCharSpaceW equ <__imp_IsCharSpaceW>
  IFDEF __UNICODE__
    IsCharSpace equ <__imp_IsCharSpaceW>
  ENDIF

externdef __imp_IsInternetESCEnabled:PPROC
IsInternetESCEnabled equ <__imp_IsInternetESCEnabled>

externdef __imp_PathAddBackslashA:PPROC
PathAddBackslashA equ <__imp_PathAddBackslashA>
  IFNDEF __UNICODE__
    PathAddBackslash equ <__imp_PathAddBackslashA>
  ENDIF

externdef __imp_PathAddBackslashW:PPROC
PathAddBackslashW equ <__imp_PathAddBackslashW>
  IFDEF __UNICODE__
    PathAddBackslash equ <__imp_PathAddBackslashW>
  ENDIF

externdef __imp_PathAddExtensionA:PPROC
PathAddExtensionA equ <__imp_PathAddExtensionA>
  IFNDEF __UNICODE__
    PathAddExtension equ <__imp_PathAddExtensionA>
  ENDIF

externdef __imp_PathAddExtensionW:PPROC
PathAddExtensionW equ <__imp_PathAddExtensionW>
  IFDEF __UNICODE__
    PathAddExtension equ <__imp_PathAddExtensionW>
  ENDIF

externdef __imp_PathAppendA:PPROC
PathAppendA equ <__imp_PathAppendA>
  IFNDEF __UNICODE__
    PathAppend equ <__imp_PathAppendA>
  ENDIF

externdef __imp_PathAppendW:PPROC
PathAppendW equ <__imp_PathAppendW>
  IFDEF __UNICODE__
    PathAppend equ <__imp_PathAppendW>
  ENDIF

externdef __imp_PathBuildRootA:PPROC
PathBuildRootA equ <__imp_PathBuildRootA>
  IFNDEF __UNICODE__
    PathBuildRoot equ <__imp_PathBuildRootA>
  ENDIF

externdef __imp_PathBuildRootW:PPROC
PathBuildRootW equ <__imp_PathBuildRootW>
  IFDEF __UNICODE__
    PathBuildRoot equ <__imp_PathBuildRootW>
  ENDIF

externdef __imp_PathCanonicalizeA:PPROC
PathCanonicalizeA equ <__imp_PathCanonicalizeA>
  IFNDEF __UNICODE__
    PathCanonicalize equ <__imp_PathCanonicalizeA>
  ENDIF

externdef __imp_PathCanonicalizeW:PPROC
PathCanonicalizeW equ <__imp_PathCanonicalizeW>
  IFDEF __UNICODE__
    PathCanonicalize equ <__imp_PathCanonicalizeW>
  ENDIF

externdef __imp_PathCombineA:PPROC
PathCombineA equ <__imp_PathCombineA>
  IFNDEF __UNICODE__
    PathCombine equ <__imp_PathCombineA>
  ENDIF

externdef __imp_PathCombineW:PPROC
PathCombineW equ <__imp_PathCombineW>
  IFDEF __UNICODE__
    PathCombine equ <__imp_PathCombineW>
  ENDIF

externdef __imp_PathCommonPrefixA:PPROC
PathCommonPrefixA equ <__imp_PathCommonPrefixA>
  IFNDEF __UNICODE__
    PathCommonPrefix equ <__imp_PathCommonPrefixA>
  ENDIF

externdef __imp_PathCommonPrefixW:PPROC
PathCommonPrefixW equ <__imp_PathCommonPrefixW>
  IFDEF __UNICODE__
    PathCommonPrefix equ <__imp_PathCommonPrefixW>
  ENDIF

externdef __imp_PathCompactPathA:PPROC
PathCompactPathA equ <__imp_PathCompactPathA>
  IFNDEF __UNICODE__
    PathCompactPath equ <__imp_PathCompactPathA>
  ENDIF

externdef __imp_PathCompactPathExA:PPROC
PathCompactPathExA equ <__imp_PathCompactPathExA>
  IFNDEF __UNICODE__
    PathCompactPathEx equ <__imp_PathCompactPathExA>
  ENDIF

externdef __imp_PathCompactPathExW:PPROC
PathCompactPathExW equ <__imp_PathCompactPathExW>
  IFDEF __UNICODE__
    PathCompactPathEx equ <__imp_PathCompactPathExW>
  ENDIF

externdef __imp_PathCompactPathW:PPROC
PathCompactPathW equ <__imp_PathCompactPathW>
  IFDEF __UNICODE__
    PathCompactPath equ <__imp_PathCompactPathW>
  ENDIF

externdef __imp_PathCreateFromUrlA:PPROC
PathCreateFromUrlA equ <__imp_PathCreateFromUrlA>
  IFNDEF __UNICODE__
    PathCreateFromUrl equ <__imp_PathCreateFromUrlA>
  ENDIF

externdef __imp_PathCreateFromUrlW:PPROC
PathCreateFromUrlW equ <__imp_PathCreateFromUrlW>
  IFDEF __UNICODE__
    PathCreateFromUrl equ <__imp_PathCreateFromUrlW>
  ENDIF

externdef __imp_PathFileExistsA:PPROC
PathFileExistsA equ <__imp_PathFileExistsA>
  IFNDEF __UNICODE__
    PathFileExists equ <__imp_PathFileExistsA>
  ENDIF

externdef __imp_PathFileExistsW:PPROC
PathFileExistsW equ <__imp_PathFileExistsW>
  IFDEF __UNICODE__
    PathFileExists equ <__imp_PathFileExistsW>
  ENDIF

externdef __imp_PathFindExtensionA:PPROC
PathFindExtensionA equ <__imp_PathFindExtensionA>
  IFNDEF __UNICODE__
    PathFindExtension equ <__imp_PathFindExtensionA>
  ENDIF

externdef __imp_PathFindExtensionW:PPROC
PathFindExtensionW equ <__imp_PathFindExtensionW>
  IFDEF __UNICODE__
    PathFindExtension equ <__imp_PathFindExtensionW>
  ENDIF

externdef __imp_PathFindFileNameA:PPROC
PathFindFileNameA equ <__imp_PathFindFileNameA>
  IFNDEF __UNICODE__
    PathFindFileName equ <__imp_PathFindFileNameA>
  ENDIF

externdef __imp_PathFindFileNameW:PPROC
PathFindFileNameW equ <__imp_PathFindFileNameW>
  IFDEF __UNICODE__
    PathFindFileName equ <__imp_PathFindFileNameW>
  ENDIF

externdef __imp_PathFindNextComponentA:PPROC
PathFindNextComponentA equ <__imp_PathFindNextComponentA>
  IFNDEF __UNICODE__
    PathFindNextComponent equ <__imp_PathFindNextComponentA>
  ENDIF

externdef __imp_PathFindNextComponentW:PPROC
PathFindNextComponentW equ <__imp_PathFindNextComponentW>
  IFDEF __UNICODE__
    PathFindNextComponent equ <__imp_PathFindNextComponentW>
  ENDIF

externdef __imp_PathFindOnPathA:PPROC
PathFindOnPathA equ <__imp_PathFindOnPathA>
  IFNDEF __UNICODE__
    PathFindOnPath equ <__imp_PathFindOnPathA>
  ENDIF

externdef __imp_PathFindOnPathW:PPROC
PathFindOnPathW equ <__imp_PathFindOnPathW>
  IFDEF __UNICODE__
    PathFindOnPath equ <__imp_PathFindOnPathW>
  ENDIF

externdef __imp_PathFindSuffixArrayA:PPROC
PathFindSuffixArrayA equ <__imp_PathFindSuffixArrayA>
  IFNDEF __UNICODE__
    PathFindSuffixArray equ <__imp_PathFindSuffixArrayA>
  ENDIF

externdef __imp_PathFindSuffixArrayW:PPROC
PathFindSuffixArrayW equ <__imp_PathFindSuffixArrayW>
  IFDEF __UNICODE__
    PathFindSuffixArray equ <__imp_PathFindSuffixArrayW>
  ENDIF

externdef __imp_PathGetArgsA:PPROC
PathGetArgsA equ <__imp_PathGetArgsA>
  IFNDEF __UNICODE__
    PathGetArgs equ <__imp_PathGetArgsA>
  ENDIF

externdef __imp_PathGetArgsW:PPROC
PathGetArgsW equ <__imp_PathGetArgsW>
  IFDEF __UNICODE__
    PathGetArgs equ <__imp_PathGetArgsW>
  ENDIF

externdef __imp_PathGetCharTypeA:PPROC
PathGetCharTypeA equ <__imp_PathGetCharTypeA>
  IFNDEF __UNICODE__
    PathGetCharType equ <__imp_PathGetCharTypeA>
  ENDIF

externdef __imp_PathGetCharTypeW:PPROC
PathGetCharTypeW equ <__imp_PathGetCharTypeW>
  IFDEF __UNICODE__
    PathGetCharType equ <__imp_PathGetCharTypeW>
  ENDIF

externdef __imp_PathGetDriveNumberA:PPROC
PathGetDriveNumberA equ <__imp_PathGetDriveNumberA>
  IFNDEF __UNICODE__
    PathGetDriveNumber equ <__imp_PathGetDriveNumberA>
  ENDIF

externdef __imp_PathGetDriveNumberW:PPROC
PathGetDriveNumberW equ <__imp_PathGetDriveNumberW>
  IFDEF __UNICODE__
    PathGetDriveNumber equ <__imp_PathGetDriveNumberW>
  ENDIF

externdef __imp_PathIsContentTypeA:PPROC
PathIsContentTypeA equ <__imp_PathIsContentTypeA>
  IFNDEF __UNICODE__
    PathIsContentType equ <__imp_PathIsContentTypeA>
  ENDIF

externdef __imp_PathIsContentTypeW:PPROC
PathIsContentTypeW equ <__imp_PathIsContentTypeW>
  IFDEF __UNICODE__
    PathIsContentType equ <__imp_PathIsContentTypeW>
  ENDIF

externdef __imp_PathIsDirectoryA:PPROC
PathIsDirectoryA equ <__imp_PathIsDirectoryA>
  IFNDEF __UNICODE__
    PathIsDirectory equ <__imp_PathIsDirectoryA>
  ENDIF

externdef __imp_PathIsDirectoryEmptyA:PPROC
PathIsDirectoryEmptyA equ <__imp_PathIsDirectoryEmptyA>
  IFNDEF __UNICODE__
    PathIsDirectoryEmpty equ <__imp_PathIsDirectoryEmptyA>
  ENDIF

externdef __imp_PathIsDirectoryEmptyW:PPROC
PathIsDirectoryEmptyW equ <__imp_PathIsDirectoryEmptyW>
  IFDEF __UNICODE__
    PathIsDirectoryEmpty equ <__imp_PathIsDirectoryEmptyW>
  ENDIF

externdef __imp_PathIsDirectoryW:PPROC
PathIsDirectoryW equ <__imp_PathIsDirectoryW>
  IFDEF __UNICODE__
    PathIsDirectory equ <__imp_PathIsDirectoryW>
  ENDIF

externdef __imp_PathIsFileSpecA:PPROC
PathIsFileSpecA equ <__imp_PathIsFileSpecA>
  IFNDEF __UNICODE__
    PathIsFileSpec equ <__imp_PathIsFileSpecA>
  ENDIF

externdef __imp_PathIsFileSpecW:PPROC
PathIsFileSpecW equ <__imp_PathIsFileSpecW>
  IFDEF __UNICODE__
    PathIsFileSpec equ <__imp_PathIsFileSpecW>
  ENDIF

externdef __imp_PathIsLFNFileSpecA:PPROC
PathIsLFNFileSpecA equ <__imp_PathIsLFNFileSpecA>
  IFNDEF __UNICODE__
    PathIsLFNFileSpec equ <__imp_PathIsLFNFileSpecA>
  ENDIF

externdef __imp_PathIsLFNFileSpecW:PPROC
PathIsLFNFileSpecW equ <__imp_PathIsLFNFileSpecW>
  IFDEF __UNICODE__
    PathIsLFNFileSpec equ <__imp_PathIsLFNFileSpecW>
  ENDIF

externdef __imp_PathIsNetworkPathA:PPROC
PathIsNetworkPathA equ <__imp_PathIsNetworkPathA>
  IFNDEF __UNICODE__
    PathIsNetworkPath equ <__imp_PathIsNetworkPathA>
  ENDIF

externdef __imp_PathIsNetworkPathW:PPROC
PathIsNetworkPathW equ <__imp_PathIsNetworkPathW>
  IFDEF __UNICODE__
    PathIsNetworkPath equ <__imp_PathIsNetworkPathW>
  ENDIF

externdef __imp_PathIsPrefixA:PPROC
PathIsPrefixA equ <__imp_PathIsPrefixA>
  IFNDEF __UNICODE__
    PathIsPrefix equ <__imp_PathIsPrefixA>
  ENDIF

externdef __imp_PathIsPrefixW:PPROC
PathIsPrefixW equ <__imp_PathIsPrefixW>
  IFDEF __UNICODE__
    PathIsPrefix equ <__imp_PathIsPrefixW>
  ENDIF

externdef __imp_PathIsRelativeA:PPROC
PathIsRelativeA equ <__imp_PathIsRelativeA>
  IFNDEF __UNICODE__
    PathIsRelative equ <__imp_PathIsRelativeA>
  ENDIF

externdef __imp_PathIsRelativeW:PPROC
PathIsRelativeW equ <__imp_PathIsRelativeW>
  IFDEF __UNICODE__
    PathIsRelative equ <__imp_PathIsRelativeW>
  ENDIF

externdef __imp_PathIsRootA:PPROC
PathIsRootA equ <__imp_PathIsRootA>
  IFNDEF __UNICODE__
    PathIsRoot equ <__imp_PathIsRootA>
  ENDIF

externdef __imp_PathIsRootW:PPROC
PathIsRootW equ <__imp_PathIsRootW>
  IFDEF __UNICODE__
    PathIsRoot equ <__imp_PathIsRootW>
  ENDIF

externdef __imp_PathIsSameRootA:PPROC
PathIsSameRootA equ <__imp_PathIsSameRootA>
  IFNDEF __UNICODE__
    PathIsSameRoot equ <__imp_PathIsSameRootA>
  ENDIF

externdef __imp_PathIsSameRootW:PPROC
PathIsSameRootW equ <__imp_PathIsSameRootW>
  IFDEF __UNICODE__
    PathIsSameRoot equ <__imp_PathIsSameRootW>
  ENDIF

externdef __imp_PathIsSystemFolderA:PPROC
PathIsSystemFolderA equ <__imp_PathIsSystemFolderA>
  IFNDEF __UNICODE__
    PathIsSystemFolder equ <__imp_PathIsSystemFolderA>
  ENDIF

externdef __imp_PathIsSystemFolderW:PPROC
PathIsSystemFolderW equ <__imp_PathIsSystemFolderW>
  IFDEF __UNICODE__
    PathIsSystemFolder equ <__imp_PathIsSystemFolderW>
  ENDIF

externdef __imp_PathIsUNCA:PPROC
PathIsUNCA equ <__imp_PathIsUNCA>
  IFNDEF __UNICODE__
    PathIsUNC equ <__imp_PathIsUNCA>
  ENDIF

externdef __imp_PathIsUNCServerA:PPROC
PathIsUNCServerA equ <__imp_PathIsUNCServerA>
  IFNDEF __UNICODE__
    PathIsUNCServer equ <__imp_PathIsUNCServerA>
  ENDIF

externdef __imp_PathIsUNCServerShareA:PPROC
PathIsUNCServerShareA equ <__imp_PathIsUNCServerShareA>
  IFNDEF __UNICODE__
    PathIsUNCServerShare equ <__imp_PathIsUNCServerShareA>
  ENDIF

externdef __imp_PathIsUNCServerShareW:PPROC
PathIsUNCServerShareW equ <__imp_PathIsUNCServerShareW>
  IFDEF __UNICODE__
    PathIsUNCServerShare equ <__imp_PathIsUNCServerShareW>
  ENDIF

externdef __imp_PathIsUNCServerW:PPROC
PathIsUNCServerW equ <__imp_PathIsUNCServerW>
  IFDEF __UNICODE__
    PathIsUNCServer equ <__imp_PathIsUNCServerW>
  ENDIF

externdef __imp_PathIsUNCW:PPROC
PathIsUNCW equ <__imp_PathIsUNCW>
  IFDEF __UNICODE__
    PathIsUNC equ <__imp_PathIsUNCW>
  ENDIF

externdef __imp_PathIsURLA:PPROC
PathIsURLA equ <__imp_PathIsURLA>
  IFNDEF __UNICODE__
    PathIsURL equ <__imp_PathIsURLA>
  ENDIF

externdef __imp_PathIsURLW:PPROC
PathIsURLW equ <__imp_PathIsURLW>
  IFDEF __UNICODE__
    PathIsURL equ <__imp_PathIsURLW>
  ENDIF

externdef __imp_PathMakePrettyA:PPROC
PathMakePrettyA equ <__imp_PathMakePrettyA>
  IFNDEF __UNICODE__
    PathMakePretty equ <__imp_PathMakePrettyA>
  ENDIF

externdef __imp_PathMakePrettyW:PPROC
PathMakePrettyW equ <__imp_PathMakePrettyW>
  IFDEF __UNICODE__
    PathMakePretty equ <__imp_PathMakePrettyW>
  ENDIF

externdef __imp_PathMakeSystemFolderA:PPROC
PathMakeSystemFolderA equ <__imp_PathMakeSystemFolderA>
  IFNDEF __UNICODE__
    PathMakeSystemFolder equ <__imp_PathMakeSystemFolderA>
  ENDIF

externdef __imp_PathMakeSystemFolderW:PPROC
PathMakeSystemFolderW equ <__imp_PathMakeSystemFolderW>
  IFDEF __UNICODE__
    PathMakeSystemFolder equ <__imp_PathMakeSystemFolderW>
  ENDIF

externdef __imp_PathMatchSpecA:PPROC
PathMatchSpecA equ <__imp_PathMatchSpecA>
  IFNDEF __UNICODE__
    PathMatchSpec equ <__imp_PathMatchSpecA>
  ENDIF

externdef __imp_PathMatchSpecW:PPROC
PathMatchSpecW equ <__imp_PathMatchSpecW>
  IFDEF __UNICODE__
    PathMatchSpec equ <__imp_PathMatchSpecW>
  ENDIF

externdef __imp_PathParseIconLocationA:PPROC
PathParseIconLocationA equ <__imp_PathParseIconLocationA>
  IFNDEF __UNICODE__
    PathParseIconLocation equ <__imp_PathParseIconLocationA>
  ENDIF

externdef __imp_PathParseIconLocationW:PPROC
PathParseIconLocationW equ <__imp_PathParseIconLocationW>
  IFDEF __UNICODE__
    PathParseIconLocation equ <__imp_PathParseIconLocationW>
  ENDIF

externdef __imp_PathQuoteSpacesA:PPROC
PathQuoteSpacesA equ <__imp_PathQuoteSpacesA>
  IFNDEF __UNICODE__
    PathQuoteSpaces equ <__imp_PathQuoteSpacesA>
  ENDIF

externdef __imp_PathQuoteSpacesW:PPROC
PathQuoteSpacesW equ <__imp_PathQuoteSpacesW>
  IFDEF __UNICODE__
    PathQuoteSpaces equ <__imp_PathQuoteSpacesW>
  ENDIF

externdef __imp_PathRelativePathToA:PPROC
PathRelativePathToA equ <__imp_PathRelativePathToA>
  IFNDEF __UNICODE__
    PathRelativePathTo equ <__imp_PathRelativePathToA>
  ENDIF

externdef __imp_PathRelativePathToW:PPROC
PathRelativePathToW equ <__imp_PathRelativePathToW>
  IFDEF __UNICODE__
    PathRelativePathTo equ <__imp_PathRelativePathToW>
  ENDIF

externdef __imp_PathRemoveArgsA:PPROC
PathRemoveArgsA equ <__imp_PathRemoveArgsA>
  IFNDEF __UNICODE__
    PathRemoveArgs equ <__imp_PathRemoveArgsA>
  ENDIF

externdef __imp_PathRemoveArgsW:PPROC
PathRemoveArgsW equ <__imp_PathRemoveArgsW>
  IFDEF __UNICODE__
    PathRemoveArgs equ <__imp_PathRemoveArgsW>
  ENDIF

externdef __imp_PathRemoveBackslashA:PPROC
PathRemoveBackslashA equ <__imp_PathRemoveBackslashA>
  IFNDEF __UNICODE__
    PathRemoveBackslash equ <__imp_PathRemoveBackslashA>
  ENDIF

externdef __imp_PathRemoveBackslashW:PPROC
PathRemoveBackslashW equ <__imp_PathRemoveBackslashW>
  IFDEF __UNICODE__
    PathRemoveBackslash equ <__imp_PathRemoveBackslashW>
  ENDIF

externdef __imp_PathRemoveBlanksA:PPROC
PathRemoveBlanksA equ <__imp_PathRemoveBlanksA>
  IFNDEF __UNICODE__
    PathRemoveBlanks equ <__imp_PathRemoveBlanksA>
  ENDIF

externdef __imp_PathRemoveBlanksW:PPROC
PathRemoveBlanksW equ <__imp_PathRemoveBlanksW>
  IFDEF __UNICODE__
    PathRemoveBlanks equ <__imp_PathRemoveBlanksW>
  ENDIF

externdef __imp_PathRemoveExtensionA:PPROC
PathRemoveExtensionA equ <__imp_PathRemoveExtensionA>
  IFNDEF __UNICODE__
    PathRemoveExtension equ <__imp_PathRemoveExtensionA>
  ENDIF

externdef __imp_PathRemoveExtensionW:PPROC
PathRemoveExtensionW equ <__imp_PathRemoveExtensionW>
  IFDEF __UNICODE__
    PathRemoveExtension equ <__imp_PathRemoveExtensionW>
  ENDIF

externdef __imp_PathRemoveFileSpecA:PPROC
PathRemoveFileSpecA equ <__imp_PathRemoveFileSpecA>
  IFNDEF __UNICODE__
    PathRemoveFileSpec equ <__imp_PathRemoveFileSpecA>
  ENDIF

externdef __imp_PathRemoveFileSpecW:PPROC
PathRemoveFileSpecW equ <__imp_PathRemoveFileSpecW>
  IFDEF __UNICODE__
    PathRemoveFileSpec equ <__imp_PathRemoveFileSpecW>
  ENDIF

externdef __imp_PathRenameExtensionA:PPROC
PathRenameExtensionA equ <__imp_PathRenameExtensionA>
  IFNDEF __UNICODE__
    PathRenameExtension equ <__imp_PathRenameExtensionA>
  ENDIF

externdef __imp_PathRenameExtensionW:PPROC
PathRenameExtensionW equ <__imp_PathRenameExtensionW>
  IFDEF __UNICODE__
    PathRenameExtension equ <__imp_PathRenameExtensionW>
  ENDIF

externdef __imp_PathSearchAndQualifyA:PPROC
PathSearchAndQualifyA equ <__imp_PathSearchAndQualifyA>
  IFNDEF __UNICODE__
    PathSearchAndQualify equ <__imp_PathSearchAndQualifyA>
  ENDIF

externdef __imp_PathSearchAndQualifyW:PPROC
PathSearchAndQualifyW equ <__imp_PathSearchAndQualifyW>
  IFDEF __UNICODE__
    PathSearchAndQualify equ <__imp_PathSearchAndQualifyW>
  ENDIF

externdef __imp_PathSetDlgItemPathA:PPROC
PathSetDlgItemPathA equ <__imp_PathSetDlgItemPathA>
  IFNDEF __UNICODE__
    PathSetDlgItemPath equ <__imp_PathSetDlgItemPathA>
  ENDIF

externdef __imp_PathSetDlgItemPathW:PPROC
PathSetDlgItemPathW equ <__imp_PathSetDlgItemPathW>
  IFDEF __UNICODE__
    PathSetDlgItemPath equ <__imp_PathSetDlgItemPathW>
  ENDIF

externdef __imp_PathSkipRootA:PPROC
PathSkipRootA equ <__imp_PathSkipRootA>
  IFNDEF __UNICODE__
    PathSkipRoot equ <__imp_PathSkipRootA>
  ENDIF

externdef __imp_PathSkipRootW:PPROC
PathSkipRootW equ <__imp_PathSkipRootW>
  IFDEF __UNICODE__
    PathSkipRoot equ <__imp_PathSkipRootW>
  ENDIF

externdef __imp_PathStripPathA:PPROC
PathStripPathA equ <__imp_PathStripPathA>
  IFNDEF __UNICODE__
    PathStripPath equ <__imp_PathStripPathA>
  ENDIF

externdef __imp_PathStripPathW:PPROC
PathStripPathW equ <__imp_PathStripPathW>
  IFDEF __UNICODE__
    PathStripPath equ <__imp_PathStripPathW>
  ENDIF

externdef __imp_PathStripToRootA:PPROC
PathStripToRootA equ <__imp_PathStripToRootA>
  IFNDEF __UNICODE__
    PathStripToRoot equ <__imp_PathStripToRootA>
  ENDIF

externdef __imp_PathStripToRootW:PPROC
PathStripToRootW equ <__imp_PathStripToRootW>
  IFDEF __UNICODE__
    PathStripToRoot equ <__imp_PathStripToRootW>
  ENDIF

externdef __imp_PathUnExpandEnvStringsA:PPROC
PathUnExpandEnvStringsA equ <__imp_PathUnExpandEnvStringsA>
  IFNDEF __UNICODE__
    PathUnExpandEnvStrings equ <__imp_PathUnExpandEnvStringsA>
  ENDIF

externdef __imp_PathUnExpandEnvStringsW:PPROC
PathUnExpandEnvStringsW equ <__imp_PathUnExpandEnvStringsW>
  IFDEF __UNICODE__
    PathUnExpandEnvStrings equ <__imp_PathUnExpandEnvStringsW>
  ENDIF

externdef __imp_PathUndecorateA:PPROC
PathUndecorateA equ <__imp_PathUndecorateA>
  IFNDEF __UNICODE__
    PathUndecorate equ <__imp_PathUndecorateA>
  ENDIF

externdef __imp_PathUndecorateW:PPROC
PathUndecorateW equ <__imp_PathUndecorateW>
  IFDEF __UNICODE__
    PathUndecorate equ <__imp_PathUndecorateW>
  ENDIF

externdef __imp_PathUnmakeSystemFolderA:PPROC
PathUnmakeSystemFolderA equ <__imp_PathUnmakeSystemFolderA>
  IFNDEF __UNICODE__
    PathUnmakeSystemFolder equ <__imp_PathUnmakeSystemFolderA>
  ENDIF

externdef __imp_PathUnmakeSystemFolderW:PPROC
PathUnmakeSystemFolderW equ <__imp_PathUnmakeSystemFolderW>
  IFDEF __UNICODE__
    PathUnmakeSystemFolder equ <__imp_PathUnmakeSystemFolderW>
  ENDIF

externdef __imp_PathUnquoteSpacesA:PPROC
PathUnquoteSpacesA equ <__imp_PathUnquoteSpacesA>
  IFNDEF __UNICODE__
    PathUnquoteSpaces equ <__imp_PathUnquoteSpacesA>
  ENDIF

externdef __imp_PathUnquoteSpacesW:PPROC
PathUnquoteSpacesW equ <__imp_PathUnquoteSpacesW>
  IFDEF __UNICODE__
    PathUnquoteSpaces equ <__imp_PathUnquoteSpacesW>
  ENDIF

externdef __imp_SHAllocShared:PPROC
SHAllocShared equ <__imp_SHAllocShared>

externdef __imp_SHAutoComplete:PPROC
SHAutoComplete equ <__imp_SHAutoComplete>

externdef __imp_SHCopyKeyA:PPROC
SHCopyKeyA equ <__imp_SHCopyKeyA>
  IFNDEF __UNICODE__
    SHCopyKey equ <__imp_SHCopyKeyA>
  ENDIF

externdef __imp_SHCopyKeyW:PPROC
SHCopyKeyW equ <__imp_SHCopyKeyW>
  IFDEF __UNICODE__
    SHCopyKey equ <__imp_SHCopyKeyW>
  ENDIF

externdef __imp_SHCreateShellPalette:PPROC
SHCreateShellPalette equ <__imp_SHCreateShellPalette>

externdef __imp_SHCreateStreamOnFileA:PPROC
SHCreateStreamOnFileA equ <__imp_SHCreateStreamOnFileA>
  IFNDEF __UNICODE__
    SHCreateStreamOnFile equ <__imp_SHCreateStreamOnFileA>
  ENDIF

externdef __imp_SHCreateStreamOnFileEx:PPROC
SHCreateStreamOnFileEx equ <__imp_SHCreateStreamOnFileEx>

externdef __imp_SHCreateStreamOnFileW:PPROC
SHCreateStreamOnFileW equ <__imp_SHCreateStreamOnFileW>
  IFDEF __UNICODE__
    SHCreateStreamOnFile equ <__imp_SHCreateStreamOnFileW>
  ENDIF

externdef __imp_SHCreateStreamWrapper:PPROC
SHCreateStreamWrapper equ <__imp_SHCreateStreamWrapper>

externdef __imp_SHCreateThread:PPROC
SHCreateThread equ <__imp_SHCreateThread>

externdef __imp_SHCreateThreadRef:PPROC
SHCreateThreadRef equ <__imp_SHCreateThreadRef>

externdef __imp_SHDeleteEmptyKeyA:PPROC
SHDeleteEmptyKeyA equ <__imp_SHDeleteEmptyKeyA>
  IFNDEF __UNICODE__
    SHDeleteEmptyKey equ <__imp_SHDeleteEmptyKeyA>
  ENDIF

externdef __imp_SHDeleteEmptyKeyW:PPROC
SHDeleteEmptyKeyW equ <__imp_SHDeleteEmptyKeyW>
  IFDEF __UNICODE__
    SHDeleteEmptyKey equ <__imp_SHDeleteEmptyKeyW>
  ENDIF

externdef __imp_SHDeleteKeyA:PPROC
SHDeleteKeyA equ <__imp_SHDeleteKeyA>
  IFNDEF __UNICODE__
    SHDeleteKey equ <__imp_SHDeleteKeyA>
  ENDIF

externdef __imp_SHDeleteKeyW:PPROC
SHDeleteKeyW equ <__imp_SHDeleteKeyW>
  IFDEF __UNICODE__
    SHDeleteKey equ <__imp_SHDeleteKeyW>
  ENDIF

externdef __imp_SHDeleteOrphanKeyA:PPROC
SHDeleteOrphanKeyA equ <__imp_SHDeleteOrphanKeyA>
  IFNDEF __UNICODE__
    SHDeleteOrphanKey equ <__imp_SHDeleteOrphanKeyA>
  ENDIF

externdef __imp_SHDeleteOrphanKeyW:PPROC
SHDeleteOrphanKeyW equ <__imp_SHDeleteOrphanKeyW>
  IFDEF __UNICODE__
    SHDeleteOrphanKey equ <__imp_SHDeleteOrphanKeyW>
  ENDIF

externdef __imp_SHDeleteValueA:PPROC
SHDeleteValueA equ <__imp_SHDeleteValueA>
  IFNDEF __UNICODE__
    SHDeleteValue equ <__imp_SHDeleteValueA>
  ENDIF

externdef __imp_SHDeleteValueW:PPROC
SHDeleteValueW equ <__imp_SHDeleteValueW>
  IFDEF __UNICODE__
    SHDeleteValue equ <__imp_SHDeleteValueW>
  ENDIF

externdef __imp_SHEnumKeyExA:PPROC
SHEnumKeyExA equ <__imp_SHEnumKeyExA>
  IFNDEF __UNICODE__
    SHEnumKeyEx equ <__imp_SHEnumKeyExA>
  ENDIF

externdef __imp_SHEnumKeyExW:PPROC
SHEnumKeyExW equ <__imp_SHEnumKeyExW>
  IFDEF __UNICODE__
    SHEnumKeyEx equ <__imp_SHEnumKeyExW>
  ENDIF

externdef __imp_SHEnumValueA:PPROC
SHEnumValueA equ <__imp_SHEnumValueA>
  IFNDEF __UNICODE__
    SHEnumValue equ <__imp_SHEnumValueA>
  ENDIF

externdef __imp_SHEnumValueW:PPROC
SHEnumValueW equ <__imp_SHEnumValueW>
  IFDEF __UNICODE__
    SHEnumValue equ <__imp_SHEnumValueW>
  ENDIF

externdef __imp_SHFreeShared:PPROC
SHFreeShared equ <__imp_SHFreeShared>

externdef __imp_SHGetInverseCMAP:PPROC
SHGetInverseCMAP equ <__imp_SHGetInverseCMAP>

externdef __imp_SHGetThreadRef:PPROC
SHGetThreadRef equ <__imp_SHGetThreadRef>

externdef __imp_SHGetValueA:PPROC
SHGetValueA equ <__imp_SHGetValueA>
  IFNDEF __UNICODE__
    SHGetValue equ <__imp_SHGetValueA>
  ENDIF

externdef __imp_SHGetValueW:PPROC
SHGetValueW equ <__imp_SHGetValueW>
  IFDEF __UNICODE__
    SHGetValue equ <__imp_SHGetValueW>
  ENDIF

externdef __imp_SHGetViewStatePropertyBag:PPROC
SHGetViewStatePropertyBag equ <__imp_SHGetViewStatePropertyBag>

externdef __imp_SHIsLowMemoryMachine:PPROC
SHIsLowMemoryMachine equ <__imp_SHIsLowMemoryMachine>

externdef __imp_SHLoadIndirectString:PPROC
SHLoadIndirectString equ <__imp_SHLoadIndirectString>

externdef __imp_SHLockShared:PPROC
SHLockShared equ <__imp_SHLockShared>

externdef __imp_SHOpenRegStream2A:PPROC
SHOpenRegStream2A equ <__imp_SHOpenRegStream2A>
  IFNDEF __UNICODE__
    SHOpenRegStream2 equ <__imp_SHOpenRegStream2A>
  ENDIF

externdef __imp_SHOpenRegStream2W:PPROC
SHOpenRegStream2W equ <__imp_SHOpenRegStream2W>
  IFDEF __UNICODE__
    SHOpenRegStream2 equ <__imp_SHOpenRegStream2W>
  ENDIF

externdef __imp_SHOpenRegStreamA:PPROC
SHOpenRegStreamA equ <__imp_SHOpenRegStreamA>
  IFNDEF __UNICODE__
    SHOpenRegStream equ <__imp_SHOpenRegStreamA>
  ENDIF

externdef __imp_SHOpenRegStreamW:PPROC
SHOpenRegStreamW equ <__imp_SHOpenRegStreamW>
  IFDEF __UNICODE__
    SHOpenRegStream equ <__imp_SHOpenRegStreamW>
  ENDIF

externdef __imp_SHQueryInfoKeyA:PPROC
SHQueryInfoKeyA equ <__imp_SHQueryInfoKeyA>
  IFNDEF __UNICODE__
    SHQueryInfoKey equ <__imp_SHQueryInfoKeyA>
  ENDIF

externdef __imp_SHQueryInfoKeyW:PPROC
SHQueryInfoKeyW equ <__imp_SHQueryInfoKeyW>
  IFDEF __UNICODE__
    SHQueryInfoKey equ <__imp_SHQueryInfoKeyW>
  ENDIF

externdef __imp_SHQueryValueExA:PPROC
SHQueryValueExA equ <__imp_SHQueryValueExA>
  IFNDEF __UNICODE__
    SHQueryValueEx equ <__imp_SHQueryValueExA>
  ENDIF

externdef __imp_SHQueryValueExW:PPROC
SHQueryValueExW equ <__imp_SHQueryValueExW>
  IFDEF __UNICODE__
    SHQueryValueEx equ <__imp_SHQueryValueExW>
  ENDIF

externdef __imp_SHRegCloseUSKey:PPROC
SHRegCloseUSKey equ <__imp_SHRegCloseUSKey>

externdef __imp_SHRegCreateUSKeyA:PPROC
SHRegCreateUSKeyA equ <__imp_SHRegCreateUSKeyA>
  IFNDEF __UNICODE__
    SHRegCreateUSKey equ <__imp_SHRegCreateUSKeyA>
  ENDIF

externdef __imp_SHRegCreateUSKeyW:PPROC
SHRegCreateUSKeyW equ <__imp_SHRegCreateUSKeyW>
  IFDEF __UNICODE__
    SHRegCreateUSKey equ <__imp_SHRegCreateUSKeyW>
  ENDIF

externdef __imp_SHRegDeleteEmptyUSKeyA:PPROC
SHRegDeleteEmptyUSKeyA equ <__imp_SHRegDeleteEmptyUSKeyA>
  IFNDEF __UNICODE__
    SHRegDeleteEmptyUSKey equ <__imp_SHRegDeleteEmptyUSKeyA>
  ENDIF

externdef __imp_SHRegDeleteEmptyUSKeyW:PPROC
SHRegDeleteEmptyUSKeyW equ <__imp_SHRegDeleteEmptyUSKeyW>
  IFDEF __UNICODE__
    SHRegDeleteEmptyUSKey equ <__imp_SHRegDeleteEmptyUSKeyW>
  ENDIF

externdef __imp_SHRegDeleteUSValueA:PPROC
SHRegDeleteUSValueA equ <__imp_SHRegDeleteUSValueA>
  IFNDEF __UNICODE__
    SHRegDeleteUSValue equ <__imp_SHRegDeleteUSValueA>
  ENDIF

externdef __imp_SHRegDeleteUSValueW:PPROC
SHRegDeleteUSValueW equ <__imp_SHRegDeleteUSValueW>
  IFDEF __UNICODE__
    SHRegDeleteUSValue equ <__imp_SHRegDeleteUSValueW>
  ENDIF

externdef __imp_SHRegDuplicateHKey:PPROC
SHRegDuplicateHKey equ <__imp_SHRegDuplicateHKey>

externdef __imp_SHRegEnumUSKeyA:PPROC
SHRegEnumUSKeyA equ <__imp_SHRegEnumUSKeyA>
  IFNDEF __UNICODE__
    SHRegEnumUSKey equ <__imp_SHRegEnumUSKeyA>
  ENDIF

externdef __imp_SHRegEnumUSKeyW:PPROC
SHRegEnumUSKeyW equ <__imp_SHRegEnumUSKeyW>
  IFDEF __UNICODE__
    SHRegEnumUSKey equ <__imp_SHRegEnumUSKeyW>
  ENDIF

externdef __imp_SHRegEnumUSValueA:PPROC
SHRegEnumUSValueA equ <__imp_SHRegEnumUSValueA>
  IFNDEF __UNICODE__
    SHRegEnumUSValue equ <__imp_SHRegEnumUSValueA>
  ENDIF

externdef __imp_SHRegEnumUSValueW:PPROC
SHRegEnumUSValueW equ <__imp_SHRegEnumUSValueW>
  IFDEF __UNICODE__
    SHRegEnumUSValue equ <__imp_SHRegEnumUSValueW>
  ENDIF

externdef __imp_SHRegGetBoolUSValueA:PPROC
SHRegGetBoolUSValueA equ <__imp_SHRegGetBoolUSValueA>
  IFNDEF __UNICODE__
    SHRegGetBoolUSValue equ <__imp_SHRegGetBoolUSValueA>
  ENDIF

externdef __imp_SHRegGetBoolUSValueW:PPROC
SHRegGetBoolUSValueW equ <__imp_SHRegGetBoolUSValueW>
  IFDEF __UNICODE__
    SHRegGetBoolUSValue equ <__imp_SHRegGetBoolUSValueW>
  ENDIF

externdef __imp_SHRegGetPathA:PPROC
SHRegGetPathA equ <__imp_SHRegGetPathA>
  IFNDEF __UNICODE__
    SHRegGetPath equ <__imp_SHRegGetPathA>
  ENDIF

externdef __imp_SHRegGetPathW:PPROC
SHRegGetPathW equ <__imp_SHRegGetPathW>
  IFDEF __UNICODE__
    SHRegGetPath equ <__imp_SHRegGetPathW>
  ENDIF

externdef __imp_SHRegGetUSValueA:PPROC
SHRegGetUSValueA equ <__imp_SHRegGetUSValueA>
  IFNDEF __UNICODE__
    SHRegGetUSValue equ <__imp_SHRegGetUSValueA>
  ENDIF

externdef __imp_SHRegGetUSValueW:PPROC
SHRegGetUSValueW equ <__imp_SHRegGetUSValueW>
  IFDEF __UNICODE__
    SHRegGetUSValue equ <__imp_SHRegGetUSValueW>
  ENDIF

externdef __imp_SHRegGetValueA:PPROC
SHRegGetValueA equ <__imp_SHRegGetValueA>
  IFNDEF __UNICODE__
    SHRegGetValue equ <__imp_SHRegGetValueA>
  ENDIF

externdef __imp_SHRegGetValueW:PPROC
SHRegGetValueW equ <__imp_SHRegGetValueW>
  IFDEF __UNICODE__
    SHRegGetValue equ <__imp_SHRegGetValueW>
  ENDIF

externdef __imp_SHRegOpenUSKeyA:PPROC
SHRegOpenUSKeyA equ <__imp_SHRegOpenUSKeyA>
  IFNDEF __UNICODE__
    SHRegOpenUSKey equ <__imp_SHRegOpenUSKeyA>
  ENDIF

externdef __imp_SHRegOpenUSKeyW:PPROC
SHRegOpenUSKeyW equ <__imp_SHRegOpenUSKeyW>
  IFDEF __UNICODE__
    SHRegOpenUSKey equ <__imp_SHRegOpenUSKeyW>
  ENDIF

externdef __imp_SHRegQueryInfoUSKeyA:PPROC
SHRegQueryInfoUSKeyA equ <__imp_SHRegQueryInfoUSKeyA>
  IFNDEF __UNICODE__
    SHRegQueryInfoUSKey equ <__imp_SHRegQueryInfoUSKeyA>
  ENDIF

externdef __imp_SHRegQueryInfoUSKeyW:PPROC
SHRegQueryInfoUSKeyW equ <__imp_SHRegQueryInfoUSKeyW>
  IFDEF __UNICODE__
    SHRegQueryInfoUSKey equ <__imp_SHRegQueryInfoUSKeyW>
  ENDIF

externdef __imp_SHRegQueryUSValueA:PPROC
SHRegQueryUSValueA equ <__imp_SHRegQueryUSValueA>
  IFNDEF __UNICODE__
    SHRegQueryUSValue equ <__imp_SHRegQueryUSValueA>
  ENDIF

externdef __imp_SHRegQueryUSValueW:PPROC
SHRegQueryUSValueW equ <__imp_SHRegQueryUSValueW>
  IFDEF __UNICODE__
    SHRegQueryUSValue equ <__imp_SHRegQueryUSValueW>
  ENDIF

externdef __imp_SHRegSetPathA:PPROC
SHRegSetPathA equ <__imp_SHRegSetPathA>
  IFNDEF __UNICODE__
    SHRegSetPath equ <__imp_SHRegSetPathA>
  ENDIF

externdef __imp_SHRegSetPathW:PPROC
SHRegSetPathW equ <__imp_SHRegSetPathW>
  IFDEF __UNICODE__
    SHRegSetPath equ <__imp_SHRegSetPathW>
  ENDIF

externdef __imp_SHRegSetUSValueA:PPROC
SHRegSetUSValueA equ <__imp_SHRegSetUSValueA>
  IFNDEF __UNICODE__
    SHRegSetUSValue equ <__imp_SHRegSetUSValueA>
  ENDIF

externdef __imp_SHRegSetUSValueW:PPROC
SHRegSetUSValueW equ <__imp_SHRegSetUSValueW>
  IFDEF __UNICODE__
    SHRegSetUSValue equ <__imp_SHRegSetUSValueW>
  ENDIF

externdef __imp_SHRegWriteUSValueA:PPROC
SHRegWriteUSValueA equ <__imp_SHRegWriteUSValueA>
  IFNDEF __UNICODE__
    SHRegWriteUSValue equ <__imp_SHRegWriteUSValueA>
  ENDIF

externdef __imp_SHRegWriteUSValueW:PPROC
SHRegWriteUSValueW equ <__imp_SHRegWriteUSValueW>
  IFDEF __UNICODE__
    SHRegWriteUSValue equ <__imp_SHRegWriteUSValueW>
  ENDIF

externdef __imp_SHRegisterValidateTemplate:PPROC
SHRegisterValidateTemplate equ <__imp_SHRegisterValidateTemplate>

externdef __imp_SHReleaseThreadRef:PPROC
SHReleaseThreadRef equ <__imp_SHReleaseThreadRef>

externdef __imp_SHSetThreadRef:PPROC
SHSetThreadRef equ <__imp_SHSetThreadRef>

externdef __imp_SHSetValueA:PPROC
SHSetValueA equ <__imp_SHSetValueA>
  IFNDEF __UNICODE__
    SHSetValue equ <__imp_SHSetValueA>
  ENDIF

externdef __imp_SHSetValueW:PPROC
SHSetValueW equ <__imp_SHSetValueW>
  IFDEF __UNICODE__
    SHSetValue equ <__imp_SHSetValueW>
  ENDIF

externdef __imp_SHSkipJunction:PPROC
SHSkipJunction equ <__imp_SHSkipJunction>

externdef __imp_SHStrDupA:PPROC
SHStrDupA equ <__imp_SHStrDupA>
  IFNDEF __UNICODE__
    SHStrDup equ <__imp_SHStrDupA>
  ENDIF

externdef __imp_SHStrDupW:PPROC
SHStrDupW equ <__imp_SHStrDupW>
  IFDEF __UNICODE__
    SHStrDup equ <__imp_SHStrDupW>
  ENDIF

externdef __imp_SHUnlockShared:PPROC
SHUnlockShared equ <__imp_SHUnlockShared>

externdef __imp_StrCSpnA:PPROC
StrCSpnA equ <__imp_StrCSpnA>
  IFNDEF __UNICODE__
    StrCSpn equ <__imp_StrCSpnA>
  ENDIF

externdef __imp_StrCSpnIA:PPROC
StrCSpnIA equ <__imp_StrCSpnIA>
  IFNDEF __UNICODE__
    StrCSpnI equ <__imp_StrCSpnIA>
  ENDIF

externdef __imp_StrCSpnIW:PPROC
StrCSpnIW equ <__imp_StrCSpnIW>
  IFDEF __UNICODE__
    StrCSpnI equ <__imp_StrCSpnIW>
  ENDIF

externdef __imp_StrCSpnW:PPROC
StrCSpnW equ <__imp_StrCSpnW>
  IFDEF __UNICODE__
    StrCSpn equ <__imp_StrCSpnW>
  ENDIF

externdef __imp_StrCatBuffA:PPROC
StrCatBuffA equ <__imp_StrCatBuffA>
  IFNDEF __UNICODE__
    StrCatBuff equ <__imp_StrCatBuffA>
  ENDIF

externdef __imp_StrCatBuffW:PPROC
StrCatBuffW equ <__imp_StrCatBuffW>
  IFDEF __UNICODE__
    StrCatBuff equ <__imp_StrCatBuffW>
  ENDIF

externdef __imp_StrCatChainW:PPROC
StrCatChainW equ <__imp_StrCatChainW>
  IFDEF __UNICODE__
    StrCatChain equ <__imp_StrCatChainW>
  ENDIF

externdef __imp_StrCatW:PPROC
StrCatW equ <__imp_StrCatW>
  IFDEF __UNICODE__
    StrCat equ <__imp_StrCatW>
  ENDIF

externdef __imp_StrChrA:PPROC
StrChrA equ <__imp_StrChrA>
  IFNDEF __UNICODE__
    StrChr equ <__imp_StrChrA>
  ENDIF

externdef __imp_StrChrIA:PPROC
StrChrIA equ <__imp_StrChrIA>
  IFNDEF __UNICODE__
    StrChrI equ <__imp_StrChrIA>
  ENDIF

externdef __imp_StrChrIW:PPROC
StrChrIW equ <__imp_StrChrIW>
  IFDEF __UNICODE__
    StrChrI equ <__imp_StrChrIW>
  ENDIF

externdef __imp_StrChrNIW:PPROC
StrChrNIW equ <__imp_StrChrNIW>
  IFDEF __UNICODE__
    StrChrNI equ <__imp_StrChrNIW>
  ENDIF

externdef __imp_StrChrNW:PPROC
StrChrNW equ <__imp_StrChrNW>
  IFDEF __UNICODE__
    StrChrN equ <__imp_StrChrNW>
  ENDIF

externdef __imp_StrChrW:PPROC
StrChrW equ <__imp_StrChrW>
  IFDEF __UNICODE__
    StrChr equ <__imp_StrChrW>
  ENDIF

externdef __imp_StrCmpCA:PPROC
StrCmpCA equ <__imp_StrCmpCA>
  IFNDEF __UNICODE__
    StrCmpC equ <__imp_StrCmpCA>
  ENDIF

externdef __imp_StrCmpCW:PPROC
StrCmpCW equ <__imp_StrCmpCW>
  IFDEF __UNICODE__
    StrCmpC equ <__imp_StrCmpCW>
  ENDIF

externdef __imp_StrCmpICA:PPROC
StrCmpICA equ <__imp_StrCmpICA>
  IFNDEF __UNICODE__
    StrCmpIC equ <__imp_StrCmpICA>
  ENDIF

externdef __imp_StrCmpICW:PPROC
StrCmpICW equ <__imp_StrCmpICW>
  IFDEF __UNICODE__
    StrCmpIC equ <__imp_StrCmpICW>
  ENDIF

externdef __imp_StrCmpIW:PPROC
StrCmpIW equ <__imp_StrCmpIW>
  IFDEF __UNICODE__
    StrCmpI equ <__imp_StrCmpIW>
  ENDIF

externdef __imp_StrCmpLogicalW:PPROC
StrCmpLogicalW equ <__imp_StrCmpLogicalW>
  IFDEF __UNICODE__
    StrCmpLogical equ <__imp_StrCmpLogicalW>
  ENDIF

externdef __imp_StrCmpNA:PPROC
StrCmpNA equ <__imp_StrCmpNA>
  IFNDEF __UNICODE__
    StrCmpN equ <__imp_StrCmpNA>
  ENDIF

externdef __imp_StrCmpNIA:PPROC
StrCmpNIA equ <__imp_StrCmpNIA>
  IFNDEF __UNICODE__
    StrCmpNI equ <__imp_StrCmpNIA>
  ENDIF

externdef __imp_StrCmpNIW:PPROC
StrCmpNIW equ <__imp_StrCmpNIW>
  IFDEF __UNICODE__
    StrCmpNI equ <__imp_StrCmpNIW>
  ENDIF

externdef __imp_StrCmpNW:PPROC
StrCmpNW equ <__imp_StrCmpNW>
  IFDEF __UNICODE__
    StrCmpN equ <__imp_StrCmpNW>
  ENDIF

externdef __imp_StrCmpW:PPROC
StrCmpW equ <__imp_StrCmpW>
  IFDEF __UNICODE__
    StrCmp equ <__imp_StrCmpW>
  ENDIF

externdef __imp_StrCpyNW:PPROC
StrCpyNW equ <__imp_StrCpyNW>
  IFDEF __UNICODE__
    StrCpyN equ <__imp_StrCpyNW>
  ENDIF

externdef __imp_StrCpyW:PPROC
StrCpyW equ <__imp_StrCpyW>
  IFDEF __UNICODE__
    StrCpy equ <__imp_StrCpyW>
  ENDIF

externdef __imp_StrDupA:PPROC
StrDupA equ <__imp_StrDupA>
  IFNDEF __UNICODE__
    StrDup equ <__imp_StrDupA>
  ENDIF

externdef __imp_StrDupW:PPROC
StrDupW equ <__imp_StrDupW>
  IFDEF __UNICODE__
    StrDup equ <__imp_StrDupW>
  ENDIF

externdef __imp_StrFormatByteSize64A:PPROC
StrFormatByteSize64A equ <__imp_StrFormatByteSize64A>
  IFNDEF __UNICODE__
    StrFormatByteSize64 equ <__imp_StrFormatByteSize64A>
  ENDIF

externdef __imp_StrFormatByteSizeA:PPROC
StrFormatByteSizeA equ <__imp_StrFormatByteSizeA>
  IFNDEF __UNICODE__
    StrFormatByteSize equ <__imp_StrFormatByteSizeA>
  ENDIF

externdef __imp_StrFormatByteSizeW:PPROC
StrFormatByteSizeW equ <__imp_StrFormatByteSizeW>
  IFDEF __UNICODE__
    StrFormatByteSize equ <__imp_StrFormatByteSizeW>
  ENDIF

externdef __imp_StrFormatKBSizeA:PPROC
StrFormatKBSizeA equ <__imp_StrFormatKBSizeA>
  IFNDEF __UNICODE__
    StrFormatKBSize equ <__imp_StrFormatKBSizeA>
  ENDIF

externdef __imp_StrFormatKBSizeW:PPROC
StrFormatKBSizeW equ <__imp_StrFormatKBSizeW>
  IFDEF __UNICODE__
    StrFormatKBSize equ <__imp_StrFormatKBSizeW>
  ENDIF

externdef __imp_StrFromTimeIntervalA:PPROC
StrFromTimeIntervalA equ <__imp_StrFromTimeIntervalA>
  IFNDEF __UNICODE__
    StrFromTimeInterval equ <__imp_StrFromTimeIntervalA>
  ENDIF

externdef __imp_StrFromTimeIntervalW:PPROC
StrFromTimeIntervalW equ <__imp_StrFromTimeIntervalW>
  IFDEF __UNICODE__
    StrFromTimeInterval equ <__imp_StrFromTimeIntervalW>
  ENDIF

externdef __imp_StrIsIntlEqualA:PPROC
StrIsIntlEqualA equ <__imp_StrIsIntlEqualA>
  IFNDEF __UNICODE__
    StrIsIntlEqual equ <__imp_StrIsIntlEqualA>
  ENDIF

externdef __imp_StrIsIntlEqualW:PPROC
StrIsIntlEqualW equ <__imp_StrIsIntlEqualW>
  IFDEF __UNICODE__
    StrIsIntlEqual equ <__imp_StrIsIntlEqualW>
  ENDIF

externdef __imp_StrNCatA:PPROC
StrNCatA equ <__imp_StrNCatA>
  IFNDEF __UNICODE__
    StrNCat equ <__imp_StrNCatA>
  ENDIF

externdef __imp_StrNCatW:PPROC
StrNCatW equ <__imp_StrNCatW>
  IFDEF __UNICODE__
    StrNCat equ <__imp_StrNCatW>
  ENDIF

externdef __imp_StrPBrkA:PPROC
StrPBrkA equ <__imp_StrPBrkA>
  IFNDEF __UNICODE__
    StrPBrk equ <__imp_StrPBrkA>
  ENDIF

externdef __imp_StrPBrkW:PPROC
StrPBrkW equ <__imp_StrPBrkW>
  IFDEF __UNICODE__
    StrPBrk equ <__imp_StrPBrkW>
  ENDIF

externdef __imp_StrRChrA:PPROC
StrRChrA equ <__imp_StrRChrA>
  IFNDEF __UNICODE__
    StrRChr equ <__imp_StrRChrA>
  ENDIF

externdef __imp_StrRChrIA:PPROC
StrRChrIA equ <__imp_StrRChrIA>
  IFNDEF __UNICODE__
    StrRChrI equ <__imp_StrRChrIA>
  ENDIF

externdef __imp_StrRChrIW:PPROC
StrRChrIW equ <__imp_StrRChrIW>
  IFDEF __UNICODE__
    StrRChrI equ <__imp_StrRChrIW>
  ENDIF

externdef __imp_StrRChrW:PPROC
StrRChrW equ <__imp_StrRChrW>
  IFDEF __UNICODE__
    StrRChr equ <__imp_StrRChrW>
  ENDIF

externdef __imp_StrRStrIA:PPROC
StrRStrIA equ <__imp_StrRStrIA>
  IFNDEF __UNICODE__
    StrRStrI equ <__imp_StrRStrIA>
  ENDIF

externdef __imp_StrRStrIW:PPROC
StrRStrIW equ <__imp_StrRStrIW>
  IFDEF __UNICODE__
    StrRStrI equ <__imp_StrRStrIW>
  ENDIF

externdef __imp_StrRetToBSTR:PPROC
StrRetToBSTR equ <__imp_StrRetToBSTR>

externdef __imp_StrRetToBufA:PPROC
StrRetToBufA equ <__imp_StrRetToBufA>
  IFNDEF __UNICODE__
    StrRetToBuf equ <__imp_StrRetToBufA>
  ENDIF

externdef __imp_StrRetToBufW:PPROC
StrRetToBufW equ <__imp_StrRetToBufW>
  IFDEF __UNICODE__
    StrRetToBuf equ <__imp_StrRetToBufW>
  ENDIF

externdef __imp_StrRetToStrA:PPROC
StrRetToStrA equ <__imp_StrRetToStrA>
  IFNDEF __UNICODE__
    StrRetToStr equ <__imp_StrRetToStrA>
  ENDIF

externdef __imp_StrRetToStrW:PPROC
StrRetToStrW equ <__imp_StrRetToStrW>
  IFDEF __UNICODE__
    StrRetToStr equ <__imp_StrRetToStrW>
  ENDIF

externdef __imp_StrSpnA:PPROC
StrSpnA equ <__imp_StrSpnA>
  IFNDEF __UNICODE__
    StrSpn equ <__imp_StrSpnA>
  ENDIF

externdef __imp_StrSpnW:PPROC
StrSpnW equ <__imp_StrSpnW>
  IFDEF __UNICODE__
    StrSpn equ <__imp_StrSpnW>
  ENDIF

externdef __imp_StrStrA:PPROC
StrStrA equ <__imp_StrStrA>
  IFNDEF __UNICODE__
    StrStr equ <__imp_StrStrA>
  ENDIF

externdef __imp_StrStrIA:PPROC
StrStrIA equ <__imp_StrStrIA>
  IFNDEF __UNICODE__
    StrStrI equ <__imp_StrStrIA>
  ENDIF

externdef __imp_StrStrIW:PPROC
StrStrIW equ <__imp_StrStrIW>
  IFDEF __UNICODE__
    StrStrI equ <__imp_StrStrIW>
  ENDIF

externdef __imp_StrStrNIW:PPROC
StrStrNIW equ <__imp_StrStrNIW>
  IFDEF __UNICODE__
    StrStrNI equ <__imp_StrStrNIW>
  ENDIF

externdef __imp_StrStrNW:PPROC
StrStrNW equ <__imp_StrStrNW>
  IFDEF __UNICODE__
    StrStrN equ <__imp_StrStrNW>
  ENDIF

externdef __imp_StrStrW:PPROC
StrStrW equ <__imp_StrStrW>
  IFDEF __UNICODE__
    StrStr equ <__imp_StrStrW>
  ENDIF

externdef __imp_StrToInt64ExA:PPROC
StrToInt64ExA equ <__imp_StrToInt64ExA>
  IFNDEF __UNICODE__
    StrToInt64Ex equ <__imp_StrToInt64ExA>
  ENDIF

externdef __imp_StrToInt64ExW:PPROC
StrToInt64ExW equ <__imp_StrToInt64ExW>
  IFDEF __UNICODE__
    StrToInt64Ex equ <__imp_StrToInt64ExW>
  ENDIF

externdef __imp_StrToIntA:PPROC
StrToIntA equ <__imp_StrToIntA>
  IFNDEF __UNICODE__
    StrToInt equ <__imp_StrToIntA>
  ENDIF

externdef __imp_StrToIntExA:PPROC
StrToIntExA equ <__imp_StrToIntExA>
  IFNDEF __UNICODE__
    StrToIntEx equ <__imp_StrToIntExA>
  ENDIF

externdef __imp_StrToIntExW:PPROC
StrToIntExW equ <__imp_StrToIntExW>
  IFDEF __UNICODE__
    StrToIntEx equ <__imp_StrToIntExW>
  ENDIF

externdef __imp_StrToIntW:PPROC
StrToIntW equ <__imp_StrToIntW>
  IFDEF __UNICODE__
    StrToInt equ <__imp_StrToIntW>
  ENDIF

externdef __imp_StrTrimA:PPROC
StrTrimA equ <__imp_StrTrimA>
  IFNDEF __UNICODE__
    StrTrim equ <__imp_StrTrimA>
  ENDIF

externdef __imp_StrTrimW:PPROC
StrTrimW equ <__imp_StrTrimW>
  IFDEF __UNICODE__
    StrTrim equ <__imp_StrTrimW>
  ENDIF

externdef __imp_UrlApplySchemeA:PPROC
UrlApplySchemeA equ <__imp_UrlApplySchemeA>
  IFNDEF __UNICODE__
    UrlApplyScheme equ <__imp_UrlApplySchemeA>
  ENDIF

externdef __imp_UrlApplySchemeW:PPROC
UrlApplySchemeW equ <__imp_UrlApplySchemeW>
  IFDEF __UNICODE__
    UrlApplyScheme equ <__imp_UrlApplySchemeW>
  ENDIF

externdef __imp_UrlCanonicalizeA:PPROC
UrlCanonicalizeA equ <__imp_UrlCanonicalizeA>
  IFNDEF __UNICODE__
    UrlCanonicalize equ <__imp_UrlCanonicalizeA>
  ENDIF

externdef __imp_UrlCanonicalizeW:PPROC
UrlCanonicalizeW equ <__imp_UrlCanonicalizeW>
  IFDEF __UNICODE__
    UrlCanonicalize equ <__imp_UrlCanonicalizeW>
  ENDIF

externdef __imp_UrlCombineA:PPROC
UrlCombineA equ <__imp_UrlCombineA>
  IFNDEF __UNICODE__
    UrlCombine equ <__imp_UrlCombineA>
  ENDIF

externdef __imp_UrlCombineW:PPROC
UrlCombineW equ <__imp_UrlCombineW>
  IFDEF __UNICODE__
    UrlCombine equ <__imp_UrlCombineW>
  ENDIF

externdef __imp_UrlCompareA:PPROC
UrlCompareA equ <__imp_UrlCompareA>
  IFNDEF __UNICODE__
    UrlCompare equ <__imp_UrlCompareA>
  ENDIF

externdef __imp_UrlCompareW:PPROC
UrlCompareW equ <__imp_UrlCompareW>
  IFDEF __UNICODE__
    UrlCompare equ <__imp_UrlCompareW>
  ENDIF

externdef __imp_UrlCreateFromPathA:PPROC
UrlCreateFromPathA equ <__imp_UrlCreateFromPathA>
  IFNDEF __UNICODE__
    UrlCreateFromPath equ <__imp_UrlCreateFromPathA>
  ENDIF

externdef __imp_UrlCreateFromPathW:PPROC
UrlCreateFromPathW equ <__imp_UrlCreateFromPathW>
  IFDEF __UNICODE__
    UrlCreateFromPath equ <__imp_UrlCreateFromPathW>
  ENDIF

externdef __imp_UrlEscapeA:PPROC
UrlEscapeA equ <__imp_UrlEscapeA>
  IFNDEF __UNICODE__
    UrlEscape equ <__imp_UrlEscapeA>
  ENDIF

externdef __imp_UrlEscapeW:PPROC
UrlEscapeW equ <__imp_UrlEscapeW>
  IFDEF __UNICODE__
    UrlEscape equ <__imp_UrlEscapeW>
  ENDIF

externdef __imp_UrlGetLocationA:PPROC
UrlGetLocationA equ <__imp_UrlGetLocationA>
  IFNDEF __UNICODE__
    UrlGetLocation equ <__imp_UrlGetLocationA>
  ENDIF

externdef __imp_UrlGetLocationW:PPROC
UrlGetLocationW equ <__imp_UrlGetLocationW>
  IFDEF __UNICODE__
    UrlGetLocation equ <__imp_UrlGetLocationW>
  ENDIF

externdef __imp_UrlGetPartA:PPROC
UrlGetPartA equ <__imp_UrlGetPartA>
  IFNDEF __UNICODE__
    UrlGetPart equ <__imp_UrlGetPartA>
  ENDIF

externdef __imp_UrlGetPartW:PPROC
UrlGetPartW equ <__imp_UrlGetPartW>
  IFDEF __UNICODE__
    UrlGetPart equ <__imp_UrlGetPartW>
  ENDIF

externdef __imp_UrlHashA:PPROC
UrlHashA equ <__imp_UrlHashA>
  IFNDEF __UNICODE__
    UrlHash equ <__imp_UrlHashA>
  ENDIF

externdef __imp_UrlHashW:PPROC
UrlHashW equ <__imp_UrlHashW>
  IFDEF __UNICODE__
    UrlHash equ <__imp_UrlHashW>
  ENDIF

externdef __imp_UrlIsA:PPROC
UrlIsA equ <__imp_UrlIsA>
  IFNDEF __UNICODE__
    UrlIs equ <__imp_UrlIsA>
  ENDIF

externdef __imp_UrlIsNoHistoryA:PPROC
UrlIsNoHistoryA equ <__imp_UrlIsNoHistoryA>
  IFNDEF __UNICODE__
    UrlIsNoHistory equ <__imp_UrlIsNoHistoryA>
  ENDIF

externdef __imp_UrlIsNoHistoryW:PPROC
UrlIsNoHistoryW equ <__imp_UrlIsNoHistoryW>
  IFDEF __UNICODE__
    UrlIsNoHistory equ <__imp_UrlIsNoHistoryW>
  ENDIF

externdef __imp_UrlIsOpaqueA:PPROC
UrlIsOpaqueA equ <__imp_UrlIsOpaqueA>
  IFNDEF __UNICODE__
    UrlIsOpaque equ <__imp_UrlIsOpaqueA>
  ENDIF

externdef __imp_UrlIsOpaqueW:PPROC
UrlIsOpaqueW equ <__imp_UrlIsOpaqueW>
  IFDEF __UNICODE__
    UrlIsOpaque equ <__imp_UrlIsOpaqueW>
  ENDIF

externdef __imp_UrlIsW:PPROC
UrlIsW equ <__imp_UrlIsW>
  IFDEF __UNICODE__
    UrlIs equ <__imp_UrlIsW>
  ENDIF

externdef __imp_UrlUnescapeA:PPROC
UrlUnescapeA equ <__imp_UrlUnescapeA>
  IFNDEF __UNICODE__
    UrlUnescape equ <__imp_UrlUnescapeA>
  ENDIF

externdef __imp_UrlUnescapeW:PPROC
UrlUnescapeW equ <__imp_UrlUnescapeW>
  IFDEF __UNICODE__
    UrlUnescape equ <__imp_UrlUnescapeW>
  ENDIF

externdef __imp_shlwapi_ordinal100:PPROC
shlwapi_ordinal100 equ <__imp_shlwapi_ordinal100>

externdef __imp_shlwapi_ordinal101:PPROC
shlwapi_ordinal101 equ <__imp_shlwapi_ordinal101>

externdef __imp_shlwapi_ordinal102:PPROC
shlwapi_ordinal102 equ <__imp_shlwapi_ordinal102>

externdef __imp_shlwapi_ordinal103:PPROC
shlwapi_ordinal103 equ <__imp_shlwapi_ordinal103>

externdef __imp_shlwapi_ordinal104:PPROC
shlwapi_ordinal104 equ <__imp_shlwapi_ordinal104>

externdef __imp_shlwapi_ordinal105:PPROC
shlwapi_ordinal105 equ <__imp_shlwapi_ordinal105>

externdef __imp_shlwapi_ordinal106:PPROC
shlwapi_ordinal106 equ <__imp_shlwapi_ordinal106>

externdef __imp_shlwapi_ordinal107:PPROC
shlwapi_ordinal107 equ <__imp_shlwapi_ordinal107>

externdef __imp_shlwapi_ordinal108:PPROC
shlwapi_ordinal108 equ <__imp_shlwapi_ordinal108>

externdef __imp_shlwapi_ordinal109:PPROC
shlwapi_ordinal109 equ <__imp_shlwapi_ordinal109>

externdef __imp_shlwapi_ordinal110:PPROC
shlwapi_ordinal110 equ <__imp_shlwapi_ordinal110>

externdef __imp_shlwapi_ordinal111:PPROC
shlwapi_ordinal111 equ <__imp_shlwapi_ordinal111>

externdef __imp_shlwapi_ordinal112:PPROC
shlwapi_ordinal112 equ <__imp_shlwapi_ordinal112>

externdef __imp_shlwapi_ordinal113:PPROC
shlwapi_ordinal113 equ <__imp_shlwapi_ordinal113>

externdef __imp_shlwapi_ordinal114:PPROC
shlwapi_ordinal114 equ <__imp_shlwapi_ordinal114>

externdef __imp_shlwapi_ordinal115:PPROC
shlwapi_ordinal115 equ <__imp_shlwapi_ordinal115>

externdef __imp_shlwapi_ordinal116:PPROC
shlwapi_ordinal116 equ <__imp_shlwapi_ordinal116>

externdef __imp_shlwapi_ordinal117:PPROC
shlwapi_ordinal117 equ <__imp_shlwapi_ordinal117>

externdef __imp_shlwapi_ordinal118:PPROC
shlwapi_ordinal118 equ <__imp_shlwapi_ordinal118>

externdef __imp_shlwapi_ordinal119:PPROC
shlwapi_ordinal119 equ <__imp_shlwapi_ordinal119>

externdef __imp_shlwapi_ordinal11:PPROC
shlwapi_ordinal11 equ <__imp_shlwapi_ordinal11>

externdef __imp_shlwapi_ordinal120:PPROC
shlwapi_ordinal120 equ <__imp_shlwapi_ordinal120>

externdef __imp_shlwapi_ordinal121:PPROC
shlwapi_ordinal121 equ <__imp_shlwapi_ordinal121>

externdef __imp_shlwapi_ordinal122:PPROC
shlwapi_ordinal122 equ <__imp_shlwapi_ordinal122>

externdef __imp_shlwapi_ordinal123:PPROC
shlwapi_ordinal123 equ <__imp_shlwapi_ordinal123>

externdef __imp_shlwapi_ordinal124:PPROC
shlwapi_ordinal124 equ <__imp_shlwapi_ordinal124>

externdef __imp_shlwapi_ordinal125:PPROC
shlwapi_ordinal125 equ <__imp_shlwapi_ordinal125>

externdef __imp_shlwapi_ordinal126:PPROC
shlwapi_ordinal126 equ <__imp_shlwapi_ordinal126>

externdef __imp_shlwapi_ordinal127:PPROC
shlwapi_ordinal127 equ <__imp_shlwapi_ordinal127>

externdef __imp_shlwapi_ordinal128:PPROC
shlwapi_ordinal128 equ <__imp_shlwapi_ordinal128>

externdef __imp_shlwapi_ordinal129:PPROC
shlwapi_ordinal129 equ <__imp_shlwapi_ordinal129>

externdef __imp_shlwapi_ordinal12:PPROC
shlwapi_ordinal12 equ <__imp_shlwapi_ordinal12>

externdef __imp_shlwapi_ordinal130:PPROC
shlwapi_ordinal130 equ <__imp_shlwapi_ordinal130>

externdef __imp_shlwapi_ordinal131:PPROC
shlwapi_ordinal131 equ <__imp_shlwapi_ordinal131>

externdef __imp_shlwapi_ordinal132:PPROC
shlwapi_ordinal132 equ <__imp_shlwapi_ordinal132>

externdef __imp_shlwapi_ordinal133:PPROC
shlwapi_ordinal133 equ <__imp_shlwapi_ordinal133>

externdef __imp_shlwapi_ordinal134:PPROC
shlwapi_ordinal134 equ <__imp_shlwapi_ordinal134>

externdef __imp_shlwapi_ordinal135:PPROC
shlwapi_ordinal135 equ <__imp_shlwapi_ordinal135>

externdef __imp_shlwapi_ordinal136:PPROC
shlwapi_ordinal136 equ <__imp_shlwapi_ordinal136>

externdef __imp_shlwapi_ordinal137:PPROC
shlwapi_ordinal137 equ <__imp_shlwapi_ordinal137>

externdef __imp_shlwapi_ordinal138:PPROC
shlwapi_ordinal138 equ <__imp_shlwapi_ordinal138>

externdef __imp_shlwapi_ordinal139:PPROC
shlwapi_ordinal139 equ <__imp_shlwapi_ordinal139>

externdef __imp_shlwapi_ordinal13:PPROC
shlwapi_ordinal13 equ <__imp_shlwapi_ordinal13>

externdef __imp_shlwapi_ordinal140:PPROC
shlwapi_ordinal140 equ <__imp_shlwapi_ordinal140>

externdef __imp_shlwapi_ordinal141:PPROC
shlwapi_ordinal141 equ <__imp_shlwapi_ordinal141>

externdef __imp_shlwapi_ordinal142:PPROC
shlwapi_ordinal142 equ <__imp_shlwapi_ordinal142>

externdef __imp_shlwapi_ordinal143:PPROC
shlwapi_ordinal143 equ <__imp_shlwapi_ordinal143>

externdef __imp_shlwapi_ordinal144:PPROC
shlwapi_ordinal144 equ <__imp_shlwapi_ordinal144>

externdef __imp_shlwapi_ordinal145:PPROC
shlwapi_ordinal145 equ <__imp_shlwapi_ordinal145>

externdef __imp_shlwapi_ordinal146:PPROC
shlwapi_ordinal146 equ <__imp_shlwapi_ordinal146>

externdef __imp_shlwapi_ordinal147:PPROC
shlwapi_ordinal147 equ <__imp_shlwapi_ordinal147>

externdef __imp_shlwapi_ordinal148:PPROC
shlwapi_ordinal148 equ <__imp_shlwapi_ordinal148>

externdef __imp_shlwapi_ordinal149:PPROC
shlwapi_ordinal149 equ <__imp_shlwapi_ordinal149>

externdef __imp_shlwapi_ordinal150:PPROC
shlwapi_ordinal150 equ <__imp_shlwapi_ordinal150>

externdef __imp_shlwapi_ordinal151:PPROC
shlwapi_ordinal151 equ <__imp_shlwapi_ordinal151>

externdef __imp_shlwapi_ordinal152:PPROC
shlwapi_ordinal152 equ <__imp_shlwapi_ordinal152>

externdef __imp_shlwapi_ordinal153:PPROC
shlwapi_ordinal153 equ <__imp_shlwapi_ordinal153>

externdef __imp_shlwapi_ordinal154:PPROC
shlwapi_ordinal154 equ <__imp_shlwapi_ordinal154>

externdef __imp_shlwapi_ordinal159:PPROC
shlwapi_ordinal159 equ <__imp_shlwapi_ordinal159>

externdef __imp_shlwapi_ordinal160:PPROC
shlwapi_ordinal160 equ <__imp_shlwapi_ordinal160>

externdef __imp_shlwapi_ordinal161:PPROC
shlwapi_ordinal161 equ <__imp_shlwapi_ordinal161>

externdef __imp_shlwapi_ordinal162:PPROC
shlwapi_ordinal162 equ <__imp_shlwapi_ordinal162>

externdef __imp_shlwapi_ordinal163:PPROC
shlwapi_ordinal163 equ <__imp_shlwapi_ordinal163>

externdef __imp_shlwapi_ordinal164:PPROC
shlwapi_ordinal164 equ <__imp_shlwapi_ordinal164>

externdef __imp_shlwapi_ordinal165:PPROC
shlwapi_ordinal165 equ <__imp_shlwapi_ordinal165>

externdef __imp_shlwapi_ordinal166:PPROC
shlwapi_ordinal166 equ <__imp_shlwapi_ordinal166>

externdef __imp_shlwapi_ordinal167:PPROC
shlwapi_ordinal167 equ <__imp_shlwapi_ordinal167>

externdef __imp_shlwapi_ordinal168:PPROC
shlwapi_ordinal168 equ <__imp_shlwapi_ordinal168>

externdef __imp_shlwapi_ordinal169:PPROC
shlwapi_ordinal169 equ <__imp_shlwapi_ordinal169>

externdef __imp_shlwapi_ordinal170:PPROC
shlwapi_ordinal170 equ <__imp_shlwapi_ordinal170>

externdef __imp_shlwapi_ordinal171:PPROC
shlwapi_ordinal171 equ <__imp_shlwapi_ordinal171>

externdef __imp_shlwapi_ordinal172:PPROC
shlwapi_ordinal172 equ <__imp_shlwapi_ordinal172>

externdef __imp_shlwapi_ordinal173:PPROC
shlwapi_ordinal173 equ <__imp_shlwapi_ordinal173>

externdef __imp_shlwapi_ordinal174:PPROC
shlwapi_ordinal174 equ <__imp_shlwapi_ordinal174>

externdef __imp_shlwapi_ordinal175:PPROC
shlwapi_ordinal175 equ <__imp_shlwapi_ordinal175>

externdef __imp_shlwapi_ordinal176:PPROC
shlwapi_ordinal176 equ <__imp_shlwapi_ordinal176>

externdef __imp_shlwapi_ordinal177:PPROC
shlwapi_ordinal177 equ <__imp_shlwapi_ordinal177>

externdef __imp_shlwapi_ordinal178:PPROC
shlwapi_ordinal178 equ <__imp_shlwapi_ordinal178>

externdef __imp_shlwapi_ordinal179:PPROC
shlwapi_ordinal179 equ <__imp_shlwapi_ordinal179>

externdef __imp_shlwapi_ordinal17:PPROC
shlwapi_ordinal17 equ <__imp_shlwapi_ordinal17>

externdef __imp_shlwapi_ordinal180:PPROC
shlwapi_ordinal180 equ <__imp_shlwapi_ordinal180>

externdef __imp_shlwapi_ordinal181:PPROC
shlwapi_ordinal181 equ <__imp_shlwapi_ordinal181>

externdef __imp_shlwapi_ordinal182:PPROC
shlwapi_ordinal182 equ <__imp_shlwapi_ordinal182>

externdef __imp_shlwapi_ordinal183:PPROC
shlwapi_ordinal183 equ <__imp_shlwapi_ordinal183>

externdef __imp_shlwapi_ordinal184:PPROC
shlwapi_ordinal184 equ <__imp_shlwapi_ordinal184>

externdef __imp_shlwapi_ordinal185:PPROC
shlwapi_ordinal185 equ <__imp_shlwapi_ordinal185>

externdef __imp_shlwapi_ordinal186:PPROC
shlwapi_ordinal186 equ <__imp_shlwapi_ordinal186>

externdef __imp_shlwapi_ordinal187:PPROC
shlwapi_ordinal187 equ <__imp_shlwapi_ordinal187>

externdef __imp_shlwapi_ordinal188:PPROC
shlwapi_ordinal188 equ <__imp_shlwapi_ordinal188>

externdef __imp_shlwapi_ordinal189:PPROC
shlwapi_ordinal189 equ <__imp_shlwapi_ordinal189>

externdef __imp_shlwapi_ordinal18:PPROC
shlwapi_ordinal18 equ <__imp_shlwapi_ordinal18>

externdef __imp_shlwapi_ordinal190:PPROC
shlwapi_ordinal190 equ <__imp_shlwapi_ordinal190>

externdef __imp_shlwapi_ordinal191:PPROC
shlwapi_ordinal191 equ <__imp_shlwapi_ordinal191>

externdef __imp_shlwapi_ordinal192:PPROC
shlwapi_ordinal192 equ <__imp_shlwapi_ordinal192>

externdef __imp_shlwapi_ordinal193:PPROC
shlwapi_ordinal193 equ <__imp_shlwapi_ordinal193>

externdef __imp_shlwapi_ordinal194:PPROC
shlwapi_ordinal194 equ <__imp_shlwapi_ordinal194>

externdef __imp_shlwapi_ordinal195:PPROC
shlwapi_ordinal195 equ <__imp_shlwapi_ordinal195>

externdef __imp_shlwapi_ordinal196:PPROC
shlwapi_ordinal196 equ <__imp_shlwapi_ordinal196>

externdef __imp_shlwapi_ordinal197:PPROC
shlwapi_ordinal197 equ <__imp_shlwapi_ordinal197>

externdef __imp_shlwapi_ordinal198:PPROC
shlwapi_ordinal198 equ <__imp_shlwapi_ordinal198>

externdef __imp_shlwapi_ordinal199:PPROC
shlwapi_ordinal199 equ <__imp_shlwapi_ordinal199>

externdef __imp_shlwapi_ordinal19:PPROC
shlwapi_ordinal19 equ <__imp_shlwapi_ordinal19>

externdef __imp_shlwapi_ordinal1:PPROC
shlwapi_ordinal1 equ <__imp_shlwapi_ordinal1>

externdef __imp_shlwapi_ordinal200:PPROC
shlwapi_ordinal200 equ <__imp_shlwapi_ordinal200>

externdef __imp_shlwapi_ordinal201:PPROC
shlwapi_ordinal201 equ <__imp_shlwapi_ordinal201>

externdef __imp_shlwapi_ordinal202:PPROC
shlwapi_ordinal202 equ <__imp_shlwapi_ordinal202>

externdef __imp_shlwapi_ordinal203:PPROC
shlwapi_ordinal203 equ <__imp_shlwapi_ordinal203>

externdef __imp_shlwapi_ordinal204:PPROC
shlwapi_ordinal204 equ <__imp_shlwapi_ordinal204>

externdef __imp_shlwapi_ordinal205:PPROC
shlwapi_ordinal205 equ <__imp_shlwapi_ordinal205>

externdef __imp_shlwapi_ordinal206:PPROC
shlwapi_ordinal206 equ <__imp_shlwapi_ordinal206>

externdef __imp_shlwapi_ordinal207:PPROC
shlwapi_ordinal207 equ <__imp_shlwapi_ordinal207>

externdef __imp_shlwapi_ordinal208:PPROC
shlwapi_ordinal208 equ <__imp_shlwapi_ordinal208>

externdef __imp_shlwapi_ordinal209:PPROC
shlwapi_ordinal209 equ <__imp_shlwapi_ordinal209>

externdef __imp_shlwapi_ordinal20:PPROC
shlwapi_ordinal20 equ <__imp_shlwapi_ordinal20>

externdef __imp_shlwapi_ordinal210:PPROC
shlwapi_ordinal210 equ <__imp_shlwapi_ordinal210>

externdef __imp_shlwapi_ordinal211:PPROC
shlwapi_ordinal211 equ <__imp_shlwapi_ordinal211>

externdef __imp_shlwapi_ordinal212:PPROC
shlwapi_ordinal212 equ <__imp_shlwapi_ordinal212>

externdef __imp_shlwapi_ordinal213:PPROC
shlwapi_ordinal213 equ <__imp_shlwapi_ordinal213>

externdef __imp_shlwapi_ordinal214:PPROC
shlwapi_ordinal214 equ <__imp_shlwapi_ordinal214>

externdef __imp_shlwapi_ordinal215:PPROC
shlwapi_ordinal215 equ <__imp_shlwapi_ordinal215>

externdef __imp_shlwapi_ordinal216:PPROC
shlwapi_ordinal216 equ <__imp_shlwapi_ordinal216>

externdef __imp_shlwapi_ordinal217:PPROC
shlwapi_ordinal217 equ <__imp_shlwapi_ordinal217>

externdef __imp_shlwapi_ordinal218:PPROC
shlwapi_ordinal218 equ <__imp_shlwapi_ordinal218>

externdef __imp_shlwapi_ordinal219:PPROC
shlwapi_ordinal219 equ <__imp_shlwapi_ordinal219>

externdef __imp_shlwapi_ordinal21:PPROC
shlwapi_ordinal21 equ <__imp_shlwapi_ordinal21>

externdef __imp_shlwapi_ordinal220:PPROC
shlwapi_ordinal220 equ <__imp_shlwapi_ordinal220>

externdef __imp_shlwapi_ordinal221:PPROC
shlwapi_ordinal221 equ <__imp_shlwapi_ordinal221>

externdef __imp_shlwapi_ordinal222:PPROC
shlwapi_ordinal222 equ <__imp_shlwapi_ordinal222>

externdef __imp_shlwapi_ordinal223:PPROC
shlwapi_ordinal223 equ <__imp_shlwapi_ordinal223>

externdef __imp_shlwapi_ordinal224:PPROC
shlwapi_ordinal224 equ <__imp_shlwapi_ordinal224>

externdef __imp_shlwapi_ordinal225:PPROC
shlwapi_ordinal225 equ <__imp_shlwapi_ordinal225>

externdef __imp_shlwapi_ordinal226:PPROC
shlwapi_ordinal226 equ <__imp_shlwapi_ordinal226>

externdef __imp_shlwapi_ordinal227:PPROC
shlwapi_ordinal227 equ <__imp_shlwapi_ordinal227>

externdef __imp_shlwapi_ordinal228:PPROC
shlwapi_ordinal228 equ <__imp_shlwapi_ordinal228>

externdef __imp_shlwapi_ordinal229:PPROC
shlwapi_ordinal229 equ <__imp_shlwapi_ordinal229>

externdef __imp_shlwapi_ordinal22:PPROC
shlwapi_ordinal22 equ <__imp_shlwapi_ordinal22>

externdef __imp_shlwapi_ordinal230:PPROC
shlwapi_ordinal230 equ <__imp_shlwapi_ordinal230>

externdef __imp_shlwapi_ordinal231:PPROC
shlwapi_ordinal231 equ <__imp_shlwapi_ordinal231>

externdef __imp_shlwapi_ordinal232:PPROC
shlwapi_ordinal232 equ <__imp_shlwapi_ordinal232>

externdef __imp_shlwapi_ordinal233:PPROC
shlwapi_ordinal233 equ <__imp_shlwapi_ordinal233>

externdef __imp_shlwapi_ordinal234:PPROC
shlwapi_ordinal234 equ <__imp_shlwapi_ordinal234>

externdef __imp_shlwapi_ordinal235:PPROC
shlwapi_ordinal235 equ <__imp_shlwapi_ordinal235>

externdef __imp_shlwapi_ordinal236:PPROC
shlwapi_ordinal236 equ <__imp_shlwapi_ordinal236>

externdef __imp_shlwapi_ordinal237:PPROC
shlwapi_ordinal237 equ <__imp_shlwapi_ordinal237>

externdef __imp_shlwapi_ordinal238:PPROC
shlwapi_ordinal238 equ <__imp_shlwapi_ordinal238>

externdef __imp_shlwapi_ordinal239:PPROC
shlwapi_ordinal239 equ <__imp_shlwapi_ordinal239>

externdef __imp_shlwapi_ordinal23:PPROC
shlwapi_ordinal23 equ <__imp_shlwapi_ordinal23>

externdef __imp_shlwapi_ordinal240:PPROC
shlwapi_ordinal240 equ <__imp_shlwapi_ordinal240>

externdef __imp_shlwapi_ordinal241:PPROC
shlwapi_ordinal241 equ <__imp_shlwapi_ordinal241>

externdef __imp_shlwapi_ordinal242:PPROC
shlwapi_ordinal242 equ <__imp_shlwapi_ordinal242>

externdef __imp_shlwapi_ordinal243:PPROC
shlwapi_ordinal243 equ <__imp_shlwapi_ordinal243>

externdef __imp_shlwapi_ordinal244:PPROC
shlwapi_ordinal244 equ <__imp_shlwapi_ordinal244>

externdef __imp_shlwapi_ordinal245:PPROC
shlwapi_ordinal245 equ <__imp_shlwapi_ordinal245>

externdef __imp_shlwapi_ordinal246:PPROC
shlwapi_ordinal246 equ <__imp_shlwapi_ordinal246>

externdef __imp_shlwapi_ordinal247:PPROC
shlwapi_ordinal247 equ <__imp_shlwapi_ordinal247>

externdef __imp_shlwapi_ordinal248:PPROC
shlwapi_ordinal248 equ <__imp_shlwapi_ordinal248>

externdef __imp_shlwapi_ordinal249:PPROC
shlwapi_ordinal249 equ <__imp_shlwapi_ordinal249>

externdef __imp_shlwapi_ordinal24:PPROC
shlwapi_ordinal24 equ <__imp_shlwapi_ordinal24>

externdef __imp_shlwapi_ordinal250:PPROC
shlwapi_ordinal250 equ <__imp_shlwapi_ordinal250>

externdef __imp_shlwapi_ordinal251:PPROC
shlwapi_ordinal251 equ <__imp_shlwapi_ordinal251>

externdef __imp_shlwapi_ordinal252:PPROC
shlwapi_ordinal252 equ <__imp_shlwapi_ordinal252>

externdef __imp_shlwapi_ordinal253:PPROC
shlwapi_ordinal253 equ <__imp_shlwapi_ordinal253>

externdef __imp_shlwapi_ordinal254:PPROC
shlwapi_ordinal254 equ <__imp_shlwapi_ordinal254>

externdef __imp_shlwapi_ordinal255:PPROC
shlwapi_ordinal255 equ <__imp_shlwapi_ordinal255>

externdef __imp_shlwapi_ordinal256:PPROC
shlwapi_ordinal256 equ <__imp_shlwapi_ordinal256>

externdef __imp_shlwapi_ordinal257:PPROC
shlwapi_ordinal257 equ <__imp_shlwapi_ordinal257>

externdef __imp_shlwapi_ordinal258:PPROC
shlwapi_ordinal258 equ <__imp_shlwapi_ordinal258>

externdef __imp_shlwapi_ordinal259:PPROC
shlwapi_ordinal259 equ <__imp_shlwapi_ordinal259>

externdef __imp_shlwapi_ordinal25:PPROC
shlwapi_ordinal25 equ <__imp_shlwapi_ordinal25>

externdef __imp_shlwapi_ordinal260:PPROC
shlwapi_ordinal260 equ <__imp_shlwapi_ordinal260>

externdef __imp_shlwapi_ordinal261:PPROC
shlwapi_ordinal261 equ <__imp_shlwapi_ordinal261>

externdef __imp_shlwapi_ordinal262:PPROC
shlwapi_ordinal262 equ <__imp_shlwapi_ordinal262>

externdef __imp_shlwapi_ordinal263:PPROC
shlwapi_ordinal263 equ <__imp_shlwapi_ordinal263>

externdef __imp_shlwapi_ordinal264:PPROC
shlwapi_ordinal264 equ <__imp_shlwapi_ordinal264>

externdef __imp_shlwapi_ordinal265:PPROC
shlwapi_ordinal265 equ <__imp_shlwapi_ordinal265>

externdef __imp_shlwapi_ordinal266:PPROC
shlwapi_ordinal266 equ <__imp_shlwapi_ordinal266>

externdef __imp_shlwapi_ordinal267:PPROC
shlwapi_ordinal267 equ <__imp_shlwapi_ordinal267>

externdef __imp_shlwapi_ordinal268:PPROC
shlwapi_ordinal268 equ <__imp_shlwapi_ordinal268>

externdef __imp_shlwapi_ordinal269:PPROC
shlwapi_ordinal269 equ <__imp_shlwapi_ordinal269>

externdef __imp_shlwapi_ordinal26:PPROC
shlwapi_ordinal26 equ <__imp_shlwapi_ordinal26>

externdef __imp_shlwapi_ordinal270:PPROC
shlwapi_ordinal270 equ <__imp_shlwapi_ordinal270>

externdef __imp_shlwapi_ordinal271:PPROC
shlwapi_ordinal271 equ <__imp_shlwapi_ordinal271>

externdef __imp_shlwapi_ordinal272:PPROC
shlwapi_ordinal272 equ <__imp_shlwapi_ordinal272>

externdef __imp_shlwapi_ordinal273:PPROC
shlwapi_ordinal273 equ <__imp_shlwapi_ordinal273>

externdef __imp_shlwapi_ordinal274:PPROC
shlwapi_ordinal274 equ <__imp_shlwapi_ordinal274>

externdef __imp_shlwapi_ordinal275:PPROC
shlwapi_ordinal275 equ <__imp_shlwapi_ordinal275>

externdef __imp_shlwapi_ordinal276:PPROC
shlwapi_ordinal276 equ <__imp_shlwapi_ordinal276>

externdef __imp_shlwapi_ordinal277:PPROC
shlwapi_ordinal277 equ <__imp_shlwapi_ordinal277>

externdef __imp_shlwapi_ordinal278:PPROC
shlwapi_ordinal278 equ <__imp_shlwapi_ordinal278>

externdef __imp_shlwapi_ordinal279:PPROC
shlwapi_ordinal279 equ <__imp_shlwapi_ordinal279>

externdef __imp_shlwapi_ordinal27:PPROC
shlwapi_ordinal27 equ <__imp_shlwapi_ordinal27>

externdef __imp_shlwapi_ordinal280:PPROC
shlwapi_ordinal280 equ <__imp_shlwapi_ordinal280>

externdef __imp_shlwapi_ordinal281:PPROC
shlwapi_ordinal281 equ <__imp_shlwapi_ordinal281>

externdef __imp_shlwapi_ordinal282:PPROC
shlwapi_ordinal282 equ <__imp_shlwapi_ordinal282>

externdef __imp_shlwapi_ordinal283:PPROC
shlwapi_ordinal283 equ <__imp_shlwapi_ordinal283>

externdef __imp_shlwapi_ordinal284:PPROC
shlwapi_ordinal284 equ <__imp_shlwapi_ordinal284>

externdef __imp_shlwapi_ordinal285:PPROC
shlwapi_ordinal285 equ <__imp_shlwapi_ordinal285>

externdef __imp_shlwapi_ordinal286:PPROC
shlwapi_ordinal286 equ <__imp_shlwapi_ordinal286>

externdef __imp_shlwapi_ordinal287:PPROC
shlwapi_ordinal287 equ <__imp_shlwapi_ordinal287>

externdef __imp_shlwapi_ordinal288:PPROC
shlwapi_ordinal288 equ <__imp_shlwapi_ordinal288>

externdef __imp_shlwapi_ordinal289:PPROC
shlwapi_ordinal289 equ <__imp_shlwapi_ordinal289>

externdef __imp_shlwapi_ordinal28:PPROC
shlwapi_ordinal28 equ <__imp_shlwapi_ordinal28>

externdef __imp_shlwapi_ordinal290:PPROC
shlwapi_ordinal290 equ <__imp_shlwapi_ordinal290>

externdef __imp_shlwapi_ordinal291:PPROC
shlwapi_ordinal291 equ <__imp_shlwapi_ordinal291>

externdef __imp_shlwapi_ordinal292:PPROC
shlwapi_ordinal292 equ <__imp_shlwapi_ordinal292>

externdef __imp_shlwapi_ordinal293:PPROC
shlwapi_ordinal293 equ <__imp_shlwapi_ordinal293>

externdef __imp_shlwapi_ordinal294:PPROC
shlwapi_ordinal294 equ <__imp_shlwapi_ordinal294>

externdef __imp_shlwapi_ordinal295:PPROC
shlwapi_ordinal295 equ <__imp_shlwapi_ordinal295>

externdef __imp_shlwapi_ordinal296:PPROC
shlwapi_ordinal296 equ <__imp_shlwapi_ordinal296>

externdef __imp_shlwapi_ordinal297:PPROC
shlwapi_ordinal297 equ <__imp_shlwapi_ordinal297>

externdef __imp_shlwapi_ordinal298:PPROC
shlwapi_ordinal298 equ <__imp_shlwapi_ordinal298>

externdef __imp_shlwapi_ordinal299:PPROC
shlwapi_ordinal299 equ <__imp_shlwapi_ordinal299>

externdef __imp_shlwapi_ordinal2:PPROC
shlwapi_ordinal2 equ <__imp_shlwapi_ordinal2>

externdef __imp_shlwapi_ordinal300:PPROC
shlwapi_ordinal300 equ <__imp_shlwapi_ordinal300>

externdef __imp_shlwapi_ordinal301:PPROC
shlwapi_ordinal301 equ <__imp_shlwapi_ordinal301>

externdef __imp_shlwapi_ordinal302:PPROC
shlwapi_ordinal302 equ <__imp_shlwapi_ordinal302>

externdef __imp_shlwapi_ordinal303:PPROC
shlwapi_ordinal303 equ <__imp_shlwapi_ordinal303>

externdef __imp_shlwapi_ordinal304:PPROC
shlwapi_ordinal304 equ <__imp_shlwapi_ordinal304>

externdef __imp_shlwapi_ordinal305:PPROC
shlwapi_ordinal305 equ <__imp_shlwapi_ordinal305>

externdef __imp_shlwapi_ordinal306:PPROC
shlwapi_ordinal306 equ <__imp_shlwapi_ordinal306>

externdef __imp_shlwapi_ordinal307:PPROC
shlwapi_ordinal307 equ <__imp_shlwapi_ordinal307>

externdef __imp_shlwapi_ordinal308:PPROC
shlwapi_ordinal308 equ <__imp_shlwapi_ordinal308>

externdef __imp_shlwapi_ordinal309:PPROC
shlwapi_ordinal309 equ <__imp_shlwapi_ordinal309>

externdef __imp_shlwapi_ordinal30:PPROC
shlwapi_ordinal30 equ <__imp_shlwapi_ordinal30>

externdef __imp_shlwapi_ordinal310:PPROC
shlwapi_ordinal310 equ <__imp_shlwapi_ordinal310>

externdef __imp_shlwapi_ordinal311:PPROC
shlwapi_ordinal311 equ <__imp_shlwapi_ordinal311>

externdef __imp_shlwapi_ordinal312:PPROC
shlwapi_ordinal312 equ <__imp_shlwapi_ordinal312>

externdef __imp_shlwapi_ordinal313:PPROC
shlwapi_ordinal313 equ <__imp_shlwapi_ordinal313>

externdef __imp_shlwapi_ordinal314:PPROC
shlwapi_ordinal314 equ <__imp_shlwapi_ordinal314>

externdef __imp_shlwapi_ordinal315:PPROC
shlwapi_ordinal315 equ <__imp_shlwapi_ordinal315>

externdef __imp_shlwapi_ordinal316:PPROC
shlwapi_ordinal316 equ <__imp_shlwapi_ordinal316>

externdef __imp_shlwapi_ordinal317:PPROC
shlwapi_ordinal317 equ <__imp_shlwapi_ordinal317>

externdef __imp_shlwapi_ordinal318:PPROC
shlwapi_ordinal318 equ <__imp_shlwapi_ordinal318>

externdef __imp_shlwapi_ordinal319:PPROC
shlwapi_ordinal319 equ <__imp_shlwapi_ordinal319>

externdef __imp_shlwapi_ordinal31:PPROC
shlwapi_ordinal31 equ <__imp_shlwapi_ordinal31>

externdef __imp_shlwapi_ordinal320:PPROC
shlwapi_ordinal320 equ <__imp_shlwapi_ordinal320>

externdef __imp_shlwapi_ordinal321:PPROC
shlwapi_ordinal321 equ <__imp_shlwapi_ordinal321>

externdef __imp_shlwapi_ordinal322:PPROC
shlwapi_ordinal322 equ <__imp_shlwapi_ordinal322>

externdef __imp_shlwapi_ordinal323:PPROC
shlwapi_ordinal323 equ <__imp_shlwapi_ordinal323>

externdef __imp_shlwapi_ordinal324:PPROC
shlwapi_ordinal324 equ <__imp_shlwapi_ordinal324>

externdef __imp_shlwapi_ordinal325:PPROC
shlwapi_ordinal325 equ <__imp_shlwapi_ordinal325>

externdef __imp_shlwapi_ordinal326:PPROC
shlwapi_ordinal326 equ <__imp_shlwapi_ordinal326>

externdef __imp_shlwapi_ordinal327:PPROC
shlwapi_ordinal327 equ <__imp_shlwapi_ordinal327>

externdef __imp_shlwapi_ordinal328:PPROC
shlwapi_ordinal328 equ <__imp_shlwapi_ordinal328>

externdef __imp_shlwapi_ordinal329:PPROC
shlwapi_ordinal329 equ <__imp_shlwapi_ordinal329>

externdef __imp_shlwapi_ordinal32:PPROC
shlwapi_ordinal32 equ <__imp_shlwapi_ordinal32>

externdef __imp_shlwapi_ordinal330:PPROC
shlwapi_ordinal330 equ <__imp_shlwapi_ordinal330>

externdef __imp_shlwapi_ordinal331:PPROC
shlwapi_ordinal331 equ <__imp_shlwapi_ordinal331>

externdef __imp_shlwapi_ordinal332:PPROC
shlwapi_ordinal332 equ <__imp_shlwapi_ordinal332>

externdef __imp_shlwapi_ordinal333:PPROC
shlwapi_ordinal333 equ <__imp_shlwapi_ordinal333>

externdef __imp_shlwapi_ordinal334:PPROC
shlwapi_ordinal334 equ <__imp_shlwapi_ordinal334>

externdef __imp_shlwapi_ordinal335:PPROC
shlwapi_ordinal335 equ <__imp_shlwapi_ordinal335>

externdef __imp_shlwapi_ordinal336:PPROC
shlwapi_ordinal336 equ <__imp_shlwapi_ordinal336>

externdef __imp_shlwapi_ordinal337:PPROC
shlwapi_ordinal337 equ <__imp_shlwapi_ordinal337>

externdef __imp_shlwapi_ordinal338:PPROC
shlwapi_ordinal338 equ <__imp_shlwapi_ordinal338>

externdef __imp_shlwapi_ordinal339:PPROC
shlwapi_ordinal339 equ <__imp_shlwapi_ordinal339>

externdef __imp_shlwapi_ordinal33:PPROC
shlwapi_ordinal33 equ <__imp_shlwapi_ordinal33>

externdef __imp_shlwapi_ordinal340:PPROC
shlwapi_ordinal340 equ <__imp_shlwapi_ordinal340>

externdef __imp_shlwapi_ordinal341:PPROC
shlwapi_ordinal341 equ <__imp_shlwapi_ordinal341>

externdef __imp_shlwapi_ordinal342:PPROC
shlwapi_ordinal342 equ <__imp_shlwapi_ordinal342>

externdef __imp_shlwapi_ordinal343:PPROC
shlwapi_ordinal343 equ <__imp_shlwapi_ordinal343>

externdef __imp_shlwapi_ordinal344:PPROC
shlwapi_ordinal344 equ <__imp_shlwapi_ordinal344>

externdef __imp_shlwapi_ordinal345:PPROC
shlwapi_ordinal345 equ <__imp_shlwapi_ordinal345>

externdef __imp_shlwapi_ordinal346:PPROC
shlwapi_ordinal346 equ <__imp_shlwapi_ordinal346>

externdef __imp_shlwapi_ordinal347:PPROC
shlwapi_ordinal347 equ <__imp_shlwapi_ordinal347>

externdef __imp_shlwapi_ordinal348:PPROC
shlwapi_ordinal348 equ <__imp_shlwapi_ordinal348>

externdef __imp_shlwapi_ordinal349:PPROC
shlwapi_ordinal349 equ <__imp_shlwapi_ordinal349>

externdef __imp_shlwapi_ordinal34:PPROC
shlwapi_ordinal34 equ <__imp_shlwapi_ordinal34>

externdef __imp_shlwapi_ordinal350:PPROC
shlwapi_ordinal350 equ <__imp_shlwapi_ordinal350>

externdef __imp_shlwapi_ordinal351:PPROC
shlwapi_ordinal351 equ <__imp_shlwapi_ordinal351>

externdef __imp_shlwapi_ordinal352:PPROC
shlwapi_ordinal352 equ <__imp_shlwapi_ordinal352>

externdef __imp_shlwapi_ordinal353:PPROC
shlwapi_ordinal353 equ <__imp_shlwapi_ordinal353>

externdef __imp_shlwapi_ordinal354:PPROC
shlwapi_ordinal354 equ <__imp_shlwapi_ordinal354>

externdef __imp_shlwapi_ordinal355:PPROC
shlwapi_ordinal355 equ <__imp_shlwapi_ordinal355>

externdef __imp_shlwapi_ordinal357:PPROC
shlwapi_ordinal357 equ <__imp_shlwapi_ordinal357>

externdef __imp_shlwapi_ordinal358:PPROC
shlwapi_ordinal358 equ <__imp_shlwapi_ordinal358>

externdef __imp_shlwapi_ordinal359:PPROC
shlwapi_ordinal359 equ <__imp_shlwapi_ordinal359>

externdef __imp_shlwapi_ordinal35:PPROC
shlwapi_ordinal35 equ <__imp_shlwapi_ordinal35>

externdef __imp_shlwapi_ordinal360:PPROC
shlwapi_ordinal360 equ <__imp_shlwapi_ordinal360>

externdef __imp_shlwapi_ordinal361:PPROC
shlwapi_ordinal361 equ <__imp_shlwapi_ordinal361>

externdef __imp_shlwapi_ordinal362:PPROC
shlwapi_ordinal362 equ <__imp_shlwapi_ordinal362>

externdef __imp_shlwapi_ordinal363:PPROC
shlwapi_ordinal363 equ <__imp_shlwapi_ordinal363>

externdef __imp_shlwapi_ordinal364:PPROC
shlwapi_ordinal364 equ <__imp_shlwapi_ordinal364>

externdef __imp_shlwapi_ordinal365:PPROC
shlwapi_ordinal365 equ <__imp_shlwapi_ordinal365>

externdef __imp_shlwapi_ordinal366:PPROC
shlwapi_ordinal366 equ <__imp_shlwapi_ordinal366>

externdef __imp_shlwapi_ordinal367:PPROC
shlwapi_ordinal367 equ <__imp_shlwapi_ordinal367>

externdef __imp_shlwapi_ordinal368:PPROC
shlwapi_ordinal368 equ <__imp_shlwapi_ordinal368>

externdef __imp_shlwapi_ordinal369:PPROC
shlwapi_ordinal369 equ <__imp_shlwapi_ordinal369>

externdef __imp_shlwapi_ordinal36:PPROC
shlwapi_ordinal36 equ <__imp_shlwapi_ordinal36>

externdef __imp_shlwapi_ordinal370:PPROC
shlwapi_ordinal370 equ <__imp_shlwapi_ordinal370>

externdef __imp_shlwapi_ordinal371:PPROC
shlwapi_ordinal371 equ <__imp_shlwapi_ordinal371>

externdef __imp_shlwapi_ordinal372:PPROC
shlwapi_ordinal372 equ <__imp_shlwapi_ordinal372>

externdef __imp_shlwapi_ordinal373:PPROC
shlwapi_ordinal373 equ <__imp_shlwapi_ordinal373>

externdef __imp_shlwapi_ordinal374:PPROC
shlwapi_ordinal374 equ <__imp_shlwapi_ordinal374>

externdef __imp_shlwapi_ordinal375:PPROC
shlwapi_ordinal375 equ <__imp_shlwapi_ordinal375>

externdef __imp_shlwapi_ordinal376:PPROC
shlwapi_ordinal376 equ <__imp_shlwapi_ordinal376>

externdef __imp_shlwapi_ordinal377:PPROC
shlwapi_ordinal377 equ <__imp_shlwapi_ordinal377>

externdef __imp_shlwapi_ordinal378:PPROC
shlwapi_ordinal378 equ <__imp_shlwapi_ordinal378>

externdef __imp_shlwapi_ordinal379:PPROC
shlwapi_ordinal379 equ <__imp_shlwapi_ordinal379>

externdef __imp_shlwapi_ordinal37:PPROC
shlwapi_ordinal37 equ <__imp_shlwapi_ordinal37>

externdef __imp_shlwapi_ordinal380:PPROC
shlwapi_ordinal380 equ <__imp_shlwapi_ordinal380>

externdef __imp_shlwapi_ordinal381:PPROC
shlwapi_ordinal381 equ <__imp_shlwapi_ordinal381>

externdef __imp_shlwapi_ordinal382:PPROC
shlwapi_ordinal382 equ <__imp_shlwapi_ordinal382>

externdef __imp_shlwapi_ordinal383:PPROC
shlwapi_ordinal383 equ <__imp_shlwapi_ordinal383>

externdef __imp_shlwapi_ordinal384:PPROC
shlwapi_ordinal384 equ <__imp_shlwapi_ordinal384>

externdef __imp_shlwapi_ordinal385:PPROC
shlwapi_ordinal385 equ <__imp_shlwapi_ordinal385>

externdef __imp_shlwapi_ordinal386:PPROC
shlwapi_ordinal386 equ <__imp_shlwapi_ordinal386>

externdef __imp_shlwapi_ordinal387:PPROC
shlwapi_ordinal387 equ <__imp_shlwapi_ordinal387>

externdef __imp_shlwapi_ordinal388:PPROC
shlwapi_ordinal388 equ <__imp_shlwapi_ordinal388>

externdef __imp_shlwapi_ordinal389:PPROC
shlwapi_ordinal389 equ <__imp_shlwapi_ordinal389>

externdef __imp_shlwapi_ordinal38:PPROC
shlwapi_ordinal38 equ <__imp_shlwapi_ordinal38>

externdef __imp_shlwapi_ordinal390:PPROC
shlwapi_ordinal390 equ <__imp_shlwapi_ordinal390>

externdef __imp_shlwapi_ordinal391:PPROC
shlwapi_ordinal391 equ <__imp_shlwapi_ordinal391>

externdef __imp_shlwapi_ordinal392:PPROC
shlwapi_ordinal392 equ <__imp_shlwapi_ordinal392>

externdef __imp_shlwapi_ordinal393:PPROC
shlwapi_ordinal393 equ <__imp_shlwapi_ordinal393>

externdef __imp_shlwapi_ordinal394:PPROC
shlwapi_ordinal394 equ <__imp_shlwapi_ordinal394>

externdef __imp_shlwapi_ordinal395:PPROC
shlwapi_ordinal395 equ <__imp_shlwapi_ordinal395>

externdef __imp_shlwapi_ordinal396:PPROC
shlwapi_ordinal396 equ <__imp_shlwapi_ordinal396>

externdef __imp_shlwapi_ordinal397:PPROC
shlwapi_ordinal397 equ <__imp_shlwapi_ordinal397>

externdef __imp_shlwapi_ordinal398:PPROC
shlwapi_ordinal398 equ <__imp_shlwapi_ordinal398>

externdef __imp_shlwapi_ordinal399:PPROC
shlwapi_ordinal399 equ <__imp_shlwapi_ordinal399>

externdef __imp_shlwapi_ordinal39:PPROC
shlwapi_ordinal39 equ <__imp_shlwapi_ordinal39>

externdef __imp_shlwapi_ordinal3:PPROC
shlwapi_ordinal3 equ <__imp_shlwapi_ordinal3>

externdef __imp_shlwapi_ordinal400:PPROC
shlwapi_ordinal400 equ <__imp_shlwapi_ordinal400>

externdef __imp_shlwapi_ordinal401:PPROC
shlwapi_ordinal401 equ <__imp_shlwapi_ordinal401>

externdef __imp_shlwapi_ordinal402:PPROC
shlwapi_ordinal402 equ <__imp_shlwapi_ordinal402>

externdef __imp_shlwapi_ordinal403:PPROC
shlwapi_ordinal403 equ <__imp_shlwapi_ordinal403>

externdef __imp_shlwapi_ordinal404:PPROC
shlwapi_ordinal404 equ <__imp_shlwapi_ordinal404>

externdef __imp_shlwapi_ordinal405:PPROC
shlwapi_ordinal405 equ <__imp_shlwapi_ordinal405>

externdef __imp_shlwapi_ordinal406:PPROC
shlwapi_ordinal406 equ <__imp_shlwapi_ordinal406>

externdef __imp_shlwapi_ordinal407:PPROC
shlwapi_ordinal407 equ <__imp_shlwapi_ordinal407>

externdef __imp_shlwapi_ordinal408:PPROC
shlwapi_ordinal408 equ <__imp_shlwapi_ordinal408>

externdef __imp_shlwapi_ordinal409:PPROC
shlwapi_ordinal409 equ <__imp_shlwapi_ordinal409>

externdef __imp_shlwapi_ordinal40:PPROC
shlwapi_ordinal40 equ <__imp_shlwapi_ordinal40>

externdef __imp_shlwapi_ordinal410:PPROC
shlwapi_ordinal410 equ <__imp_shlwapi_ordinal410>

externdef __imp_shlwapi_ordinal411:PPROC
shlwapi_ordinal411 equ <__imp_shlwapi_ordinal411>

externdef __imp_shlwapi_ordinal412:PPROC
shlwapi_ordinal412 equ <__imp_shlwapi_ordinal412>

externdef __imp_shlwapi_ordinal413:PPROC
shlwapi_ordinal413 equ <__imp_shlwapi_ordinal413>

externdef __imp_shlwapi_ordinal414:PPROC
shlwapi_ordinal414 equ <__imp_shlwapi_ordinal414>

externdef __imp_shlwapi_ordinal415:PPROC
shlwapi_ordinal415 equ <__imp_shlwapi_ordinal415>

externdef __imp_shlwapi_ordinal416:PPROC
shlwapi_ordinal416 equ <__imp_shlwapi_ordinal416>

externdef __imp_shlwapi_ordinal417:PPROC
shlwapi_ordinal417 equ <__imp_shlwapi_ordinal417>

externdef __imp_shlwapi_ordinal418:PPROC
shlwapi_ordinal418 equ <__imp_shlwapi_ordinal418>

externdef __imp_shlwapi_ordinal419:PPROC
shlwapi_ordinal419 equ <__imp_shlwapi_ordinal419>

externdef __imp_shlwapi_ordinal41:PPROC
shlwapi_ordinal41 equ <__imp_shlwapi_ordinal41>

externdef __imp_shlwapi_ordinal420:PPROC
shlwapi_ordinal420 equ <__imp_shlwapi_ordinal420>

externdef __imp_shlwapi_ordinal421:PPROC
shlwapi_ordinal421 equ <__imp_shlwapi_ordinal421>

externdef __imp_shlwapi_ordinal422:PPROC
shlwapi_ordinal422 equ <__imp_shlwapi_ordinal422>

externdef __imp_shlwapi_ordinal423:PPROC
shlwapi_ordinal423 equ <__imp_shlwapi_ordinal423>

externdef __imp_shlwapi_ordinal424:PPROC
shlwapi_ordinal424 equ <__imp_shlwapi_ordinal424>

externdef __imp_shlwapi_ordinal425:PPROC
shlwapi_ordinal425 equ <__imp_shlwapi_ordinal425>

externdef __imp_shlwapi_ordinal426:PPROC
shlwapi_ordinal426 equ <__imp_shlwapi_ordinal426>

externdef __imp_shlwapi_ordinal427:PPROC
shlwapi_ordinal427 equ <__imp_shlwapi_ordinal427>

externdef __imp_shlwapi_ordinal428:PPROC
shlwapi_ordinal428 equ <__imp_shlwapi_ordinal428>

externdef __imp_shlwapi_ordinal429:PPROC
shlwapi_ordinal429 equ <__imp_shlwapi_ordinal429>

externdef __imp_shlwapi_ordinal42:PPROC
shlwapi_ordinal42 equ <__imp_shlwapi_ordinal42>

externdef __imp_shlwapi_ordinal430:PPROC
shlwapi_ordinal430 equ <__imp_shlwapi_ordinal430>

externdef __imp_shlwapi_ordinal431:PPROC
shlwapi_ordinal431 equ <__imp_shlwapi_ordinal431>

externdef __imp_shlwapi_ordinal432:PPROC
shlwapi_ordinal432 equ <__imp_shlwapi_ordinal432>

externdef __imp_shlwapi_ordinal433:PPROC
shlwapi_ordinal433 equ <__imp_shlwapi_ordinal433>

externdef __imp_shlwapi_ordinal434:PPROC
shlwapi_ordinal434 equ <__imp_shlwapi_ordinal434>

externdef __imp_shlwapi_ordinal435:PPROC
shlwapi_ordinal435 equ <__imp_shlwapi_ordinal435>

externdef __imp_shlwapi_ordinal436:PPROC
shlwapi_ordinal436 equ <__imp_shlwapi_ordinal436>

externdef __imp_shlwapi_ordinal437:PPROC
shlwapi_ordinal437 equ <__imp_shlwapi_ordinal437>

externdef __imp_shlwapi_ordinal438:PPROC
shlwapi_ordinal438 equ <__imp_shlwapi_ordinal438>

externdef __imp_shlwapi_ordinal439:PPROC
shlwapi_ordinal439 equ <__imp_shlwapi_ordinal439>

externdef __imp_shlwapi_ordinal43:PPROC
shlwapi_ordinal43 equ <__imp_shlwapi_ordinal43>

externdef __imp_shlwapi_ordinal440:PPROC
shlwapi_ordinal440 equ <__imp_shlwapi_ordinal440>

externdef __imp_shlwapi_ordinal441:PPROC
shlwapi_ordinal441 equ <__imp_shlwapi_ordinal441>

externdef __imp_shlwapi_ordinal442:PPROC
shlwapi_ordinal442 equ <__imp_shlwapi_ordinal442>

externdef __imp_shlwapi_ordinal443:PPROC
shlwapi_ordinal443 equ <__imp_shlwapi_ordinal443>

externdef __imp_shlwapi_ordinal444:PPROC
shlwapi_ordinal444 equ <__imp_shlwapi_ordinal444>

externdef __imp_shlwapi_ordinal445:PPROC
shlwapi_ordinal445 equ <__imp_shlwapi_ordinal445>

externdef __imp_shlwapi_ordinal446:PPROC
shlwapi_ordinal446 equ <__imp_shlwapi_ordinal446>

externdef __imp_shlwapi_ordinal447:PPROC
shlwapi_ordinal447 equ <__imp_shlwapi_ordinal447>

externdef __imp_shlwapi_ordinal448:PPROC
shlwapi_ordinal448 equ <__imp_shlwapi_ordinal448>

externdef __imp_shlwapi_ordinal449:PPROC
shlwapi_ordinal449 equ <__imp_shlwapi_ordinal449>

externdef __imp_shlwapi_ordinal44:PPROC
shlwapi_ordinal44 equ <__imp_shlwapi_ordinal44>

externdef __imp_shlwapi_ordinal450:PPROC
shlwapi_ordinal450 equ <__imp_shlwapi_ordinal450>

externdef __imp_shlwapi_ordinal451:PPROC
shlwapi_ordinal451 equ <__imp_shlwapi_ordinal451>

externdef __imp_shlwapi_ordinal452:PPROC
shlwapi_ordinal452 equ <__imp_shlwapi_ordinal452>

externdef __imp_shlwapi_ordinal453:PPROC
shlwapi_ordinal453 equ <__imp_shlwapi_ordinal453>

externdef __imp_shlwapi_ordinal454:PPROC
shlwapi_ordinal454 equ <__imp_shlwapi_ordinal454>

externdef __imp_shlwapi_ordinal455:PPROC
shlwapi_ordinal455 equ <__imp_shlwapi_ordinal455>

externdef __imp_shlwapi_ordinal456:PPROC
shlwapi_ordinal456 equ <__imp_shlwapi_ordinal456>

externdef __imp_shlwapi_ordinal457:PPROC
shlwapi_ordinal457 equ <__imp_shlwapi_ordinal457>

externdef __imp_shlwapi_ordinal458:PPROC
shlwapi_ordinal458 equ <__imp_shlwapi_ordinal458>

externdef __imp_shlwapi_ordinal459:PPROC
shlwapi_ordinal459 equ <__imp_shlwapi_ordinal459>

externdef __imp_shlwapi_ordinal45:PPROC
shlwapi_ordinal45 equ <__imp_shlwapi_ordinal45>

externdef __imp_shlwapi_ordinal460:PPROC
shlwapi_ordinal460 equ <__imp_shlwapi_ordinal460>

externdef __imp_shlwapi_ordinal461:PPROC
shlwapi_ordinal461 equ <__imp_shlwapi_ordinal461>

externdef __imp_shlwapi_ordinal462:PPROC
shlwapi_ordinal462 equ <__imp_shlwapi_ordinal462>

externdef __imp_shlwapi_ordinal463:PPROC
shlwapi_ordinal463 equ <__imp_shlwapi_ordinal463>

externdef __imp_shlwapi_ordinal464:PPROC
shlwapi_ordinal464 equ <__imp_shlwapi_ordinal464>

externdef __imp_shlwapi_ordinal465:PPROC
shlwapi_ordinal465 equ <__imp_shlwapi_ordinal465>

externdef __imp_shlwapi_ordinal466:PPROC
shlwapi_ordinal466 equ <__imp_shlwapi_ordinal466>

externdef __imp_shlwapi_ordinal467:PPROC
shlwapi_ordinal467 equ <__imp_shlwapi_ordinal467>

externdef __imp_shlwapi_ordinal468:PPROC
shlwapi_ordinal468 equ <__imp_shlwapi_ordinal468>

externdef __imp_shlwapi_ordinal469:PPROC
shlwapi_ordinal469 equ <__imp_shlwapi_ordinal469>

externdef __imp_shlwapi_ordinal46:PPROC
shlwapi_ordinal46 equ <__imp_shlwapi_ordinal46>

externdef __imp_shlwapi_ordinal470:PPROC
shlwapi_ordinal470 equ <__imp_shlwapi_ordinal470>

externdef __imp_shlwapi_ordinal471:PPROC
shlwapi_ordinal471 equ <__imp_shlwapi_ordinal471>

externdef __imp_shlwapi_ordinal472:PPROC
shlwapi_ordinal472 equ <__imp_shlwapi_ordinal472>

externdef __imp_shlwapi_ordinal473:PPROC
shlwapi_ordinal473 equ <__imp_shlwapi_ordinal473>

externdef __imp_shlwapi_ordinal474:PPROC
shlwapi_ordinal474 equ <__imp_shlwapi_ordinal474>

externdef __imp_shlwapi_ordinal475:PPROC
shlwapi_ordinal475 equ <__imp_shlwapi_ordinal475>

externdef __imp_shlwapi_ordinal476:PPROC
shlwapi_ordinal476 equ <__imp_shlwapi_ordinal476>

externdef __imp_shlwapi_ordinal477:PPROC
shlwapi_ordinal477 equ <__imp_shlwapi_ordinal477>

externdef __imp_shlwapi_ordinal478:PPROC
shlwapi_ordinal478 equ <__imp_shlwapi_ordinal478>

externdef __imp_shlwapi_ordinal479:PPROC
shlwapi_ordinal479 equ <__imp_shlwapi_ordinal479>

externdef __imp_shlwapi_ordinal47:PPROC
shlwapi_ordinal47 equ <__imp_shlwapi_ordinal47>

externdef __imp_shlwapi_ordinal480:PPROC
shlwapi_ordinal480 equ <__imp_shlwapi_ordinal480>

externdef __imp_shlwapi_ordinal481:PPROC
shlwapi_ordinal481 equ <__imp_shlwapi_ordinal481>

externdef __imp_shlwapi_ordinal482:PPROC
shlwapi_ordinal482 equ <__imp_shlwapi_ordinal482>

externdef __imp_shlwapi_ordinal483:PPROC
shlwapi_ordinal483 equ <__imp_shlwapi_ordinal483>

externdef __imp_shlwapi_ordinal484:PPROC
shlwapi_ordinal484 equ <__imp_shlwapi_ordinal484>

externdef __imp_shlwapi_ordinal485:PPROC
shlwapi_ordinal485 equ <__imp_shlwapi_ordinal485>

externdef __imp_shlwapi_ordinal486:PPROC
shlwapi_ordinal486 equ <__imp_shlwapi_ordinal486>

externdef __imp_shlwapi_ordinal488:PPROC
shlwapi_ordinal488 equ <__imp_shlwapi_ordinal488>

externdef __imp_shlwapi_ordinal489:PPROC
shlwapi_ordinal489 equ <__imp_shlwapi_ordinal489>

externdef __imp_shlwapi_ordinal48:PPROC
shlwapi_ordinal48 equ <__imp_shlwapi_ordinal48>

externdef __imp_shlwapi_ordinal490:PPROC
shlwapi_ordinal490 equ <__imp_shlwapi_ordinal490>

externdef __imp_shlwapi_ordinal491:PPROC
shlwapi_ordinal491 equ <__imp_shlwapi_ordinal491>

externdef __imp_shlwapi_ordinal492:PPROC
shlwapi_ordinal492 equ <__imp_shlwapi_ordinal492>

externdef __imp_shlwapi_ordinal493:PPROC
shlwapi_ordinal493 equ <__imp_shlwapi_ordinal493>

externdef __imp_shlwapi_ordinal494:PPROC
shlwapi_ordinal494 equ <__imp_shlwapi_ordinal494>

externdef __imp_shlwapi_ordinal495:PPROC
shlwapi_ordinal495 equ <__imp_shlwapi_ordinal495>

externdef __imp_shlwapi_ordinal496:PPROC
shlwapi_ordinal496 equ <__imp_shlwapi_ordinal496>

externdef __imp_shlwapi_ordinal497:PPROC
shlwapi_ordinal497 equ <__imp_shlwapi_ordinal497>

externdef __imp_shlwapi_ordinal498:PPROC
shlwapi_ordinal498 equ <__imp_shlwapi_ordinal498>

externdef __imp_shlwapi_ordinal499:PPROC
shlwapi_ordinal499 equ <__imp_shlwapi_ordinal499>

externdef __imp_shlwapi_ordinal49:PPROC
shlwapi_ordinal49 equ <__imp_shlwapi_ordinal49>

externdef __imp_shlwapi_ordinal4:PPROC
shlwapi_ordinal4 equ <__imp_shlwapi_ordinal4>

externdef __imp_shlwapi_ordinal500:PPROC
shlwapi_ordinal500 equ <__imp_shlwapi_ordinal500>

externdef __imp_shlwapi_ordinal501:PPROC
shlwapi_ordinal501 equ <__imp_shlwapi_ordinal501>

externdef __imp_shlwapi_ordinal502:PPROC
shlwapi_ordinal502 equ <__imp_shlwapi_ordinal502>

externdef __imp_shlwapi_ordinal503:PPROC
shlwapi_ordinal503 equ <__imp_shlwapi_ordinal503>

externdef __imp_shlwapi_ordinal504:PPROC
shlwapi_ordinal504 equ <__imp_shlwapi_ordinal504>

externdef __imp_shlwapi_ordinal505:PPROC
shlwapi_ordinal505 equ <__imp_shlwapi_ordinal505>

externdef __imp_shlwapi_ordinal506:PPROC
shlwapi_ordinal506 equ <__imp_shlwapi_ordinal506>

externdef __imp_shlwapi_ordinal507:PPROC
shlwapi_ordinal507 equ <__imp_shlwapi_ordinal507>

externdef __imp_shlwapi_ordinal508:PPROC
shlwapi_ordinal508 equ <__imp_shlwapi_ordinal508>

externdef __imp_shlwapi_ordinal509:PPROC
shlwapi_ordinal509 equ <__imp_shlwapi_ordinal509>

externdef __imp_shlwapi_ordinal50:PPROC
shlwapi_ordinal50 equ <__imp_shlwapi_ordinal50>

externdef __imp_shlwapi_ordinal510:PPROC
shlwapi_ordinal510 equ <__imp_shlwapi_ordinal510>

externdef __imp_shlwapi_ordinal511:PPROC
shlwapi_ordinal511 equ <__imp_shlwapi_ordinal511>

externdef __imp_shlwapi_ordinal512:PPROC
shlwapi_ordinal512 equ <__imp_shlwapi_ordinal512>

externdef __imp_shlwapi_ordinal513:PPROC
shlwapi_ordinal513 equ <__imp_shlwapi_ordinal513>

externdef __imp_shlwapi_ordinal514:PPROC
shlwapi_ordinal514 equ <__imp_shlwapi_ordinal514>

externdef __imp_shlwapi_ordinal516:PPROC
shlwapi_ordinal516 equ <__imp_shlwapi_ordinal516>

externdef __imp_shlwapi_ordinal517:PPROC
shlwapi_ordinal517 equ <__imp_shlwapi_ordinal517>

externdef __imp_shlwapi_ordinal518:PPROC
shlwapi_ordinal518 equ <__imp_shlwapi_ordinal518>

externdef __imp_shlwapi_ordinal519:PPROC
shlwapi_ordinal519 equ <__imp_shlwapi_ordinal519>

externdef __imp_shlwapi_ordinal51:PPROC
shlwapi_ordinal51 equ <__imp_shlwapi_ordinal51>

externdef __imp_shlwapi_ordinal520:PPROC
shlwapi_ordinal520 equ <__imp_shlwapi_ordinal520>

externdef __imp_shlwapi_ordinal521:PPROC
shlwapi_ordinal521 equ <__imp_shlwapi_ordinal521>

externdef __imp_shlwapi_ordinal522:PPROC
shlwapi_ordinal522 equ <__imp_shlwapi_ordinal522>

externdef __imp_shlwapi_ordinal523:PPROC
shlwapi_ordinal523 equ <__imp_shlwapi_ordinal523>

externdef __imp_shlwapi_ordinal524:PPROC
shlwapi_ordinal524 equ <__imp_shlwapi_ordinal524>

externdef __imp_shlwapi_ordinal525:PPROC
shlwapi_ordinal525 equ <__imp_shlwapi_ordinal525>

externdef __imp_shlwapi_ordinal526:PPROC
shlwapi_ordinal526 equ <__imp_shlwapi_ordinal526>

externdef __imp_shlwapi_ordinal527:PPROC
shlwapi_ordinal527 equ <__imp_shlwapi_ordinal527>

externdef __imp_shlwapi_ordinal528:PPROC
shlwapi_ordinal528 equ <__imp_shlwapi_ordinal528>

externdef __imp_shlwapi_ordinal529:PPROC
shlwapi_ordinal529 equ <__imp_shlwapi_ordinal529>

externdef __imp_shlwapi_ordinal52:PPROC
shlwapi_ordinal52 equ <__imp_shlwapi_ordinal52>

externdef __imp_shlwapi_ordinal530:PPROC
shlwapi_ordinal530 equ <__imp_shlwapi_ordinal530>

externdef __imp_shlwapi_ordinal531:PPROC
shlwapi_ordinal531 equ <__imp_shlwapi_ordinal531>

externdef __imp_shlwapi_ordinal532:PPROC
shlwapi_ordinal532 equ <__imp_shlwapi_ordinal532>

externdef __imp_shlwapi_ordinal533:PPROC
shlwapi_ordinal533 equ <__imp_shlwapi_ordinal533>

externdef __imp_shlwapi_ordinal534:PPROC
shlwapi_ordinal534 equ <__imp_shlwapi_ordinal534>

externdef __imp_shlwapi_ordinal535:PPROC
shlwapi_ordinal535 equ <__imp_shlwapi_ordinal535>

externdef __imp_shlwapi_ordinal536:PPROC
shlwapi_ordinal536 equ <__imp_shlwapi_ordinal536>

externdef __imp_shlwapi_ordinal537:PPROC
shlwapi_ordinal537 equ <__imp_shlwapi_ordinal537>

externdef __imp_shlwapi_ordinal538:PPROC
shlwapi_ordinal538 equ <__imp_shlwapi_ordinal538>

externdef __imp_shlwapi_ordinal539:PPROC
shlwapi_ordinal539 equ <__imp_shlwapi_ordinal539>

externdef __imp_shlwapi_ordinal53:PPROC
shlwapi_ordinal53 equ <__imp_shlwapi_ordinal53>

externdef __imp_shlwapi_ordinal540:PPROC
shlwapi_ordinal540 equ <__imp_shlwapi_ordinal540>

externdef __imp_shlwapi_ordinal541:PPROC
shlwapi_ordinal541 equ <__imp_shlwapi_ordinal541>

externdef __imp_shlwapi_ordinal542:PPROC
shlwapi_ordinal542 equ <__imp_shlwapi_ordinal542>

externdef __imp_shlwapi_ordinal543:PPROC
shlwapi_ordinal543 equ <__imp_shlwapi_ordinal543>

externdef __imp_shlwapi_ordinal544:PPROC
shlwapi_ordinal544 equ <__imp_shlwapi_ordinal544>

externdef __imp_shlwapi_ordinal545:PPROC
shlwapi_ordinal545 equ <__imp_shlwapi_ordinal545>

externdef __imp_shlwapi_ordinal546:PPROC
shlwapi_ordinal546 equ <__imp_shlwapi_ordinal546>

externdef __imp_shlwapi_ordinal548:PPROC
shlwapi_ordinal548 equ <__imp_shlwapi_ordinal548>

externdef __imp_shlwapi_ordinal549:PPROC
shlwapi_ordinal549 equ <__imp_shlwapi_ordinal549>

externdef __imp_shlwapi_ordinal54:PPROC
shlwapi_ordinal54 equ <__imp_shlwapi_ordinal54>

externdef __imp_shlwapi_ordinal550:PPROC
shlwapi_ordinal550 equ <__imp_shlwapi_ordinal550>

externdef __imp_shlwapi_ordinal551:PPROC
shlwapi_ordinal551 equ <__imp_shlwapi_ordinal551>

externdef __imp_shlwapi_ordinal552:PPROC
shlwapi_ordinal552 equ <__imp_shlwapi_ordinal552>

externdef __imp_shlwapi_ordinal554:PPROC
shlwapi_ordinal554 equ <__imp_shlwapi_ordinal554>

externdef __imp_shlwapi_ordinal556:PPROC
shlwapi_ordinal556 equ <__imp_shlwapi_ordinal556>

externdef __imp_shlwapi_ordinal557:PPROC
shlwapi_ordinal557 equ <__imp_shlwapi_ordinal557>

externdef __imp_shlwapi_ordinal558:PPROC
shlwapi_ordinal558 equ <__imp_shlwapi_ordinal558>

externdef __imp_shlwapi_ordinal559:PPROC
shlwapi_ordinal559 equ <__imp_shlwapi_ordinal559>

externdef __imp_shlwapi_ordinal55:PPROC
shlwapi_ordinal55 equ <__imp_shlwapi_ordinal55>

externdef __imp_shlwapi_ordinal560:PPROC
shlwapi_ordinal560 equ <__imp_shlwapi_ordinal560>

externdef __imp_shlwapi_ordinal561:PPROC
shlwapi_ordinal561 equ <__imp_shlwapi_ordinal561>

externdef __imp_shlwapi_ordinal562:PPROC
shlwapi_ordinal562 equ <__imp_shlwapi_ordinal562>

externdef __imp_shlwapi_ordinal563:PPROC
shlwapi_ordinal563 equ <__imp_shlwapi_ordinal563>

externdef __imp_shlwapi_ordinal564:PPROC
shlwapi_ordinal564 equ <__imp_shlwapi_ordinal564>

externdef __imp_shlwapi_ordinal565:PPROC
shlwapi_ordinal565 equ <__imp_shlwapi_ordinal565>

externdef __imp_shlwapi_ordinal566:PPROC
shlwapi_ordinal566 equ <__imp_shlwapi_ordinal566>

externdef __imp_shlwapi_ordinal56:PPROC
shlwapi_ordinal56 equ <__imp_shlwapi_ordinal56>

externdef __imp_shlwapi_ordinal57:PPROC
shlwapi_ordinal57 equ <__imp_shlwapi_ordinal57>

externdef __imp_shlwapi_ordinal58:PPROC
shlwapi_ordinal58 equ <__imp_shlwapi_ordinal58>

externdef __imp_shlwapi_ordinal59:PPROC
shlwapi_ordinal59 equ <__imp_shlwapi_ordinal59>

externdef __imp_shlwapi_ordinal5:PPROC
shlwapi_ordinal5 equ <__imp_shlwapi_ordinal5>

externdef __imp_shlwapi_ordinal60:PPROC
shlwapi_ordinal60 equ <__imp_shlwapi_ordinal60>

externdef __imp_shlwapi_ordinal61:PPROC
shlwapi_ordinal61 equ <__imp_shlwapi_ordinal61>

externdef __imp_shlwapi_ordinal62:PPROC
shlwapi_ordinal62 equ <__imp_shlwapi_ordinal62>

externdef __imp_shlwapi_ordinal63:PPROC
shlwapi_ordinal63 equ <__imp_shlwapi_ordinal63>

externdef __imp_shlwapi_ordinal64:PPROC
shlwapi_ordinal64 equ <__imp_shlwapi_ordinal64>

externdef __imp_shlwapi_ordinal65:PPROC
shlwapi_ordinal65 equ <__imp_shlwapi_ordinal65>

externdef __imp_shlwapi_ordinal66:PPROC
shlwapi_ordinal66 equ <__imp_shlwapi_ordinal66>

externdef __imp_shlwapi_ordinal67:PPROC
shlwapi_ordinal67 equ <__imp_shlwapi_ordinal67>

externdef __imp_shlwapi_ordinal68:PPROC
shlwapi_ordinal68 equ <__imp_shlwapi_ordinal68>

externdef __imp_shlwapi_ordinal69:PPROC
shlwapi_ordinal69 equ <__imp_shlwapi_ordinal69>

externdef __imp_shlwapi_ordinal6:PPROC
shlwapi_ordinal6 equ <__imp_shlwapi_ordinal6>

externdef __imp_shlwapi_ordinal70:PPROC
shlwapi_ordinal70 equ <__imp_shlwapi_ordinal70>

externdef __imp_shlwapi_ordinal71:PPROC
shlwapi_ordinal71 equ <__imp_shlwapi_ordinal71>

externdef __imp_shlwapi_ordinal72:PPROC
shlwapi_ordinal72 equ <__imp_shlwapi_ordinal72>

externdef __imp_shlwapi_ordinal73:PPROC
shlwapi_ordinal73 equ <__imp_shlwapi_ordinal73>

externdef __imp_shlwapi_ordinal74:PPROC
shlwapi_ordinal74 equ <__imp_shlwapi_ordinal74>

externdef __imp_shlwapi_ordinal75:PPROC
shlwapi_ordinal75 equ <__imp_shlwapi_ordinal75>

externdef __imp_shlwapi_ordinal76:PPROC
shlwapi_ordinal76 equ <__imp_shlwapi_ordinal76>

externdef __imp_shlwapi_ordinal77:PPROC
shlwapi_ordinal77 equ <__imp_shlwapi_ordinal77>

externdef __imp_shlwapi_ordinal78:PPROC
shlwapi_ordinal78 equ <__imp_shlwapi_ordinal78>

externdef __imp_shlwapi_ordinal79:PPROC
shlwapi_ordinal79 equ <__imp_shlwapi_ordinal79>

externdef __imp_shlwapi_ordinal80:PPROC
shlwapi_ordinal80 equ <__imp_shlwapi_ordinal80>

externdef __imp_shlwapi_ordinal81:PPROC
shlwapi_ordinal81 equ <__imp_shlwapi_ordinal81>

externdef __imp_shlwapi_ordinal82:PPROC
shlwapi_ordinal82 equ <__imp_shlwapi_ordinal82>

externdef __imp_shlwapi_ordinal83:PPROC
shlwapi_ordinal83 equ <__imp_shlwapi_ordinal83>

externdef __imp_shlwapi_ordinal84:PPROC
shlwapi_ordinal84 equ <__imp_shlwapi_ordinal84>

externdef __imp_shlwapi_ordinal85:PPROC
shlwapi_ordinal85 equ <__imp_shlwapi_ordinal85>

externdef __imp_shlwapi_ordinal86:PPROC
shlwapi_ordinal86 equ <__imp_shlwapi_ordinal86>

externdef __imp_shlwapi_ordinal87:PPROC
shlwapi_ordinal87 equ <__imp_shlwapi_ordinal87>

externdef __imp_shlwapi_ordinal88:PPROC
shlwapi_ordinal88 equ <__imp_shlwapi_ordinal88>

externdef __imp_shlwapi_ordinal89:PPROC
shlwapi_ordinal89 equ <__imp_shlwapi_ordinal89>

externdef __imp_shlwapi_ordinal90:PPROC
shlwapi_ordinal90 equ <__imp_shlwapi_ordinal90>

externdef __imp_shlwapi_ordinal91:PPROC
shlwapi_ordinal91 equ <__imp_shlwapi_ordinal91>

externdef __imp_shlwapi_ordinal92:PPROC
shlwapi_ordinal92 equ <__imp_shlwapi_ordinal92>

externdef __imp_shlwapi_ordinal93:PPROC
shlwapi_ordinal93 equ <__imp_shlwapi_ordinal93>

externdef __imp_shlwapi_ordinal94:PPROC
shlwapi_ordinal94 equ <__imp_shlwapi_ordinal94>

externdef __imp_shlwapi_ordinal95:PPROC
shlwapi_ordinal95 equ <__imp_shlwapi_ordinal95>

externdef __imp_shlwapi_ordinal96:PPROC
shlwapi_ordinal96 equ <__imp_shlwapi_ordinal96>

externdef __imp_shlwapi_ordinal97:PPROC
shlwapi_ordinal97 equ <__imp_shlwapi_ordinal97>

externdef __imp_shlwapi_ordinal98:PPROC
shlwapi_ordinal98 equ <__imp_shlwapi_ordinal98>

externdef __imp_shlwapi_ordinal99:PPROC
shlwapi_ordinal99 equ <__imp_shlwapi_ordinal99>

externdef __imp_wnsprintfA:PPROC
wnsprintfA equ <__imp_wnsprintfA>
  IFNDEF __UNICODE__
    wnsprintf equ <__imp_wnsprintfA>
  ENDIF

externdef __imp_wnsprintfW:PPROC
wnsprintfW equ <__imp_wnsprintfW>
  IFDEF __UNICODE__
    wnsprintf equ <__imp_wnsprintfW>
  ENDIF

externdef __imp_wvnsprintfA:PPROC
wvnsprintfA equ <__imp_wvnsprintfA>
  IFNDEF __UNICODE__
    wvnsprintf equ <__imp_wvnsprintfA>
  ENDIF

externdef __imp_wvnsprintfW:PPROC
wvnsprintfW equ <__imp_wvnsprintfW>
  IFDEF __UNICODE__
    wvnsprintf equ <__imp_wvnsprintfW>
  ENDIF
