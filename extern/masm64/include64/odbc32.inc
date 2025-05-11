externdef __imp_CloseODBCPerfData:PPROC
CloseODBCPerfData equ <__imp_CloseODBCPerfData>

externdef __imp_CollectODBCPerfData:PPROC
CollectODBCPerfData equ <__imp_CollectODBCPerfData>

externdef __imp_CursorLibLockDbc:PPROC
CursorLibLockDbc equ <__imp_CursorLibLockDbc>

externdef __imp_CursorLibLockDesc:PPROC
CursorLibLockDesc equ <__imp_CursorLibLockDesc>

externdef __imp_CursorLibLockStmt:PPROC
CursorLibLockStmt equ <__imp_CursorLibLockStmt>

externdef __imp_CursorLibTransact:PPROC
CursorLibTransact equ <__imp_CursorLibTransact>

externdef __imp_DllBidEntryPoint:PPROC
DllBidEntryPoint equ <__imp_DllBidEntryPoint>

externdef __imp_GetODBCSharedData:PPROC
GetODBCSharedData equ <__imp_GetODBCSharedData>

externdef __imp_LockHandle:PPROC
LockHandle equ <__imp_LockHandle>

externdef __imp_MpHeapAlloc:PPROC
MpHeapAlloc equ <__imp_MpHeapAlloc>

externdef __imp_MpHeapCompact:PPROC
MpHeapCompact equ <__imp_MpHeapCompact>

externdef __imp_MpHeapCreate:PPROC
MpHeapCreate equ <__imp_MpHeapCreate>

externdef __imp_MpHeapDestroy:PPROC
MpHeapDestroy equ <__imp_MpHeapDestroy>

externdef __imp_MpHeapFree:PPROC
MpHeapFree equ <__imp_MpHeapFree>

externdef __imp_MpHeapReAlloc:PPROC
MpHeapReAlloc equ <__imp_MpHeapReAlloc>

externdef __imp_MpHeapSize:PPROC
MpHeapSize equ <__imp_MpHeapSize>

externdef __imp_MpHeapValidate:PPROC
MpHeapValidate equ <__imp_MpHeapValidate>

externdef __imp_ODBCGetTryWaitValue:PPROC
ODBCGetTryWaitValue equ <__imp_ODBCGetTryWaitValue>

externdef __imp_ODBCInternalConnectW:PPROC
ODBCInternalConnectW equ <__imp_ODBCInternalConnectW>
  IFDEF __UNICODE__
    ODBCInternalConnect equ <__imp_ODBCInternalConnectW>
  ENDIF

externdef __imp_ODBCQualifyFileDSNW:PPROC
ODBCQualifyFileDSNW equ <__imp_ODBCQualifyFileDSNW>
  IFDEF __UNICODE__
    ODBCQualifyFileDSN equ <__imp_ODBCQualifyFileDSNW>
  ENDIF

externdef __imp_ODBCSetTryWaitValue:PPROC
ODBCSetTryWaitValue equ <__imp_ODBCSetTryWaitValue>

externdef __imp_OpenODBCPerfData:PPROC
OpenODBCPerfData equ <__imp_OpenODBCPerfData>

externdef __imp_PostComponentError:PPROC
PostComponentError equ <__imp_PostComponentError>

externdef __imp_PostODBCComponentError:PPROC
PostODBCComponentError equ <__imp_PostODBCComponentError>

externdef __imp_PostODBCError:PPROC
PostODBCError equ <__imp_PostODBCError>

externdef __imp_SQLAllocConnect:PPROC
SQLAllocConnect equ <__imp_SQLAllocConnect>

externdef __imp_SQLAllocEnv:PPROC
SQLAllocEnv equ <__imp_SQLAllocEnv>

externdef __imp_SQLAllocHandle:PPROC
SQLAllocHandle equ <__imp_SQLAllocHandle>

externdef __imp_SQLAllocHandleStd:PPROC
SQLAllocHandleStd equ <__imp_SQLAllocHandleStd>

externdef __imp_SQLAllocStmt:PPROC
SQLAllocStmt equ <__imp_SQLAllocStmt>

externdef __imp_SQLBindCol:PPROC
SQLBindCol equ <__imp_SQLBindCol>

externdef __imp_SQLBindParam:PPROC
SQLBindParam equ <__imp_SQLBindParam>

externdef __imp_SQLBindParameter:PPROC
SQLBindParameter equ <__imp_SQLBindParameter>

externdef __imp_SQLBrowseConnect:PPROC
SQLBrowseConnect equ <__imp_SQLBrowseConnect>

externdef __imp_SQLBrowseConnectA:PPROC
SQLBrowseConnectA equ <__imp_SQLBrowseConnectA>
  IFNDEF __UNICODE__
    SQLBrowseConnect equ <__imp_SQLBrowseConnectA>
  ENDIF

externdef __imp_SQLBrowseConnectW:PPROC
SQLBrowseConnectW equ <__imp_SQLBrowseConnectW>
  IFDEF __UNICODE__
    SQLBrowseConnect equ <__imp_SQLBrowseConnectW>
  ENDIF

externdef __imp_SQLBulkOperations:PPROC
SQLBulkOperations equ <__imp_SQLBulkOperations>

externdef __imp_SQLCancel:PPROC
SQLCancel equ <__imp_SQLCancel>

externdef __imp_SQLCloseCursor:PPROC
SQLCloseCursor equ <__imp_SQLCloseCursor>

externdef __imp_SQLColAttribute:PPROC
SQLColAttribute equ <__imp_SQLColAttribute>

externdef __imp_SQLColAttributeA:PPROC
SQLColAttributeA equ <__imp_SQLColAttributeA>
  IFNDEF __UNICODE__
    SQLColAttribute equ <__imp_SQLColAttributeA>
  ENDIF

externdef __imp_SQLColAttributeW:PPROC
SQLColAttributeW equ <__imp_SQLColAttributeW>
  IFDEF __UNICODE__
    SQLColAttribute equ <__imp_SQLColAttributeW>
  ENDIF

