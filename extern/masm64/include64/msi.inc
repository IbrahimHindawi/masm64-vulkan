externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_DllGetVersion:PPROC
DllGetVersion equ <__imp_DllGetVersion>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>

externdef __imp_Migrate10CachedPackagesA:PPROC
Migrate10CachedPackagesA equ <__imp_Migrate10CachedPackagesA>
  IFNDEF __UNICODE__
    Migrate10CachedPackages equ <__imp_Migrate10CachedPackagesA>
  ENDIF

externdef __imp_Migrate10CachedPackagesW:PPROC
Migrate10CachedPackagesW equ <__imp_Migrate10CachedPackagesW>
  IFDEF __UNICODE__
    Migrate10CachedPackages equ <__imp_Migrate10CachedPackagesW>
  ENDIF

externdef __imp_MsiAdvertiseProductA:PPROC
MsiAdvertiseProductA equ <__imp_MsiAdvertiseProductA>
  IFNDEF __UNICODE__
    MsiAdvertiseProduct equ <__imp_MsiAdvertiseProductA>
  ENDIF

externdef __imp_MsiAdvertiseProductExA:PPROC
MsiAdvertiseProductExA equ <__imp_MsiAdvertiseProductExA>
  IFNDEF __UNICODE__
    MsiAdvertiseProductEx equ <__imp_MsiAdvertiseProductExA>
  ENDIF

externdef __imp_MsiAdvertiseProductExW:PPROC
MsiAdvertiseProductExW equ <__imp_MsiAdvertiseProductExW>
  IFDEF __UNICODE__
    MsiAdvertiseProductEx equ <__imp_MsiAdvertiseProductExW>
  ENDIF

externdef __imp_MsiAdvertiseProductW:PPROC
MsiAdvertiseProductW equ <__imp_MsiAdvertiseProductW>
  IFDEF __UNICODE__
    MsiAdvertiseProduct equ <__imp_MsiAdvertiseProductW>
  ENDIF

externdef __imp_MsiAdvertiseScriptA:PPROC
MsiAdvertiseScriptA equ <__imp_MsiAdvertiseScriptA>
  IFNDEF __UNICODE__
    MsiAdvertiseScript equ <__imp_MsiAdvertiseScriptA>
  ENDIF

externdef __imp_MsiAdvertiseScriptW:PPROC
MsiAdvertiseScriptW equ <__imp_MsiAdvertiseScriptW>
  IFDEF __UNICODE__
    MsiAdvertiseScript equ <__imp_MsiAdvertiseScriptW>
  ENDIF

externdef __imp_MsiApplyMultiplePatchesA:PPROC
MsiApplyMultiplePatchesA equ <__imp_MsiApplyMultiplePatchesA>
  IFNDEF __UNICODE__
    MsiApplyMultiplePatches equ <__imp_MsiApplyMultiplePatchesA>
  ENDIF

externdef __imp_MsiApplyMultiplePatchesW:PPROC
MsiApplyMultiplePatchesW equ <__imp_MsiApplyMultiplePatchesW>
  IFDEF __UNICODE__
    MsiApplyMultiplePatches equ <__imp_MsiApplyMultiplePatchesW>
  ENDIF

externdef __imp_MsiApplyPatchA:PPROC
MsiApplyPatchA equ <__imp_MsiApplyPatchA>
  IFNDEF __UNICODE__
    MsiApplyPatch equ <__imp_MsiApplyPatchA>
  ENDIF

externdef __imp_MsiApplyPatchW:PPROC
MsiApplyPatchW equ <__imp_MsiApplyPatchW>
  IFDEF __UNICODE__
    MsiApplyPatch equ <__imp_MsiApplyPatchW>
  ENDIF

externdef __imp_MsiCloseAllHandles:PPROC
MsiCloseAllHandles equ <__imp_MsiCloseAllHandles>

externdef __imp_MsiCloseHandle:PPROC
MsiCloseHandle equ <__imp_MsiCloseHandle>

externdef __imp_MsiCollectUserInfoA:PPROC
MsiCollectUserInfoA equ <__imp_MsiCollectUserInfoA>
  IFNDEF __UNICODE__
    MsiCollectUserInfo equ <__imp_MsiCollectUserInfoA>
  ENDIF

externdef __imp_MsiCollectUserInfoW:PPROC
MsiCollectUserInfoW equ <__imp_MsiCollectUserInfoW>
  IFDEF __UNICODE__
    MsiCollectUserInfo equ <__imp_MsiCollectUserInfoW>
  ENDIF

externdef __imp_MsiConfigureFeatureA:PPROC
MsiConfigureFeatureA equ <__imp_MsiConfigureFeatureA>
  IFNDEF __UNICODE__
    MsiConfigureFeature equ <__imp_MsiConfigureFeatureA>
  ENDIF

externdef __imp_MsiConfigureFeatureFromDescriptorA:PPROC
MsiConfigureFeatureFromDescriptorA equ <__imp_MsiConfigureFeatureFromDescriptorA>
  IFNDEF __UNICODE__
    MsiConfigureFeatureFromDescriptor equ <__imp_MsiConfigureFeatureFromDescriptorA>
  ENDIF

externdef __imp_MsiConfigureFeatureFromDescriptorW:PPROC
MsiConfigureFeatureFromDescriptorW equ <__imp_MsiConfigureFeatureFromDescriptorW>
  IFDEF __UNICODE__
    MsiConfigureFeatureFromDescriptor equ <__imp_MsiConfigureFeatureFromDescriptorW>
  ENDIF

externdef __imp_MsiConfigureFeatureW:PPROC
MsiConfigureFeatureW equ <__imp_MsiConfigureFeatureW>
  IFDEF __UNICODE__
    MsiConfigureFeature equ <__imp_MsiConfigureFeatureW>
  ENDIF

externdef __imp_MsiConfigureProductA:PPROC
MsiConfigureProductA equ <__imp_MsiConfigureProductA>
  IFNDEF __UNICODE__
    MsiConfigureProduct equ <__imp_MsiConfigureProductA>
  ENDIF

externdef __imp_MsiConfigureProductExA:PPROC
MsiConfigureProductExA equ <__imp_MsiConfigureProductExA>
  IFNDEF __UNICODE__
    MsiConfigureProductEx equ <__imp_MsiConfigureProductExA>
  ENDIF

externdef __imp_MsiConfigureProductExW:PPROC
MsiConfigureProductExW equ <__imp_MsiConfigureProductExW>
  IFDEF __UNICODE__
    MsiConfigureProductEx equ <__imp_MsiConfigureProductExW>
  ENDIF

externdef __imp_MsiConfigureProductW:PPROC
MsiConfigureProductW equ <__imp_MsiConfigureProductW>
  IFDEF __UNICODE__
    MsiConfigureProduct equ <__imp_MsiConfigureProductW>
  ENDIF

externdef __imp_MsiCreateAndVerifyInstallerDirectory:PPROC
MsiCreateAndVerifyInstallerDirectory equ <__imp_MsiCreateAndVerifyInstallerDirectory>

externdef __imp_MsiCreateRecord:PPROC
MsiCreateRecord equ <__imp_MsiCreateRecord>

externdef __imp_MsiCreateTransformSummaryInfoA:PPROC
MsiCreateTransformSummaryInfoA equ <__imp_MsiCreateTransformSummaryInfoA>
  IFNDEF __UNICODE__
    MsiCreateTransformSummaryInfo equ <__imp_MsiCreateTransformSummaryInfoA>
  ENDIF

externdef __imp_MsiCreateTransformSummaryInfoW:PPROC
MsiCreateTransformSummaryInfoW equ <__imp_MsiCreateTransformSummaryInfoW>
  IFDEF __UNICODE__
    MsiCreateTransformSummaryInfo equ <__imp_MsiCreateTransformSummaryInfoW>
  ENDIF

externdef __imp_MsiDatabaseApplyTransformA:PPROC
MsiDatabaseApplyTransformA equ <__imp_MsiDatabaseApplyTransformA>
  IFNDEF __UNICODE__
    MsiDatabaseApplyTransform equ <__imp_MsiDatabaseApplyTransformA>
  ENDIF

externdef __imp_MsiDatabaseApplyTransformW:PPROC
MsiDatabaseApplyTransformW equ <__imp_MsiDatabaseApplyTransformW>
  IFDEF __UNICODE__
    MsiDatabaseApplyTransform equ <__imp_MsiDatabaseApplyTransformW>
  ENDIF

externdef __imp_MsiDatabaseCommit:PPROC
MsiDatabaseCommit equ <__imp_MsiDatabaseCommit>

externdef __imp_MsiDatabaseExportA:PPROC
MsiDatabaseExportA equ <__imp_MsiDatabaseExportA>
  IFNDEF __UNICODE__
    MsiDatabaseExport equ <__imp_MsiDatabaseExportA>
  ENDIF

externdef __imp_MsiDatabaseExportW:PPROC
MsiDatabaseExportW equ <__imp_MsiDatabaseExportW>
  IFDEF __UNICODE__
    MsiDatabaseExport equ <__imp_MsiDatabaseExportW>
  ENDIF

externdef __imp_MsiDatabaseGenerateTransformA:PPROC
MsiDatabaseGenerateTransformA equ <__imp_MsiDatabaseGenerateTransformA>
  IFNDEF __UNICODE__
    MsiDatabaseGenerateTransform equ <__imp_MsiDatabaseGenerateTransformA>
  ENDIF

