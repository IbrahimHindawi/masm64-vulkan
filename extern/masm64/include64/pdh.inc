externdef __imp_DllInstall:PPROC
DllInstall equ <__imp_DllInstall>

externdef __imp_PdhAdd009CounterA:PPROC
PdhAdd009CounterA equ <__imp_PdhAdd009CounterA>
  IFNDEF __UNICODE__
    PdhAdd009Counter equ <__imp_PdhAdd009CounterA>
  ENDIF

externdef __imp_PdhAdd009CounterW:PPROC
PdhAdd009CounterW equ <__imp_PdhAdd009CounterW>
  IFDEF __UNICODE__
    PdhAdd009Counter equ <__imp_PdhAdd009CounterW>
  ENDIF

externdef __imp_PdhAddCounterA:PPROC
PdhAddCounterA equ <__imp_PdhAddCounterA>
  IFNDEF __UNICODE__
    PdhAddCounter equ <__imp_PdhAddCounterA>
  ENDIF

externdef __imp_PdhAddCounterW:PPROC
PdhAddCounterW equ <__imp_PdhAddCounterW>
  IFDEF __UNICODE__
    PdhAddCounter equ <__imp_PdhAddCounterW>
  ENDIF

externdef __imp_PdhBindInputDataSourceA:PPROC
PdhBindInputDataSourceA equ <__imp_PdhBindInputDataSourceA>
  IFNDEF __UNICODE__
    PdhBindInputDataSource equ <__imp_PdhBindInputDataSourceA>
  ENDIF

externdef __imp_PdhBindInputDataSourceW:PPROC
PdhBindInputDataSourceW equ <__imp_PdhBindInputDataSourceW>
  IFDEF __UNICODE__
    PdhBindInputDataSource equ <__imp_PdhBindInputDataSourceW>
  ENDIF

externdef __imp_PdhBrowseCountersA:PPROC
PdhBrowseCountersA equ <__imp_PdhBrowseCountersA>
  IFNDEF __UNICODE__
    PdhBrowseCounters equ <__imp_PdhBrowseCountersA>
  ENDIF

externdef __imp_PdhBrowseCountersHA:PPROC
PdhBrowseCountersHA equ <__imp_PdhBrowseCountersHA>
  IFNDEF __UNICODE__
    PdhBrowseCountersH equ <__imp_PdhBrowseCountersHA>
  ENDIF

externdef __imp_PdhBrowseCountersHW:PPROC
PdhBrowseCountersHW equ <__imp_PdhBrowseCountersHW>
  IFDEF __UNICODE__
    PdhBrowseCountersH equ <__imp_PdhBrowseCountersHW>
  ENDIF

externdef __imp_PdhBrowseCountersW:PPROC
PdhBrowseCountersW equ <__imp_PdhBrowseCountersW>
  IFDEF __UNICODE__
    PdhBrowseCounters equ <__imp_PdhBrowseCountersW>
  ENDIF

externdef __imp_PdhCalculateCounterFromRawValue:PPROC
PdhCalculateCounterFromRawValue equ <__imp_PdhCalculateCounterFromRawValue>

externdef __imp_PdhCloseLog:PPROC
PdhCloseLog equ <__imp_PdhCloseLog>

externdef __imp_PdhCloseQuery:PPROC
PdhCloseQuery equ <__imp_PdhCloseQuery>

externdef __imp_PdhCollectQueryData:PPROC
PdhCollectQueryData equ <__imp_PdhCollectQueryData>

externdef __imp_PdhCollectQueryDataEx:PPROC
PdhCollectQueryDataEx equ <__imp_PdhCollectQueryDataEx>

externdef __imp_PdhComputeCounterStatistics:PPROC
PdhComputeCounterStatistics equ <__imp_PdhComputeCounterStatistics>

externdef __imp_PdhConnectMachineA:PPROC
PdhConnectMachineA equ <__imp_PdhConnectMachineA>
  IFNDEF __UNICODE__
    PdhConnectMachine equ <__imp_PdhConnectMachineA>
  ENDIF

externdef __imp_PdhConnectMachineW:PPROC
PdhConnectMachineW equ <__imp_PdhConnectMachineW>
  IFDEF __UNICODE__
    PdhConnectMachine equ <__imp_PdhConnectMachineW>
  ENDIF

externdef __imp_PdhCreateSQLTablesA:PPROC
PdhCreateSQLTablesA equ <__imp_PdhCreateSQLTablesA>
  IFNDEF __UNICODE__
    PdhCreateSQLTables equ <__imp_PdhCreateSQLTablesA>
  ENDIF

externdef __imp_PdhCreateSQLTablesW:PPROC
PdhCreateSQLTablesW equ <__imp_PdhCreateSQLTablesW>
  IFDEF __UNICODE__
    PdhCreateSQLTables equ <__imp_PdhCreateSQLTablesW>
  ENDIF