externdef __imp_SQLColAttributes:PPROC
SQLColAttributes equ <__imp_SQLColAttributes>

externdef __imp_SQLColAttributesA:PPROC
SQLColAttributesA equ <__imp_SQLColAttributesA>
  IFNDEF __UNICODE__
    SQLColAttributes equ <__imp_SQLColAttributesA>
  ENDIF

externdef __imp_SQLColAttributesW:PPROC
SQLColAttributesW equ <__imp_SQLColAttributesW>
  IFDEF __UNICODE__
    SQLColAttributes equ <__imp_SQLColAttributesW>
  ENDIF

externdef __imp_SQLColumnPrivileges:PPROC
SQLColumnPrivileges equ <__imp_SQLColumnPrivileges>

externdef __imp_SQLColumnPrivilegesA:PPROC
SQLColumnPrivilegesA equ <__imp_SQLColumnPrivilegesA>
  IFNDEF __UNICODE__
    SQLColumnPrivileges equ <__imp_SQLColumnPrivilegesA>
  ENDIF

externdef __imp_SQLColumnPrivilegesW:PPROC
SQLColumnPrivilegesW equ <__imp_SQLColumnPrivilegesW>
  IFDEF __UNICODE__
    SQLColumnPrivileges equ <__imp_SQLColumnPrivilegesW>
  ENDIF

externdef __imp_SQLColumns:PPROC
SQLColumns equ <__imp_SQLColumns>

externdef __imp_SQLColumnsA:PPROC
SQLColumnsA equ <__imp_SQLColumnsA>
  IFNDEF __UNICODE__
    SQLColumns equ <__imp_SQLColumnsA>
  ENDIF

externdef __imp_SQLColumnsW:PPROC
SQLColumnsW equ <__imp_SQLColumnsW>
  IFDEF __UNICODE__
    SQLColumns equ <__imp_SQLColumnsW>
  ENDIF

externdef __imp_SQLConnect:PPROC
SQLConnect equ <__imp_SQLConnect>

externdef __imp_SQLConnectA:PPROC
SQLConnectA equ <__imp_SQLConnectA>
  IFNDEF __UNICODE__
    SQLConnect equ <__imp_SQLConnectA>
  ENDIF

externdef __imp_SQLConnectW:PPROC
SQLConnectW equ <__imp_SQLConnectW>
  IFDEF __UNICODE__
    SQLConnect equ <__imp_SQLConnectW>
  ENDIF

externdef __imp_SQLCopyDesc:PPROC
SQLCopyDesc equ <__imp_SQLCopyDesc>

externdef __imp_SQLDataSources:PPROC
SQLDataSources equ <__imp_SQLDataSources>

externdef __imp_SQLDataSourcesA:PPROC
SQLDataSourcesA equ <__imp_SQLDataSourcesA>
  IFNDEF __UNICODE__
    SQLDataSources equ <__imp_SQLDataSourcesA>
  ENDIF

externdef __imp_SQLDataSourcesW:PPROC
SQLDataSourcesW equ <__imp_SQLDataSourcesW>
  IFDEF __UNICODE__
    SQLDataSources equ <__imp_SQLDataSourcesW>
  ENDIF

externdef __imp_SQLDescribeCol:PPROC
SQLDescribeCol equ <__imp_SQLDescribeCol>

externdef __imp_SQLDescribeColA:PPROC
SQLDescribeColA equ <__imp_SQLDescribeColA>
  IFNDEF __UNICODE__
    SQLDescribeCol equ <__imp_SQLDescribeColA>
  ENDIF

externdef __imp_SQLDescribeColW:PPROC
SQLDescribeColW equ <__imp_SQLDescribeColW>
  IFDEF __UNICODE__
    SQLDescribeCol equ <__imp_SQLDescribeColW>
  ENDIF

externdef __imp_SQLDescribeParam:PPROC
SQLDescribeParam equ <__imp_SQLDescribeParam>

externdef __imp_SQLDisconnect:PPROC
SQLDisconnect equ <__imp_SQLDisconnect>

externdef __imp_SQLDriverConnect:PPROC
SQLDriverConnect equ <__imp_SQLDriverConnect>

externdef __imp_SQLDriverConnectA:PPROC
SQLDriverConnectA equ <__imp_SQLDriverConnectA>
  IFNDEF __UNICODE__
    SQLDriverConnect equ <__imp_SQLDriverConnectA>
  ENDIF

externdef __imp_SQLDriverConnectW:PPROC
SQLDriverConnectW equ <__imp_SQLDriverConnectW>
  IFDEF __UNICODE__
    SQLDriverConnect equ <__imp_SQLDriverConnectW>
  ENDIF

externdef __imp_SQLDrivers:PPROC
SQLDrivers equ <__imp_SQLDrivers>

externdef __imp_SQLDriversA:PPROC
SQLDriversA equ <__imp_SQLDriversA>
  IFNDEF __UNICODE__
    SQLDrivers equ <__imp_SQLDriversA>
  ENDIF

externdef __imp_SQLDriversW:PPROC
SQLDriversW equ <__imp_SQLDriversW>
  IFDEF __UNICODE__
    SQLDrivers equ <__imp_SQLDriversW>
  ENDIF

externdef __imp_SQLEndTran:PPROC
SQLEndTran equ <__imp_SQLEndTran>

externdef __imp_SQLError:PPROC
SQLError equ <__imp_SQLError>

externdef __imp_SQLErrorA:PPROC
SQLErrorA equ <__imp_SQLErrorA>
  IFNDEF __UNICODE__
    SQLError equ <__imp_SQLErrorA>
  ENDIF

externdef __imp_SQLErrorW:PPROC
SQLErrorW equ <__imp_SQLErrorW>
  IFDEF __UNICODE__
    SQLError equ <__imp_SQLErrorW>
  ENDIF

externdef __imp_SQLExecDirect:PPROC
SQLExecDirect equ <__imp_SQLExecDirect>

