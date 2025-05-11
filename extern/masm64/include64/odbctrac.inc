externdef __imp_FireVSDebugEvent:PPROC
FireVSDebugEvent equ <__imp_FireVSDebugEvent>

externdef __imp_TraceCloseLogFile:PPROC
TraceCloseLogFile equ <__imp_TraceCloseLogFile>

externdef __imp_TraceOpenLogFile:PPROC
TraceOpenLogFile equ <__imp_TraceOpenLogFile>

externdef __imp_TraceReturn:PPROC
TraceReturn equ <__imp_TraceReturn>

externdef __imp_TraceSQLAllocConnect:PPROC
TraceSQLAllocConnect equ <__imp_TraceSQLAllocConnect>

externdef __imp_TraceSQLAllocEnv:PPROC
TraceSQLAllocEnv equ <__imp_TraceSQLAllocEnv>

externdef __imp_TraceSQLAllocHandle:PPROC
TraceSQLAllocHandle equ <__imp_TraceSQLAllocHandle>

externdef __imp_TraceSQLAllocHandleStd:PPROC
TraceSQLAllocHandleStd equ <__imp_TraceSQLAllocHandleStd>

externdef __imp_TraceSQLAllocHandleStdW:PPROC
TraceSQLAllocHandleStdW equ <__imp_TraceSQLAllocHandleStdW>
  IFDEF __UNICODE__
    TraceSQLAllocHandleStd equ <__imp_TraceSQLAllocHandleStdW>
  ENDIF

externdef __imp_TraceSQLAllocStmt:PPROC
TraceSQLAllocStmt equ <__imp_TraceSQLAllocStmt>

externdef __imp_TraceSQLBindCol:PPROC
TraceSQLBindCol equ <__imp_TraceSQLBindCol>

externdef __imp_TraceSQLBindParam:PPROC
TraceSQLBindParam equ <__imp_TraceSQLBindParam>

externdef __imp_TraceSQLBindParameter:PPROC
TraceSQLBindParameter equ <__imp_TraceSQLBindParameter>

externdef __imp_TraceSQLBrowseConnect:PPROC
TraceSQLBrowseConnect equ <__imp_TraceSQLBrowseConnect>

externdef __imp_TraceSQLBrowseConnectW:PPROC
TraceSQLBrowseConnectW equ <__imp_TraceSQLBrowseConnectW>
  IFDEF __UNICODE__
    TraceSQLBrowseConnect equ <__imp_TraceSQLBrowseConnectW>
  ENDIF

externdef __imp_TraceSQLBulkOperations:PPROC
TraceSQLBulkOperations equ <__imp_TraceSQLBulkOperations>

externdef __imp_TraceSQLCancel:PPROC
TraceSQLCancel equ <__imp_TraceSQLCancel>

externdef __imp_TraceSQLCloseCursor:PPROC
TraceSQLCloseCursor equ <__imp_TraceSQLCloseCursor>

externdef __imp_TraceSQLColAttribute:PPROC
TraceSQLColAttribute equ <__imp_TraceSQLColAttribute>

externdef __imp_TraceSQLColAttributeW:PPROC
TraceSQLColAttributeW equ <__imp_TraceSQLColAttributeW>
  IFDEF __UNICODE__
    TraceSQLColAttribute equ <__imp_TraceSQLColAttributeW>
  ENDIF

externdef __imp_TraceSQLColAttributes:PPROC
TraceSQLColAttributes equ <__imp_TraceSQLColAttributes>

externdef __imp_TraceSQLColAttributesW:PPROC
TraceSQLColAttributesW equ <__imp_TraceSQLColAttributesW>
  IFDEF __UNICODE__
    TraceSQLColAttributes equ <__imp_TraceSQLColAttributesW>
  ENDIF

externdef __imp_TraceSQLColumnPrivileges:PPROC
TraceSQLColumnPrivileges equ <__imp_TraceSQLColumnPrivileges>

externdef __imp_TraceSQLColumnPrivilegesW:PPROC
TraceSQLColumnPrivilegesW equ <__imp_TraceSQLColumnPrivilegesW>
  IFDEF __UNICODE__
    TraceSQLColumnPrivileges equ <__imp_TraceSQLColumnPrivilegesW>
  ENDIF

externdef __imp_TraceSQLColumns:PPROC
TraceSQLColumns equ <__imp_TraceSQLColumns>

externdef __imp_TraceSQLColumnsW:PPROC
TraceSQLColumnsW equ <__imp_TraceSQLColumnsW>
  IFDEF __UNICODE__
    TraceSQLColumns equ <__imp_TraceSQLColumnsW>
  ENDIF

externdef __imp_TraceSQLConnect:PPROC
TraceSQLConnect equ <__imp_TraceSQLConnect>

externdef __imp_TraceSQLConnectW:PPROC
TraceSQLConnectW equ <__imp_TraceSQLConnectW>
  IFDEF __UNICODE__
    TraceSQLConnect equ <__imp_TraceSQLConnectW>
  ENDIF

externdef __imp_TraceSQLCopyDesc:PPROC
TraceSQLCopyDesc equ <__imp_TraceSQLCopyDesc>

externdef __imp_TraceSQLDataSources:PPROC
TraceSQLDataSources equ <__imp_TraceSQLDataSources>

externdef __imp_TraceSQLDataSourcesW:PPROC
TraceSQLDataSourcesW equ <__imp_TraceSQLDataSourcesW>
  IFDEF __UNICODE__
    TraceSQLDataSources equ <__imp_TraceSQLDataSourcesW>
  ENDIF

externdef __imp_TraceSQLDescribeCol:PPROC
TraceSQLDescribeCol equ <__imp_TraceSQLDescribeCol>

externdef __imp_TraceSQLDescribeColW:PPROC
TraceSQLDescribeColW equ <__imp_TraceSQLDescribeColW>
  IFDEF __UNICODE__
    TraceSQLDescribeCol equ <__imp_TraceSQLDescribeColW>
  ENDIF

