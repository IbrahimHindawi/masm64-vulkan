externdef __imp_DsAddSidHistoryA:PPROC
DsAddSidHistoryA equ <__imp_DsAddSidHistoryA>
  IFNDEF __UNICODE__
    DsAddSidHistory equ <__imp_DsAddSidHistoryA>
  ENDIF

externdef __imp_DsAddSidHistoryW:PPROC
DsAddSidHistoryW equ <__imp_DsAddSidHistoryW>
  IFDEF __UNICODE__
    DsAddSidHistory equ <__imp_DsAddSidHistoryW>
  ENDIF

externdef __imp_DsBindA:PPROC
DsBindA equ <__imp_DsBindA>
  IFNDEF __UNICODE__
    DsBind equ <__imp_DsBindA>
  ENDIF

externdef __imp_DsBindToISTGA:PPROC
DsBindToISTGA equ <__imp_DsBindToISTGA>
  IFNDEF __UNICODE__
    DsBindToISTG equ <__imp_DsBindToISTGA>
  ENDIF

externdef __imp_DsBindToISTGW:PPROC
DsBindToISTGW equ <__imp_DsBindToISTGW>
  IFDEF __UNICODE__
    DsBindToISTG equ <__imp_DsBindToISTGW>
  ENDIF

externdef __imp_DsBindW:PPROC
DsBindW equ <__imp_DsBindW>
  IFDEF __UNICODE__
    DsBind equ <__imp_DsBindW>
  ENDIF

externdef __imp_DsBindWithCredA:PPROC
DsBindWithCredA equ <__imp_DsBindWithCredA>
  IFNDEF __UNICODE__
    DsBindWithCred equ <__imp_DsBindWithCredA>
  ENDIF

externdef __imp_DsBindWithCredW:PPROC
DsBindWithCredW equ <__imp_DsBindWithCredW>
  IFDEF __UNICODE__
    DsBindWithCred equ <__imp_DsBindWithCredW>
  ENDIF

externdef __imp_DsBindWithSpnA:PPROC
DsBindWithSpnA equ <__imp_DsBindWithSpnA>
  IFNDEF __UNICODE__
    DsBindWithSpn equ <__imp_DsBindWithSpnA>
  ENDIF

externdef __imp_DsBindWithSpnExA:PPROC
DsBindWithSpnExA equ <__imp_DsBindWithSpnExA>
  IFNDEF __UNICODE__
    DsBindWithSpnEx equ <__imp_DsBindWithSpnExA>
  ENDIF

externdef __imp_DsBindWithSpnExW:PPROC
DsBindWithSpnExW equ <__imp_DsBindWithSpnExW>
  IFDEF __UNICODE__
    DsBindWithSpnEx equ <__imp_DsBindWithSpnExW>
  ENDIF

externdef __imp_DsBindWithSpnW:PPROC
DsBindWithSpnW equ <__imp_DsBindWithSpnW>
  IFDEF __UNICODE__
    DsBindWithSpn equ <__imp_DsBindWithSpnW>
  ENDIF

externdef __imp_DsBindingSetTimeout:PPROC
DsBindingSetTimeout equ <__imp_DsBindingSetTimeout>

externdef __imp_DsClientMakeSpnForTargetServerA:PPROC
DsClientMakeSpnForTargetServerA equ <__imp_DsClientMakeSpnForTargetServerA>
  IFNDEF __UNICODE__
    DsClientMakeSpnForTargetServer equ <__imp_DsClientMakeSpnForTargetServerA>
  ENDIF

externdef __imp_DsClientMakeSpnForTargetServerW:PPROC
DsClientMakeSpnForTargetServerW equ <__imp_DsClientMakeSpnForTargetServerW>
  IFDEF __UNICODE__
    DsClientMakeSpnForTargetServer equ <__imp_DsClientMakeSpnForTargetServerW>
  ENDIF

externdef __imp_DsCrackNamesA:PPROC
DsCrackNamesA equ <__imp_DsCrackNamesA>
  IFNDEF __UNICODE__
    DsCrackNames equ <__imp_DsCrackNamesA>
  ENDIF

externdef __imp_DsCrackNamesW:PPROC
DsCrackNamesW equ <__imp_DsCrackNamesW>
  IFDEF __UNICODE__
    DsCrackNames equ <__imp_DsCrackNamesW>
  ENDIF