externdef __imp_SQLExecDirectA:PPROC
SQLExecDirectA equ <__imp_SQLExecDirectA>
  IFNDEF __UNICODE__
    SQLExecDirect equ <__imp_SQLExecDirectA>
  ENDIF

externdef __imp_SQLExecDirectW:PPROC
SQLExecDirectW equ <__imp_SQLExecDirectW>
  IFDEF __UNICODE__
    SQLExecDirect equ <__imp_SQLExecDirectW>
  ENDIF

externdef __imp_SQLExecute:PPROC
SQLExecute equ <__imp_SQLExecute>

externdef __imp_SQLExtendedFetch:PPROC
SQLExtendedFetch equ <__imp_SQLExtendedFetch>

externdef __imp_SQLFetch:PPROC
SQLFetch equ <__imp_SQLFetch>

externdef __imp_SQLFetchScroll:PPROC
SQLFetchScroll equ <__imp_SQLFetchScroll>

externdef __imp_SQLForeignKeys:PPROC
SQLForeignKeys equ <__imp_SQLForeignKeys>

externdef __imp_SQLForeignKeysA:PPROC
SQLForeignKeysA equ <__imp_SQLForeignKeysA>
  IFNDEF __UNICODE__
    SQLForeignKeys equ <__imp_SQLForeignKeysA>
  ENDIF

externdef __imp_SQLForeignKeysW:PPROC
SQLForeignKeysW equ <__imp_SQLForeignKeysW>
  IFDEF __UNICODE__
    SQLForeignKeys equ <__imp_SQLForeignKeysW>
  ENDIF

externdef __imp_SQLFreeConnect:PPROC
SQLFreeConnect equ <__imp_SQLFreeConnect>

externdef __imp_SQLFreeEnv:PPROC
SQLFreeEnv equ <__imp_SQLFreeEnv>

externdef __imp_SQLFreeHandle:PPROC
SQLFreeHandle equ <__imp_SQLFreeHandle>

externdef __imp_SQLFreeStmt:PPROC
SQLFreeStmt equ <__imp_SQLFreeStmt>

externdef __imp_SQLGetConnectAttr:PPROC
SQLGetConnectAttr equ <__imp_SQLGetConnectAttr>

externdef __imp_SQLGetConnectAttrA:PPROC
SQLGetConnectAttrA equ <__imp_SQLGetConnectAttrA>
  IFNDEF __UNICODE__
    SQLGetConnectAttr equ <__imp_SQLGetConnectAttrA>
  ENDIF

externdef __imp_SQLGetConnectAttrW:PPROC
SQLGetConnectAttrW equ <__imp_SQLGetConnectAttrW>
  IFDEF __UNICODE__
    SQLGetConnectAttr equ <__imp_SQLGetConnectAttrW>
  ENDIF

externdef __imp_SQLGetConnectOption:PPROC
SQLGetConnectOption equ <__imp_SQLGetConnectOption>

externdef __imp_SQLGetConnectOptionA:PPROC
SQLGetConnectOptionA equ <__imp_SQLGetConnectOptionA>
  IFNDEF __UNICODE__
    SQLGetConnectOption equ <__imp_SQLGetConnectOptionA>
  ENDIF

externdef __imp_SQLGetConnectOptionW:PPROC
SQLGetConnectOptionW equ <__imp_SQLGetConnectOptionW>
  IFDEF __UNICODE__
    SQLGetConnectOption equ <__imp_SQLGetConnectOptionW>
  ENDIF

externdef __imp_SQLGetCursorName:PPROC
SQLGetCursorName equ <__imp_SQLGetCursorName>

externdef __imp_SQLGetCursorNameA:PPROC
SQLGetCursorNameA equ <__imp_SQLGetCursorNameA>
  IFNDEF __UNICODE__
    SQLGetCursorName equ <__imp_SQLGetCursorNameA>
  ENDIF

externdef __imp_SQLGetCursorNameW:PPROC
SQLGetCursorNameW equ <__imp_SQLGetCursorNameW>
  IFDEF __UNICODE__
    SQLGetCursorName equ <__imp_SQLGetCursorNameW>
  ENDIF

externdef __imp_SQLGetData:PPROC
SQLGetData equ <__imp_SQLGetData>

externdef __imp_SQLGetDescField:PPROC
SQLGetDescField equ <__imp_SQLGetDescField>

externdef __imp_SQLGetDescFieldA:PPROC
SQLGetDescFieldA equ <__imp_SQLGetDescFieldA>
  IFNDEF __UNICODE__
    SQLGetDescField equ <__imp_SQLGetDescFieldA>
  ENDIF

externdef __imp_SQLGetDescFieldW:PPROC
SQLGetDescFieldW equ <__imp_SQLGetDescFieldW>
  IFDEF __UNICODE__
    SQLGetDescField equ <__imp_SQLGetDescFieldW>
  ENDIF

externdef __imp_SQLGetDescRec:PPROC
SQLGetDescRec equ <__imp_SQLGetDescRec>

externdef __imp_SQLGetDescRecA:PPROC
SQLGetDescRecA equ <__imp_SQLGetDescRecA>
  IFNDEF __UNICODE__
    SQLGetDescRec equ <__imp_SQLGetDescRecA>
  ENDIF

externdef __imp_SQLGetDescRecW:PPROC
SQLGetDescRecW equ <__imp_SQLGetDescRecW>
  IFDEF __UNICODE__
    SQLGetDescRec equ <__imp_SQLGetDescRecW>
  ENDIF

externdef __imp_SQLGetDiagField:PPROC
SQLGetDiagField equ <__imp_SQLGetDiagField>

externdef __imp_SQLGetDiagFieldA:PPROC
SQLGetDiagFieldA equ <__imp_SQLGetDiagFieldA>
  IFNDEF __UNICODE__
    SQLGetDiagField equ <__imp_SQLGetDiagFieldA>
  ENDIF

externdef __imp_SQLGetDiagFieldW:PPROC
SQLGetDiagFieldW equ <__imp_SQLGetDiagFieldW>
  IFDEF __UNICODE__
    SQLGetDiagField equ <__imp_SQLGetDiagFieldW>
  ENDIF