externdef __imp_PdhEnumLogSetNamesA:PPROC
PdhEnumLogSetNamesA equ <__imp_PdhEnumLogSetNamesA>
  IFNDEF __UNICODE__
    PdhEnumLogSetNames equ <__imp_PdhEnumLogSetNamesA>
  ENDIF

externdef __imp_PdhEnumLogSetNamesW:PPROC
PdhEnumLogSetNamesW equ <__imp_PdhEnumLogSetNamesW>
  IFDEF __UNICODE__
    PdhEnumLogSetNames equ <__imp_PdhEnumLogSetNamesW>
  ENDIF

externdef __imp_PdhEnumMachinesA:PPROC
PdhEnumMachinesA equ <__imp_PdhEnumMachinesA>
  IFNDEF __UNICODE__
    PdhEnumMachines equ <__imp_PdhEnumMachinesA>
  ENDIF

externdef __imp_PdhEnumMachinesHA:PPROC
PdhEnumMachinesHA equ <__imp_PdhEnumMachinesHA>
  IFNDEF __UNICODE__
    PdhEnumMachinesH equ <__imp_PdhEnumMachinesHA>
  ENDIF

externdef __imp_PdhEnumMachinesHW:PPROC
PdhEnumMachinesHW equ <__imp_PdhEnumMachinesHW>
  IFDEF __UNICODE__
    PdhEnumMachinesH equ <__imp_PdhEnumMachinesHW>
  ENDIF

externdef __imp_PdhEnumMachinesW:PPROC
PdhEnumMachinesW equ <__imp_PdhEnumMachinesW>
  IFDEF __UNICODE__
    PdhEnumMachines equ <__imp_PdhEnumMachinesW>
  ENDIF

externdef __imp_PdhEnumObjectItemsA:PPROC
PdhEnumObjectItemsA equ <__imp_PdhEnumObjectItemsA>
  IFNDEF __UNICODE__
    PdhEnumObjectItems equ <__imp_PdhEnumObjectItemsA>
  ENDIF

externdef __imp_PdhEnumObjectItemsHA:PPROC
PdhEnumObjectItemsHA equ <__imp_PdhEnumObjectItemsHA>
  IFNDEF __UNICODE__
    PdhEnumObjectItemsH equ <__imp_PdhEnumObjectItemsHA>
  ENDIF

externdef __imp_PdhEnumObjectItemsHW:PPROC
PdhEnumObjectItemsHW equ <__imp_PdhEnumObjectItemsHW>
  IFDEF __UNICODE__
    PdhEnumObjectItemsH equ <__imp_PdhEnumObjectItemsHW>
  ENDIF

externdef __imp_PdhEnumObjectItemsW:PPROC
PdhEnumObjectItemsW equ <__imp_PdhEnumObjectItemsW>
  IFDEF __UNICODE__
    PdhEnumObjectItems equ <__imp_PdhEnumObjectItemsW>
  ENDIF

externdef __imp_PdhEnumObjectsA:PPROC
PdhEnumObjectsA equ <__imp_PdhEnumObjectsA>
  IFNDEF __UNICODE__
    PdhEnumObjects equ <__imp_PdhEnumObjectsA>
  ENDIF

externdef __imp_PdhEnumObjectsHA:PPROC
PdhEnumObjectsHA equ <__imp_PdhEnumObjectsHA>
  IFNDEF __UNICODE__
    PdhEnumObjectsH equ <__imp_PdhEnumObjectsHA>
  ENDIF

externdef __imp_PdhEnumObjectsHW:PPROC
PdhEnumObjectsHW equ <__imp_PdhEnumObjectsHW>
  IFDEF __UNICODE__
    PdhEnumObjectsH equ <__imp_PdhEnumObjectsHW>
  ENDIF

externdef __imp_PdhEnumObjectsW:PPROC
PdhEnumObjectsW equ <__imp_PdhEnumObjectsW>
  IFDEF __UNICODE__
    PdhEnumObjects equ <__imp_PdhEnumObjectsW>
  ENDIF

externdef __imp_PdhExpandCounterPathA:PPROC
PdhExpandCounterPathA equ <__imp_PdhExpandCounterPathA>
  IFNDEF __UNICODE__
    PdhExpandCounterPath equ <__imp_PdhExpandCounterPathA>
  ENDIF

externdef __imp_PdhExpandCounterPathW:PPROC
PdhExpandCounterPathW equ <__imp_PdhExpandCounterPathW>
  IFDEF __UNICODE__
    PdhExpandCounterPath equ <__imp_PdhExpandCounterPathW>
  ENDIF

externdef __imp_PdhExpandWildCardPathA:PPROC
PdhExpandWildCardPathA equ <__imp_PdhExpandWildCardPathA>
  IFNDEF __UNICODE__
    PdhExpandWildCardPath equ <__imp_PdhExpandWildCardPathA>
  ENDIF

externdef __imp_PdhExpandWildCardPathHA:PPROC
PdhExpandWildCardPathHA equ <__imp_PdhExpandWildCardPathHA>
  IFNDEF __UNICODE__
    PdhExpandWildCardPathH equ <__imp_PdhExpandWildCardPathHA>
  ENDIF

