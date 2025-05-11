externdef __imp_I_GetDefaultEntrySyntax:PPROC
I_GetDefaultEntrySyntax equ <__imp_I_GetDefaultEntrySyntax>

externdef __imp_I_RpcNsGetBuffer:PPROC
I_RpcNsGetBuffer equ <__imp_I_RpcNsGetBuffer>

externdef __imp_I_RpcNsNegotiateTransferSyntax:PPROC
I_RpcNsNegotiateTransferSyntax equ <__imp_I_RpcNsNegotiateTransferSyntax>

externdef __imp_I_RpcNsRaiseException:PPROC
I_RpcNsRaiseException equ <__imp_I_RpcNsRaiseException>

externdef __imp_I_RpcNsSendReceive:PPROC
I_RpcNsSendReceive equ <__imp_I_RpcNsSendReceive>

externdef __imp_I_RpcReBindBuffer:PPROC
I_RpcReBindBuffer equ <__imp_I_RpcReBindBuffer>

externdef __imp_RpcIfIdVectorFree:PPROC
RpcIfIdVectorFree equ <__imp_RpcIfIdVectorFree>

externdef __imp_RpcNsBindingExportA:PPROC
RpcNsBindingExportA equ <__imp_RpcNsBindingExportA>
  IFNDEF __UNICODE__
    RpcNsBindingExport equ <__imp_RpcNsBindingExportA>
  ENDIF

externdef __imp_RpcNsBindingExportPnPA:PPROC
RpcNsBindingExportPnPA equ <__imp_RpcNsBindingExportPnPA>
  IFNDEF __UNICODE__
    RpcNsBindingExportPnP equ <__imp_RpcNsBindingExportPnPA>
  ENDIF

externdef __imp_RpcNsBindingExportPnPW:PPROC
RpcNsBindingExportPnPW equ <__imp_RpcNsBindingExportPnPW>
  IFDEF __UNICODE__
    RpcNsBindingExportPnP equ <__imp_RpcNsBindingExportPnPW>
  ENDIF

externdef __imp_RpcNsBindingExportW:PPROC
RpcNsBindingExportW equ <__imp_RpcNsBindingExportW>
  IFDEF __UNICODE__
    RpcNsBindingExport equ <__imp_RpcNsBindingExportW>
  ENDIF

externdef __imp_RpcNsBindingImportBeginA:PPROC
RpcNsBindingImportBeginA equ <__imp_RpcNsBindingImportBeginA>
  IFNDEF __UNICODE__
    RpcNsBindingImportBegin equ <__imp_RpcNsBindingImportBeginA>
  ENDIF

externdef __imp_RpcNsBindingImportBeginW:PPROC
RpcNsBindingImportBeginW equ <__imp_RpcNsBindingImportBeginW>
  IFDEF __UNICODE__
    RpcNsBindingImportBegin equ <__imp_RpcNsBindingImportBeginW>
  ENDIF

externdef __imp_RpcNsBindingImportDone:PPROC
RpcNsBindingImportDone equ <__imp_RpcNsBindingImportDone>

externdef __imp_RpcNsBindingImportNext:PPROC
RpcNsBindingImportNext equ <__imp_RpcNsBindingImportNext>

externdef __imp_RpcNsBindingLookupBeginA:PPROC
RpcNsBindingLookupBeginA equ <__imp_RpcNsBindingLookupBeginA>
  IFNDEF __UNICODE__
    RpcNsBindingLookupBegin equ <__imp_RpcNsBindingLookupBeginA>
  ENDIF

externdef __imp_RpcNsBindingLookupBeginW:PPROC
RpcNsBindingLookupBeginW equ <__imp_RpcNsBindingLookupBeginW>
  IFDEF __UNICODE__
    RpcNsBindingLookupBegin equ <__imp_RpcNsBindingLookupBeginW>
  ENDIF

externdef __imp_RpcNsBindingLookupDone:PPROC
RpcNsBindingLookupDone equ <__imp_RpcNsBindingLookupDone>

externdef __imp_RpcNsBindingLookupNext:PPROC
RpcNsBindingLookupNext equ <__imp_RpcNsBindingLookupNext>

externdef __imp_RpcNsBindingSelect:PPROC
RpcNsBindingSelect equ <__imp_RpcNsBindingSelect>