externdef __imp_DsCrackSpn2A:PPROC
DsCrackSpn2A equ <__imp_DsCrackSpn2A>
  IFNDEF __UNICODE__
    DsCrackSpn2 equ <__imp_DsCrackSpn2A>
  ENDIF

externdef __imp_DsCrackSpn2W:PPROC
DsCrackSpn2W equ <__imp_DsCrackSpn2W>
  IFDEF __UNICODE__
    DsCrackSpn2 equ <__imp_DsCrackSpn2W>
  ENDIF

externdef __imp_DsCrackSpn3W:PPROC
DsCrackSpn3W equ <__imp_DsCrackSpn3W>
  IFDEF __UNICODE__
    DsCrackSpn3 equ <__imp_DsCrackSpn3W>
  ENDIF

externdef __imp_DsCrackSpnA:PPROC
DsCrackSpnA equ <__imp_DsCrackSpnA>
  IFNDEF __UNICODE__
    DsCrackSpn equ <__imp_DsCrackSpnA>
  ENDIF

externdef __imp_DsCrackSpnW:PPROC
DsCrackSpnW equ <__imp_DsCrackSpnW>
  IFDEF __UNICODE__
    DsCrackSpn equ <__imp_DsCrackSpnW>
  ENDIF

externdef __imp_DsCrackUnquotedMangledRdnA:PPROC
DsCrackUnquotedMangledRdnA equ <__imp_DsCrackUnquotedMangledRdnA>
  IFNDEF __UNICODE__
    DsCrackUnquotedMangledRdn equ <__imp_DsCrackUnquotedMangledRdnA>
  ENDIF

externdef __imp_DsCrackUnquotedMangledRdnW:PPROC
DsCrackUnquotedMangledRdnW equ <__imp_DsCrackUnquotedMangledRdnW>
  IFDEF __UNICODE__
    DsCrackUnquotedMangledRdn equ <__imp_DsCrackUnquotedMangledRdnW>
  ENDIF

externdef __imp_DsFreeDomainControllerInfoA:PPROC
DsFreeDomainControllerInfoA equ <__imp_DsFreeDomainControllerInfoA>
  IFNDEF __UNICODE__
    DsFreeDomainControllerInfo equ <__imp_DsFreeDomainControllerInfoA>
  ENDIF

externdef __imp_DsFreeDomainControllerInfoW:PPROC
DsFreeDomainControllerInfoW equ <__imp_DsFreeDomainControllerInfoW>
  IFDEF __UNICODE__
    DsFreeDomainControllerInfo equ <__imp_DsFreeDomainControllerInfoW>
  ENDIF

externdef __imp_DsFreeNameResultA:PPROC
DsFreeNameResultA equ <__imp_DsFreeNameResultA>
  IFNDEF __UNICODE__
    DsFreeNameResult equ <__imp_DsFreeNameResultA>
  ENDIF

externdef __imp_DsFreeNameResultW:PPROC
DsFreeNameResultW equ <__imp_DsFreeNameResultW>
  IFDEF __UNICODE__
    DsFreeNameResult equ <__imp_DsFreeNameResultW>
  ENDIF

externdef __imp_DsFreePasswordCredentials:PPROC
DsFreePasswordCredentials equ <__imp_DsFreePasswordCredentials>

externdef __imp_DsFreeSchemaGuidMapA:PPROC
DsFreeSchemaGuidMapA equ <__imp_DsFreeSchemaGuidMapA>
  IFNDEF __UNICODE__
    DsFreeSchemaGuidMap equ <__imp_DsFreeSchemaGuidMapA>
  ENDIF

externdef __imp_DsFreeSchemaGuidMapW:PPROC
DsFreeSchemaGuidMapW equ <__imp_DsFreeSchemaGuidMapW>
  IFDEF __UNICODE__
    DsFreeSchemaGuidMap equ <__imp_DsFreeSchemaGuidMapW>
  ENDIF

externdef __imp_DsFreeSpnArrayA:PPROC
DsFreeSpnArrayA equ <__imp_DsFreeSpnArrayA>
  IFNDEF __UNICODE__
    DsFreeSpnArray equ <__imp_DsFreeSpnArrayA>
  ENDIF

externdef __imp_DsFreeSpnArrayW:PPROC
DsFreeSpnArrayW equ <__imp_DsFreeSpnArrayW>
  IFDEF __UNICODE__
    DsFreeSpnArray equ <__imp_DsFreeSpnArrayW>
  ENDIF