externdef __imp_PdhExpandWildCardPathHW:PPROC
PdhExpandWildCardPathHW equ <__imp_PdhExpandWildCardPathHW>
  IFDEF __UNICODE__
    PdhExpandWildCardPathH equ <__imp_PdhExpandWildCardPathHW>
  ENDIF

externdef __imp_PdhExpandWildCardPathW:PPROC
PdhExpandWildCardPathW equ <__imp_PdhExpandWildCardPathW>
  IFDEF __UNICODE__
    PdhExpandWildCardPath equ <__imp_PdhExpandWildCardPathW>
  ENDIF

externdef __imp_PdhFormatFromRawValue:PPROC
PdhFormatFromRawValue equ <__imp_PdhFormatFromRawValue>

externdef __imp_PdhGetCounterInfoA:PPROC
PdhGetCounterInfoA equ <__imp_PdhGetCounterInfoA>
  IFNDEF __UNICODE__
    PdhGetCounterInfo equ <__imp_PdhGetCounterInfoA>
  ENDIF

externdef __imp_PdhGetCounterInfoW:PPROC
PdhGetCounterInfoW equ <__imp_PdhGetCounterInfoW>
  IFDEF __UNICODE__
    PdhGetCounterInfo equ <__imp_PdhGetCounterInfoW>
  ENDIF

externdef __imp_PdhGetCounterTimeBase:PPROC
PdhGetCounterTimeBase equ <__imp_PdhGetCounterTimeBase>

externdef __imp_PdhGetDataSourceTimeRangeA:PPROC
PdhGetDataSourceTimeRangeA equ <__imp_PdhGetDataSourceTimeRangeA>
  IFNDEF __UNICODE__
    PdhGetDataSourceTimeRange equ <__imp_PdhGetDataSourceTimeRangeA>
  ENDIF

externdef __imp_PdhGetDataSourceTimeRangeH:PPROC
PdhGetDataSourceTimeRangeH equ <__imp_PdhGetDataSourceTimeRangeH>

externdef __imp_PdhGetDataSourceTimeRangeW:PPROC
PdhGetDataSourceTimeRangeW equ <__imp_PdhGetDataSourceTimeRangeW>
  IFDEF __UNICODE__
    PdhGetDataSourceTimeRange equ <__imp_PdhGetDataSourceTimeRangeW>
  ENDIF

externdef __imp_PdhGetDefaultPerfCounterA:PPROC
PdhGetDefaultPerfCounterA equ <__imp_PdhGetDefaultPerfCounterA>
  IFNDEF __UNICODE__
    PdhGetDefaultPerfCounter equ <__imp_PdhGetDefaultPerfCounterA>
  ENDIF

externdef __imp_PdhGetDefaultPerfCounterHA:PPROC
PdhGetDefaultPerfCounterHA equ <__imp_PdhGetDefaultPerfCounterHA>
  IFNDEF __UNICODE__
    PdhGetDefaultPerfCounterH equ <__imp_PdhGetDefaultPerfCounterHA>
  ENDIF

externdef __imp_PdhGetDefaultPerfCounterHW:PPROC
PdhGetDefaultPerfCounterHW equ <__imp_PdhGetDefaultPerfCounterHW>
  IFDEF __UNICODE__
    PdhGetDefaultPerfCounterH equ <__imp_PdhGetDefaultPerfCounterHW>
  ENDIF

externdef __imp_PdhGetDefaultPerfCounterW:PPROC
PdhGetDefaultPerfCounterW equ <__imp_PdhGetDefaultPerfCounterW>
  IFDEF __UNICODE__
    PdhGetDefaultPerfCounter equ <__imp_PdhGetDefaultPerfCounterW>
  ENDIF

externdef __imp_PdhGetDefaultPerfObjectA:PPROC
PdhGetDefaultPerfObjectA equ <__imp_PdhGetDefaultPerfObjectA>
  IFNDEF __UNICODE__
    PdhGetDefaultPerfObject equ <__imp_PdhGetDefaultPerfObjectA>
  ENDIF

externdef __imp_PdhGetDefaultPerfObjectHA:PPROC
PdhGetDefaultPerfObjectHA equ <__imp_PdhGetDefaultPerfObjectHA>
  IFNDEF __UNICODE__
    PdhGetDefaultPerfObjectH equ <__imp_PdhGetDefaultPerfObjectHA>
  ENDIF

externdef __imp_PdhGetDefaultPerfObjectHW:PPROC
PdhGetDefaultPerfObjectHW equ <__imp_PdhGetDefaultPerfObjectHW>
  IFDEF __UNICODE__
    PdhGetDefaultPerfObjectH equ <__imp_PdhGetDefaultPerfObjectHW>
  ENDIF

externdef __imp_PdhGetDefaultPerfObjectW:PPROC
PdhGetDefaultPerfObjectW equ <__imp_PdhGetDefaultPerfObjectW>
  IFDEF __UNICODE__
    PdhGetDefaultPerfObject equ <__imp_PdhGetDefaultPerfObjectW>
  ENDIF