externdef __imp_MsiDatabaseGenerateTransformW:PPROC
MsiDatabaseGenerateTransformW equ <__imp_MsiDatabaseGenerateTransformW>
  IFDEF __UNICODE__
    MsiDatabaseGenerateTransform equ <__imp_MsiDatabaseGenerateTransformW>
  ENDIF

externdef __imp_MsiDatabaseGetPrimaryKeysA:PPROC
MsiDatabaseGetPrimaryKeysA equ <__imp_MsiDatabaseGetPrimaryKeysA>
  IFNDEF __UNICODE__
    MsiDatabaseGetPrimaryKeys equ <__imp_MsiDatabaseGetPrimaryKeysA>
  ENDIF

externdef __imp_MsiDatabaseGetPrimaryKeysW:PPROC
MsiDatabaseGetPrimaryKeysW equ <__imp_MsiDatabaseGetPrimaryKeysW>
  IFDEF __UNICODE__
    MsiDatabaseGetPrimaryKeys equ <__imp_MsiDatabaseGetPrimaryKeysW>
  ENDIF

externdef __imp_MsiDatabaseImportA:PPROC
MsiDatabaseImportA equ <__imp_MsiDatabaseImportA>
  IFNDEF __UNICODE__
    MsiDatabaseImport equ <__imp_MsiDatabaseImportA>
  ENDIF

externdef __imp_MsiDatabaseImportW:PPROC
MsiDatabaseImportW equ <__imp_MsiDatabaseImportW>
  IFDEF __UNICODE__
    MsiDatabaseImport equ <__imp_MsiDatabaseImportW>
  ENDIF

externdef __imp_MsiDatabaseIsTablePersistentA:PPROC
MsiDatabaseIsTablePersistentA equ <__imp_MsiDatabaseIsTablePersistentA>
  IFNDEF __UNICODE__
    MsiDatabaseIsTablePersistent equ <__imp_MsiDatabaseIsTablePersistentA>
  ENDIF

externdef __imp_MsiDatabaseIsTablePersistentW:PPROC
MsiDatabaseIsTablePersistentW equ <__imp_MsiDatabaseIsTablePersistentW>
  IFDEF __UNICODE__
    MsiDatabaseIsTablePersistent equ <__imp_MsiDatabaseIsTablePersistentW>
  ENDIF

externdef __imp_MsiDatabaseMergeA:PPROC
MsiDatabaseMergeA equ <__imp_MsiDatabaseMergeA>
  IFNDEF __UNICODE__
    MsiDatabaseMerge equ <__imp_MsiDatabaseMergeA>
  ENDIF

externdef __imp_MsiDatabaseMergeW:PPROC
MsiDatabaseMergeW equ <__imp_MsiDatabaseMergeW>
  IFDEF __UNICODE__
    MsiDatabaseMerge equ <__imp_MsiDatabaseMergeW>
  ENDIF

externdef __imp_MsiDatabaseOpenViewA:PPROC
MsiDatabaseOpenViewA equ <__imp_MsiDatabaseOpenViewA>
  IFNDEF __UNICODE__
    MsiDatabaseOpenView equ <__imp_MsiDatabaseOpenViewA>
  ENDIF

externdef __imp_MsiDatabaseOpenViewW:PPROC
MsiDatabaseOpenViewW equ <__imp_MsiDatabaseOpenViewW>
  IFDEF __UNICODE__
    MsiDatabaseOpenView equ <__imp_MsiDatabaseOpenViewW>
  ENDIF

externdef __imp_MsiDecomposeDescriptorA:PPROC
MsiDecomposeDescriptorA equ <__imp_MsiDecomposeDescriptorA>
  IFNDEF __UNICODE__
    MsiDecomposeDescriptor equ <__imp_MsiDecomposeDescriptorA>
  ENDIF

externdef __imp_MsiDecomposeDescriptorW:PPROC
MsiDecomposeDescriptorW equ <__imp_MsiDecomposeDescriptorW>
  IFDEF __UNICODE__
    MsiDecomposeDescriptor equ <__imp_MsiDecomposeDescriptorW>
  ENDIF

externdef __imp_MsiDeleteUserDataA:PPROC
MsiDeleteUserDataA equ <__imp_MsiDeleteUserDataA>
  IFNDEF __UNICODE__
    MsiDeleteUserData equ <__imp_MsiDeleteUserDataA>
  ENDIF

externdef __imp_MsiDeleteUserDataW:PPROC
MsiDeleteUserDataW equ <__imp_MsiDeleteUserDataW>
  IFDEF __UNICODE__
    MsiDeleteUserData equ <__imp_MsiDeleteUserDataW>
  ENDIF

externdef __imp_MsiDetermineApplicablePatchesA:PPROC
MsiDetermineApplicablePatchesA equ <__imp_MsiDetermineApplicablePatchesA>
  IFNDEF __UNICODE__
    MsiDetermineApplicablePatches equ <__imp_MsiDetermineApplicablePatchesA>
  ENDIF

externdef __imp_MsiDetermineApplicablePatchesW:PPROC
MsiDetermineApplicablePatchesW equ <__imp_MsiDetermineApplicablePatchesW>
  IFDEF __UNICODE__
    MsiDetermineApplicablePatches equ <__imp_MsiDetermineApplicablePatchesW>
  ENDIF

externdef __imp_MsiDeterminePatchSequenceA:PPROC
MsiDeterminePatchSequenceA equ <__imp_MsiDeterminePatchSequenceA>
  IFNDEF __UNICODE__
    MsiDeterminePatchSequence equ <__imp_MsiDeterminePatchSequenceA>
  ENDIF

externdef __imp_MsiDeterminePatchSequenceW:PPROC
MsiDeterminePatchSequenceW equ <__imp_MsiDeterminePatchSequenceW>
  IFDEF __UNICODE__
    MsiDeterminePatchSequence equ <__imp_MsiDeterminePatchSequenceW>
  ENDIF

externdef __imp_MsiDoActionA:PPROC
MsiDoActionA equ <__imp_MsiDoActionA>
  IFNDEF __UNICODE__
    MsiDoAction equ <__imp_MsiDoActionA>
  ENDIF

externdef __imp_MsiDoActionW:PPROC
MsiDoActionW equ <__imp_MsiDoActionW>
  IFDEF __UNICODE__
    MsiDoAction equ <__imp_MsiDoActionW>
  ENDIF

externdef __imp_MsiEnableLogA:PPROC
MsiEnableLogA equ <__imp_MsiEnableLogA>
  IFNDEF __UNICODE__
    MsiEnableLog equ <__imp_MsiEnableLogA>
  ENDIF

externdef __imp_MsiEnableLogW:PPROC
MsiEnableLogW equ <__imp_MsiEnableLogW>
  IFDEF __UNICODE__
    MsiEnableLog equ <__imp_MsiEnableLogW>
  ENDIF

externdef __imp_MsiEnableUIPreview:PPROC
MsiEnableUIPreview equ <__imp_MsiEnableUIPreview>

externdef __imp_MsiEnumClientsA:PPROC
MsiEnumClientsA equ <__imp_MsiEnumClientsA>
  IFNDEF __UNICODE__
    MsiEnumClients equ <__imp_MsiEnumClientsA>
  ENDIF

externdef __imp_MsiEnumClientsW:PPROC
MsiEnumClientsW equ <__imp_MsiEnumClientsW>
  IFDEF __UNICODE__
    MsiEnumClients equ <__imp_MsiEnumClientsW>
  ENDIF

externdef __imp_MsiEnumComponentCostsA:PPROC
MsiEnumComponentCostsA equ <__imp_MsiEnumComponentCostsA>
  IFNDEF __UNICODE__
    MsiEnumComponentCosts equ <__imp_MsiEnumComponentCostsA>
  ENDIF

externdef __imp_MsiEnumComponentCostsW:PPROC
MsiEnumComponentCostsW equ <__imp_MsiEnumComponentCostsW>
  IFDEF __UNICODE__
    MsiEnumComponentCosts equ <__imp_MsiEnumComponentCostsW>
  ENDIF

externdef __imp_MsiEnumComponentQualifiersA:PPROC
MsiEnumComponentQualifiersA equ <__imp_MsiEnumComponentQualifiersA>
  IFNDEF __UNICODE__
    MsiEnumComponentQualifiers equ <__imp_MsiEnumComponentQualifiersA>
  ENDIF

externdef __imp_MsiEnumComponentQualifiersW:PPROC
MsiEnumComponentQualifiersW equ <__imp_MsiEnumComponentQualifiersW>
  IFDEF __UNICODE__
    MsiEnumComponentQualifiers equ <__imp_MsiEnumComponentQualifiersW>
  ENDIF

externdef __imp_MsiEnumComponentsA:PPROC
MsiEnumComponentsA equ <__imp_MsiEnumComponentsA>
  IFNDEF __UNICODE__
    MsiEnumComponents equ <__imp_MsiEnumComponentsA>
  ENDIF

externdef __imp_MsiEnumComponentsW:PPROC
MsiEnumComponentsW equ <__imp_MsiEnumComponentsW>
  IFDEF __UNICODE__
    MsiEnumComponents equ <__imp_MsiEnumComponentsW>
  ENDIF