externdef __imp_TraceSQLDescribeParam:PPROC
TraceSQLDescribeParam equ <__imp_TraceSQLDescribeParam>

externdef __imp_TraceSQLDisconnect:PPROC
TraceSQLDisconnect equ <__imp_TraceSQLDisconnect>

externdef __imp_TraceSQLDriverConnect:PPROC
TraceSQLDriverConnect equ <__imp_TraceSQLDriverConnect>

externdef __imp_TraceSQLDriverConnectW:PPROC
TraceSQLDriverConnectW equ <__imp_TraceSQLDriverConnectW>
  IFDEF __UNICODE__
    TraceSQLDriverConnect equ <__imp_TraceSQLDriverConnectW>
  ENDIF

externdef __imp_TraceSQLDrivers:PPROC
TraceSQLDrivers equ <__imp_TraceSQLDrivers>

externdef __imp_TraceSQLDriversW:PPROC
TraceSQLDriversW equ <__imp_TraceSQLDriversW>
  IFDEF __UNICODE__
    TraceSQLDrivers equ <__imp_TraceSQLDriversW>
  ENDIF

externdef __imp_TraceSQLEndTran:PPROC
TraceSQLEndTran equ <__imp_TraceSQLEndTran>

externdef __imp_TraceSQLError:PPROC
TraceSQLError equ <__imp_TraceSQLError>

externdef __imp_TraceSQLErrorW:PPROC
TraceSQLErrorW equ <__imp_TraceSQLErrorW>
  IFDEF __UNICODE__
    TraceSQLError equ <__imp_TraceSQLErrorW>
  ENDIF

externdef __imp_TraceSQLExecDirect:PPROC
TraceSQLExecDirect equ <__imp_TraceSQLExecDirect>

externdef __imp_TraceSQLExecDirectW:PPROC
TraceSQLExecDirectW equ <__imp_TraceSQLExecDirectW>
  IFDEF __UNICODE__
    TraceSQLExecDirect equ <__imp_TraceSQLExecDirectW>
  ENDIF

externdef __imp_TraceSQLExecute:PPROC
TraceSQLExecute equ <__imp_TraceSQLExecute>

externdef __imp_TraceSQLExtendedFetch:PPROC
TraceSQLExtendedFetch equ <__imp_TraceSQLExtendedFetch>

externdef __imp_TraceSQLFetch:PPROC
TraceSQLFetch equ <__imp_TraceSQLFetch>

externdef __imp_TraceSQLFetchScroll:PPROC
TraceSQLFetchScroll equ <__imp_TraceSQLFetchScroll>

externdef __imp_TraceSQLForeignKeys:PPROC
TraceSQLForeignKeys equ <__imp_TraceSQLForeignKeys>

externdef __imp_TraceSQLForeignKeysW:PPROC
TraceSQLForeignKeysW equ <__imp_TraceSQLForeignKeysW>
  IFDEF __UNICODE__
    TraceSQLForeignKeys equ <__imp_TraceSQLForeignKeysW>
  ENDIF

externdef __imp_TraceSQLFreeConnect:PPROC
TraceSQLFreeConnect equ <__imp_TraceSQLFreeConnect>

externdef __imp_TraceSQLFreeEnv:PPROC
TraceSQLFreeEnv equ <__imp_TraceSQLFreeEnv>

externdef __imp_TraceSQLFreeHandle:PPROC
TraceSQLFreeHandle equ <__imp_TraceSQLFreeHandle>

externdef __imp_TraceSQLFreeStmt:PPROC
TraceSQLFreeStmt equ <__imp_TraceSQLFreeStmt>

externdef __imp_TraceSQLGetConnectAttr:PPROC
TraceSQLGetConnectAttr equ <__imp_TraceSQLGetConnectAttr>

externdef __imp_TraceSQLGetConnectAttrW:PPROC
TraceSQLGetConnectAttrW equ <__imp_TraceSQLGetConnectAttrW>
  IFDEF __UNICODE__
    TraceSQLGetConnectAttr equ <__imp_TraceSQLGetConnectAttrW>
  ENDIF

externdef __imp_TraceSQLGetConnectOption:PPROC
TraceSQLGetConnectOption equ <__imp_TraceSQLGetConnectOption>

externdef __imp_TraceSQLGetConnectOptionW:PPROC
TraceSQLGetConnectOptionW equ <__imp_TraceSQLGetConnectOptionW>
  IFDEF __UNICODE__
    TraceSQLGetConnectOption equ <__imp_TraceSQLGetConnectOptionW>
  ENDIF

externdef __imp_TraceSQLGetCursorName:PPROC
TraceSQLGetCursorName equ <__imp_TraceSQLGetCursorName>

externdef __imp_TraceSQLGetCursorNameW:PPROC
TraceSQLGetCursorNameW equ <__imp_TraceSQLGetCursorNameW>
  IFDEF __UNICODE__
    TraceSQLGetCursorName equ <__imp_TraceSQLGetCursorNameW>
  ENDIF

externdef __imp_TraceSQLGetData:PPROC
TraceSQLGetData equ <__imp_TraceSQLGetData>

externdef __imp_TraceSQLGetDescField:PPROC
TraceSQLGetDescField equ <__imp_TraceSQLGetDescField>

externdef __imp_TraceSQLGetDescFieldW:PPROC
TraceSQLGetDescFieldW equ <__imp_TraceSQLGetDescFieldW>
  IFDEF __UNICODE__
    TraceSQLGetDescField equ <__imp_TraceSQLGetDescFieldW>
  ENDIF

externdef __imp_TraceSQLGetDescRec:PPROC
TraceSQLGetDescRec equ <__imp_TraceSQLGetDescRec>

externdef __imp_TraceSQLGetDescRecW:PPROC
TraceSQLGetDescRecW equ <__imp_TraceSQLGetDescRecW>
  IFDEF __UNICODE__
    TraceSQLGetDescRec equ <__imp_TraceSQLGetDescRecW>
  ENDIF

externdef __imp_TraceSQLGetDiagField:PPROC
TraceSQLGetDiagField equ <__imp_TraceSQLGetDiagField>