externdef __imp_SQLGetDiagRec:PPROC
SQLGetDiagRec equ <__imp_SQLGetDiagRec>

externdef __imp_SQLGetDiagRecA:PPROC
SQLGetDiagRecA equ <__imp_SQLGetDiagRecA>
  IFNDEF __UNICODE__
    SQLGetDiagRec equ <__imp_SQLGetDiagRecA>
  ENDIF

externdef __imp_SQLGetDiagRecW:PPROC
SQLGetDiagRecW equ <__imp_SQLGetDiagRecW>
  IFDEF __UNICODE__
    SQLGetDiagRec equ <__imp_SQLGetDiagRecW>
  ENDIF

externdef __imp_SQLGetEnvAttr:PPROC
SQLGetEnvAttr equ <__imp_SQLGetEnvAttr>

externdef __imp_SQLGetFunctions:PPROC
SQLGetFunctions equ <__imp_SQLGetFunctions>

externdef __imp_SQLGetInfo:PPROC
SQLGetInfo equ <__imp_SQLGetInfo>

externdef __imp_SQLGetInfoA:PPROC
SQLGetInfoA equ <__imp_SQLGetInfoA>
  IFNDEF __UNICODE__
    SQLGetInfo equ <__imp_SQLGetInfoA>
  ENDIF

externdef __imp_SQLGetInfoW:PPROC
SQLGetInfoW equ <__imp_SQLGetInfoW>
  IFDEF __UNICODE__
    SQLGetInfo equ <__imp_SQLGetInfoW>
  ENDIF

externdef __imp_SQLGetStmtAttr:PPROC
SQLGetStmtAttr equ <__imp_SQLGetStmtAttr>

externdef __imp_SQLGetStmtAttrA:PPROC
SQLGetStmtAttrA equ <__imp_SQLGetStmtAttrA>
  IFNDEF __UNICODE__
    SQLGetStmtAttr equ <__imp_SQLGetStmtAttrA>
  ENDIF

externdef __imp_SQLGetStmtAttrW:PPROC
SQLGetStmtAttrW equ <__imp_SQLGetStmtAttrW>
  IFDEF __UNICODE__
    SQLGetStmtAttr equ <__imp_SQLGetStmtAttrW>
  ENDIF

externdef __imp_SQLGetStmtOption:PPROC
SQLGetStmtOption equ <__imp_SQLGetStmtOption>

externdef __imp_SQLGetTypeInfo:PPROC
SQLGetTypeInfo equ <__imp_SQLGetTypeInfo>

externdef __imp_SQLGetTypeInfoA:PPROC
SQLGetTypeInfoA equ <__imp_SQLGetTypeInfoA>
  IFNDEF __UNICODE__
    SQLGetTypeInfo equ <__imp_SQLGetTypeInfoA>
  ENDIF

externdef __imp_SQLGetTypeInfoW:PPROC
SQLGetTypeInfoW equ <__imp_SQLGetTypeInfoW>
  IFDEF __UNICODE__
    SQLGetTypeInfo equ <__imp_SQLGetTypeInfoW>
  ENDIF

externdef __imp_SQLMoreResults:PPROC
SQLMoreResults equ <__imp_SQLMoreResults>

externdef __imp_SQLNativeSql:PPROC
SQLNativeSql equ <__imp_SQLNativeSql>

externdef __imp_SQLNativeSqlA:PPROC
SQLNativeSqlA equ <__imp_SQLNativeSqlA>
  IFNDEF __UNICODE__
    SQLNativeSql equ <__imp_SQLNativeSqlA>
  ENDIF

externdef __imp_SQLNativeSqlW:PPROC
SQLNativeSqlW equ <__imp_SQLNativeSqlW>
  IFDEF __UNICODE__
    SQLNativeSql equ <__imp_SQLNativeSqlW>
  ENDIF

externdef __imp_SQLNumParams:PPROC
SQLNumParams equ <__imp_SQLNumParams>

externdef __imp_SQLNumResultCols:PPROC
SQLNumResultCols equ <__imp_SQLNumResultCols>

externdef __imp_SQLParamData:PPROC
SQLParamData equ <__imp_SQLParamData>

externdef __imp_SQLParamOptions:PPROC
SQLParamOptions equ <__imp_SQLParamOptions>

externdef __imp_SQLPrepare:PPROC
SQLPrepare equ <__imp_SQLPrepare>

externdef __imp_SQLPrepareA:PPROC
SQLPrepareA equ <__imp_SQLPrepareA>
  IFNDEF __UNICODE__
    SQLPrepare equ <__imp_SQLPrepareA>
  ENDIF

externdef __imp_SQLPrepareW:PPROC
SQLPrepareW equ <__imp_SQLPrepareW>
  IFDEF __UNICODE__
    SQLPrepare equ <__imp_SQLPrepareW>
  ENDIF

externdef __imp_SQLPrimaryKeys:PPROC
SQLPrimaryKeys equ <__imp_SQLPrimaryKeys>

externdef __imp_SQLPrimaryKeysA:PPROC
SQLPrimaryKeysA equ <__imp_SQLPrimaryKeysA>
  IFNDEF __UNICODE__
    SQLPrimaryKeys equ <__imp_SQLPrimaryKeysA>
  ENDIF

externdef __imp_SQLPrimaryKeysW:PPROC
SQLPrimaryKeysW equ <__imp_SQLPrimaryKeysW>
  IFDEF __UNICODE__
    SQLPrimaryKeys equ <__imp_SQLPrimaryKeysW>
  ENDIF

externdef __imp_SQLProcedureColumns:PPROC
SQLProcedureColumns equ <__imp_SQLProcedureColumns>

externdef __imp_SQLProcedureColumnsA:PPROC
SQLProcedureColumnsA equ <__imp_SQLProcedureColumnsA>
  IFNDEF __UNICODE__
    SQLProcedureColumns equ <__imp_SQLProcedureColumnsA>
  ENDIF