externdef __imp_MsiEnumFeaturesA:PPROC
MsiEnumFeaturesA equ <__imp_MsiEnumFeaturesA>
  IFNDEF __UNICODE__
    MsiEnumFeatures equ <__imp_MsiEnumFeaturesA>
  ENDIF

externdef __imp_MsiEnumFeaturesW:PPROC
MsiEnumFeaturesW equ <__imp_MsiEnumFeaturesW>
  IFDEF __UNICODE__
    MsiEnumFeatures equ <__imp_MsiEnumFeaturesW>
  ENDIF

externdef __imp_MsiEnumPatchesA:PPROC
MsiEnumPatchesA equ <__imp_MsiEnumPatchesA>
  IFNDEF __UNICODE__
    MsiEnumPatches equ <__imp_MsiEnumPatchesA>
  ENDIF

externdef __imp_MsiEnumPatchesExA:PPROC
MsiEnumPatchesExA equ <__imp_MsiEnumPatchesExA>
  IFNDEF __UNICODE__
    MsiEnumPatchesEx equ <__imp_MsiEnumPatchesExA>
  ENDIF

externdef __imp_MsiEnumPatchesExW:PPROC
MsiEnumPatchesExW equ <__imp_MsiEnumPatchesExW>
  IFDEF __UNICODE__
    MsiEnumPatchesEx equ <__imp_MsiEnumPatchesExW>
  ENDIF

externdef __imp_MsiEnumPatchesW:PPROC
MsiEnumPatchesW equ <__imp_MsiEnumPatchesW>
  IFDEF __UNICODE__
    MsiEnumPatches equ <__imp_MsiEnumPatchesW>
  ENDIF

externdef __imp_MsiEnumProductsA:PPROC
MsiEnumProductsA equ <__imp_MsiEnumProductsA>
  IFNDEF __UNICODE__
    MsiEnumProducts equ <__imp_MsiEnumProductsA>
  ENDIF

externdef __imp_MsiEnumProductsExA:PPROC
MsiEnumProductsExA equ <__imp_MsiEnumProductsExA>
  IFNDEF __UNICODE__
    MsiEnumProductsEx equ <__imp_MsiEnumProductsExA>
  ENDIF

externdef __imp_MsiEnumProductsExW:PPROC
MsiEnumProductsExW equ <__imp_MsiEnumProductsExW>
  IFDEF __UNICODE__
    MsiEnumProductsEx equ <__imp_MsiEnumProductsExW>
  ENDIF

externdef __imp_MsiEnumProductsW:PPROC
MsiEnumProductsW equ <__imp_MsiEnumProductsW>
  IFDEF __UNICODE__
    MsiEnumProducts equ <__imp_MsiEnumProductsW>
  ENDIF

externdef __imp_MsiEnumRelatedProductsA:PPROC
MsiEnumRelatedProductsA equ <__imp_MsiEnumRelatedProductsA>
  IFNDEF __UNICODE__
    MsiEnumRelatedProducts equ <__imp_MsiEnumRelatedProductsA>
  ENDIF

externdef __imp_MsiEnumRelatedProductsW:PPROC
MsiEnumRelatedProductsW equ <__imp_MsiEnumRelatedProductsW>
  IFDEF __UNICODE__
    MsiEnumRelatedProducts equ <__imp_MsiEnumRelatedProductsW>
  ENDIF

externdef __imp_MsiEvaluateConditionA:PPROC
MsiEvaluateConditionA equ <__imp_MsiEvaluateConditionA>
  IFNDEF __UNICODE__
    MsiEvaluateCondition equ <__imp_MsiEvaluateConditionA>
  ENDIF

externdef __imp_MsiEvaluateConditionW:PPROC
MsiEvaluateConditionW equ <__imp_MsiEvaluateConditionW>
  IFDEF __UNICODE__
    MsiEvaluateCondition equ <__imp_MsiEvaluateConditionW>
  ENDIF

externdef __imp_MsiExtractPatchXMLDataA:PPROC
MsiExtractPatchXMLDataA equ <__imp_MsiExtractPatchXMLDataA>
  IFNDEF __UNICODE__
    MsiExtractPatchXMLData equ <__imp_MsiExtractPatchXMLDataA>
  ENDIF

externdef __imp_MsiExtractPatchXMLDataW:PPROC
MsiExtractPatchXMLDataW equ <__imp_MsiExtractPatchXMLDataW>
  IFDEF __UNICODE__
    MsiExtractPatchXMLData equ <__imp_MsiExtractPatchXMLDataW>
  ENDIF

externdef __imp_MsiFormatRecordA:PPROC
MsiFormatRecordA equ <__imp_MsiFormatRecordA>
  IFNDEF __UNICODE__
    MsiFormatRecord equ <__imp_MsiFormatRecordA>
  ENDIF

externdef __imp_MsiFormatRecordW:PPROC
MsiFormatRecordW equ <__imp_MsiFormatRecordW>
  IFDEF __UNICODE__
    MsiFormatRecord equ <__imp_MsiFormatRecordW>
  ENDIF

externdef __imp_MsiGetActiveDatabase:PPROC
MsiGetActiveDatabase equ <__imp_MsiGetActiveDatabase>

externdef __imp_MsiGetComponentPathA:PPROC
MsiGetComponentPathA equ <__imp_MsiGetComponentPathA>
  IFNDEF __UNICODE__
    MsiGetComponentPath equ <__imp_MsiGetComponentPathA>
  ENDIF

externdef __imp_MsiGetComponentPathW:PPROC
MsiGetComponentPathW equ <__imp_MsiGetComponentPathW>
  IFDEF __UNICODE__
    MsiGetComponentPath equ <__imp_MsiGetComponentPathW>
  ENDIF

externdef __imp_MsiGetComponentStateA:PPROC
MsiGetComponentStateA equ <__imp_MsiGetComponentStateA>
  IFNDEF __UNICODE__
    MsiGetComponentState equ <__imp_MsiGetComponentStateA>
  ENDIF

externdef __imp_MsiGetComponentStateW:PPROC
MsiGetComponentStateW equ <__imp_MsiGetComponentStateW>
  IFDEF __UNICODE__
    MsiGetComponentState equ <__imp_MsiGetComponentStateW>
  ENDIF

externdef __imp_MsiGetDatabaseState:PPROC
MsiGetDatabaseState equ <__imp_MsiGetDatabaseState>

externdef __imp_MsiGetFeatureCostA:PPROC
MsiGetFeatureCostA equ <__imp_MsiGetFeatureCostA>
  IFNDEF __UNICODE__
    MsiGetFeatureCost equ <__imp_MsiGetFeatureCostA>
  ENDIF

externdef __imp_MsiGetFeatureCostW:PPROC
MsiGetFeatureCostW equ <__imp_MsiGetFeatureCostW>
  IFDEF __UNICODE__
    MsiGetFeatureCost equ <__imp_MsiGetFeatureCostW>
  ENDIF

externdef __imp_MsiGetFeatureInfoA:PPROC
MsiGetFeatureInfoA equ <__imp_MsiGetFeatureInfoA>
  IFNDEF __UNICODE__
    MsiGetFeatureInfo equ <__imp_MsiGetFeatureInfoA>
  ENDIF

externdef __imp_MsiGetFeatureInfoW:PPROC
MsiGetFeatureInfoW equ <__imp_MsiGetFeatureInfoW>
  IFDEF __UNICODE__
    MsiGetFeatureInfo equ <__imp_MsiGetFeatureInfoW>
  ENDIF

externdef __imp_MsiGetFeatureStateA:PPROC
MsiGetFeatureStateA equ <__imp_MsiGetFeatureStateA>
  IFNDEF __UNICODE__
    MsiGetFeatureState equ <__imp_MsiGetFeatureStateA>
  ENDIF

externdef __imp_MsiGetFeatureStateW:PPROC
MsiGetFeatureStateW equ <__imp_MsiGetFeatureStateW>
  IFDEF __UNICODE__
    MsiGetFeatureState equ <__imp_MsiGetFeatureStateW>
  ENDIF

externdef __imp_MsiGetFeatureUsageA:PPROC
MsiGetFeatureUsageA equ <__imp_MsiGetFeatureUsageA>
  IFNDEF __UNICODE__
    MsiGetFeatureUsage equ <__imp_MsiGetFeatureUsageA>
  ENDIF

externdef __imp_MsiGetFeatureUsageW:PPROC
MsiGetFeatureUsageW equ <__imp_MsiGetFeatureUsageW>
  IFDEF __UNICODE__
    MsiGetFeatureUsage equ <__imp_MsiGetFeatureUsageW>
  ENDIF

externdef __imp_MsiGetFeatureValidStatesA:PPROC
MsiGetFeatureValidStatesA equ <__imp_MsiGetFeatureValidStatesA>
  IFNDEF __UNICODE__
    MsiGetFeatureValidStates equ <__imp_MsiGetFeatureValidStatesA>
  ENDIF

externdef __imp_MsiGetFeatureValidStatesW:PPROC
MsiGetFeatureValidStatesW equ <__imp_MsiGetFeatureValidStatesW>
  IFDEF __UNICODE__
    MsiGetFeatureValidStates equ <__imp_MsiGetFeatureValidStatesW>
  ENDIF