externdef __imp_PdhGetDllVersion:PPROC
PdhGetDllVersion equ <__imp_PdhGetDllVersion>

externdef __imp_PdhGetFormattedCounterArrayA:PPROC
PdhGetFormattedCounterArrayA equ <__imp_PdhGetFormattedCounterArrayA>
  IFNDEF __UNICODE__
    PdhGetFormattedCounterArray equ <__imp_PdhGetFormattedCounterArrayA>
  ENDIF

externdef __imp_PdhGetFormattedCounterArrayW:PPROC
PdhGetFormattedCounterArrayW equ <__imp_PdhGetFormattedCounterArrayW>
  IFDEF __UNICODE__
    PdhGetFormattedCounterArray equ <__imp_PdhGetFormattedCounterArrayW>
  ENDIF

externdef __imp_PdhGetFormattedCounterValue:PPROC
PdhGetFormattedCounterValue equ <__imp_PdhGetFormattedCounterValue>

externdef __imp_PdhGetLogFileSize:PPROC
PdhGetLogFileSize equ <__imp_PdhGetLogFileSize>

externdef __imp_PdhGetLogFileTypeA:PPROC
PdhGetLogFileTypeA equ <__imp_PdhGetLogFileTypeA>
  IFNDEF __UNICODE__
    PdhGetLogFileType equ <__imp_PdhGetLogFileTypeA>
  ENDIF

externdef __imp_PdhGetLogFileTypeW:PPROC
PdhGetLogFileTypeW equ <__imp_PdhGetLogFileTypeW>
  IFDEF __UNICODE__
    PdhGetLogFileType equ <__imp_PdhGetLogFileTypeW>
  ENDIF

externdef __imp_PdhGetLogSetGUID:PPROC
PdhGetLogSetGUID equ <__imp_PdhGetLogSetGUID>

externdef __imp_PdhGetRawCounterArrayA:PPROC
PdhGetRawCounterArrayA equ <__imp_PdhGetRawCounterArrayA>
  IFNDEF __UNICODE__
    PdhGetRawCounterArray equ <__imp_PdhGetRawCounterArrayA>
  ENDIF

externdef __imp_PdhGetRawCounterArrayW:PPROC
PdhGetRawCounterArrayW equ <__imp_PdhGetRawCounterArrayW>
  IFDEF __UNICODE__
    PdhGetRawCounterArray equ <__imp_PdhGetRawCounterArrayW>
  ENDIF

externdef __imp_PdhGetRawCounterValue:PPROC
PdhGetRawCounterValue equ <__imp_PdhGetRawCounterValue>

externdef __imp_PdhIsRealTimeQuery:PPROC
PdhIsRealTimeQuery equ <__imp_PdhIsRealTimeQuery>

externdef __imp_PdhListLogFileHeaderA:PPROC
PdhListLogFileHeaderA equ <__imp_PdhListLogFileHeaderA>
  IFNDEF __UNICODE__
    PdhListLogFileHeader equ <__imp_PdhListLogFileHeaderA>
  ENDIF

externdef __imp_PdhListLogFileHeaderW:PPROC
PdhListLogFileHeaderW equ <__imp_PdhListLogFileHeaderW>
  IFDEF __UNICODE__
    PdhListLogFileHeader equ <__imp_PdhListLogFileHeaderW>
  ENDIF

externdef __imp_PdhLookupPerfIndexByNameA:PPROC
PdhLookupPerfIndexByNameA equ <__imp_PdhLookupPerfIndexByNameA>
  IFNDEF __UNICODE__
    PdhLookupPerfIndexByName equ <__imp_PdhLookupPerfIndexByNameA>
  ENDIF

externdef __imp_PdhLookupPerfIndexByNameW:PPROC
PdhLookupPerfIndexByNameW equ <__imp_PdhLookupPerfIndexByNameW>
  IFDEF __UNICODE__
    PdhLookupPerfIndexByName equ <__imp_PdhLookupPerfIndexByNameW>
  ENDIF

externdef __imp_PdhLookupPerfNameByIndexA:PPROC
PdhLookupPerfNameByIndexA equ <__imp_PdhLookupPerfNameByIndexA>
  IFNDEF __UNICODE__
    PdhLookupPerfNameByIndex equ <__imp_PdhLookupPerfNameByIndexA>
  ENDIF

externdef __imp_PdhLookupPerfNameByIndexW:PPROC
PdhLookupPerfNameByIndexW equ <__imp_PdhLookupPerfNameByIndexW>
  IFDEF __UNICODE__
    PdhLookupPerfNameByIndex equ <__imp_PdhLookupPerfNameByIndexW>
  ENDIF

externdef __imp_PdhMakeCounterPathA:PPROC
PdhMakeCounterPathA equ <__imp_PdhMakeCounterPathA>
  IFNDEF __UNICODE__
    PdhMakeCounterPath equ <__imp_PdhMakeCounterPathA>
  ENDIF