externdef __imp_SQLProcedureColumnsW:PPROC
SQLProcedureColumnsW equ <__imp_SQLProcedureColumnsW>
  IFDEF __UNICODE__
    SQLProcedureColumns equ <__imp_SQLProcedureColumnsW>
  ENDIF

externdef __imp_SQLProcedures:PPROC
SQLProcedures equ <__imp_SQLProcedures>

externdef __imp_SQLProceduresA:PPROC
SQLProceduresA equ <__imp_SQLProceduresA>
  IFNDEF __UNICODE__
    SQLProcedures equ <__imp_SQLProceduresA>
  ENDIF

externdef __imp_SQLProceduresW:PPROC
SQLProceduresW equ <__imp_SQLProceduresW>
  IFDEF __UNICODE__
    SQLProcedures equ <__imp_SQLProceduresW>
  ENDIF

externdef __imp_SQLPutData:PPROC
SQLPutData equ <__imp_SQLPutData>

externdef __imp_SQLRowCount:PPROC
SQLRowCount equ <__imp_SQLRowCount>

externdef __imp_SQLSetConnectAttr:PPROC
SQLSetConnectAttr equ <__imp_SQLSetConnectAttr>

externdef __imp_SQLSetConnectAttrA:PPROC
SQLSetConnectAttrA equ <__imp_SQLSetConnectAttrA>
  IFNDEF __UNICODE__
    SQLSetConnectAttr equ <__imp_SQLSetConnectAttrA>
  ENDIF

externdef __imp_SQLSetConnectAttrW:PPROC
SQLSetConnectAttrW equ <__imp_SQLSetConnectAttrW>
  IFDEF __UNICODE__
    SQLSetConnectAttr equ <__imp_SQLSetConnectAttrW>
  ENDIF

externdef __imp_SQLSetConnectOption:PPROC
SQLSetConnectOption equ <__imp_SQLSetConnectOption>

externdef __imp_SQLSetConnectOptionA:PPROC
SQLSetConnectOptionA equ <__imp_SQLSetConnectOptionA>
  IFNDEF __UNICODE__
    SQLSetConnectOption equ <__imp_SQLSetConnectOptionA>
  ENDIF

externdef __imp_SQLSetConnectOptionW:PPROC
SQLSetConnectOptionW equ <__imp_SQLSetConnectOptionW>
  IFDEF __UNICODE__
    SQLSetConnectOption equ <__imp_SQLSetConnectOptionW>
  ENDIF

externdef __imp_SQLSetCursorName:PPROC
SQLSetCursorName equ <__imp_SQLSetCursorName>

externdef __imp_SQLSetCursorNameA:PPROC
SQLSetCursorNameA equ <__imp_SQLSetCursorNameA>
  IFNDEF __UNICODE__
    SQLSetCursorName equ <__imp_SQLSetCursorNameA>
  ENDIF

externdef __imp_SQLSetCursorNameW:PPROC
SQLSetCursorNameW equ <__imp_SQLSetCursorNameW>
  IFDEF __UNICODE__
    SQLSetCursorName equ <__imp_SQLSetCursorNameW>
  ENDIF

externdef __imp_SQLSetDescField:PPROC
SQLSetDescField equ <__imp_SQLSetDescField>

externdef __imp_SQLSetDescFieldA:PPROC
SQLSetDescFieldA equ <__imp_SQLSetDescFieldA>
  IFNDEF __UNICODE__
    SQLSetDescField equ <__imp_SQLSetDescFieldA>
  ENDIF

externdef __imp_SQLSetDescFieldW:PPROC
SQLSetDescFieldW equ <__imp_SQLSetDescFieldW>
  IFDEF __UNICODE__
    SQLSetDescField equ <__imp_SQLSetDescFieldW>
  ENDIF

externdef __imp_SQLSetDescRec:PPROC
SQLSetDescRec equ <__imp_SQLSetDescRec>

externdef __imp_SQLSetEnvAttr:PPROC
SQLSetEnvAttr equ <__imp_SQLSetEnvAttr>

externdef __imp_SQLSetParam:PPROC
SQLSetParam equ <__imp_SQLSetParam>

externdef __imp_SQLSetPos:PPROC
SQLSetPos equ <__imp_SQLSetPos>

externdef __imp_SQLSetScrollOptions:PPROC
SQLSetScrollOptions equ <__imp_SQLSetScrollOptions>

externdef __imp_SQLSetStmtAttr:PPROC
SQLSetStmtAttr equ <__imp_SQLSetStmtAttr>

externdef __imp_SQLSetStmtAttrA:PPROC
SQLSetStmtAttrA equ <__imp_SQLSetStmtAttrA>
  IFNDEF __UNICODE__
    SQLSetStmtAttr equ <__imp_SQLSetStmtAttrA>
  ENDIF

externdef __imp_SQLSetStmtAttrW:PPROC
SQLSetStmtAttrW equ <__imp_SQLSetStmtAttrW>
  IFDEF __UNICODE__
    SQLSetStmtAttr equ <__imp_SQLSetStmtAttrW>
  ENDIF

externdef __imp_SQLSetStmtOption:PPROC
SQLSetStmtOption equ <__imp_SQLSetStmtOption>

externdef __imp_SQLSpecialColumns:PPROC
SQLSpecialColumns equ <__imp_SQLSpecialColumns>

externdef __imp_SQLSpecialColumnsA:PPROC
SQLSpecialColumnsA equ <__imp_SQLSpecialColumnsA>
  IFNDEF __UNICODE__
    SQLSpecialColumns equ <__imp_SQLSpecialColumnsA>
  ENDIF

externdef __imp_SQLSpecialColumnsW:PPROC
SQLSpecialColumnsW equ <__imp_SQLSpecialColumnsW>
  IFDEF __UNICODE__
    SQLSpecialColumns equ <__imp_SQLSpecialColumnsW>
  ENDIF

externdef __imp_SQLStatistics:PPROC
SQLStatistics equ <__imp_SQLStatistics>

externdef __imp_SQLStatisticsA:PPROC
SQLStatisticsA equ <__imp_SQLStatisticsA>
  IFNDEF __UNICODE__
    SQLStatistics equ <__imp_SQLStatisticsA>
  ENDIF