externdef __imp_DsGetDomainControllerInfoA:PPROC
DsGetDomainControllerInfoA equ <__imp_DsGetDomainControllerInfoA>
  IFNDEF __UNICODE__
    DsGetDomainControllerInfo equ <__imp_DsGetDomainControllerInfoA>
  ENDIF

externdef __imp_DsGetDomainControllerInfoW:PPROC
DsGetDomainControllerInfoW equ <__imp_DsGetDomainControllerInfoW>
  IFDEF __UNICODE__
    DsGetDomainControllerInfo equ <__imp_DsGetDomainControllerInfoW>
  ENDIF

externdef __imp_DsGetRdnW:PPROC
DsGetRdnW equ <__imp_DsGetRdnW>
  IFDEF __UNICODE__
    DsGetRdn equ <__imp_DsGetRdnW>
  ENDIF

externdef __imp_DsGetSpnA:PPROC
DsGetSpnA equ <__imp_DsGetSpnA>
  IFNDEF __UNICODE__
    DsGetSpn equ <__imp_DsGetSpnA>
  ENDIF

externdef __imp_DsGetSpnW:PPROC
DsGetSpnW equ <__imp_DsGetSpnW>
  IFDEF __UNICODE__
    DsGetSpn equ <__imp_DsGetSpnW>
  ENDIF

externdef __imp_DsInheritSecurityIdentityA:PPROC
DsInheritSecurityIdentityA equ <__imp_DsInheritSecurityIdentityA>
  IFNDEF __UNICODE__
    DsInheritSecurityIdentity equ <__imp_DsInheritSecurityIdentityA>
  ENDIF

externdef __imp_DsInheritSecurityIdentityW:PPROC
DsInheritSecurityIdentityW equ <__imp_DsInheritSecurityIdentityW>
  IFDEF __UNICODE__
    DsInheritSecurityIdentity equ <__imp_DsInheritSecurityIdentityW>
  ENDIF

externdef __imp_DsIsMangledDnA:PPROC
DsIsMangledDnA equ <__imp_DsIsMangledDnA>
  IFNDEF __UNICODE__
    DsIsMangledDn equ <__imp_DsIsMangledDnA>
  ENDIF

externdef __imp_DsIsMangledDnW:PPROC
DsIsMangledDnW equ <__imp_DsIsMangledDnW>
  IFDEF __UNICODE__
    DsIsMangledDn equ <__imp_DsIsMangledDnW>
  ENDIF

externdef __imp_DsIsMangledRdnValueA:PPROC
DsIsMangledRdnValueA equ <__imp_DsIsMangledRdnValueA>
  IFNDEF __UNICODE__
    DsIsMangledRdnValue equ <__imp_DsIsMangledRdnValueA>
  ENDIF

externdef __imp_DsIsMangledRdnValueW:PPROC
DsIsMangledRdnValueW equ <__imp_DsIsMangledRdnValueW>
  IFDEF __UNICODE__
    DsIsMangledRdnValue equ <__imp_DsIsMangledRdnValueW>
  ENDIF

externdef __imp_DsListDomainsInSiteA:PPROC
DsListDomainsInSiteA equ <__imp_DsListDomainsInSiteA>
  IFNDEF __UNICODE__
    DsListDomainsInSite equ <__imp_DsListDomainsInSiteA>
  ENDIF

externdef __imp_DsListDomainsInSiteW:PPROC
DsListDomainsInSiteW equ <__imp_DsListDomainsInSiteW>
  IFDEF __UNICODE__
    DsListDomainsInSite equ <__imp_DsListDomainsInSiteW>
  ENDIF

externdef __imp_DsListInfoForServerA:PPROC
DsListInfoForServerA equ <__imp_DsListInfoForServerA>
  IFNDEF __UNICODE__
    DsListInfoForServer equ <__imp_DsListInfoForServerA>
  ENDIF

externdef __imp_DsListInfoForServerW:PPROC
DsListInfoForServerW equ <__imp_DsListInfoForServerW>
  IFDEF __UNICODE__
    DsListInfoForServer equ <__imp_DsListInfoForServerW>
  ENDIF

externdef __imp_DsListRolesA:PPROC
DsListRolesA equ <__imp_DsListRolesA>
  IFNDEF __UNICODE__
    DsListRoles equ <__imp_DsListRolesA>
  ENDIF

externdef __imp_DsListRolesW:PPROC
DsListRolesW equ <__imp_DsListRolesW>
  IFDEF __UNICODE__
    DsListRoles equ <__imp_DsListRolesW>
  ENDIF