externdef __imp_RpcNsBindingUnexportA:PPROC
RpcNsBindingUnexportA equ <__imp_RpcNsBindingUnexportA>
  IFNDEF __UNICODE__
    RpcNsBindingUnexport equ <__imp_RpcNsBindingUnexportA>
  ENDIF

externdef __imp_RpcNsBindingUnexportPnPA:PPROC
RpcNsBindingUnexportPnPA equ <__imp_RpcNsBindingUnexportPnPA>
  IFNDEF __UNICODE__
    RpcNsBindingUnexportPnP equ <__imp_RpcNsBindingUnexportPnPA>
  ENDIF

externdef __imp_RpcNsBindingUnexportPnPW:PPROC
RpcNsBindingUnexportPnPW equ <__imp_RpcNsBindingUnexportPnPW>
  IFDEF __UNICODE__
    RpcNsBindingUnexportPnP equ <__imp_RpcNsBindingUnexportPnPW>
  ENDIF

externdef __imp_RpcNsBindingUnexportW:PPROC
RpcNsBindingUnexportW equ <__imp_RpcNsBindingUnexportW>
  IFDEF __UNICODE__
    RpcNsBindingUnexport equ <__imp_RpcNsBindingUnexportW>
  ENDIF

externdef __imp_RpcNsEntryExpandNameA:PPROC
RpcNsEntryExpandNameA equ <__imp_RpcNsEntryExpandNameA>
  IFNDEF __UNICODE__
    RpcNsEntryExpandName equ <__imp_RpcNsEntryExpandNameA>
  ENDIF

externdef __imp_RpcNsEntryExpandNameW:PPROC
RpcNsEntryExpandNameW equ <__imp_RpcNsEntryExpandNameW>
  IFDEF __UNICODE__
    RpcNsEntryExpandName equ <__imp_RpcNsEntryExpandNameW>
  ENDIF

externdef __imp_RpcNsEntryObjectInqBeginA:PPROC
RpcNsEntryObjectInqBeginA equ <__imp_RpcNsEntryObjectInqBeginA>
  IFNDEF __UNICODE__
    RpcNsEntryObjectInqBegin equ <__imp_RpcNsEntryObjectInqBeginA>
  ENDIF

externdef __imp_RpcNsEntryObjectInqBeginW:PPROC
RpcNsEntryObjectInqBeginW equ <__imp_RpcNsEntryObjectInqBeginW>
  IFDEF __UNICODE__
    RpcNsEntryObjectInqBegin equ <__imp_RpcNsEntryObjectInqBeginW>
  ENDIF

externdef __imp_RpcNsEntryObjectInqDone:PPROC
RpcNsEntryObjectInqDone equ <__imp_RpcNsEntryObjectInqDone>

externdef __imp_RpcNsEntryObjectInqNext:PPROC
RpcNsEntryObjectInqNext equ <__imp_RpcNsEntryObjectInqNext>

externdef __imp_RpcNsGroupDeleteA:PPROC
RpcNsGroupDeleteA equ <__imp_RpcNsGroupDeleteA>
  IFNDEF __UNICODE__
    RpcNsGroupDelete equ <__imp_RpcNsGroupDeleteA>
  ENDIF

externdef __imp_RpcNsGroupDeleteW:PPROC
RpcNsGroupDeleteW equ <__imp_RpcNsGroupDeleteW>
  IFDEF __UNICODE__
    RpcNsGroupDelete equ <__imp_RpcNsGroupDeleteW>
  ENDIF

externdef __imp_RpcNsGroupMbrAddA:PPROC
RpcNsGroupMbrAddA equ <__imp_RpcNsGroupMbrAddA>
  IFNDEF __UNICODE__
    RpcNsGroupMbrAdd equ <__imp_RpcNsGroupMbrAddA>
  ENDIF

externdef __imp_RpcNsGroupMbrAddW:PPROC
RpcNsGroupMbrAddW equ <__imp_RpcNsGroupMbrAddW>
  IFDEF __UNICODE__
    RpcNsGroupMbrAdd equ <__imp_RpcNsGroupMbrAddW>
  ENDIF

externdef __imp_RpcNsGroupMbrInqBeginA:PPROC
RpcNsGroupMbrInqBeginA equ <__imp_RpcNsGroupMbrInqBeginA>
  IFNDEF __UNICODE__
    RpcNsGroupMbrInqBegin equ <__imp_RpcNsGroupMbrInqBeginA>
  ENDIF