externdef __imp_MsiGetFileHashA:PPROC
MsiGetFileHashA equ <__imp_MsiGetFileHashA>
  IFNDEF __UNICODE__
    MsiGetFileHash equ <__imp_MsiGetFileHashA>
  ENDIF

externdef __imp_MsiGetFileHashW:PPROC
MsiGetFileHashW equ <__imp_MsiGetFileHashW>
  IFDEF __UNICODE__
    MsiGetFileHash equ <__imp_MsiGetFileHashW>
  ENDIF

externdef __imp_MsiGetFileSignatureInformationA:PPROC
MsiGetFileSignatureInformationA equ <__imp_MsiGetFileSignatureInformationA>
  IFNDEF __UNICODE__
    MsiGetFileSignatureInformation equ <__imp_MsiGetFileSignatureInformationA>
  ENDIF

externdef __imp_MsiGetFileSignatureInformationW:PPROC
MsiGetFileSignatureInformationW equ <__imp_MsiGetFileSignatureInformationW>
  IFDEF __UNICODE__
    MsiGetFileSignatureInformation equ <__imp_MsiGetFileSignatureInformationW>
  ENDIF

externdef __imp_MsiGetFileVersionA:PPROC
MsiGetFileVersionA equ <__imp_MsiGetFileVersionA>
  IFNDEF __UNICODE__
    MsiGetFileVersion equ <__imp_MsiGetFileVersionA>
  ENDIF

externdef __imp_MsiGetFileVersionW:PPROC
MsiGetFileVersionW equ <__imp_MsiGetFileVersionW>
  IFDEF __UNICODE__
    MsiGetFileVersion equ <__imp_MsiGetFileVersionW>
  ENDIF

externdef __imp_MsiGetLanguage:PPROC
MsiGetLanguage equ <__imp_MsiGetLanguage>

externdef __imp_MsiGetLastErrorRecord:PPROC
MsiGetLastErrorRecord equ <__imp_MsiGetLastErrorRecord>

externdef __imp_MsiGetMode:PPROC
MsiGetMode equ <__imp_MsiGetMode>

externdef __imp_MsiGetPatchInfoA:PPROC
MsiGetPatchInfoA equ <__imp_MsiGetPatchInfoA>
  IFNDEF __UNICODE__
    MsiGetPatchInfo equ <__imp_MsiGetPatchInfoA>
  ENDIF

externdef __imp_MsiGetPatchInfoExA:PPROC
MsiGetPatchInfoExA equ <__imp_MsiGetPatchInfoExA>
  IFNDEF __UNICODE__
    MsiGetPatchInfoEx equ <__imp_MsiGetPatchInfoExA>
  ENDIF

externdef __imp_MsiGetPatchInfoExW:PPROC
MsiGetPatchInfoExW equ <__imp_MsiGetPatchInfoExW>
  IFDEF __UNICODE__
    MsiGetPatchInfoEx equ <__imp_MsiGetPatchInfoExW>
  ENDIF

externdef __imp_MsiGetPatchInfoW:PPROC
MsiGetPatchInfoW equ <__imp_MsiGetPatchInfoW>
  IFDEF __UNICODE__
    MsiGetPatchInfo equ <__imp_MsiGetPatchInfoW>
  ENDIF

externdef __imp_MsiGetProductCodeA:PPROC
MsiGetProductCodeA equ <__imp_MsiGetProductCodeA>
  IFNDEF __UNICODE__
    MsiGetProductCode equ <__imp_MsiGetProductCodeA>
  ENDIF

externdef __imp_MsiGetProductCodeFromPackageCodeA:PPROC
MsiGetProductCodeFromPackageCodeA equ <__imp_MsiGetProductCodeFromPackageCodeA>
  IFNDEF __UNICODE__
    MsiGetProductCodeFromPackageCode equ <__imp_MsiGetProductCodeFromPackageCodeA>
  ENDIF

externdef __imp_MsiGetProductCodeFromPackageCodeW:PPROC
MsiGetProductCodeFromPackageCodeW equ <__imp_MsiGetProductCodeFromPackageCodeW>
  IFDEF __UNICODE__
    MsiGetProductCodeFromPackageCode equ <__imp_MsiGetProductCodeFromPackageCodeW>
  ENDIF

externdef __imp_MsiGetProductCodeW:PPROC
MsiGetProductCodeW equ <__imp_MsiGetProductCodeW>
  IFDEF __UNICODE__
    MsiGetProductCode equ <__imp_MsiGetProductCodeW>
  ENDIF

externdef __imp_MsiGetProductInfoA:PPROC
MsiGetProductInfoA equ <__imp_MsiGetProductInfoA>
  IFNDEF __UNICODE__
    MsiGetProductInfo equ <__imp_MsiGetProductInfoA>
  ENDIF

externdef __imp_MsiGetProductInfoExA:PPROC
MsiGetProductInfoExA equ <__imp_MsiGetProductInfoExA>
  IFNDEF __UNICODE__
    MsiGetProductInfoEx equ <__imp_MsiGetProductInfoExA>
  ENDIF

externdef __imp_MsiGetProductInfoExW:PPROC
MsiGetProductInfoExW equ <__imp_MsiGetProductInfoExW>
  IFDEF __UNICODE__
    MsiGetProductInfoEx equ <__imp_MsiGetProductInfoExW>
  ENDIF

externdef __imp_MsiGetProductInfoFromScriptA:PPROC
MsiGetProductInfoFromScriptA equ <__imp_MsiGetProductInfoFromScriptA>
  IFNDEF __UNICODE__
    MsiGetProductInfoFromScript equ <__imp_MsiGetProductInfoFromScriptA>
  ENDIF

externdef __imp_MsiGetProductInfoFromScriptW:PPROC
MsiGetProductInfoFromScriptW equ <__imp_MsiGetProductInfoFromScriptW>
  IFDEF __UNICODE__
    MsiGetProductInfoFromScript equ <__imp_MsiGetProductInfoFromScriptW>
  ENDIF

externdef __imp_MsiGetProductInfoW:PPROC
MsiGetProductInfoW equ <__imp_MsiGetProductInfoW>
  IFDEF __UNICODE__
    MsiGetProductInfo equ <__imp_MsiGetProductInfoW>
  ENDIF

externdef __imp_MsiGetProductPropertyA:PPROC
MsiGetProductPropertyA equ <__imp_MsiGetProductPropertyA>
  IFNDEF __UNICODE__
    MsiGetProductProperty equ <__imp_MsiGetProductPropertyA>
  ENDIF

externdef __imp_MsiGetProductPropertyW:PPROC
MsiGetProductPropertyW equ <__imp_MsiGetProductPropertyW>
  IFDEF __UNICODE__
    MsiGetProductProperty equ <__imp_MsiGetProductPropertyW>
  ENDIF

externdef __imp_MsiGetPropertyA:PPROC
MsiGetPropertyA equ <__imp_MsiGetPropertyA>
  IFNDEF __UNICODE__
    MsiGetProperty equ <__imp_MsiGetPropertyA>
  ENDIF

externdef __imp_MsiGetPropertyW:PPROC
MsiGetPropertyW equ <__imp_MsiGetPropertyW>
  IFDEF __UNICODE__
    MsiGetProperty equ <__imp_MsiGetPropertyW>
  ENDIF

externdef __imp_MsiGetShortcutTargetA:PPROC
MsiGetShortcutTargetA equ <__imp_MsiGetShortcutTargetA>
  IFNDEF __UNICODE__
    MsiGetShortcutTarget equ <__imp_MsiGetShortcutTargetA>
  ENDIF

externdef __imp_MsiGetShortcutTargetW:PPROC
MsiGetShortcutTargetW equ <__imp_MsiGetShortcutTargetW>
  IFDEF __UNICODE__
    MsiGetShortcutTarget equ <__imp_MsiGetShortcutTargetW>
  ENDIF

externdef __imp_MsiGetSourcePathA:PPROC
MsiGetSourcePathA equ <__imp_MsiGetSourcePathA>
  IFNDEF __UNICODE__
    MsiGetSourcePath equ <__imp_MsiGetSourcePathA>
  ENDIF

externdef __imp_MsiGetSourcePathW:PPROC
MsiGetSourcePathW equ <__imp_MsiGetSourcePathW>
  IFDEF __UNICODE__
    MsiGetSourcePath equ <__imp_MsiGetSourcePathW>
  ENDIF

externdef __imp_MsiGetSummaryInformationA:PPROC
MsiGetSummaryInformationA equ <__imp_MsiGetSummaryInformationA>
  IFNDEF __UNICODE__
    MsiGetSummaryInformation equ <__imp_MsiGetSummaryInformationA>
  ENDIF

externdef __imp_MsiGetSummaryInformationW:PPROC
MsiGetSummaryInformationW equ <__imp_MsiGetSummaryInformationW>
  IFDEF __UNICODE__
    MsiGetSummaryInformation equ <__imp_MsiGetSummaryInformationW>
  ENDIF

externdef __imp_MsiGetTargetPathA:PPROC
MsiGetTargetPathA equ <__imp_MsiGetTargetPathA>
  IFNDEF __UNICODE__
    MsiGetTargetPath equ <__imp_MsiGetTargetPathA>
  ENDIF