externdef __imp_DsListServersForDomainInSiteA:PPROC
DsListServersForDomainInSiteA equ <__imp_DsListServersForDomainInSiteA>
  IFNDEF __UNICODE__
    DsListServersForDomainInSite equ <__imp_DsListServersForDomainInSiteA>
  ENDIF

externdef __imp_DsListServersForDomainInSiteW:PPROC
DsListServersForDomainInSiteW equ <__imp_DsListServersForDomainInSiteW>
  IFDEF __UNICODE__
    DsListServersForDomainInSite equ <__imp_DsListServersForDomainInSiteW>
  ENDIF

externdef __imp_DsListServersInSiteA:PPROC
DsListServersInSiteA equ <__imp_DsListServersInSiteA>
  IFNDEF __UNICODE__
    DsListServersInSite equ <__imp_DsListServersInSiteA>
  ENDIF

externdef __imp_DsListServersInSiteW:PPROC
DsListServersInSiteW equ <__imp_DsListServersInSiteW>
  IFDEF __UNICODE__
    DsListServersInSite equ <__imp_DsListServersInSiteW>
  ENDIF

externdef __imp_DsListSitesA:PPROC
DsListSitesA equ <__imp_DsListSitesA>
  IFNDEF __UNICODE__
    DsListSites equ <__imp_DsListSitesA>
  ENDIF

externdef __imp_DsListSitesW:PPROC
DsListSitesW equ <__imp_DsListSitesW>
  IFDEF __UNICODE__
    DsListSites equ <__imp_DsListSitesW>
  ENDIF

externdef __imp_DsLogEntry:PPROC
DsLogEntry equ <__imp_DsLogEntry>

externdef __imp_DsMakePasswordCredentialsA:PPROC
DsMakePasswordCredentialsA equ <__imp_DsMakePasswordCredentialsA>
  IFNDEF __UNICODE__
    DsMakePasswordCredentials equ <__imp_DsMakePasswordCredentialsA>
  ENDIF

externdef __imp_DsMakePasswordCredentialsW:PPROC
DsMakePasswordCredentialsW equ <__imp_DsMakePasswordCredentialsW>
  IFDEF __UNICODE__
    DsMakePasswordCredentials equ <__imp_DsMakePasswordCredentialsW>
  ENDIF

externdef __imp_DsMakeSpnA:PPROC
DsMakeSpnA equ <__imp_DsMakeSpnA>
  IFNDEF __UNICODE__
    DsMakeSpn equ <__imp_DsMakeSpnA>
  ENDIF

externdef __imp_DsMakeSpnW:PPROC
DsMakeSpnW equ <__imp_DsMakeSpnW>
  IFDEF __UNICODE__
    DsMakeSpn equ <__imp_DsMakeSpnW>
  ENDIF

externdef __imp_DsMapSchemaGuidsA:PPROC
DsMapSchemaGuidsA equ <__imp_DsMapSchemaGuidsA>
  IFNDEF __UNICODE__
    DsMapSchemaGuids equ <__imp_DsMapSchemaGuidsA>
  ENDIF

externdef __imp_DsMapSchemaGuidsW:PPROC
DsMapSchemaGuidsW equ <__imp_DsMapSchemaGuidsW>
  IFDEF __UNICODE__
    DsMapSchemaGuids equ <__imp_DsMapSchemaGuidsW>
  ENDIF

externdef __imp_DsQuerySitesByCostA:PPROC
DsQuerySitesByCostA equ <__imp_DsQuerySitesByCostA>
  IFNDEF __UNICODE__
    DsQuerySitesByCost equ <__imp_DsQuerySitesByCostA>
  ENDIF

externdef __imp_DsQuerySitesByCostW:PPROC
DsQuerySitesByCostW equ <__imp_DsQuerySitesByCostW>
  IFDEF __UNICODE__
    DsQuerySitesByCost equ <__imp_DsQuerySitesByCostW>
  ENDIF

externdef __imp_DsQuerySitesFree:PPROC
DsQuerySitesFree equ <__imp_DsQuerySitesFree>

externdef __imp_DsQuoteRdnValueA:PPROC
DsQuoteRdnValueA equ <__imp_DsQuoteRdnValueA>
  IFNDEF __UNICODE__
    DsQuoteRdnValue equ <__imp_DsQuoteRdnValueA>
  ENDIF