externdef __imp_RpcNsGroupMbrInqBeginW:PPROC
RpcNsGroupMbrInqBeginW equ <__imp_RpcNsGroupMbrInqBeginW>
  IFDEF __UNICODE__
    RpcNsGroupMbrInqBegin equ <__imp_RpcNsGroupMbrInqBeginW>
  ENDIF

externdef __imp_RpcNsGroupMbrInqDone:PPROC
RpcNsGroupMbrInqDone equ <__imp_RpcNsGroupMbrInqDone>

externdef __imp_RpcNsGroupMbrInqNextA:PPROC
RpcNsGroupMbrInqNextA equ <__imp_RpcNsGroupMbrInqNextA>
  IFNDEF __UNICODE__
    RpcNsGroupMbrInqNext equ <__imp_RpcNsGroupMbrInqNextA>
  ENDIF

externdef __imp_RpcNsGroupMbrInqNextW:PPROC
RpcNsGroupMbrInqNextW equ <__imp_RpcNsGroupMbrInqNextW>
  IFDEF __UNICODE__
    RpcNsGroupMbrInqNext equ <__imp_RpcNsGroupMbrInqNextW>
  ENDIF

externdef __imp_RpcNsGroupMbrRemoveA:PPROC
RpcNsGroupMbrRemoveA equ <__imp_RpcNsGroupMbrRemoveA>
  IFNDEF __UNICODE__
    RpcNsGroupMbrRemove equ <__imp_RpcNsGroupMbrRemoveA>
  ENDIF

externdef __imp_RpcNsGroupMbrRemoveW:PPROC
RpcNsGroupMbrRemoveW equ <__imp_RpcNsGroupMbrRemoveW>
  IFDEF __UNICODE__
    RpcNsGroupMbrRemove equ <__imp_RpcNsGroupMbrRemoveW>
  ENDIF

externdef __imp_RpcNsMgmtBindingUnexportA:PPROC
RpcNsMgmtBindingUnexportA equ <__imp_RpcNsMgmtBindingUnexportA>
  IFNDEF __UNICODE__
    RpcNsMgmtBindingUnexport equ <__imp_RpcNsMgmtBindingUnexportA>
  ENDIF

externdef __imp_RpcNsMgmtBindingUnexportW:PPROC
RpcNsMgmtBindingUnexportW equ <__imp_RpcNsMgmtBindingUnexportW>
  IFDEF __UNICODE__
    RpcNsMgmtBindingUnexport equ <__imp_RpcNsMgmtBindingUnexportW>
  ENDIF

externdef __imp_RpcNsMgmtEntryCreateA:PPROC
RpcNsMgmtEntryCreateA equ <__imp_RpcNsMgmtEntryCreateA>
  IFNDEF __UNICODE__
    RpcNsMgmtEntryCreate equ <__imp_RpcNsMgmtEntryCreateA>
  ENDIF

externdef __imp_RpcNsMgmtEntryCreateW:PPROC
RpcNsMgmtEntryCreateW equ <__imp_RpcNsMgmtEntryCreateW>
  IFDEF __UNICODE__
    RpcNsMgmtEntryCreate equ <__imp_RpcNsMgmtEntryCreateW>
  ENDIF

externdef __imp_RpcNsMgmtEntryDeleteA:PPROC
RpcNsMgmtEntryDeleteA equ <__imp_RpcNsMgmtEntryDeleteA>
  IFNDEF __UNICODE__
    RpcNsMgmtEntryDelete equ <__imp_RpcNsMgmtEntryDeleteA>
  ENDIF

externdef __imp_RpcNsMgmtEntryDeleteW:PPROC
RpcNsMgmtEntryDeleteW equ <__imp_RpcNsMgmtEntryDeleteW>
  IFDEF __UNICODE__
    RpcNsMgmtEntryDelete equ <__imp_RpcNsMgmtEntryDeleteW>
  ENDIF

externdef __imp_RpcNsMgmtEntryInqIfIdsA:PPROC
RpcNsMgmtEntryInqIfIdsA equ <__imp_RpcNsMgmtEntryInqIfIdsA>
  IFNDEF __UNICODE__
    RpcNsMgmtEntryInqIfIds equ <__imp_RpcNsMgmtEntryInqIfIdsA>
  ENDIF