externdef __imp_PdhMakeCounterPathW:PPROC
PdhMakeCounterPathW equ <__imp_PdhMakeCounterPathW>
  IFDEF __UNICODE__
    PdhMakeCounterPath equ <__imp_PdhMakeCounterPathW>
  ENDIF

externdef __imp_PdhOpenLogA:PPROC
PdhOpenLogA equ <__imp_PdhOpenLogA>
  IFNDEF __UNICODE__
    PdhOpenLog equ <__imp_PdhOpenLogA>
  ENDIF

externdef __imp_PdhOpenLogW:PPROC
PdhOpenLogW equ <__imp_PdhOpenLogW>
  IFDEF __UNICODE__
    PdhOpenLog equ <__imp_PdhOpenLogW>
  ENDIF

externdef __imp_PdhOpenQuery:PPROC
PdhOpenQuery equ <__imp_PdhOpenQuery>

externdef __imp_PdhOpenQueryA:PPROC
PdhOpenQueryA equ <__imp_PdhOpenQueryA>
  IFNDEF __UNICODE__
    PdhOpenQuery equ <__imp_PdhOpenQueryA>
  ENDIF

externdef __imp_PdhOpenQueryH:PPROC
PdhOpenQueryH equ <__imp_PdhOpenQueryH>

externdef __imp_PdhOpenQueryW:PPROC
PdhOpenQueryW equ <__imp_PdhOpenQueryW>
  IFDEF __UNICODE__
    PdhOpenQuery equ <__imp_PdhOpenQueryW>
  ENDIF

externdef __imp_PdhParseCounterPathA:PPROC
PdhParseCounterPathA equ <__imp_PdhParseCounterPathA>
  IFNDEF __UNICODE__
    PdhParseCounterPath equ <__imp_PdhParseCounterPathA>
  ENDIF

externdef __imp_PdhParseCounterPathW:PPROC
PdhParseCounterPathW equ <__imp_PdhParseCounterPathW>
  IFDEF __UNICODE__
    PdhParseCounterPath equ <__imp_PdhParseCounterPathW>
  ENDIF

externdef __imp_PdhParseInstanceNameA:PPROC
PdhParseInstanceNameA equ <__imp_PdhParseInstanceNameA>
  IFNDEF __UNICODE__
    PdhParseInstanceName equ <__imp_PdhParseInstanceNameA>
  ENDIF

externdef __imp_PdhParseInstanceNameW:PPROC
PdhParseInstanceNameW equ <__imp_PdhParseInstanceNameW>
  IFDEF __UNICODE__
    PdhParseInstanceName equ <__imp_PdhParseInstanceNameW>
  ENDIF

externdef __imp_PdhPlaAddItemA:PPROC
PdhPlaAddItemA equ <__imp_PdhPlaAddItemA>
  IFNDEF __UNICODE__
    PdhPlaAddItem equ <__imp_PdhPlaAddItemA>
  ENDIF

externdef __imp_PdhPlaAddItemW:PPROC
PdhPlaAddItemW equ <__imp_PdhPlaAddItemW>
  IFDEF __UNICODE__
    PdhPlaAddItem equ <__imp_PdhPlaAddItemW>
  ENDIF

externdef __imp_PdhPlaCreateA:PPROC
PdhPlaCreateA equ <__imp_PdhPlaCreateA>
  IFNDEF __UNICODE__
    PdhPlaCreate equ <__imp_PdhPlaCreateA>
  ENDIF

externdef __imp_PdhPlaCreateW:PPROC
PdhPlaCreateW equ <__imp_PdhPlaCreateW>
  IFDEF __UNICODE__
    PdhPlaCreate equ <__imp_PdhPlaCreateW>
  ENDIF

externdef __imp_PdhPlaDeleteA:PPROC
PdhPlaDeleteA equ <__imp_PdhPlaDeleteA>
  IFNDEF __UNICODE__
    PdhPlaDelete equ <__imp_PdhPlaDeleteA>
  ENDIF

externdef __imp_PdhPlaDeleteW:PPROC
PdhPlaDeleteW equ <__imp_PdhPlaDeleteW>
  IFDEF __UNICODE__
    PdhPlaDelete equ <__imp_PdhPlaDeleteW>
  ENDIF

externdef __imp_PdhPlaDowngradeW:PPROC
PdhPlaDowngradeW equ <__imp_PdhPlaDowngradeW>
  IFDEF __UNICODE__
    PdhPlaDowngrade equ <__imp_PdhPlaDowngradeW>
  ENDIF

externdef __imp_PdhPlaEnumCollectionsA:PPROC
PdhPlaEnumCollectionsA equ <__imp_PdhPlaEnumCollectionsA>
  IFNDEF __UNICODE__
    PdhPlaEnumCollections equ <__imp_PdhPlaEnumCollectionsA>
  ENDIF