externdef __imp_TraceSQLGetDiagFieldW:PPROC
TraceSQLGetDiagFieldW equ <__imp_TraceSQLGetDiagFieldW>
  IFDEF __UNICODE__
    TraceSQLGetDiagField equ <__imp_TraceSQLGetDiagFieldW>
  ENDIF

externdef __imp_TraceSQLGetDiagRec:PPROC
TraceSQLGetDiagRec equ <__imp_TraceSQLGetDiagRec>

externdef __imp_TraceSQLGetDiagRecW:PPROC
TraceSQLGetDiagRecW equ <__imp_TraceSQLGetDiagRecW>
  IFDEF __UNICODE__
    TraceSQLGetDiagRec equ <__imp_TraceSQLGetDiagRecW>
  ENDIF

externdef __imp_TraceSQLGetEnvAttr:PPROC
TraceSQLGetEnvAttr equ <__imp_TraceSQLGetEnvAttr>

externdef __imp_TraceSQLGetFunctions:PPROC
TraceSQLGetFunctions equ <__imp_TraceSQLGetFunctions>

externdef __imp_TraceSQLGetInfo:PPROC
TraceSQLGetInfo equ <__imp_TraceSQLGetInfo>

externdef __imp_TraceSQLGetInfoW:PPROC
TraceSQLGetInfoW equ <__imp_TraceSQLGetInfoW>
  IFDEF __UNICODE__
    TraceSQLGetInfo equ <__imp_TraceSQLGetInfoW>
  ENDIF

externdef __imp_TraceSQLGetStmtAttr:PPROC
TraceSQLGetStmtAttr equ <__imp_TraceSQLGetStmtAttr>

externdef __imp_TraceSQLGetStmtAttrW:PPROC
TraceSQLGetStmtAttrW equ <__imp_TraceSQLGetStmtAttrW>
  IFDEF __UNICODE__
    TraceSQLGetStmtAttr equ <__imp_TraceSQLGetStmtAttrW>
  ENDIF

externdef __imp_TraceSQLGetStmtOption:PPROC
TraceSQLGetStmtOption equ <__imp_TraceSQLGetStmtOption>

externdef __imp_TraceSQLGetTypeInfo:PPROC
TraceSQLGetTypeInfo equ <__imp_TraceSQLGetTypeInfo>

externdef __imp_TraceSQLGetTypeInfoW:PPROC
TraceSQLGetTypeInfoW equ <__imp_TraceSQLGetTypeInfoW>
  IFDEF __UNICODE__
    TraceSQLGetTypeInfo equ <__imp_TraceSQLGetTypeInfoW>
  ENDIF

externdef __imp_TraceSQLMoreResults:PPROC
TraceSQLMoreResults equ <__imp_TraceSQLMoreResults>

externdef __imp_TraceSQLNativeSql:PPROC
TraceSQLNativeSql equ <__imp_TraceSQLNativeSql>

externdef __imp_TraceSQLNativeSqlW:PPROC
TraceSQLNativeSqlW equ <__imp_TraceSQLNativeSqlW>
  IFDEF __UNICODE__
    TraceSQLNativeSql equ <__imp_TraceSQLNativeSqlW>
  ENDIF

externdef __imp_TraceSQLNumParams:PPROC
TraceSQLNumParams equ <__imp_TraceSQLNumParams>

externdef __imp_TraceSQLNumResultCols:PPROC
TraceSQLNumResultCols equ <__imp_TraceSQLNumResultCols>

externdef __imp_TraceSQLParamData:PPROC
TraceSQLParamData equ <__imp_TraceSQLParamData>

externdef __imp_TraceSQLParamOptions:PPROC
TraceSQLParamOptions equ <__imp_TraceSQLParamOptions>

externdef __imp_TraceSQLPrepare:PPROC
TraceSQLPrepare equ <__imp_TraceSQLPrepare>

externdef __imp_TraceSQLPrepareW:PPROC
TraceSQLPrepareW equ <__imp_TraceSQLPrepareW>
  IFDEF __UNICODE__
    TraceSQLPrepare equ <__imp_TraceSQLPrepareW>
  ENDIF

externdef __imp_TraceSQLPrimaryKeys:PPROC
TraceSQLPrimaryKeys equ <__imp_TraceSQLPrimaryKeys>

externdef __imp_TraceSQLPrimaryKeysW:PPROC
TraceSQLPrimaryKeysW equ <__imp_TraceSQLPrimaryKeysW>
  IFDEF __UNICODE__
    TraceSQLPrimaryKeys equ <__imp_TraceSQLPrimaryKeysW>
  ENDIF

externdef __imp_TraceSQLProcedureColumns:PPROC
TraceSQLProcedureColumns equ <__imp_TraceSQLProcedureColumns>

externdef __imp_TraceSQLProcedureColumnsW:PPROC
TraceSQLProcedureColumnsW equ <__imp_TraceSQLProcedureColumnsW>
  IFDEF __UNICODE__
    TraceSQLProcedureColumns equ <__imp_TraceSQLProcedureColumnsW>
  ENDIF

externdef __imp_TraceSQLProcedures:PPROC
TraceSQLProcedures equ <__imp_TraceSQLProcedures>

externdef __imp_TraceSQLProceduresW:PPROC
TraceSQLProceduresW equ <__imp_TraceSQLProceduresW>
  IFDEF __UNICODE__
    TraceSQLProcedures equ <__imp_TraceSQLProceduresW>
  ENDIF

externdef __imp_TraceSQLPutData:PPROC
TraceSQLPutData equ <__imp_TraceSQLPutData>

externdef __imp_TraceSQLRowCount:PPROC
TraceSQLRowCount equ <__imp_TraceSQLRowCount>

externdef __imp_TraceSQLSetConnectAttr:PPROC
TraceSQLSetConnectAttr equ <__imp_TraceSQLSetConnectAttr>

externdef __imp_TraceSQLSetConnectAttrW:PPROC
TraceSQLSetConnectAttrW equ <__imp_TraceSQLSetConnectAttrW>
  IFDEF __UNICODE__
    TraceSQLSetConnectAttr equ <__imp_TraceSQLSetConnectAttrW>
  ENDIF