externdef __imp_DsQuoteRdnValueW:PPROC
DsQuoteRdnValueW equ <__imp_DsQuoteRdnValueW>
  IFDEF __UNICODE__
    DsQuoteRdnValue equ <__imp_DsQuoteRdnValueW>
  ENDIF

externdef __imp_DsRemoveDsDomainA:PPROC
DsRemoveDsDomainA equ <__imp_DsRemoveDsDomainA>
  IFNDEF __UNICODE__
    DsRemoveDsDomain equ <__imp_DsRemoveDsDomainA>
  ENDIF

externdef __imp_DsRemoveDsDomainW:PPROC
DsRemoveDsDomainW equ <__imp_DsRemoveDsDomainW>
  IFDEF __UNICODE__
    DsRemoveDsDomain equ <__imp_DsRemoveDsDomainW>
  ENDIF

externdef __imp_DsRemoveDsServerA:PPROC
DsRemoveDsServerA equ <__imp_DsRemoveDsServerA>
  IFNDEF __UNICODE__
    DsRemoveDsServer equ <__imp_DsRemoveDsServerA>
  ENDIF

externdef __imp_DsRemoveDsServerW:PPROC
DsRemoveDsServerW equ <__imp_DsRemoveDsServerW>
  IFDEF __UNICODE__
    DsRemoveDsServer equ <__imp_DsRemoveDsServerW>
  ENDIF

externdef __imp_DsReplicaAddA:PPROC
DsReplicaAddA equ <__imp_DsReplicaAddA>
  IFNDEF __UNICODE__
    DsReplicaAdd equ <__imp_DsReplicaAddA>
  ENDIF

externdef __imp_DsReplicaAddW:PPROC
DsReplicaAddW equ <__imp_DsReplicaAddW>
  IFDEF __UNICODE__
    DsReplicaAdd equ <__imp_DsReplicaAddW>
  ENDIF

externdef __imp_DsReplicaConsistencyCheck:PPROC
DsReplicaConsistencyCheck equ <__imp_DsReplicaConsistencyCheck>

externdef __imp_DsReplicaDelA:PPROC
DsReplicaDelA equ <__imp_DsReplicaDelA>
  IFNDEF __UNICODE__
    DsReplicaDel equ <__imp_DsReplicaDelA>
  ENDIF

externdef __imp_DsReplicaDelW:PPROC
DsReplicaDelW equ <__imp_DsReplicaDelW>
  IFDEF __UNICODE__
    DsReplicaDel equ <__imp_DsReplicaDelW>
  ENDIF

externdef __imp_DsReplicaFreeInfo:PPROC
DsReplicaFreeInfo equ <__imp_DsReplicaFreeInfo>

externdef __imp_DsReplicaGetInfo2W:PPROC
DsReplicaGetInfo2W equ <__imp_DsReplicaGetInfo2W>
  IFDEF __UNICODE__
    DsReplicaGetInfo2 equ <__imp_DsReplicaGetInfo2W>
  ENDIF

externdef __imp_DsReplicaGetInfoW:PPROC
DsReplicaGetInfoW equ <__imp_DsReplicaGetInfoW>
  IFDEF __UNICODE__
    DsReplicaGetInfo equ <__imp_DsReplicaGetInfoW>
  ENDIF

externdef __imp_DsReplicaModifyA:PPROC
DsReplicaModifyA equ <__imp_DsReplicaModifyA>
  IFNDEF __UNICODE__
    DsReplicaModify equ <__imp_DsReplicaModifyA>
  ENDIF

externdef __imp_DsReplicaModifyW:PPROC
DsReplicaModifyW equ <__imp_DsReplicaModifyW>
  IFDEF __UNICODE__
    DsReplicaModify equ <__imp_DsReplicaModifyW>
  ENDIF

externdef __imp_DsReplicaSyncA:PPROC
DsReplicaSyncA equ <__imp_DsReplicaSyncA>
  IFNDEF __UNICODE__
    DsReplicaSync equ <__imp_DsReplicaSyncA>
  ENDIF

externdef __imp_DsReplicaSyncAllA:PPROC
DsReplicaSyncAllA equ <__imp_DsReplicaSyncAllA>
  IFNDEF __UNICODE__
    DsReplicaSyncAll equ <__imp_DsReplicaSyncAllA>
  ENDIF

externdef __imp_DsReplicaSyncAllW:PPROC
DsReplicaSyncAllW equ <__imp_DsReplicaSyncAllW>
  IFDEF __UNICODE__
    DsReplicaSyncAll equ <__imp_DsReplicaSyncAllW>
  ENDIF