externdef __imp_MsiGetTargetPathW:PPROC
MsiGetTargetPathW equ <__imp_MsiGetTargetPathW>
  IFDEF __UNICODE__
    MsiGetTargetPath equ <__imp_MsiGetTargetPathW>
  ENDIF

externdef __imp_MsiGetUserInfoA:PPROC
MsiGetUserInfoA equ <__imp_MsiGetUserInfoA>
  IFNDEF __UNICODE__
    MsiGetUserInfo equ <__imp_MsiGetUserInfoA>
  ENDIF

externdef __imp_MsiGetUserInfoW:PPROC
MsiGetUserInfoW equ <__imp_MsiGetUserInfoW>
  IFDEF __UNICODE__
    MsiGetUserInfo equ <__imp_MsiGetUserInfoW>
  ENDIF

externdef __imp_MsiInstallMissingComponentA:PPROC
MsiInstallMissingComponentA equ <__imp_MsiInstallMissingComponentA>
  IFNDEF __UNICODE__
    MsiInstallMissingComponent equ <__imp_MsiInstallMissingComponentA>
  ENDIF

externdef __imp_MsiInstallMissingComponentW:PPROC
MsiInstallMissingComponentW equ <__imp_MsiInstallMissingComponentW>
  IFDEF __UNICODE__
    MsiInstallMissingComponent equ <__imp_MsiInstallMissingComponentW>
  ENDIF

externdef __imp_MsiInstallMissingFileA:PPROC
MsiInstallMissingFileA equ <__imp_MsiInstallMissingFileA>
  IFNDEF __UNICODE__
    MsiInstallMissingFile equ <__imp_MsiInstallMissingFileA>
  ENDIF

externdef __imp_MsiInstallMissingFileW:PPROC
MsiInstallMissingFileW equ <__imp_MsiInstallMissingFileW>
  IFDEF __UNICODE__
    MsiInstallMissingFile equ <__imp_MsiInstallMissingFileW>
  ENDIF

externdef __imp_MsiInstallProductA:PPROC
MsiInstallProductA equ <__imp_MsiInstallProductA>
  IFNDEF __UNICODE__
    MsiInstallProduct equ <__imp_MsiInstallProductA>
  ENDIF

externdef __imp_MsiInstallProductW:PPROC
MsiInstallProductW equ <__imp_MsiInstallProductW>
  IFDEF __UNICODE__
    MsiInstallProduct equ <__imp_MsiInstallProductW>
  ENDIF

externdef __imp_MsiInvalidateFeatureCache:PPROC
MsiInvalidateFeatureCache equ <__imp_MsiInvalidateFeatureCache>

externdef __imp_MsiIsProductElevatedA:PPROC
MsiIsProductElevatedA equ <__imp_MsiIsProductElevatedA>
  IFNDEF __UNICODE__
    MsiIsProductElevated equ <__imp_MsiIsProductElevatedA>
  ENDIF

externdef __imp_MsiIsProductElevatedW:PPROC
MsiIsProductElevatedW equ <__imp_MsiIsProductElevatedW>
  IFDEF __UNICODE__
    MsiIsProductElevated equ <__imp_MsiIsProductElevatedW>
  ENDIF

externdef __imp_MsiLoadStringA:PPROC
MsiLoadStringA equ <__imp_MsiLoadStringA>
  IFNDEF __UNICODE__
    MsiLoadString equ <__imp_MsiLoadStringA>
  ENDIF

externdef __imp_MsiLoadStringW:PPROC
MsiLoadStringW equ <__imp_MsiLoadStringW>
  IFDEF __UNICODE__
    MsiLoadString equ <__imp_MsiLoadStringW>
  ENDIF

externdef __imp_MsiLocateComponentA:PPROC
MsiLocateComponentA equ <__imp_MsiLocateComponentA>
  IFNDEF __UNICODE__
    MsiLocateComponent equ <__imp_MsiLocateComponentA>
  ENDIF

externdef __imp_MsiLocateComponentW:PPROC
MsiLocateComponentW equ <__imp_MsiLocateComponentW>
  IFDEF __UNICODE__
    MsiLocateComponent equ <__imp_MsiLocateComponentW>
  ENDIF

externdef __imp_MsiMessageBoxA:PPROC
MsiMessageBoxA equ <__imp_MsiMessageBoxA>
  IFNDEF __UNICODE__
    MsiMessageBox equ <__imp_MsiMessageBoxA>
  ENDIF

externdef __imp_MsiMessageBoxExA:PPROC
MsiMessageBoxExA equ <__imp_MsiMessageBoxExA>
  IFNDEF __UNICODE__
    MsiMessageBoxEx equ <__imp_MsiMessageBoxExA>
  ENDIF

externdef __imp_MsiMessageBoxExW:PPROC
MsiMessageBoxExW equ <__imp_MsiMessageBoxExW>
  IFDEF __UNICODE__
    MsiMessageBoxEx equ <__imp_MsiMessageBoxExW>
  ENDIF

externdef __imp_MsiMessageBoxW:PPROC
MsiMessageBoxW equ <__imp_MsiMessageBoxW>
  IFDEF __UNICODE__
    MsiMessageBox equ <__imp_MsiMessageBoxW>
  ENDIF

externdef __imp_MsiNotifySidChangeA:PPROC
MsiNotifySidChangeA equ <__imp_MsiNotifySidChangeA>
  IFNDEF __UNICODE__
    MsiNotifySidChange equ <__imp_MsiNotifySidChangeA>
  ENDIF

externdef __imp_MsiNotifySidChangeW:PPROC
MsiNotifySidChangeW equ <__imp_MsiNotifySidChangeW>
  IFDEF __UNICODE__
    MsiNotifySidChange equ <__imp_MsiNotifySidChangeW>
  ENDIF

externdef __imp_MsiOpenDatabaseA:PPROC
MsiOpenDatabaseA equ <__imp_MsiOpenDatabaseA>
  IFNDEF __UNICODE__
    MsiOpenDatabase equ <__imp_MsiOpenDatabaseA>
  ENDIF

externdef __imp_MsiOpenDatabaseW:PPROC
MsiOpenDatabaseW equ <__imp_MsiOpenDatabaseW>
  IFDEF __UNICODE__
    MsiOpenDatabase equ <__imp_MsiOpenDatabaseW>
  ENDIF

externdef __imp_MsiOpenPackageA:PPROC
MsiOpenPackageA equ <__imp_MsiOpenPackageA>
  IFNDEF __UNICODE__
    MsiOpenPackage equ <__imp_MsiOpenPackageA>
  ENDIF

externdef __imp_MsiOpenPackageExA:PPROC
MsiOpenPackageExA equ <__imp_MsiOpenPackageExA>
  IFNDEF __UNICODE__
    MsiOpenPackageEx equ <__imp_MsiOpenPackageExA>
  ENDIF

externdef __imp_MsiOpenPackageExW:PPROC
MsiOpenPackageExW equ <__imp_MsiOpenPackageExW>
  IFDEF __UNICODE__
    MsiOpenPackageEx equ <__imp_MsiOpenPackageExW>
  ENDIF

externdef __imp_MsiOpenPackageW:PPROC
MsiOpenPackageW equ <__imp_MsiOpenPackageW>
  IFDEF __UNICODE__
    MsiOpenPackage equ <__imp_MsiOpenPackageW>
  ENDIF

externdef __imp_MsiOpenProductA:PPROC
MsiOpenProductA equ <__imp_MsiOpenProductA>
  IFNDEF __UNICODE__
    MsiOpenProduct equ <__imp_MsiOpenProductA>
  ENDIF

externdef __imp_MsiOpenProductW:PPROC
MsiOpenProductW equ <__imp_MsiOpenProductW>
  IFDEF __UNICODE__
    MsiOpenProduct equ <__imp_MsiOpenProductW>
  ENDIF

externdef __imp_MsiPreviewBillboardA:PPROC
MsiPreviewBillboardA equ <__imp_MsiPreviewBillboardA>
  IFNDEF __UNICODE__
    MsiPreviewBillboard equ <__imp_MsiPreviewBillboardA>
  ENDIF

externdef __imp_MsiPreviewBillboardW:PPROC
MsiPreviewBillboardW equ <__imp_MsiPreviewBillboardW>
  IFDEF __UNICODE__
    MsiPreviewBillboard equ <__imp_MsiPreviewBillboardW>
  ENDIF

externdef __imp_MsiPreviewDialogA:PPROC
MsiPreviewDialogA equ <__imp_MsiPreviewDialogA>
  IFNDEF __UNICODE__
    MsiPreviewDialog equ <__imp_MsiPreviewDialogA>
  ENDIF

externdef __imp_MsiPreviewDialogW:PPROC
MsiPreviewDialogW equ <__imp_MsiPreviewDialogW>
  IFDEF __UNICODE__
    MsiPreviewDialog equ <__imp_MsiPreviewDialogW>
  ENDIF

externdef __imp_MsiProcessAdvertiseScriptA:PPROC
MsiProcessAdvertiseScriptA equ <__imp_MsiProcessAdvertiseScriptA>
  IFNDEF __UNICODE__
    MsiProcessAdvertiseScript equ <__imp_MsiProcessAdvertiseScriptA>
  ENDIF

externdef __imp_MsiProcessAdvertiseScriptW:PPROC
MsiProcessAdvertiseScriptW equ <__imp_MsiProcessAdvertiseScriptW>
  IFDEF __UNICODE__
    MsiProcessAdvertiseScript equ <__imp_MsiProcessAdvertiseScriptW>
  ENDIF