externdef __imp_TraceSQLSetConnectOption:PPROC
TraceSQLSetConnectOption equ <__imp_TraceSQLSetConnectOption>

externdef __imp_TraceSQLSetConnectOptionW:PPROC
TraceSQLSetConnectOptionW equ <__imp_TraceSQLSetConnectOptionW>
  IFDEF __UNICODE__
    TraceSQLSetConnectOption equ <__imp_TraceSQLSetConnectOptionW>
  ENDIF

externdef __imp_TraceSQLSetCursorName:PPROC
TraceSQLSetCursorName equ <__imp_TraceSQLSetCursorName>

externdef __imp_TraceSQLSetCursorNameW:PPROC
TraceSQLSetCursorNameW equ <__imp_TraceSQLSetCursorNameW>
  IFDEF __UNICODE__
    TraceSQLSetCursorName equ <__imp_TraceSQLSetCursorNameW>
  ENDIF

externdef __imp_TraceSQLSetDescField:PPROC
TraceSQLSetDescField equ <__imp_TraceSQLSetDescField>

externdef __imp_TraceSQLSetDescFieldW:PPROC
TraceSQLSetDescFieldW equ <__imp_TraceSQLSetDescFieldW>
  IFDEF __UNICODE__
    TraceSQLSetDescField equ <__imp_TraceSQLSetDescFieldW>
  ENDIF

externdef __imp_TraceSQLSetDescRec:PPROC
TraceSQLSetDescRec equ <__imp_TraceSQLSetDescRec>

externdef __imp_TraceSQLSetEnvAttr:PPROC
TraceSQLSetEnvAttr equ <__imp_TraceSQLSetEnvAttr>

externdef __imp_TraceSQLSetParam:PPROC
TraceSQLSetParam equ <__imp_TraceSQLSetParam>

externdef __imp_TraceSQLSetPos:PPROC
TraceSQLSetPos equ <__imp_TraceSQLSetPos>

externdef __imp_TraceSQLSetScrollOptions:PPROC
TraceSQLSetScrollOptions equ <__imp_TraceSQLSetScrollOptions>

externdef __imp_TraceSQLSetStmtAttr:PPROC
TraceSQLSetStmtAttr equ <__imp_TraceSQLSetStmtAttr>

externdef __imp_TraceSQLSetStmtAttrW:PPROC
TraceSQLSetStmtAttrW equ <__imp_TraceSQLSetStmtAttrW>
  IFDEF __UNICODE__
    TraceSQLSetStmtAttr equ <__imp_TraceSQLSetStmtAttrW>
  ENDIF

externdef __imp_TraceSQLSetStmtOption:PPROC
TraceSQLSetStmtOption equ <__imp_TraceSQLSetStmtOption>

externdef __imp_TraceSQLSpecialColumns:PPROC
TraceSQLSpecialColumns equ <__imp_TraceSQLSpecialColumns>

externdef __imp_TraceSQLSpecialColumnsW:PPROC
TraceSQLSpecialColumnsW equ <__imp_TraceSQLSpecialColumnsW>
  IFDEF __UNICODE__
    TraceSQLSpecialColumns equ <__imp_TraceSQLSpecialColumnsW>
  ENDIF

externdef __imp_TraceSQLStatistics:PPROC
TraceSQLStatistics equ <__imp_TraceSQLStatistics>

externdef __imp_TraceSQLStatisticsW:PPROC
TraceSQLStatisticsW equ <__imp_TraceSQLStatisticsW>
  IFDEF __UNICODE__
    TraceSQLStatistics equ <__imp_TraceSQLStatisticsW>
  ENDIF

externdef __imp_TraceSQLTablePrivileges:PPROC
TraceSQLTablePrivileges equ <__imp_TraceSQLTablePrivileges>

externdef __imp_TraceSQLTablePrivilegesW:PPROC
TraceSQLTablePrivilegesW equ <__imp_TraceSQLTablePrivilegesW>
  IFDEF __UNICODE__
    TraceSQLTablePrivileges equ <__imp_TraceSQLTablePrivilegesW>
  ENDIF

externdef __imp_TraceSQLTables:PPROC
TraceSQLTables equ <__imp_TraceSQLTables>

externdef __imp_TraceSQLTablesW:PPROC
TraceSQLTablesW equ <__imp_TraceSQLTablesW>
  IFDEF __UNICODE__
    TraceSQLTables equ <__imp_TraceSQLTablesW>
  ENDIF

externdef __imp_TraceSQLTransact:PPROC
TraceSQLTransact equ <__imp_TraceSQLTransact>

externdef __imp_TraceVSControl:PPROC
TraceVSControl equ <__imp_TraceVSControl>

externdef __imp_TraceVersion:PPROC
TraceVersion equ <__imp_TraceVersion>

externdef __imp_odbctrac_ordinal100:PPROC
odbctrac_ordinal100 equ <__imp_odbctrac_ordinal100>

externdef __imp_odbctrac_ordinal101:PPROC
odbctrac_ordinal101 equ <__imp_odbctrac_ordinal101>

externdef __imp_odbctrac_ordinal102:PPROC
odbctrac_ordinal102 equ <__imp_odbctrac_ordinal102>

externdef __imp_odbctrac_ordinal103:PPROC
odbctrac_ordinal103 equ <__imp_odbctrac_ordinal103>

externdef __imp_odbctrac_ordinal104:PPROC
odbctrac_ordinal104 equ <__imp_odbctrac_ordinal104>

externdef __imp_odbctrac_ordinal105:PPROC
odbctrac_ordinal105 equ <__imp_odbctrac_ordinal105>

externdef __imp_odbctrac_ordinal109:PPROC
odbctrac_ordinal109 equ <__imp_odbctrac_ordinal109>

externdef __imp_odbctrac_ordinal112:PPROC
odbctrac_ordinal112 equ <__imp_odbctrac_ordinal112>