externdef __imp_SQLStatisticsW:PPROC
SQLStatisticsW equ <__imp_SQLStatisticsW>
  IFDEF __UNICODE__
    SQLStatistics equ <__imp_SQLStatisticsW>
  ENDIF

externdef __imp_SQLTablePrivileges:PPROC
SQLTablePrivileges equ <__imp_SQLTablePrivileges>

externdef __imp_SQLTablePrivilegesA:PPROC
SQLTablePrivilegesA equ <__imp_SQLTablePrivilegesA>
  IFNDEF __UNICODE__
    SQLTablePrivileges equ <__imp_SQLTablePrivilegesA>
  ENDIF

externdef __imp_SQLTablePrivilegesW:PPROC
SQLTablePrivilegesW equ <__imp_SQLTablePrivilegesW>
  IFDEF __UNICODE__
    SQLTablePrivileges equ <__imp_SQLTablePrivilegesW>
  ENDIF

externdef __imp_SQLTables:PPROC
SQLTables equ <__imp_SQLTables>

externdef __imp_SQLTablesA:PPROC
SQLTablesA equ <__imp_SQLTablesA>
  IFNDEF __UNICODE__
    SQLTables equ <__imp_SQLTablesA>
  ENDIF

externdef __imp_SQLTablesW:PPROC
SQLTablesW equ <__imp_SQLTablesW>
  IFDEF __UNICODE__
    SQLTables equ <__imp_SQLTablesW>
  ENDIF

externdef __imp_SQLTransact:PPROC
SQLTransact equ <__imp_SQLTransact>

externdef __imp_SearchStatusCode:PPROC
SearchStatusCode equ <__imp_SearchStatusCode>

externdef __imp_VFreeErrors:PPROC
VFreeErrors equ <__imp_VFreeErrors>

externdef __imp_VRetrieveDriverErrorsRowCol:PPROC
VRetrieveDriverErrorsRowCol equ <__imp_VRetrieveDriverErrorsRowCol>

externdef __imp_ValidateErrorQueue:PPROC
ValidateErrorQueue equ <__imp_ValidateErrorQueue>

externdef __imp_g_hHeapMalloc:PPROC
g_hHeapMalloc equ <__imp_g_hHeapMalloc>

externdef __imp_odbc32_ordinal113:PPROC
odbc32_ordinal113 equ <__imp_odbc32_ordinal113>

externdef __imp_odbc32_ordinal114:PPROC
odbc32_ordinal114 equ <__imp_odbc32_ordinal114>

externdef __imp_odbc32_ordinal115:PPROC
odbc32_ordinal115 equ <__imp_odbc32_ordinal115>

externdef __imp_odbc32_ordinal116:PPROC
odbc32_ordinal116 equ <__imp_odbc32_ordinal116>

externdef __imp_odbc32_ordinal118:PPROC
odbc32_ordinal118 equ <__imp_odbc32_ordinal118>

externdef __imp_odbc32_ordinal120:PPROC
odbc32_ordinal120 equ <__imp_odbc32_ordinal120>

externdef __imp_odbc32_ordinal122:PPROC
odbc32_ordinal122 equ <__imp_odbc32_ordinal122>

externdef __imp_odbc32_ordinal123:PPROC
odbc32_ordinal123 equ <__imp_odbc32_ordinal123>

externdef __imp_odbc32_ordinal124:PPROC
odbc32_ordinal124 equ <__imp_odbc32_ordinal124>

externdef __imp_odbc32_ordinal125:PPROC
odbc32_ordinal125 equ <__imp_odbc32_ordinal125>

externdef __imp_odbc32_ordinal126:PPROC
odbc32_ordinal126 equ <__imp_odbc32_ordinal126>

externdef __imp_odbc32_ordinal128:PPROC
odbc32_ordinal128 equ <__imp_odbc32_ordinal128>

externdef __imp_odbc32_ordinal129:PPROC
odbc32_ordinal129 equ <__imp_odbc32_ordinal129>

externdef __imp_odbc32_ordinal130:PPROC
odbc32_ordinal130 equ <__imp_odbc32_ordinal130>

externdef __imp_odbc32_ordinal131:PPROC
odbc32_ordinal131 equ <__imp_odbc32_ordinal131>

externdef __imp_odbc32_ordinal137:PPROC
odbc32_ordinal137 equ <__imp_odbc32_ordinal137>

externdef __imp_odbc32_ordinal143:PPROC
odbc32_ordinal143 equ <__imp_odbc32_ordinal143>

externdef __imp_odbc32_ordinal144:PPROC
odbc32_ordinal144 equ <__imp_odbc32_ordinal144>

externdef __imp_odbc32_ordinal146:PPROC
odbc32_ordinal146 equ <__imp_odbc32_ordinal146>

externdef __imp_odbc32_ordinal148:PPROC
odbc32_ordinal148 equ <__imp_odbc32_ordinal148>

externdef __imp_odbc32_ordinal149:PPROC
odbc32_ordinal149 equ <__imp_odbc32_ordinal149>

externdef __imp_odbc32_ordinal151:PPROC
odbc32_ordinal151 equ <__imp_odbc32_ordinal151>

externdef __imp_odbc32_ordinal158:PPROC
odbc32_ordinal158 equ <__imp_odbc32_ordinal158>

externdef __imp_odbc32_ordinal159:PPROC
odbc32_ordinal159 equ <__imp_odbc32_ordinal159>

externdef __imp_odbc32_ordinal161:PPROC
odbc32_ordinal161 equ <__imp_odbc32_ordinal161>

externdef __imp_odbc32_ordinal163:PPROC
odbc32_ordinal163 equ <__imp_odbc32_ordinal163>

externdef __imp_odbc32_ordinal164:PPROC
odbc32_ordinal164 equ <__imp_odbc32_ordinal164>

externdef __imp_odbc32_ordinal168:PPROC
odbc32_ordinal168 equ <__imp_odbc32_ordinal168>