externdef __imp_MsiProcessMessage:PPROC
MsiProcessMessage equ <__imp_MsiProcessMessage>

externdef __imp_MsiProvideAssemblyA:PPROC
MsiProvideAssemblyA equ <__imp_MsiProvideAssemblyA>
  IFNDEF __UNICODE__
    MsiProvideAssembly equ <__imp_MsiProvideAssemblyA>
  ENDIF

externdef __imp_MsiProvideAssemblyW:PPROC
MsiProvideAssemblyW equ <__imp_MsiProvideAssemblyW>
  IFDEF __UNICODE__
    MsiProvideAssembly equ <__imp_MsiProvideAssemblyW>
  ENDIF

externdef __imp_MsiProvideComponentA:PPROC
MsiProvideComponentA equ <__imp_MsiProvideComponentA>
  IFNDEF __UNICODE__
    MsiProvideComponent equ <__imp_MsiProvideComponentA>
  ENDIF

externdef __imp_MsiProvideComponentFromDescriptorA:PPROC
MsiProvideComponentFromDescriptorA equ <__imp_MsiProvideComponentFromDescriptorA>
  IFNDEF __UNICODE__
    MsiProvideComponentFromDescriptor equ <__imp_MsiProvideComponentFromDescriptorA>
  ENDIF

externdef __imp_MsiProvideComponentFromDescriptorW:PPROC
MsiProvideComponentFromDescriptorW equ <__imp_MsiProvideComponentFromDescriptorW>
  IFDEF __UNICODE__
    MsiProvideComponentFromDescriptor equ <__imp_MsiProvideComponentFromDescriptorW>
  ENDIF

externdef __imp_MsiProvideComponentW:PPROC
MsiProvideComponentW equ <__imp_MsiProvideComponentW>
  IFDEF __UNICODE__
    MsiProvideComponent equ <__imp_MsiProvideComponentW>
  ENDIF

externdef __imp_MsiProvideQualifiedComponentA:PPROC
MsiProvideQualifiedComponentA equ <__imp_MsiProvideQualifiedComponentA>
  IFNDEF __UNICODE__
    MsiProvideQualifiedComponent equ <__imp_MsiProvideQualifiedComponentA>
  ENDIF

externdef __imp_MsiProvideQualifiedComponentExA:PPROC
MsiProvideQualifiedComponentExA equ <__imp_MsiProvideQualifiedComponentExA>
  IFNDEF __UNICODE__
    MsiProvideQualifiedComponentEx equ <__imp_MsiProvideQualifiedComponentExA>
  ENDIF

externdef __imp_MsiProvideQualifiedComponentExW:PPROC
MsiProvideQualifiedComponentExW equ <__imp_MsiProvideQualifiedComponentExW>
  IFDEF __UNICODE__
    MsiProvideQualifiedComponentEx equ <__imp_MsiProvideQualifiedComponentExW>
  ENDIF

externdef __imp_MsiProvideQualifiedComponentW:PPROC
MsiProvideQualifiedComponentW equ <__imp_MsiProvideQualifiedComponentW>
  IFDEF __UNICODE__
    MsiProvideQualifiedComponent equ <__imp_MsiProvideQualifiedComponentW>
  ENDIF

externdef __imp_MsiQueryComponentStateA:PPROC
MsiQueryComponentStateA equ <__imp_MsiQueryComponentStateA>
  IFNDEF __UNICODE__
    MsiQueryComponentState equ <__imp_MsiQueryComponentStateA>
  ENDIF

externdef __imp_MsiQueryComponentStateW:PPROC
MsiQueryComponentStateW equ <__imp_MsiQueryComponentStateW>
  IFDEF __UNICODE__
    MsiQueryComponentState equ <__imp_MsiQueryComponentStateW>
  ENDIF

externdef __imp_MsiQueryFeatureStateA:PPROC
MsiQueryFeatureStateA equ <__imp_MsiQueryFeatureStateA>
  IFNDEF __UNICODE__
    MsiQueryFeatureState equ <__imp_MsiQueryFeatureStateA>
  ENDIF

externdef __imp_MsiQueryFeatureStateExA:PPROC
MsiQueryFeatureStateExA equ <__imp_MsiQueryFeatureStateExA>
  IFNDEF __UNICODE__
    MsiQueryFeatureStateEx equ <__imp_MsiQueryFeatureStateExA>
  ENDIF

externdef __imp_MsiQueryFeatureStateExW:PPROC
MsiQueryFeatureStateExW equ <__imp_MsiQueryFeatureStateExW>
  IFDEF __UNICODE__
    MsiQueryFeatureStateEx equ <__imp_MsiQueryFeatureStateExW>
  ENDIF

externdef __imp_MsiQueryFeatureStateFromDescriptorA:PPROC
MsiQueryFeatureStateFromDescriptorA equ <__imp_MsiQueryFeatureStateFromDescriptorA>
  IFNDEF __UNICODE__
    MsiQueryFeatureStateFromDescriptor equ <__imp_MsiQueryFeatureStateFromDescriptorA>
  ENDIF

externdef __imp_MsiQueryFeatureStateFromDescriptorW:PPROC
MsiQueryFeatureStateFromDescriptorW equ <__imp_MsiQueryFeatureStateFromDescriptorW>
  IFDEF __UNICODE__
    MsiQueryFeatureStateFromDescriptor equ <__imp_MsiQueryFeatureStateFromDescriptorW>
  ENDIF

externdef __imp_MsiQueryFeatureStateW:PPROC
MsiQueryFeatureStateW equ <__imp_MsiQueryFeatureStateW>
  IFDEF __UNICODE__
    MsiQueryFeatureState equ <__imp_MsiQueryFeatureStateW>
  ENDIF

externdef __imp_MsiQueryProductStateA:PPROC
MsiQueryProductStateA equ <__imp_MsiQueryProductStateA>
  IFNDEF __UNICODE__
    MsiQueryProductState equ <__imp_MsiQueryProductStateA>
  ENDIF

externdef __imp_MsiQueryProductStateW:PPROC
MsiQueryProductStateW equ <__imp_MsiQueryProductStateW>
  IFDEF __UNICODE__
    MsiQueryProductState equ <__imp_MsiQueryProductStateW>
  ENDIF

externdef __imp_MsiRecordClearData:PPROC
MsiRecordClearData equ <__imp_MsiRecordClearData>

externdef __imp_MsiRecordDataSize:PPROC
MsiRecordDataSize equ <__imp_MsiRecordDataSize>

externdef __imp_MsiRecordGetFieldCount:PPROC
MsiRecordGetFieldCount equ <__imp_MsiRecordGetFieldCount>

externdef __imp_MsiRecordGetInteger:PPROC
MsiRecordGetInteger equ <__imp_MsiRecordGetInteger>

externdef __imp_MsiRecordGetStringA:PPROC
MsiRecordGetStringA equ <__imp_MsiRecordGetStringA>
  IFNDEF __UNICODE__
    MsiRecordGetString equ <__imp_MsiRecordGetStringA>
  ENDIF

externdef __imp_MsiRecordGetStringW:PPROC
MsiRecordGetStringW equ <__imp_MsiRecordGetStringW>
  IFDEF __UNICODE__
    MsiRecordGetString equ <__imp_MsiRecordGetStringW>
  ENDIF

externdef __imp_MsiRecordIsNull:PPROC
MsiRecordIsNull equ <__imp_MsiRecordIsNull>

externdef __imp_MsiRecordReadStream:PPROC
MsiRecordReadStream equ <__imp_MsiRecordReadStream>

externdef __imp_MsiRecordSetInteger:PPROC
MsiRecordSetInteger equ <__imp_MsiRecordSetInteger>

externdef __imp_MsiRecordSetStreamA:PPROC
MsiRecordSetStreamA equ <__imp_MsiRecordSetStreamA>
  IFNDEF __UNICODE__
    MsiRecordSetStream equ <__imp_MsiRecordSetStreamA>
  ENDIF

externdef __imp_MsiRecordSetStreamW:PPROC
MsiRecordSetStreamW equ <__imp_MsiRecordSetStreamW>
  IFDEF __UNICODE__
    MsiRecordSetStream equ <__imp_MsiRecordSetStreamW>
  ENDIF

externdef __imp_MsiRecordSetStringA:PPROC
MsiRecordSetStringA equ <__imp_MsiRecordSetStringA>
  IFNDEF __UNICODE__
    MsiRecordSetString equ <__imp_MsiRecordSetStringA>
  ENDIF

externdef __imp_MsiRecordSetStringW:PPROC
MsiRecordSetStringW equ <__imp_MsiRecordSetStringW>
  IFDEF __UNICODE__
    MsiRecordSetString equ <__imp_MsiRecordSetStringW>
  ENDIF

externdef __imp_MsiReinstallFeatureA:PPROC
MsiReinstallFeatureA equ <__imp_MsiReinstallFeatureA>
  IFNDEF __UNICODE__
    MsiReinstallFeature equ <__imp_MsiReinstallFeatureA>
  ENDIF