externdef __imp_PdhPlaEnumCollectionsW:PPROC
PdhPlaEnumCollectionsW equ <__imp_PdhPlaEnumCollectionsW>
  IFDEF __UNICODE__
    PdhPlaEnumCollections equ <__imp_PdhPlaEnumCollectionsW>
  ENDIF

externdef __imp_PdhPlaGetInfoA:PPROC
PdhPlaGetInfoA equ <__imp_PdhPlaGetInfoA>
  IFNDEF __UNICODE__
    PdhPlaGetInfo equ <__imp_PdhPlaGetInfoA>
  ENDIF

externdef __imp_PdhPlaGetInfoW:PPROC
PdhPlaGetInfoW equ <__imp_PdhPlaGetInfoW>
  IFDEF __UNICODE__
    PdhPlaGetInfo equ <__imp_PdhPlaGetInfoW>
  ENDIF

externdef __imp_PdhPlaGetLogFileNameA:PPROC
PdhPlaGetLogFileNameA equ <__imp_PdhPlaGetLogFileNameA>
  IFNDEF __UNICODE__
    PdhPlaGetLogFileName equ <__imp_PdhPlaGetLogFileNameA>
  ENDIF

externdef __imp_PdhPlaGetLogFileNameW:PPROC
PdhPlaGetLogFileNameW equ <__imp_PdhPlaGetLogFileNameW>
  IFDEF __UNICODE__
    PdhPlaGetLogFileName equ <__imp_PdhPlaGetLogFileNameW>
  ENDIF

externdef __imp_PdhPlaGetScheduleA:PPROC
PdhPlaGetScheduleA equ <__imp_PdhPlaGetScheduleA>
  IFNDEF __UNICODE__
    PdhPlaGetSchedule equ <__imp_PdhPlaGetScheduleA>
  ENDIF

externdef __imp_PdhPlaGetScheduleW:PPROC
PdhPlaGetScheduleW equ <__imp_PdhPlaGetScheduleW>
  IFDEF __UNICODE__
    PdhPlaGetSchedule equ <__imp_PdhPlaGetScheduleW>
  ENDIF

externdef __imp_PdhPlaRemoveAllItemsA:PPROC
PdhPlaRemoveAllItemsA equ <__imp_PdhPlaRemoveAllItemsA>
  IFNDEF __UNICODE__
    PdhPlaRemoveAllItems equ <__imp_PdhPlaRemoveAllItemsA>
  ENDIF

externdef __imp_PdhPlaRemoveAllItemsW:PPROC
PdhPlaRemoveAllItemsW equ <__imp_PdhPlaRemoveAllItemsW>
  IFDEF __UNICODE__
    PdhPlaRemoveAllItems equ <__imp_PdhPlaRemoveAllItemsW>
  ENDIF

externdef __imp_PdhPlaScheduleA:PPROC
PdhPlaScheduleA equ <__imp_PdhPlaScheduleA>
  IFNDEF __UNICODE__
    PdhPlaSchedule equ <__imp_PdhPlaScheduleA>
  ENDIF

externdef __imp_PdhPlaScheduleW:PPROC
PdhPlaScheduleW equ <__imp_PdhPlaScheduleW>
  IFDEF __UNICODE__
    PdhPlaSchedule equ <__imp_PdhPlaScheduleW>
  ENDIF

externdef __imp_PdhPlaSetInfoA:PPROC
PdhPlaSetInfoA equ <__imp_PdhPlaSetInfoA>
  IFNDEF __UNICODE__
    PdhPlaSetInfo equ <__imp_PdhPlaSetInfoA>
  ENDIF

externdef __imp_PdhPlaSetInfoW:PPROC
PdhPlaSetInfoW equ <__imp_PdhPlaSetInfoW>
  IFDEF __UNICODE__
    PdhPlaSetInfo equ <__imp_PdhPlaSetInfoW>
  ENDIF

externdef __imp_PdhPlaSetItemListA:PPROC
PdhPlaSetItemListA equ <__imp_PdhPlaSetItemListA>
  IFNDEF __UNICODE__
    PdhPlaSetItemList equ <__imp_PdhPlaSetItemListA>
  ENDIF

externdef __imp_PdhPlaSetItemListW:PPROC
PdhPlaSetItemListW equ <__imp_PdhPlaSetItemListW>
  IFDEF __UNICODE__
    PdhPlaSetItemList equ <__imp_PdhPlaSetItemListW>
  ENDIF

externdef __imp_PdhPlaSetRunAsA:PPROC
PdhPlaSetRunAsA equ <__imp_PdhPlaSetRunAsA>
  IFNDEF __UNICODE__
    PdhPlaSetRunAs equ <__imp_PdhPlaSetRunAsA>
  ENDIF

externdef __imp_PdhPlaSetRunAsW:PPROC
PdhPlaSetRunAsW equ <__imp_PdhPlaSetRunAsW>
  IFDEF __UNICODE__
    PdhPlaSetRunAs equ <__imp_PdhPlaSetRunAsW>
  ENDIF