externdef __imp_odbctrac_ordinal113:PPROC
odbctrac_ordinal113 equ <__imp_odbctrac_ordinal113>

externdef __imp_odbctrac_ordinal114:PPROC
odbctrac_ordinal114 equ <__imp_odbctrac_ordinal114>

externdef __imp_odbctrac_ordinal115:PPROC
odbctrac_ordinal115 equ <__imp_odbctrac_ordinal115>

externdef __imp_odbctrac_ordinal116:PPROC
odbctrac_ordinal116 equ <__imp_odbctrac_ordinal116>

externdef __imp_odbctrac_ordinal118:PPROC
odbctrac_ordinal118 equ <__imp_odbctrac_ordinal118>

externdef __imp_odbctrac_ordinal120:PPROC
odbctrac_ordinal120 equ <__imp_odbctrac_ordinal120>

externdef __imp_odbctrac_ordinal122:PPROC
odbctrac_ordinal122 equ <__imp_odbctrac_ordinal122>

externdef __imp_odbctrac_ordinal123:PPROC
odbctrac_ordinal123 equ <__imp_odbctrac_ordinal123>

externdef __imp_odbctrac_ordinal124:PPROC
odbctrac_ordinal124 equ <__imp_odbctrac_ordinal124>

externdef __imp_odbctrac_ordinal125:PPROC
odbctrac_ordinal125 equ <__imp_odbctrac_ordinal125>

externdef __imp_odbctrac_ordinal126:PPROC
odbctrac_ordinal126 equ <__imp_odbctrac_ordinal126>

externdef __imp_odbctrac_ordinal128:PPROC
odbctrac_ordinal128 equ <__imp_odbctrac_ordinal128>

externdef __imp_odbctrac_ordinal129:PPROC
odbctrac_ordinal129 equ <__imp_odbctrac_ordinal129>

externdef __imp_odbctrac_ordinal130:PPROC
odbctrac_ordinal130 equ <__imp_odbctrac_ordinal130>

externdef __imp_odbctrac_ordinal131:PPROC
odbctrac_ordinal131 equ <__imp_odbctrac_ordinal131>

externdef __imp_odbctrac_ordinal137:PPROC
odbctrac_ordinal137 equ <__imp_odbctrac_ordinal137>

externdef __imp_odbctrac_ordinal143:PPROC
odbctrac_ordinal143 equ <__imp_odbctrac_ordinal143>

externdef __imp_odbctrac_ordinal144:PPROC
odbctrac_ordinal144 equ <__imp_odbctrac_ordinal144>

externdef __imp_odbctrac_ordinal146:PPROC
odbctrac_ordinal146 equ <__imp_odbctrac_ordinal146>

externdef __imp_odbctrac_ordinal148:PPROC
odbctrac_ordinal148 equ <__imp_odbctrac_ordinal148>

externdef __imp_odbctrac_ordinal149:PPROC
odbctrac_ordinal149 equ <__imp_odbctrac_ordinal149>

externdef __imp_odbctrac_ordinal151:PPROC
odbctrac_ordinal151 equ <__imp_odbctrac_ordinal151>

externdef __imp_odbctrac_ordinal158:PPROC
odbctrac_ordinal158 equ <__imp_odbctrac_ordinal158>

externdef __imp_odbctrac_ordinal159:PPROC
odbctrac_ordinal159 equ <__imp_odbctrac_ordinal159>

externdef __imp_odbctrac_ordinal161:PPROC
odbctrac_ordinal161 equ <__imp_odbctrac_ordinal161>

externdef __imp_odbctrac_ordinal163:PPROC
odbctrac_ordinal163 equ <__imp_odbctrac_ordinal163>

externdef __imp_odbctrac_ordinal164:PPROC
odbctrac_ordinal164 equ <__imp_odbctrac_ordinal164>

externdef __imp_odbctrac_ordinal168:PPROC
odbctrac_ordinal168 equ <__imp_odbctrac_ordinal168>

externdef __imp_odbctrac_ordinal169:PPROC
odbctrac_ordinal169 equ <__imp_odbctrac_ordinal169>

externdef __imp_odbctrac_ordinal172:PPROC
odbctrac_ordinal172 equ <__imp_odbctrac_ordinal172>

externdef __imp_odbctrac_ordinal174:PPROC
odbctrac_ordinal174 equ <__imp_odbctrac_ordinal174>

externdef __imp_odbctrac_ordinal175:PPROC
odbctrac_ordinal175 equ <__imp_odbctrac_ordinal175>

externdef __imp_odbctrac_ordinal178:PPROC
odbctrac_ordinal178 equ <__imp_odbctrac_ordinal178>

externdef __imp_odbctrac_ordinal179:PPROC
odbctrac_ordinal179 equ <__imp_odbctrac_ordinal179>

externdef __imp_odbctrac_ordinal180:PPROC
odbctrac_ordinal180 equ <__imp_odbctrac_ordinal180>

externdef __imp_odbctrac_ordinal181:PPROC
odbctrac_ordinal181 equ <__imp_odbctrac_ordinal181>

externdef __imp_odbctrac_ordinal182:PPROC
odbctrac_ordinal182 equ <__imp_odbctrac_ordinal182>

externdef __imp_odbctrac_ordinal183:PPROC
odbctrac_ordinal183 equ <__imp_odbctrac_ordinal183>

externdef __imp_odbctrac_ordinal184:PPROC
odbctrac_ordinal184 equ <__imp_odbctrac_ordinal184>

externdef __imp_odbctrac_ordinal185:PPROC
odbctrac_ordinal185 equ <__imp_odbctrac_ordinal185>

externdef __imp_odbctrac_ordinal186:PPROC
odbctrac_ordinal186 equ <__imp_odbctrac_ordinal186>

externdef __imp_odbctrac_ordinal187:PPROC
odbctrac_ordinal187 equ <__imp_odbctrac_ordinal187>

externdef __imp_odbctrac_ordinal188:PPROC
odbctrac_ordinal188 equ <__imp_odbctrac_ordinal188>

externdef __imp_odbctrac_ordinal189:PPROC
odbctrac_ordinal189 equ <__imp_odbctrac_ordinal189>