externdef __imp_MsiReinstallFeatureFromDescriptorA:PPROC
MsiReinstallFeatureFromDescriptorA equ <__imp_MsiReinstallFeatureFromDescriptorA>
  IFNDEF __UNICODE__
    MsiReinstallFeatureFromDescriptor equ <__imp_MsiReinstallFeatureFromDescriptorA>
  ENDIF

externdef __imp_MsiReinstallFeatureFromDescriptorW:PPROC
MsiReinstallFeatureFromDescriptorW equ <__imp_MsiReinstallFeatureFromDescriptorW>
  IFDEF __UNICODE__
    MsiReinstallFeatureFromDescriptor equ <__imp_MsiReinstallFeatureFromDescriptorW>
  ENDIF

externdef __imp_MsiReinstallFeatureW:PPROC
MsiReinstallFeatureW equ <__imp_MsiReinstallFeatureW>
  IFDEF __UNICODE__
    MsiReinstallFeature equ <__imp_MsiReinstallFeatureW>
  ENDIF

externdef __imp_MsiReinstallProductA:PPROC
MsiReinstallProductA equ <__imp_MsiReinstallProductA>
  IFNDEF __UNICODE__
    MsiReinstallProduct equ <__imp_MsiReinstallProductA>
  ENDIF

externdef __imp_MsiReinstallProductW:PPROC
MsiReinstallProductW equ <__imp_MsiReinstallProductW>
  IFDEF __UNICODE__
    MsiReinstallProduct equ <__imp_MsiReinstallProductW>
  ENDIF

externdef __imp_MsiRemovePatchesA:PPROC
MsiRemovePatchesA equ <__imp_MsiRemovePatchesA>
  IFNDEF __UNICODE__
    MsiRemovePatches equ <__imp_MsiRemovePatchesA>
  ENDIF

externdef __imp_MsiRemovePatchesW:PPROC
MsiRemovePatchesW equ <__imp_MsiRemovePatchesW>
  IFDEF __UNICODE__
    MsiRemovePatches equ <__imp_MsiRemovePatchesW>
  ENDIF

externdef __imp_MsiSequenceA:PPROC
MsiSequenceA equ <__imp_MsiSequenceA>
  IFNDEF __UNICODE__
    MsiSequence equ <__imp_MsiSequenceA>
  ENDIF

externdef __imp_MsiSequenceW:PPROC
MsiSequenceW equ <__imp_MsiSequenceW>
  IFDEF __UNICODE__
    MsiSequence equ <__imp_MsiSequenceW>
  ENDIF

externdef __imp_MsiSetComponentStateA:PPROC
MsiSetComponentStateA equ <__imp_MsiSetComponentStateA>
  IFNDEF __UNICODE__
    MsiSetComponentState equ <__imp_MsiSetComponentStateA>
  ENDIF

externdef __imp_MsiSetComponentStateW:PPROC
MsiSetComponentStateW equ <__imp_MsiSetComponentStateW>
  IFDEF __UNICODE__
    MsiSetComponentState equ <__imp_MsiSetComponentStateW>
  ENDIF

externdef __imp_MsiSetExternalUIA:PPROC
MsiSetExternalUIA equ <__imp_MsiSetExternalUIA>
  IFNDEF __UNICODE__
    MsiSetExternalUI equ <__imp_MsiSetExternalUIA>
  ENDIF

externdef __imp_MsiSetExternalUIRecord:PPROC
MsiSetExternalUIRecord equ <__imp_MsiSetExternalUIRecord>

externdef __imp_MsiSetExternalUIW:PPROC
MsiSetExternalUIW equ <__imp_MsiSetExternalUIW>
  IFDEF __UNICODE__
    MsiSetExternalUI equ <__imp_MsiSetExternalUIW>
  ENDIF

externdef __imp_MsiSetFeatureAttributesA:PPROC
MsiSetFeatureAttributesA equ <__imp_MsiSetFeatureAttributesA>
  IFNDEF __UNICODE__
    MsiSetFeatureAttributes equ <__imp_MsiSetFeatureAttributesA>
  ENDIF

externdef __imp_MsiSetFeatureAttributesW:PPROC
MsiSetFeatureAttributesW equ <__imp_MsiSetFeatureAttributesW>
  IFDEF __UNICODE__
    MsiSetFeatureAttributes equ <__imp_MsiSetFeatureAttributesW>
  ENDIF

externdef __imp_MsiSetFeatureStateA:PPROC
MsiSetFeatureStateA equ <__imp_MsiSetFeatureStateA>
  IFNDEF __UNICODE__
    MsiSetFeatureState equ <__imp_MsiSetFeatureStateA>
  ENDIF

externdef __imp_MsiSetFeatureStateW:PPROC
MsiSetFeatureStateW equ <__imp_MsiSetFeatureStateW>
  IFDEF __UNICODE__
    MsiSetFeatureState equ <__imp_MsiSetFeatureStateW>
  ENDIF

externdef __imp_MsiSetInstallLevel:PPROC
MsiSetInstallLevel equ <__imp_MsiSetInstallLevel>

externdef __imp_MsiSetInternalUI:PPROC
MsiSetInternalUI equ <__imp_MsiSetInternalUI>

externdef __imp_MsiSetMode:PPROC
MsiSetMode equ <__imp_MsiSetMode>

externdef __imp_MsiSetPropertyA:PPROC
MsiSetPropertyA equ <__imp_MsiSetPropertyA>
  IFNDEF __UNICODE__
    MsiSetProperty equ <__imp_MsiSetPropertyA>
  ENDIF

externdef __imp_MsiSetPropertyW:PPROC
MsiSetPropertyW equ <__imp_MsiSetPropertyW>
  IFDEF __UNICODE__
    MsiSetProperty equ <__imp_MsiSetPropertyW>
  ENDIF

externdef __imp_MsiSetTargetPathA:PPROC
MsiSetTargetPathA equ <__imp_MsiSetTargetPathA>
  IFNDEF __UNICODE__
    MsiSetTargetPath equ <__imp_MsiSetTargetPathA>
  ENDIF

externdef __imp_MsiSetTargetPathW:PPROC
MsiSetTargetPathW equ <__imp_MsiSetTargetPathW>
  IFDEF __UNICODE__
    MsiSetTargetPath equ <__imp_MsiSetTargetPathW>
  ENDIF

externdef __imp_MsiSourceListAddMediaDiskA:PPROC
MsiSourceListAddMediaDiskA equ <__imp_MsiSourceListAddMediaDiskA>
  IFNDEF __UNICODE__
    MsiSourceListAddMediaDisk equ <__imp_MsiSourceListAddMediaDiskA>
  ENDIF

externdef __imp_MsiSourceListAddMediaDiskW:PPROC
MsiSourceListAddMediaDiskW equ <__imp_MsiSourceListAddMediaDiskW>
  IFDEF __UNICODE__
    MsiSourceListAddMediaDisk equ <__imp_MsiSourceListAddMediaDiskW>
  ENDIF

externdef __imp_MsiSourceListAddSourceA:PPROC
MsiSourceListAddSourceA equ <__imp_MsiSourceListAddSourceA>
  IFNDEF __UNICODE__
    MsiSourceListAddSource equ <__imp_MsiSourceListAddSourceA>
  ENDIF

externdef __imp_MsiSourceListAddSourceExA:PPROC
MsiSourceListAddSourceExA equ <__imp_MsiSourceListAddSourceExA>
  IFNDEF __UNICODE__
    MsiSourceListAddSourceEx equ <__imp_MsiSourceListAddSourceExA>
  ENDIF

externdef __imp_MsiSourceListAddSourceExW:PPROC
MsiSourceListAddSourceExW equ <__imp_MsiSourceListAddSourceExW>
  IFDEF __UNICODE__
    MsiSourceListAddSourceEx equ <__imp_MsiSourceListAddSourceExW>
  ENDIF

externdef __imp_MsiSourceListAddSourceW:PPROC
MsiSourceListAddSourceW equ <__imp_MsiSourceListAddSourceW>
  IFDEF __UNICODE__
    MsiSourceListAddSource equ <__imp_MsiSourceListAddSourceW>
  ENDIF

externdef __imp_MsiSourceListClearAllA:PPROC
MsiSourceListClearAllA equ <__imp_MsiSourceListClearAllA>
  IFNDEF __UNICODE__
    MsiSourceListClearAll equ <__imp_MsiSourceListClearAllA>
  ENDIF

externdef __imp_MsiSourceListClearAllExA:PPROC
MsiSourceListClearAllExA equ <__imp_MsiSourceListClearAllExA>
  IFNDEF __UNICODE__
    MsiSourceListClearAllEx equ <__imp_MsiSourceListClearAllExA>
  ENDIF

externdef __imp_MsiSourceListClearAllExW:PPROC
MsiSourceListClearAllExW equ <__imp_MsiSourceListClearAllExW>
  IFDEF __UNICODE__
    MsiSourceListClearAllEx equ <__imp_MsiSourceListClearAllExW>
  ENDIF

externdef __imp_MsiSourceListClearAllW:PPROC
MsiSourceListClearAllW equ <__imp_MsiSourceListClearAllW>
  IFDEF __UNICODE__
    MsiSourceListClearAll equ <__imp_MsiSourceListClearAllW>
  ENDIF

externdef __imp_MsiSourceListClearMediaDiskA:PPROC
MsiSourceListClearMediaDiskA equ <__imp_MsiSourceListClearMediaDiskA>
  IFNDEF __UNICODE__
    MsiSourceListClearMediaDisk equ <__imp_MsiSourceListClearMediaDiskA>
  ENDIF