externdef __imp_odbc32_ordinal169:PPROC
odbc32_ordinal169 equ <__imp_odbc32_ordinal169>

externdef __imp_odbc32_ordinal172:PPROC
odbc32_ordinal172 equ <__imp_odbc32_ordinal172>

externdef __imp_odbc32_ordinal174:PPROC
odbc32_ordinal174 equ <__imp_odbc32_ordinal174>

externdef __imp_odbc32_ordinal175:PPROC
odbc32_ordinal175 equ <__imp_odbc32_ordinal175>

externdef __imp_odbc32_ordinal177:PPROC
odbc32_ordinal177 equ <__imp_odbc32_ordinal177>

externdef __imp_odbc32_ordinal178:PPROC
odbc32_ordinal178 equ <__imp_odbc32_ordinal178>

externdef __imp_odbc32_ordinal179:PPROC
odbc32_ordinal179 equ <__imp_odbc32_ordinal179>

externdef __imp_odbc32_ordinal180:PPROC
odbc32_ordinal180 equ <__imp_odbc32_ordinal180>

externdef __imp_odbc32_ordinal181:PPROC
odbc32_ordinal181 equ <__imp_odbc32_ordinal181>

externdef __imp_odbc32_ordinal182:PPROC
odbc32_ordinal182 equ <__imp_odbc32_ordinal182>

externdef __imp_odbc32_ordinal183:PPROC
odbc32_ordinal183 equ <__imp_odbc32_ordinal183>

externdef __imp_odbc32_ordinal184:PPROC
odbc32_ordinal184 equ <__imp_odbc32_ordinal184>

externdef __imp_odbc32_ordinal185:PPROC
odbc32_ordinal185 equ <__imp_odbc32_ordinal185>

externdef __imp_odbc32_ordinal186:PPROC
odbc32_ordinal186 equ <__imp_odbc32_ordinal186>

externdef __imp_odbc32_ordinal187:PPROC
odbc32_ordinal187 equ <__imp_odbc32_ordinal187>

externdef __imp_odbc32_ordinal188:PPROC
odbc32_ordinal188 equ <__imp_odbc32_ordinal188>

externdef __imp_odbc32_ordinal189:PPROC
odbc32_ordinal189 equ <__imp_odbc32_ordinal189>

externdef __imp_odbc32_ordinal190:PPROC
odbc32_ordinal190 equ <__imp_odbc32_ordinal190>

externdef __imp_odbc32_ordinal191:PPROC
odbc32_ordinal191 equ <__imp_odbc32_ordinal191>

externdef __imp_odbc32_ordinal192:PPROC
odbc32_ordinal192 equ <__imp_odbc32_ordinal192>

externdef __imp_odbc32_ordinal193:PPROC
odbc32_ordinal193 equ <__imp_odbc32_ordinal193>

externdef __imp_odbc32_ordinal194:PPROC
odbc32_ordinal194 equ <__imp_odbc32_ordinal194>

externdef __imp_odbc32_ordinal195:PPROC
odbc32_ordinal195 equ <__imp_odbc32_ordinal195>

externdef __imp_odbc32_ordinal196:PPROC
odbc32_ordinal196 equ <__imp_odbc32_ordinal196>

externdef __imp_odbc32_ordinal197:PPROC
odbc32_ordinal197 equ <__imp_odbc32_ordinal197>

externdef __imp_odbc32_ordinal198:PPROC
odbc32_ordinal198 equ <__imp_odbc32_ordinal198>

externdef __imp_odbc32_ordinal199:PPROC
odbc32_ordinal199 equ <__imp_odbc32_ordinal199>

externdef __imp_odbc32_ordinal200:PPROC
odbc32_ordinal200 equ <__imp_odbc32_ordinal200>

externdef __imp_odbc32_ordinal201:PPROC
odbc32_ordinal201 equ <__imp_odbc32_ordinal201>

externdef __imp_odbc32_ordinal202:PPROC
odbc32_ordinal202 equ <__imp_odbc32_ordinal202>

externdef __imp_odbc32_ordinal203:PPROC
odbc32_ordinal203 equ <__imp_odbc32_ordinal203>

externdef __imp_odbc32_ordinal204:PPROC
odbc32_ordinal204 equ <__imp_odbc32_ordinal204>

externdef __imp_odbc32_ordinal205:PPROC
odbc32_ordinal205 equ <__imp_odbc32_ordinal205>

externdef __imp_odbc32_ordinal209:PPROC
odbc32_ordinal209 equ <__imp_odbc32_ordinal209>

externdef __imp_odbc32_ordinal212:PPROC
odbc32_ordinal212 equ <__imp_odbc32_ordinal212>

externdef __imp_odbc32_ordinal213:PPROC
odbc32_ordinal213 equ <__imp_odbc32_ordinal213>

externdef __imp_odbc32_ordinal214:PPROC
odbc32_ordinal214 equ <__imp_odbc32_ordinal214>

externdef __imp_odbc32_ordinal215:PPROC
odbc32_ordinal215 equ <__imp_odbc32_ordinal215>

externdef __imp_odbc32_ordinal216:PPROC
odbc32_ordinal216 equ <__imp_odbc32_ordinal216>

externdef __imp_odbc32_ordinal218:PPROC
odbc32_ordinal218 equ <__imp_odbc32_ordinal218>

externdef __imp_odbc32_ordinal220:PPROC
odbc32_ordinal220 equ <__imp_odbc32_ordinal220>

externdef __imp_odbc32_ordinal222:PPROC
odbc32_ordinal222 equ <__imp_odbc32_ordinal222>

externdef __imp_odbc32_ordinal223:PPROC
odbc32_ordinal223 equ <__imp_odbc32_ordinal223>

externdef __imp_odbc32_ordinal224:PPROC
odbc32_ordinal224 equ <__imp_odbc32_ordinal224>

externdef __imp_odbc32_ordinal225:PPROC
odbc32_ordinal225 equ <__imp_odbc32_ordinal225>