externdef __imp_PdhPlaStartA:PPROC
PdhPlaStartA equ <__imp_PdhPlaStartA>
  IFNDEF __UNICODE__
    PdhPlaStart equ <__imp_PdhPlaStartA>
  ENDIF

externdef __imp_PdhPlaStartW:PPROC
PdhPlaStartW equ <__imp_PdhPlaStartW>
  IFDEF __UNICODE__
    PdhPlaStart equ <__imp_PdhPlaStartW>
  ENDIF

externdef __imp_PdhPlaStopA:PPROC
PdhPlaStopA equ <__imp_PdhPlaStopA>
  IFNDEF __UNICODE__
    PdhPlaStop equ <__imp_PdhPlaStopA>
  ENDIF

externdef __imp_PdhPlaStopW:PPROC
PdhPlaStopW equ <__imp_PdhPlaStopW>
  IFDEF __UNICODE__
    PdhPlaStop equ <__imp_PdhPlaStopW>
  ENDIF

externdef __imp_PdhPlaUpgradeW:PPROC
PdhPlaUpgradeW equ <__imp_PdhPlaUpgradeW>
  IFDEF __UNICODE__
    PdhPlaUpgrade equ <__imp_PdhPlaUpgradeW>
  ENDIF

externdef __imp_PdhPlaValidateInfoA:PPROC
PdhPlaValidateInfoA equ <__imp_PdhPlaValidateInfoA>
  IFNDEF __UNICODE__
    PdhPlaValidateInfo equ <__imp_PdhPlaValidateInfoA>
  ENDIF

externdef __imp_PdhPlaValidateInfoW:PPROC
PdhPlaValidateInfoW equ <__imp_PdhPlaValidateInfoW>
  IFDEF __UNICODE__
    PdhPlaValidateInfo equ <__imp_PdhPlaValidateInfoW>
  ENDIF

externdef __imp_PdhReadRawLogRecord:PPROC
PdhReadRawLogRecord equ <__imp_PdhReadRawLogRecord>

externdef __imp_PdhRelogA:PPROC
PdhRelogA equ <__imp_PdhRelogA>
  IFNDEF __UNICODE__
    PdhRelog equ <__imp_PdhRelogA>
  ENDIF

externdef __imp_PdhRelogW:PPROC
PdhRelogW equ <__imp_PdhRelogW>
  IFDEF __UNICODE__
    PdhRelog equ <__imp_PdhRelogW>
  ENDIF

externdef __imp_PdhRemoveCounter:PPROC
PdhRemoveCounter equ <__imp_PdhRemoveCounter>

externdef __imp_PdhSelectDataSourceA:PPROC
PdhSelectDataSourceA equ <__imp_PdhSelectDataSourceA>
  IFNDEF __UNICODE__
    PdhSelectDataSource equ <__imp_PdhSelectDataSourceA>
  ENDIF

externdef __imp_PdhSelectDataSourceW:PPROC
PdhSelectDataSourceW equ <__imp_PdhSelectDataSourceW>
  IFDEF __UNICODE__
    PdhSelectDataSource equ <__imp_PdhSelectDataSourceW>
  ENDIF

externdef __imp_PdhSetCounterScaleFactor:PPROC
PdhSetCounterScaleFactor equ <__imp_PdhSetCounterScaleFactor>

externdef __imp_PdhSetDefaultRealTimeDataSource:PPROC
PdhSetDefaultRealTimeDataSource equ <__imp_PdhSetDefaultRealTimeDataSource>

externdef __imp_PdhSetLogSetRunID:PPROC
PdhSetLogSetRunID equ <__imp_PdhSetLogSetRunID>

externdef __imp_PdhSetQueryTimeRange:PPROC
PdhSetQueryTimeRange equ <__imp_PdhSetQueryTimeRange>

externdef __imp_PdhTranslate009CounterA:PPROC
PdhTranslate009CounterA equ <__imp_PdhTranslate009CounterA>
  IFNDEF __UNICODE__
    PdhTranslate009Counter equ <__imp_PdhTranslate009CounterA>
  ENDIF

externdef __imp_PdhTranslate009CounterW:PPROC
PdhTranslate009CounterW equ <__imp_PdhTranslate009CounterW>
  IFDEF __UNICODE__
    PdhTranslate009Counter equ <__imp_PdhTranslate009CounterW>
  ENDIF

externdef __imp_PdhTranslateLocaleCounterA:PPROC
PdhTranslateLocaleCounterA equ <__imp_PdhTranslateLocaleCounterA>
  IFNDEF __UNICODE__
    PdhTranslateLocaleCounter equ <__imp_PdhTranslateLocaleCounterA>
  ENDIF

externdef __imp_PdhTranslateLocaleCounterW:PPROC
PdhTranslateLocaleCounterW equ <__imp_PdhTranslateLocaleCounterW>
  IFDEF __UNICODE__
    PdhTranslateLocaleCounter equ <__imp_PdhTranslateLocaleCounterW>
  ENDIF