externdef __imp_DsReplicaSyncW:PPROC
DsReplicaSyncW equ <__imp_DsReplicaSyncW>
  IFDEF __UNICODE__
    DsReplicaSync equ <__imp_DsReplicaSyncW>
  ENDIF

externdef __imp_DsReplicaUpdateRefsA:PPROC
DsReplicaUpdateRefsA equ <__imp_DsReplicaUpdateRefsA>
  IFNDEF __UNICODE__
    DsReplicaUpdateRefs equ <__imp_DsReplicaUpdateRefsA>
  ENDIF

externdef __imp_DsReplicaUpdateRefsW:PPROC
DsReplicaUpdateRefsW equ <__imp_DsReplicaUpdateRefsW>
  IFDEF __UNICODE__
    DsReplicaUpdateRefs equ <__imp_DsReplicaUpdateRefsW>
  ENDIF

externdef __imp_DsReplicaVerifyObjectsA:PPROC
DsReplicaVerifyObjectsA equ <__imp_DsReplicaVerifyObjectsA>
  IFNDEF __UNICODE__
    DsReplicaVerifyObjects equ <__imp_DsReplicaVerifyObjectsA>
  ENDIF

externdef __imp_DsReplicaVerifyObjectsW:PPROC
DsReplicaVerifyObjectsW equ <__imp_DsReplicaVerifyObjectsW>
  IFDEF __UNICODE__
    DsReplicaVerifyObjects equ <__imp_DsReplicaVerifyObjectsW>
  ENDIF

externdef __imp_DsServerRegisterSpnA:PPROC
DsServerRegisterSpnA equ <__imp_DsServerRegisterSpnA>
  IFNDEF __UNICODE__
    DsServerRegisterSpn equ <__imp_DsServerRegisterSpnA>
  ENDIF

externdef __imp_DsServerRegisterSpnW:PPROC
DsServerRegisterSpnW equ <__imp_DsServerRegisterSpnW>
  IFDEF __UNICODE__
    DsServerRegisterSpn equ <__imp_DsServerRegisterSpnW>
  ENDIF

externdef __imp_DsUnBindA:PPROC
DsUnBindA equ <__imp_DsUnBindA>
  IFNDEF __UNICODE__
    DsUnBind equ <__imp_DsUnBindA>
  ENDIF

externdef __imp_DsUnBindW:PPROC
DsUnBindW equ <__imp_DsUnBindW>
  IFDEF __UNICODE__
    DsUnBind equ <__imp_DsUnBindW>
  ENDIF

externdef __imp_DsUnquoteRdnValueA:PPROC
DsUnquoteRdnValueA equ <__imp_DsUnquoteRdnValueA>
  IFNDEF __UNICODE__
    DsUnquoteRdnValue equ <__imp_DsUnquoteRdnValueA>
  ENDIF

externdef __imp_DsUnquoteRdnValueW:PPROC
DsUnquoteRdnValueW equ <__imp_DsUnquoteRdnValueW>
  IFDEF __UNICODE__
    DsUnquoteRdnValue equ <__imp_DsUnquoteRdnValueW>
  ENDIF

externdef __imp_DsWriteAccountSpnA:PPROC
DsWriteAccountSpnA equ <__imp_DsWriteAccountSpnA>
  IFNDEF __UNICODE__
    DsWriteAccountSpn equ <__imp_DsWriteAccountSpnA>
  ENDIF

externdef __imp_DsWriteAccountSpnW:PPROC
DsWriteAccountSpnW equ <__imp_DsWriteAccountSpnW>
  IFDEF __UNICODE__
    DsWriteAccountSpn equ <__imp_DsWriteAccountSpnW>
  ENDIF

externdef __imp_DsaopBind:PPROC
DsaopBind equ <__imp_DsaopBind>

externdef __imp_DsaopBindWithCred:PPROC
DsaopBindWithCred equ <__imp_DsaopBindWithCred>

externdef __imp_DsaopBindWithSpn:PPROC
DsaopBindWithSpn equ <__imp_DsaopBindWithSpn>

externdef __imp_DsaopExecuteScript:PPROC
DsaopExecuteScript equ <__imp_DsaopExecuteScript>

externdef __imp_DsaopPrepareScript:PPROC
DsaopPrepareScript equ <__imp_DsaopPrepareScript>

externdef __imp_DsaopUnBind:PPROC
DsaopUnBind equ <__imp_DsaopUnBind>