externdef __imp_odbc32_ordinal226:PPROC
odbc32_ordinal226 equ <__imp_odbc32_ordinal226>

externdef __imp_odbc32_ordinal228:PPROC
odbc32_ordinal228 equ <__imp_odbc32_ordinal228>

externdef __imp_odbc32_ordinal229:PPROC
odbc32_ordinal229 equ <__imp_odbc32_ordinal229>

externdef __imp_odbc32_ordinal230:PPROC
odbc32_ordinal230 equ <__imp_odbc32_ordinal230>

externdef __imp_odbc32_ordinal231:PPROC
odbc32_ordinal231 equ <__imp_odbc32_ordinal231>

externdef __imp_odbc32_ordinal237:PPROC
odbc32_ordinal237 equ <__imp_odbc32_ordinal237>

externdef __imp_odbc32_ordinal243:PPROC
odbc32_ordinal243 equ <__imp_odbc32_ordinal243>

externdef __imp_odbc32_ordinal244:PPROC
odbc32_ordinal244 equ <__imp_odbc32_ordinal244>

externdef __imp_odbc32_ordinal246:PPROC
odbc32_ordinal246 equ <__imp_odbc32_ordinal246>

externdef __imp_odbc32_ordinal248:PPROC
odbc32_ordinal248 equ <__imp_odbc32_ordinal248>

externdef __imp_odbc32_ordinal249:PPROC
odbc32_ordinal249 equ <__imp_odbc32_ordinal249>

externdef __imp_odbc32_ordinal251:PPROC
odbc32_ordinal251 equ <__imp_odbc32_ordinal251>

externdef __imp_odbc32_ordinal258:PPROC
odbc32_ordinal258 equ <__imp_odbc32_ordinal258>

externdef __imp_odbc32_ordinal259:PPROC
odbc32_ordinal259 equ <__imp_odbc32_ordinal259>

externdef __imp_odbc32_ordinal261:PPROC
odbc32_ordinal261 equ <__imp_odbc32_ordinal261>

externdef __imp_odbc32_ordinal263:PPROC
odbc32_ordinal263 equ <__imp_odbc32_ordinal263>

externdef __imp_odbc32_ordinal264:PPROC
odbc32_ordinal264 equ <__imp_odbc32_ordinal264>

externdef __imp_odbc32_ordinal268:PPROC
odbc32_ordinal268 equ <__imp_odbc32_ordinal268>

externdef __imp_odbc32_ordinal269:PPROC
odbc32_ordinal269 equ <__imp_odbc32_ordinal269>

externdef __imp_odbc32_ordinal272:PPROC
odbc32_ordinal272 equ <__imp_odbc32_ordinal272>

externdef __imp_odbc32_ordinal274:PPROC
odbc32_ordinal274 equ <__imp_odbc32_ordinal274>

externdef __imp_odbc32_ordinal275:PPROC
odbc32_ordinal275 equ <__imp_odbc32_ordinal275>

externdef __imp_odbc32_ordinal277:PPROC
odbc32_ordinal277 equ <__imp_odbc32_ordinal277>

externdef __imp_odbc32_ordinal278:PPROC
odbc32_ordinal278 equ <__imp_odbc32_ordinal278>

externdef __imp_odbc32_ordinal279:PPROC
odbc32_ordinal279 equ <__imp_odbc32_ordinal279>

externdef __imp_odbc32_ordinal280:PPROC
odbc32_ordinal280 equ <__imp_odbc32_ordinal280>

externdef __imp_odbc32_ordinal281:PPROC
odbc32_ordinal281 equ <__imp_odbc32_ordinal281>

externdef __imp_odbc32_ordinal282:PPROC
odbc32_ordinal282 equ <__imp_odbc32_ordinal282>

externdef __imp_odbc32_ordinal283:PPROC
odbc32_ordinal283 equ <__imp_odbc32_ordinal283>

externdef __imp_odbc32_ordinal284:PPROC
odbc32_ordinal284 equ <__imp_odbc32_ordinal284>

externdef __imp_odbc32_ordinal285:PPROC
odbc32_ordinal285 equ <__imp_odbc32_ordinal285>

externdef __imp_odbc32_ordinal286:PPROC
odbc32_ordinal286 equ <__imp_odbc32_ordinal286>

externdef __imp_odbc32_ordinal287:PPROC
odbc32_ordinal287 equ <__imp_odbc32_ordinal287>

externdef __imp_odbc32_ordinal288:PPROC
odbc32_ordinal288 equ <__imp_odbc32_ordinal288>

externdef __imp_odbc32_ordinal289:PPROC
odbc32_ordinal289 equ <__imp_odbc32_ordinal289>

externdef __imp_odbc32_ordinal290:PPROC
odbc32_ordinal290 equ <__imp_odbc32_ordinal290>

externdef __imp_odbc32_ordinal291:PPROC
odbc32_ordinal291 equ <__imp_odbc32_ordinal291>

externdef __imp_odbc32_ordinal292:PPROC
odbc32_ordinal292 equ <__imp_odbc32_ordinal292>

externdef __imp_odbc32_ordinal293:PPROC
odbc32_ordinal293 equ <__imp_odbc32_ordinal293>

externdef __imp_odbc32_ordinal294:PPROC
odbc32_ordinal294 equ <__imp_odbc32_ordinal294>

externdef __imp_odbc32_ordinal295:PPROC
odbc32_ordinal295 equ <__imp_odbc32_ordinal295>

externdef __imp_odbc32_ordinal296:PPROC
odbc32_ordinal296 equ <__imp_odbc32_ordinal296>

externdef __imp_odbc32_ordinal297:PPROC
odbc32_ordinal297 equ <__imp_odbc32_ordinal297>

externdef __imp_odbc32_ordinal298:PPROC
odbc32_ordinal298 equ <__imp_odbc32_ordinal298>

externdef __imp_odbc32_ordinal299:PPROC
odbc32_ordinal299 equ <__imp_odbc32_ordinal299>

externdef __imp_odbc32_ordinal300:PPROC
odbc32_ordinal300 equ <__imp_odbc32_ordinal300>