externdef __imp_odbctrac_ordinal190:PPROC
odbctrac_ordinal190 equ <__imp_odbctrac_ordinal190>

externdef __imp_odbctrac_ordinal191:PPROC
odbctrac_ordinal191 equ <__imp_odbctrac_ordinal191>

externdef __imp_odbctrac_ordinal192:PPROC
odbctrac_ordinal192 equ <__imp_odbctrac_ordinal192>

externdef __imp_odbctrac_ordinal193:PPROC
odbctrac_ordinal193 equ <__imp_odbctrac_ordinal193>

externdef __imp_odbctrac_ordinal194:PPROC
odbctrac_ordinal194 equ <__imp_odbctrac_ordinal194>

externdef __imp_odbctrac_ordinal195:PPROC
odbctrac_ordinal195 equ <__imp_odbctrac_ordinal195>

externdef __imp_odbctrac_ordinal196:PPROC
odbctrac_ordinal196 equ <__imp_odbctrac_ordinal196>

externdef __imp_odbctrac_ordinal197:PPROC
odbctrac_ordinal197 equ <__imp_odbctrac_ordinal197>

externdef __imp_odbctrac_ordinal198:PPROC
odbctrac_ordinal198 equ <__imp_odbctrac_ordinal198>

externdef __imp_odbctrac_ordinal199:PPROC
odbctrac_ordinal199 equ <__imp_odbctrac_ordinal199>

externdef __imp_odbctrac_ordinal200:PPROC
odbctrac_ordinal200 equ <__imp_odbctrac_ordinal200>

externdef __imp_odbctrac_ordinal201:PPROC
odbctrac_ordinal201 equ <__imp_odbctrac_ordinal201>

externdef __imp_odbctrac_ordinal202:PPROC
odbctrac_ordinal202 equ <__imp_odbctrac_ordinal202>

externdef __imp_odbctrac_ordinal203:PPROC
odbctrac_ordinal203 equ <__imp_odbctrac_ordinal203>

externdef __imp_odbctrac_ordinal204:PPROC
odbctrac_ordinal204 equ <__imp_odbctrac_ordinal204>

externdef __imp_odbctrac_ordinal205:PPROC
odbctrac_ordinal205 equ <__imp_odbctrac_ordinal205>

externdef __imp_odbctrac_ordinal206:PPROC
odbctrac_ordinal206 equ <__imp_odbctrac_ordinal206>

externdef __imp_odbctrac_ordinal207:PPROC
odbctrac_ordinal207 equ <__imp_odbctrac_ordinal207>

externdef __imp_odbctrac_ordinal208:PPROC
odbctrac_ordinal208 equ <__imp_odbctrac_ordinal208>

externdef __imp_odbctrac_ordinal209:PPROC
odbctrac_ordinal209 equ <__imp_odbctrac_ordinal209>

externdef __imp_odbctrac_ordinal210:PPROC
odbctrac_ordinal210 equ <__imp_odbctrac_ordinal210>

externdef __imp_odbctrac_ordinal211:PPROC
odbctrac_ordinal211 equ <__imp_odbctrac_ordinal211>

externdef __imp_odbctrac_ordinal212:PPROC
odbctrac_ordinal212 equ <__imp_odbctrac_ordinal212>

externdef __imp_odbctrac_ordinal213:PPROC
odbctrac_ordinal213 equ <__imp_odbctrac_ordinal213>

externdef __imp_odbctrac_ordinal214:PPROC
odbctrac_ordinal214 equ <__imp_odbctrac_ordinal214>

externdef __imp_odbctrac_ordinal215:PPROC
odbctrac_ordinal215 equ <__imp_odbctrac_ordinal215>

externdef __imp_odbctrac_ordinal216:PPROC
odbctrac_ordinal216 equ <__imp_odbctrac_ordinal216>

externdef __imp_odbctrac_ordinal217:PPROC
odbctrac_ordinal217 equ <__imp_odbctrac_ordinal217>

externdef __imp_odbctrac_ordinal218:PPROC
odbctrac_ordinal218 equ <__imp_odbctrac_ordinal218>

externdef __imp_odbctrac_ordinal219:PPROC
odbctrac_ordinal219 equ <__imp_odbctrac_ordinal219>

externdef __imp_odbctrac_ordinal220:PPROC
odbctrac_ordinal220 equ <__imp_odbctrac_ordinal220>

externdef __imp_odbctrac_ordinal221:PPROC
odbctrac_ordinal221 equ <__imp_odbctrac_ordinal221>

externdef __imp_odbctrac_ordinal222:PPROC
odbctrac_ordinal222 equ <__imp_odbctrac_ordinal222>

externdef __imp_odbctrac_ordinal223:PPROC
odbctrac_ordinal223 equ <__imp_odbctrac_ordinal223>

externdef __imp_odbctrac_ordinal224:PPROC
odbctrac_ordinal224 equ <__imp_odbctrac_ordinal224>

externdef __imp_odbctrac_ordinal225:PPROC
odbctrac_ordinal225 equ <__imp_odbctrac_ordinal225>

externdef __imp_odbctrac_ordinal226:PPROC
odbctrac_ordinal226 equ <__imp_odbctrac_ordinal226>

externdef __imp_odbctrac_ordinal227:PPROC
odbctrac_ordinal227 equ <__imp_odbctrac_ordinal227>

externdef __imp_odbctrac_ordinal228:PPROC
odbctrac_ordinal228 equ <__imp_odbctrac_ordinal228>

externdef __imp_odbctrac_ordinal229:PPROC
odbctrac_ordinal229 equ <__imp_odbctrac_ordinal229>

externdef __imp_odbctrac_ordinal230:PPROC
odbctrac_ordinal230 equ <__imp_odbctrac_ordinal230>

externdef __imp_odbctrac_ordinal231:PPROC
odbctrac_ordinal231 equ <__imp_odbctrac_ordinal231>

externdef __imp_odbctrac_ordinal232:PPROC
odbctrac_ordinal232 equ <__imp_odbctrac_ordinal232>