externdef __imp_RpcNsMgmtEntryInqIfIdsW:PPROC
RpcNsMgmtEntryInqIfIdsW equ <__imp_RpcNsMgmtEntryInqIfIdsW>
  IFDEF __UNICODE__
    RpcNsMgmtEntryInqIfIds equ <__imp_RpcNsMgmtEntryInqIfIdsW>
  ENDIF

externdef __imp_RpcNsMgmtHandleSetExpAge:PPROC
RpcNsMgmtHandleSetExpAge equ <__imp_RpcNsMgmtHandleSetExpAge>

externdef __imp_RpcNsMgmtInqExpAge:PPROC
RpcNsMgmtInqExpAge equ <__imp_RpcNsMgmtInqExpAge>

externdef __imp_RpcNsMgmtSetExpAge:PPROC
RpcNsMgmtSetExpAge equ <__imp_RpcNsMgmtSetExpAge>

externdef __imp_RpcNsProfileDeleteA:PPROC
RpcNsProfileDeleteA equ <__imp_RpcNsProfileDeleteA>
  IFNDEF __UNICODE__
    RpcNsProfileDelete equ <__imp_RpcNsProfileDeleteA>
  ENDIF

externdef __imp_RpcNsProfileDeleteW:PPROC
RpcNsProfileDeleteW equ <__imp_RpcNsProfileDeleteW>
  IFDEF __UNICODE__
    RpcNsProfileDelete equ <__imp_RpcNsProfileDeleteW>
  ENDIF

externdef __imp_RpcNsProfileEltAddA:PPROC
RpcNsProfileEltAddA equ <__imp_RpcNsProfileEltAddA>
  IFNDEF __UNICODE__
    RpcNsProfileEltAdd equ <__imp_RpcNsProfileEltAddA>
  ENDIF

externdef __imp_RpcNsProfileEltAddW:PPROC
RpcNsProfileEltAddW equ <__imp_RpcNsProfileEltAddW>
  IFDEF __UNICODE__
    RpcNsProfileEltAdd equ <__imp_RpcNsProfileEltAddW>
  ENDIF

externdef __imp_RpcNsProfileEltInqBeginA:PPROC
RpcNsProfileEltInqBeginA equ <__imp_RpcNsProfileEltInqBeginA>
  IFNDEF __UNICODE__
    RpcNsProfileEltInqBegin equ <__imp_RpcNsProfileEltInqBeginA>
  ENDIF

externdef __imp_RpcNsProfileEltInqBeginW:PPROC
RpcNsProfileEltInqBeginW equ <__imp_RpcNsProfileEltInqBeginW>
  IFDEF __UNICODE__
    RpcNsProfileEltInqBegin equ <__imp_RpcNsProfileEltInqBeginW>
  ENDIF

externdef __imp_RpcNsProfileEltInqDone:PPROC
RpcNsProfileEltInqDone equ <__imp_RpcNsProfileEltInqDone>

externdef __imp_RpcNsProfileEltInqNextA:PPROC
RpcNsProfileEltInqNextA equ <__imp_RpcNsProfileEltInqNextA>
  IFNDEF __UNICODE__
    RpcNsProfileEltInqNext equ <__imp_RpcNsProfileEltInqNextA>
  ENDIF

externdef __imp_RpcNsProfileEltInqNextW:PPROC
RpcNsProfileEltInqNextW equ <__imp_RpcNsProfileEltInqNextW>
  IFDEF __UNICODE__
    RpcNsProfileEltInqNext equ <__imp_RpcNsProfileEltInqNextW>
  ENDIF

externdef __imp_RpcNsProfileEltRemoveA:PPROC
RpcNsProfileEltRemoveA equ <__imp_RpcNsProfileEltRemoveA>
  IFNDEF __UNICODE__
    RpcNsProfileEltRemove equ <__imp_RpcNsProfileEltRemoveA>
  ENDIF

externdef __imp_RpcNsProfileEltRemoveW:PPROC
RpcNsProfileEltRemoveW equ <__imp_RpcNsProfileEltRemoveW>
  IFDEF __UNICODE__
    RpcNsProfileEltRemove equ <__imp_RpcNsProfileEltRemoveW>
  ENDIF