externdef __imp_MsiSourceListClearMediaDiskW:PPROC
MsiSourceListClearMediaDiskW equ <__imp_MsiSourceListClearMediaDiskW>
  IFDEF __UNICODE__
    MsiSourceListClearMediaDisk equ <__imp_MsiSourceListClearMediaDiskW>
  ENDIF

externdef __imp_MsiSourceListClearSourceA:PPROC
MsiSourceListClearSourceA equ <__imp_MsiSourceListClearSourceA>
  IFNDEF __UNICODE__
    MsiSourceListClearSource equ <__imp_MsiSourceListClearSourceA>
  ENDIF

externdef __imp_MsiSourceListClearSourceW:PPROC
MsiSourceListClearSourceW equ <__imp_MsiSourceListClearSourceW>
  IFDEF __UNICODE__
    MsiSourceListClearSource equ <__imp_MsiSourceListClearSourceW>
  ENDIF

externdef __imp_MsiSourceListEnumMediaDisksA:PPROC
MsiSourceListEnumMediaDisksA equ <__imp_MsiSourceListEnumMediaDisksA>
  IFNDEF __UNICODE__
    MsiSourceListEnumMediaDisks equ <__imp_MsiSourceListEnumMediaDisksA>
  ENDIF

externdef __imp_MsiSourceListEnumMediaDisksW:PPROC
MsiSourceListEnumMediaDisksW equ <__imp_MsiSourceListEnumMediaDisksW>
  IFDEF __UNICODE__
    MsiSourceListEnumMediaDisks equ <__imp_MsiSourceListEnumMediaDisksW>
  ENDIF

externdef __imp_MsiSourceListEnumSourcesA:PPROC
MsiSourceListEnumSourcesA equ <__imp_MsiSourceListEnumSourcesA>
  IFNDEF __UNICODE__
    MsiSourceListEnumSources equ <__imp_MsiSourceListEnumSourcesA>
  ENDIF

externdef __imp_MsiSourceListEnumSourcesW:PPROC
MsiSourceListEnumSourcesW equ <__imp_MsiSourceListEnumSourcesW>
  IFDEF __UNICODE__
    MsiSourceListEnumSources equ <__imp_MsiSourceListEnumSourcesW>
  ENDIF

externdef __imp_MsiSourceListForceResolutionA:PPROC
MsiSourceListForceResolutionA equ <__imp_MsiSourceListForceResolutionA>
  IFNDEF __UNICODE__
    MsiSourceListForceResolution equ <__imp_MsiSourceListForceResolutionA>
  ENDIF

externdef __imp_MsiSourceListForceResolutionExA:PPROC
MsiSourceListForceResolutionExA equ <__imp_MsiSourceListForceResolutionExA>
  IFNDEF __UNICODE__
    MsiSourceListForceResolutionEx equ <__imp_MsiSourceListForceResolutionExA>
  ENDIF

externdef __imp_MsiSourceListForceResolutionExW:PPROC
MsiSourceListForceResolutionExW equ <__imp_MsiSourceListForceResolutionExW>
  IFDEF __UNICODE__
    MsiSourceListForceResolutionEx equ <__imp_MsiSourceListForceResolutionExW>
  ENDIF

externdef __imp_MsiSourceListForceResolutionW:PPROC
MsiSourceListForceResolutionW equ <__imp_MsiSourceListForceResolutionW>
  IFDEF __UNICODE__
    MsiSourceListForceResolution equ <__imp_MsiSourceListForceResolutionW>
  ENDIF

externdef __imp_MsiSourceListGetInfoA:PPROC
MsiSourceListGetInfoA equ <__imp_MsiSourceListGetInfoA>
  IFNDEF __UNICODE__
    MsiSourceListGetInfo equ <__imp_MsiSourceListGetInfoA>
  ENDIF

externdef __imp_MsiSourceListGetInfoW:PPROC
MsiSourceListGetInfoW equ <__imp_MsiSourceListGetInfoW>
  IFDEF __UNICODE__
    MsiSourceListGetInfo equ <__imp_MsiSourceListGetInfoW>
  ENDIF

externdef __imp_MsiSourceListSetInfoA:PPROC
MsiSourceListSetInfoA equ <__imp_MsiSourceListSetInfoA>
  IFNDEF __UNICODE__
    MsiSourceListSetInfo equ <__imp_MsiSourceListSetInfoA>
  ENDIF

externdef __imp_MsiSourceListSetInfoW:PPROC
MsiSourceListSetInfoW equ <__imp_MsiSourceListSetInfoW>
  IFDEF __UNICODE__
    MsiSourceListSetInfo equ <__imp_MsiSourceListSetInfoW>
  ENDIF

externdef __imp_MsiSummaryInfoGetPropertyA:PPROC
MsiSummaryInfoGetPropertyA equ <__imp_MsiSummaryInfoGetPropertyA>
  IFNDEF __UNICODE__
    MsiSummaryInfoGetProperty equ <__imp_MsiSummaryInfoGetPropertyA>
  ENDIF

externdef __imp_MsiSummaryInfoGetPropertyCount:PPROC
MsiSummaryInfoGetPropertyCount equ <__imp_MsiSummaryInfoGetPropertyCount>

externdef __imp_MsiSummaryInfoGetPropertyW:PPROC
MsiSummaryInfoGetPropertyW equ <__imp_MsiSummaryInfoGetPropertyW>
  IFDEF __UNICODE__
    MsiSummaryInfoGetProperty equ <__imp_MsiSummaryInfoGetPropertyW>
  ENDIF

externdef __imp_MsiSummaryInfoPersist:PPROC
MsiSummaryInfoPersist equ <__imp_MsiSummaryInfoPersist>

externdef __imp_MsiSummaryInfoSetPropertyA:PPROC
MsiSummaryInfoSetPropertyA equ <__imp_MsiSummaryInfoSetPropertyA>
  IFNDEF __UNICODE__
    MsiSummaryInfoSetProperty equ <__imp_MsiSummaryInfoSetPropertyA>
  ENDIF

externdef __imp_MsiSummaryInfoSetPropertyW:PPROC
MsiSummaryInfoSetPropertyW equ <__imp_MsiSummaryInfoSetPropertyW>
  IFDEF __UNICODE__
    MsiSummaryInfoSetProperty equ <__imp_MsiSummaryInfoSetPropertyW>
  ENDIF

externdef __imp_MsiUseFeatureA:PPROC
MsiUseFeatureA equ <__imp_MsiUseFeatureA>
  IFNDEF __UNICODE__
    MsiUseFeature equ <__imp_MsiUseFeatureA>
  ENDIF

externdef __imp_MsiUseFeatureExA:PPROC
MsiUseFeatureExA equ <__imp_MsiUseFeatureExA>
  IFNDEF __UNICODE__
    MsiUseFeatureEx equ <__imp_MsiUseFeatureExA>
  ENDIF

externdef __imp_MsiUseFeatureExW:PPROC
MsiUseFeatureExW equ <__imp_MsiUseFeatureExW>
  IFDEF __UNICODE__
    MsiUseFeatureEx equ <__imp_MsiUseFeatureExW>
  ENDIF

externdef __imp_MsiUseFeatureW:PPROC
MsiUseFeatureW equ <__imp_MsiUseFeatureW>
  IFDEF __UNICODE__
    MsiUseFeature equ <__imp_MsiUseFeatureW>
  ENDIF

externdef __imp_MsiVerifyDiskSpace:PPROC
MsiVerifyDiskSpace equ <__imp_MsiVerifyDiskSpace>

externdef __imp_MsiVerifyPackageA:PPROC
MsiVerifyPackageA equ <__imp_MsiVerifyPackageA>
  IFNDEF __UNICODE__
    MsiVerifyPackage equ <__imp_MsiVerifyPackageA>
  ENDIF

externdef __imp_MsiVerifyPackageW:PPROC
MsiVerifyPackageW equ <__imp_MsiVerifyPackageW>
  IFDEF __UNICODE__
    MsiVerifyPackage equ <__imp_MsiVerifyPackageW>
  ENDIF

externdef __imp_MsiViewClose:PPROC
MsiViewClose equ <__imp_MsiViewClose>

externdef __imp_MsiViewExecute:PPROC
MsiViewExecute equ <__imp_MsiViewExecute>

externdef __imp_MsiViewFetch:PPROC
MsiViewFetch equ <__imp_MsiViewFetch>

externdef __imp_MsiViewGetColumnInfo:PPROC
MsiViewGetColumnInfo equ <__imp_MsiViewGetColumnInfo>

externdef __imp_MsiViewGetErrorA:PPROC
MsiViewGetErrorA equ <__imp_MsiViewGetErrorA>
  IFNDEF __UNICODE__
    MsiViewGetError equ <__imp_MsiViewGetErrorA>
  ENDIF

externdef __imp_MsiViewGetErrorW:PPROC
MsiViewGetErrorW equ <__imp_MsiViewGetErrorW>
  IFDEF __UNICODE__
    MsiViewGetError equ <__imp_MsiViewGetErrorW>
  ENDIF

externdef __imp_MsiViewModify:PPROC
MsiViewModify equ <__imp_MsiViewModify>