externdef __imp_odbctrac_ordinal233:PPROC
odbctrac_ordinal233 equ <__imp_odbctrac_ordinal233>

externdef __imp_odbctrac_ordinal234:PPROC
odbctrac_ordinal234 equ <__imp_odbctrac_ordinal234>

externdef __imp_odbctrac_ordinal235:PPROC
odbctrac_ordinal235 equ <__imp_odbctrac_ordinal235>

externdef __imp_odbctrac_ordinal236:PPROC
odbctrac_ordinal236 equ <__imp_odbctrac_ordinal236>

externdef __imp_odbctrac_ordinal237:PPROC
odbctrac_ordinal237 equ <__imp_odbctrac_ordinal237>

externdef __imp_odbctrac_ordinal238:PPROC
odbctrac_ordinal238 equ <__imp_odbctrac_ordinal238>

externdef __imp_odbctrac_ordinal239:PPROC
odbctrac_ordinal239 equ <__imp_odbctrac_ordinal239>

externdef __imp_odbctrac_ordinal240:PPROC
odbctrac_ordinal240 equ <__imp_odbctrac_ordinal240>

externdef __imp_odbctrac_ordinal241:PPROC
odbctrac_ordinal241 equ <__imp_odbctrac_ordinal241>

externdef __imp_odbctrac_ordinal242:PPROC
odbctrac_ordinal242 equ <__imp_odbctrac_ordinal242>

externdef __imp_odbctrac_ordinal243:PPROC
odbctrac_ordinal243 equ <__imp_odbctrac_ordinal243>

externdef __imp_odbctrac_ordinal244:PPROC
odbctrac_ordinal244 equ <__imp_odbctrac_ordinal244>

externdef __imp_odbctrac_ordinal245:PPROC
odbctrac_ordinal245 equ <__imp_odbctrac_ordinal245>

externdef __imp_odbctrac_ordinal246:PPROC
odbctrac_ordinal246 equ <__imp_odbctrac_ordinal246>

externdef __imp_odbctrac_ordinal247:PPROC
odbctrac_ordinal247 equ <__imp_odbctrac_ordinal247>

externdef __imp_odbctrac_ordinal248:PPROC
odbctrac_ordinal248 equ <__imp_odbctrac_ordinal248>

externdef __imp_odbctrac_ordinal249:PPROC
odbctrac_ordinal249 equ <__imp_odbctrac_ordinal249>

externdef __imp_odbctrac_ordinal250:PPROC
odbctrac_ordinal250 equ <__imp_odbctrac_ordinal250>

externdef __imp_odbctrac_ordinal251:PPROC
odbctrac_ordinal251 equ <__imp_odbctrac_ordinal251>

externdef __imp_odbctrac_ordinal252:PPROC
odbctrac_ordinal252 equ <__imp_odbctrac_ordinal252>

externdef __imp_odbctrac_ordinal253:PPROC
odbctrac_ordinal253 equ <__imp_odbctrac_ordinal253>

externdef __imp_odbctrac_ordinal254:PPROC
odbctrac_ordinal254 equ <__imp_odbctrac_ordinal254>

externdef __imp_odbctrac_ordinal255:PPROC
odbctrac_ordinal255 equ <__imp_odbctrac_ordinal255>

externdef __imp_odbctrac_ordinal256:PPROC
odbctrac_ordinal256 equ <__imp_odbctrac_ordinal256>

externdef __imp_odbctrac_ordinal257:PPROC
odbctrac_ordinal257 equ <__imp_odbctrac_ordinal257>

externdef __imp_odbctrac_ordinal258:PPROC
odbctrac_ordinal258 equ <__imp_odbctrac_ordinal258>

externdef __imp_odbctrac_ordinal259:PPROC
odbctrac_ordinal259 equ <__imp_odbctrac_ordinal259>

externdef __imp_odbctrac_ordinal260:PPROC
odbctrac_ordinal260 equ <__imp_odbctrac_ordinal260>

externdef __imp_odbctrac_ordinal261:PPROC
odbctrac_ordinal261 equ <__imp_odbctrac_ordinal261>

externdef __imp_odbctrac_ordinal262:PPROC
odbctrac_ordinal262 equ <__imp_odbctrac_ordinal262>

externdef __imp_odbctrac_ordinal263:PPROC
odbctrac_ordinal263 equ <__imp_odbctrac_ordinal263>

externdef __imp_odbctrac_ordinal264:PPROC
odbctrac_ordinal264 equ <__imp_odbctrac_ordinal264>

externdef __imp_odbctrac_ordinal265:PPROC
odbctrac_ordinal265 equ <__imp_odbctrac_ordinal265>

externdef __imp_odbctrac_ordinal266:PPROC
odbctrac_ordinal266 equ <__imp_odbctrac_ordinal266>

externdef __imp_odbctrac_ordinal267:PPROC
odbctrac_ordinal267 equ <__imp_odbctrac_ordinal267>

externdef __imp_odbctrac_ordinal268:PPROC
odbctrac_ordinal268 equ <__imp_odbctrac_ordinal268>

externdef __imp_odbctrac_ordinal269:PPROC
odbctrac_ordinal269 equ <__imp_odbctrac_ordinal269>

externdef __imp_odbctrac_ordinal270:PPROC
odbctrac_ordinal270 equ <__imp_odbctrac_ordinal270>

externdef __imp_odbctrac_ordinal271:PPROC
odbctrac_ordinal271 equ <__imp_odbctrac_ordinal271>

externdef __imp_odbctrac_ordinal272:PPROC
odbctrac_ordinal272 equ <__imp_odbctrac_ordinal272>

externdef __imp_odbctrac_ordinal273:PPROC
odbctrac_ordinal273 equ <__imp_odbctrac_ordinal273>

externdef __imp_odbctrac_ordinal274:PPROC
odbctrac_ordinal274 equ <__imp_odbctrac_ordinal274>

externdef __imp_odbctrac_ordinal275:PPROC
odbctrac_ordinal275 equ <__imp_odbctrac_ordinal275>