externdef __imp_PdhUpdateLogA:PPROC
PdhUpdateLogA equ <__imp_PdhUpdateLogA>
  IFNDEF __UNICODE__
    PdhUpdateLog equ <__imp_PdhUpdateLogA>
  ENDIF

externdef __imp_PdhUpdateLogFileCatalog:PPROC
PdhUpdateLogFileCatalog equ <__imp_PdhUpdateLogFileCatalog>

externdef __imp_PdhUpdateLogW:PPROC
PdhUpdateLogW equ <__imp_PdhUpdateLogW>
  IFDEF __UNICODE__
    PdhUpdateLog equ <__imp_PdhUpdateLogW>
  ENDIF

externdef __imp_PdhValidatePathA:PPROC
PdhValidatePathA equ <__imp_PdhValidatePathA>
  IFNDEF __UNICODE__
    PdhValidatePath equ <__imp_PdhValidatePathA>
  ENDIF

externdef __imp_PdhValidatePathW:PPROC
PdhValidatePathW equ <__imp_PdhValidatePathW>
  IFDEF __UNICODE__
    PdhValidatePath equ <__imp_PdhValidatePathW>
  ENDIF

externdef __imp_PdhVbAddCounter:PPROC
PdhVbAddCounter equ <__imp_PdhVbAddCounter>

externdef __imp_PdhVbCreateCounterPathList:PPROC
PdhVbCreateCounterPathList equ <__imp_PdhVbCreateCounterPathList>

externdef __imp_PdhVbGetCounterPathElements:PPROC
PdhVbGetCounterPathElements equ <__imp_PdhVbGetCounterPathElements>

externdef __imp_PdhVbGetCounterPathFromList:PPROC
PdhVbGetCounterPathFromList equ <__imp_PdhVbGetCounterPathFromList>

externdef __imp_PdhVbGetDoubleCounterValue:PPROC
PdhVbGetDoubleCounterValue equ <__imp_PdhVbGetDoubleCounterValue>

externdef __imp_PdhVbGetLogFileSize:PPROC
PdhVbGetLogFileSize equ <__imp_PdhVbGetLogFileSize>

externdef __imp_PdhVbGetOneCounterPath:PPROC
PdhVbGetOneCounterPath equ <__imp_PdhVbGetOneCounterPath>

externdef __imp_PdhVbIsGoodStatus:PPROC
PdhVbIsGoodStatus equ <__imp_PdhVbIsGoodStatus>

externdef __imp_PdhVbOpenLog:PPROC
PdhVbOpenLog equ <__imp_PdhVbOpenLog>

externdef __imp_PdhVbOpenQuery:PPROC
PdhVbOpenQuery equ <__imp_PdhVbOpenQuery>

externdef __imp_PdhVbUpdateLog:PPROC
PdhVbUpdateLog equ <__imp_PdhVbUpdateLog>

externdef __imp_PdhVerifySQLDBA:PPROC
PdhVerifySQLDBA equ <__imp_PdhVerifySQLDBA>
  IFNDEF __UNICODE__
    PdhVerifySQLDB equ <__imp_PdhVerifySQLDBA>
  ENDIF

externdef __imp_PdhVerifySQLDBW:PPROC
PdhVerifySQLDBW equ <__imp_PdhVerifySQLDBW>
  IFDEF __UNICODE__
    PdhVerifySQLDB equ <__imp_PdhVerifySQLDBW>
  ENDIF

externdef __imp_PdhiPla2003SP1Installed:PPROC
PdhiPla2003SP1Installed equ <__imp_PdhiPla2003SP1Installed>

externdef __imp_PdhiPlaDowngrade:PPROC
PdhiPlaDowngrade equ <__imp_PdhiPlaDowngrade>

externdef __imp_PdhiPlaFormatBlanksA:PPROC
PdhiPlaFormatBlanksA equ <__imp_PdhiPlaFormatBlanksA>
  IFNDEF __UNICODE__
    PdhiPlaFormatBlanks equ <__imp_PdhiPlaFormatBlanksA>
  ENDIF

externdef __imp_PdhiPlaFormatBlanksW:PPROC
PdhiPlaFormatBlanksW equ <__imp_PdhiPlaFormatBlanksW>
  IFDEF __UNICODE__
    PdhiPlaFormatBlanks equ <__imp_PdhiPlaFormatBlanksW>
  ENDIF

externdef __imp_PdhiPlaGetVersion:PPROC
PdhiPlaGetVersion equ <__imp_PdhiPlaGetVersion>

externdef __imp_PdhiPlaRunAs:PPROC
PdhiPlaRunAs equ <__imp_PdhiPlaRunAs>

externdef __imp_PdhiPlaSetRunAs:PPROC
PdhiPlaSetRunAs equ <__imp_PdhiPlaSetRunAs>

externdef __imp_PdhiPlaUpgrade:PPROC
PdhiPlaUpgrade equ <__imp_PdhiPlaUpgrade>

externdef __imp_PlaTimeInfoToMilliSeconds:PPROC
PlaTimeInfoToMilliSeconds equ <__imp_PlaTimeInfoToMilliSeconds>