externdef __imp_odbctrac_ordinal276:PPROC
odbctrac_ordinal276 equ <__imp_odbctrac_ordinal276>

externdef __imp_odbctrac_ordinal277:PPROC
odbctrac_ordinal277 equ <__imp_odbctrac_ordinal277>

externdef __imp_odbctrac_ordinal278:PPROC
odbctrac_ordinal278 equ <__imp_odbctrac_ordinal278>

externdef __imp_odbctrac_ordinal279:PPROC
odbctrac_ordinal279 equ <__imp_odbctrac_ordinal279>

externdef __imp_odbctrac_ordinal280:PPROC
odbctrac_ordinal280 equ <__imp_odbctrac_ordinal280>

externdef __imp_odbctrac_ordinal281:PPROC
odbctrac_ordinal281 equ <__imp_odbctrac_ordinal281>

externdef __imp_odbctrac_ordinal282:PPROC
odbctrac_ordinal282 equ <__imp_odbctrac_ordinal282>

externdef __imp_odbctrac_ordinal283:PPROC
odbctrac_ordinal283 equ <__imp_odbctrac_ordinal283>

externdef __imp_odbctrac_ordinal284:PPROC
odbctrac_ordinal284 equ <__imp_odbctrac_ordinal284>

externdef __imp_odbctrac_ordinal285:PPROC
odbctrac_ordinal285 equ <__imp_odbctrac_ordinal285>

externdef __imp_odbctrac_ordinal286:PPROC
odbctrac_ordinal286 equ <__imp_odbctrac_ordinal286>

externdef __imp_odbctrac_ordinal287:PPROC
odbctrac_ordinal287 equ <__imp_odbctrac_ordinal287>

externdef __imp_odbctrac_ordinal288:PPROC
odbctrac_ordinal288 equ <__imp_odbctrac_ordinal288>

externdef __imp_odbctrac_ordinal289:PPROC
odbctrac_ordinal289 equ <__imp_odbctrac_ordinal289>

externdef __imp_odbctrac_ordinal290:PPROC
odbctrac_ordinal290 equ <__imp_odbctrac_ordinal290>

externdef __imp_odbctrac_ordinal291:PPROC
odbctrac_ordinal291 equ <__imp_odbctrac_ordinal291>

externdef __imp_odbctrac_ordinal292:PPROC
odbctrac_ordinal292 equ <__imp_odbctrac_ordinal292>

externdef __imp_odbctrac_ordinal293:PPROC
odbctrac_ordinal293 equ <__imp_odbctrac_ordinal293>

externdef __imp_odbctrac_ordinal294:PPROC
odbctrac_ordinal294 equ <__imp_odbctrac_ordinal294>

externdef __imp_odbctrac_ordinal295:PPROC
odbctrac_ordinal295 equ <__imp_odbctrac_ordinal295>

externdef __imp_odbctrac_ordinal296:PPROC
odbctrac_ordinal296 equ <__imp_odbctrac_ordinal296>

externdef __imp_odbctrac_ordinal297:PPROC
odbctrac_ordinal297 equ <__imp_odbctrac_ordinal297>

externdef __imp_odbctrac_ordinal298:PPROC
odbctrac_ordinal298 equ <__imp_odbctrac_ordinal298>

externdef __imp_odbctrac_ordinal299:PPROC
odbctrac_ordinal299 equ <__imp_odbctrac_ordinal299>

externdef __imp_odbctrac_ordinal81:PPROC
odbctrac_ordinal81 equ <__imp_odbctrac_ordinal81>

externdef __imp_odbctrac_ordinal82:PPROC
odbctrac_ordinal82 equ <__imp_odbctrac_ordinal82>

externdef __imp_odbctrac_ordinal83:PPROC
odbctrac_ordinal83 equ <__imp_odbctrac_ordinal83>

externdef __imp_odbctrac_ordinal84:PPROC
odbctrac_ordinal84 equ <__imp_odbctrac_ordinal84>

externdef __imp_odbctrac_ordinal85:PPROC
odbctrac_ordinal85 equ <__imp_odbctrac_ordinal85>

externdef __imp_odbctrac_ordinal86:PPROC
odbctrac_ordinal86 equ <__imp_odbctrac_ordinal86>

externdef __imp_odbctrac_ordinal87:PPROC
odbctrac_ordinal87 equ <__imp_odbctrac_ordinal87>

externdef __imp_odbctrac_ordinal88:PPROC
odbctrac_ordinal88 equ <__imp_odbctrac_ordinal88>

externdef __imp_odbctrac_ordinal89:PPROC
odbctrac_ordinal89 equ <__imp_odbctrac_ordinal89>

externdef __imp_odbctrac_ordinal90:PPROC
odbctrac_ordinal90 equ <__imp_odbctrac_ordinal90>

externdef __imp_odbctrac_ordinal91:PPROC
odbctrac_ordinal91 equ <__imp_odbctrac_ordinal91>

externdef __imp_odbctrac_ordinal92:PPROC
odbctrac_ordinal92 equ <__imp_odbctrac_ordinal92>

externdef __imp_odbctrac_ordinal93:PPROC
odbctrac_ordinal93 equ <__imp_odbctrac_ordinal93>

externdef __imp_odbctrac_ordinal94:PPROC
odbctrac_ordinal94 equ <__imp_odbctrac_ordinal94>

externdef __imp_odbctrac_ordinal95:PPROC
odbctrac_ordinal95 equ <__imp_odbctrac_ordinal95>

externdef __imp_odbctrac_ordinal96:PPROC
odbctrac_ordinal96 equ <__imp_odbctrac_ordinal96>

externdef __imp_odbctrac_ordinal97:PPROC
odbctrac_ordinal97 equ <__imp_odbctrac_ordinal97>

externdef __imp_odbctrac_ordinal98:PPROC
odbctrac_ordinal98 equ <__imp_odbctrac_ordinal98>

externdef __imp_odbctrac_ordinal99:PPROC
odbctrac_ordinal99 equ <__imp_odbctrac_ordinal99>
