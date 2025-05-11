externdef __imp_BCP_batch:PPROC
BCP_batch equ <__imp_BCP_batch>

externdef __imp_BCP_bind:PPROC
BCP_bind equ <__imp_BCP_bind>

externdef __imp_BCP_colfmt:PPROC
BCP_colfmt equ <__imp_BCP_colfmt>

externdef __imp_BCP_collen:PPROC
BCP_collen equ <__imp_BCP_collen>

externdef __imp_BCP_colptr:PPROC
BCP_colptr equ <__imp_BCP_colptr>

externdef __imp_BCP_columns:PPROC
BCP_columns equ <__imp_BCP_columns>

externdef __imp_BCP_control:PPROC
BCP_control equ <__imp_BCP_control>

externdef __imp_BCP_done:PPROC
BCP_done equ <__imp_BCP_done>

externdef __imp_BCP_exec:PPROC
BCP_exec equ <__imp_BCP_exec>

externdef __imp_BCP_getcolfmt:PPROC
BCP_getcolfmt equ <__imp_BCP_getcolfmt>

externdef __imp_BCP_init:PPROC
BCP_init equ <__imp_BCP_init>

externdef __imp_BCP_moretext:PPROC
BCP_moretext equ <__imp_BCP_moretext>

externdef __imp_BCP_readfmt:PPROC
BCP_readfmt equ <__imp_BCP_readfmt>

externdef __imp_BCP_sendrow:PPROC
BCP_sendrow equ <__imp_BCP_sendrow>

externdef __imp_BCP_setcolfmt:PPROC
BCP_setcolfmt equ <__imp_BCP_setcolfmt>

externdef __imp_BCP_writefmt:PPROC
BCP_writefmt equ <__imp_BCP_writefmt>

externdef __imp_ConfigDSNW:PPROC
ConfigDSNW equ <__imp_ConfigDSNW>
  IFDEF __UNICODE__
    ConfigDSN equ <__imp_ConfigDSNW>
  ENDIF

externdef __imp_ConfigDriverW:PPROC
ConfigDriverW equ <__imp_ConfigDriverW>
  IFDEF __UNICODE__
    ConfigDriver equ <__imp_ConfigDriverW>
  ENDIF

externdef __imp_ConnectDlgProc:PPROC
ConnectDlgProc equ <__imp_ConnectDlgProc>

externdef __imp_FinishDlgProc:PPROC
FinishDlgProc equ <__imp_FinishDlgProc>

externdef __imp_LibMain:PPROC
LibMain equ <__imp_LibMain>

externdef __imp_SQLAllocHandle:PPROC
SQLAllocHandle equ <__imp_SQLAllocHandle>

externdef __imp_SQLBindCol:PPROC
SQLBindCol equ <__imp_SQLBindCol>

externdef __imp_SQLBindParameter:PPROC
SQLBindParameter equ <__imp_SQLBindParameter>

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

externdef __imp_SQLColAttributeW:PPROC
SQLColAttributeW equ <__imp_SQLColAttributeW>
  IFDEF __UNICODE__
    SQLColAttribute equ <__imp_SQLColAttributeW>
  ENDIF

externdef __imp_SQLColumnPrivilegesW:PPROC
SQLColumnPrivilegesW equ <__imp_SQLColumnPrivilegesW>
  IFDEF __UNICODE__
    SQLColumnPrivileges equ <__imp_SQLColumnPrivilegesW>
  ENDIF

externdef __imp_SQLColumnsW:PPROC
SQLColumnsW equ <__imp_SQLColumnsW>
  IFDEF __UNICODE__
    SQLColumns equ <__imp_SQLColumnsW>
  ENDIF

externdef __imp_SQLConnectW:PPROC
SQLConnectW equ <__imp_SQLConnectW>
  IFDEF __UNICODE__
    SQLConnect equ <__imp_SQLConnectW>
  ENDIF

externdef __imp_SQLCopyDesc:PPROC
SQLCopyDesc equ <__imp_SQLCopyDesc>

externdef __imp_SQLDebug:PPROC
SQLDebug equ <__imp_SQLDebug>

externdef __imp_SQLDescribeColW:PPROC
SQLDescribeColW equ <__imp_SQLDescribeColW>
  IFDEF __UNICODE__
    SQLDescribeCol equ <__imp_SQLDescribeColW>
  ENDIF

externdef __imp_SQLDescribeParam:PPROC
SQLDescribeParam equ <__imp_SQLDescribeParam>

externdef __imp_SQLDisconnect:PPROC
SQLDisconnect equ <__imp_SQLDisconnect>

externdef __imp_SQLDriverConnectW:PPROC
SQLDriverConnectW equ <__imp_SQLDriverConnectW>
  IFDEF __UNICODE__
    SQLDriverConnect equ <__imp_SQLDriverConnectW>
  ENDIF

externdef __imp_SQLEndTran:PPROC
SQLEndTran equ <__imp_SQLEndTran>

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

externdef __imp_SQLForeignKeysW:PPROC
SQLForeignKeysW equ <__imp_SQLForeignKeysW>
  IFDEF __UNICODE__
    SQLForeignKeys equ <__imp_SQLForeignKeysW>
  ENDIF

externdef __imp_SQLFreeHandle:PPROC
SQLFreeHandle equ <__imp_SQLFreeHandle>

externdef __imp_SQLFreeStmt:PPROC
SQLFreeStmt equ <__imp_SQLFreeStmt>

externdef __imp_SQLGetConnectAttrW:PPROC
SQLGetConnectAttrW equ <__imp_SQLGetConnectAttrW>
  IFDEF __UNICODE__
    SQLGetConnectAttr equ <__imp_SQLGetConnectAttrW>
  ENDIF

externdef __imp_SQLGetConnectOptionW:PPROC
SQLGetConnectOptionW equ <__imp_SQLGetConnectOptionW>
  IFDEF __UNICODE__
    SQLGetConnectOption equ <__imp_SQLGetConnectOptionW>
  ENDIF

externdef __imp_SQLGetCursorNameW:PPROC
SQLGetCursorNameW equ <__imp_SQLGetCursorNameW>
  IFDEF __UNICODE__
    SQLGetCursorName equ <__imp_SQLGetCursorNameW>
  ENDIF

externdef __imp_SQLGetData:PPROC
SQLGetData equ <__imp_SQLGetData>

externdef __imp_SQLGetDescFieldW:PPROC
SQLGetDescFieldW equ <__imp_SQLGetDescFieldW>
  IFDEF __UNICODE__
    SQLGetDescField equ <__imp_SQLGetDescFieldW>
  ENDIF

externdef __imp_SQLGetDescRecW:PPROC
SQLGetDescRecW equ <__imp_SQLGetDescRecW>
  IFDEF __UNICODE__
    SQLGetDescRec equ <__imp_SQLGetDescRecW>
  ENDIF

externdef __imp_SQLGetDiagFieldW:PPROC
SQLGetDiagFieldW equ <__imp_SQLGetDiagFieldW>
  IFDEF __UNICODE__
    SQLGetDiagField equ <__imp_SQLGetDiagFieldW>
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

externdef __imp_SQLGetInfoW:PPROC
SQLGetInfoW equ <__imp_SQLGetInfoW>
  IFDEF __UNICODE__
    SQLGetInfo equ <__imp_SQLGetInfoW>
  ENDIF

externdef __imp_SQLGetStmtAttrW:PPROC
SQLGetStmtAttrW equ <__imp_SQLGetStmtAttrW>
  IFDEF __UNICODE__
    SQLGetStmtAttr equ <__imp_SQLGetStmtAttrW>
  ENDIF

externdef __imp_SQLGetTypeInfoW:PPROC
SQLGetTypeInfoW equ <__imp_SQLGetTypeInfoW>
  IFDEF __UNICODE__
    SQLGetTypeInfo equ <__imp_SQLGetTypeInfoW>
  ENDIF

externdef __imp_SQLMoreResults:PPROC
SQLMoreResults equ <__imp_SQLMoreResults>

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

externdef __imp_SQLPrepareW:PPROC
SQLPrepareW equ <__imp_SQLPrepareW>
  IFDEF __UNICODE__
    SQLPrepare equ <__imp_SQLPrepareW>
  ENDIF

externdef __imp_SQLPrimaryKeysW:PPROC
SQLPrimaryKeysW equ <__imp_SQLPrimaryKeysW>
  IFDEF __UNICODE__
    SQLPrimaryKeys equ <__imp_SQLPrimaryKeysW>
  ENDIF

externdef __imp_SQLProcedureColumnsW:PPROC
SQLProcedureColumnsW equ <__imp_SQLProcedureColumnsW>
  IFDEF __UNICODE__
    SQLProcedureColumns equ <__imp_SQLProcedureColumnsW>
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

externdef __imp_SQLSetConnectAttrW:PPROC
SQLSetConnectAttrW equ <__imp_SQLSetConnectAttrW>
  IFDEF __UNICODE__
    SQLSetConnectAttr equ <__imp_SQLSetConnectAttrW>
  ENDIF

externdef __imp_SQLSetConnectOptionW:PPROC
SQLSetConnectOptionW equ <__imp_SQLSetConnectOptionW>
  IFDEF __UNICODE__
    SQLSetConnectOption equ <__imp_SQLSetConnectOptionW>
  ENDIF

externdef __imp_SQLSetCursorNameW:PPROC
SQLSetCursorNameW equ <__imp_SQLSetCursorNameW>
  IFDEF __UNICODE__
    SQLSetCursorName equ <__imp_SQLSetCursorNameW>
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

externdef __imp_SQLSetPos:PPROC
SQLSetPos equ <__imp_SQLSetPos>

externdef __imp_SQLSetScrollOptions:PPROC
SQLSetScrollOptions equ <__imp_SQLSetScrollOptions>

externdef __imp_SQLSetStmtAttrW:PPROC
SQLSetStmtAttrW equ <__imp_SQLSetStmtAttrW>
  IFDEF __UNICODE__
    SQLSetStmtAttr equ <__imp_SQLSetStmtAttrW>
  ENDIF

externdef __imp_SQLSpecialColumnsW:PPROC
SQLSpecialColumnsW equ <__imp_SQLSpecialColumnsW>
  IFDEF __UNICODE__
    SQLSpecialColumns equ <__imp_SQLSpecialColumnsW>
  ENDIF

externdef __imp_SQLStatisticsW:PPROC
SQLStatisticsW equ <__imp_SQLStatisticsW>
  IFDEF __UNICODE__
    SQLStatistics equ <__imp_SQLStatisticsW>
  ENDIF

externdef __imp_SQLTablePrivilegesW:PPROC
SQLTablePrivilegesW equ <__imp_SQLTablePrivilegesW>
  IFDEF __UNICODE__
    SQLTablePrivileges equ <__imp_SQLTablePrivilegesW>
  ENDIF

externdef __imp_SQLTablesW:PPROC
SQLTablesW equ <__imp_SQLTablesW>
  IFDEF __UNICODE__
    SQLTables equ <__imp_SQLTablesW>
  ENDIF

externdef __imp_TestDlgProc:PPROC
TestDlgProc equ <__imp_TestDlgProc>

externdef __imp_WizDSNDlgProc:PPROC
WizDSNDlgProc equ <__imp_WizDSNDlgProc>

externdef __imp_WizDatabaseDlgProc:PPROC
WizDatabaseDlgProc equ <__imp_WizDatabaseDlgProc>

externdef __imp_WizIntSecurityDlgProc:PPROC
WizIntSecurityDlgProc equ <__imp_WizIntSecurityDlgProc>

externdef __imp_WizLanguageDlgProc:PPROC
WizLanguageDlgProc equ <__imp_WizLanguageDlgProc>

externdef __imp_sqlsrv32_ordinal100:PPROC
sqlsrv32_ordinal100 equ <__imp_sqlsrv32_ordinal100>

externdef __imp_sqlsrv32_ordinal102:PPROC
sqlsrv32_ordinal102 equ <__imp_sqlsrv32_ordinal102>

externdef __imp_sqlsrv32_ordinal10:PPROC
sqlsrv32_ordinal10 equ <__imp_sqlsrv32_ordinal10>

externdef __imp_sqlsrv32_ordinal113:PPROC
sqlsrv32_ordinal113 equ <__imp_sqlsrv32_ordinal113>

externdef __imp_sqlsrv32_ordinal115:PPROC
sqlsrv32_ordinal115 equ <__imp_sqlsrv32_ordinal115>

externdef __imp_sqlsrv32_ordinal122:PPROC
sqlsrv32_ordinal122 equ <__imp_sqlsrv32_ordinal122>

externdef __imp_sqlsrv32_ordinal123:PPROC
sqlsrv32_ordinal123 equ <__imp_sqlsrv32_ordinal123>

externdef __imp_sqlsrv32_ordinal124:PPROC
sqlsrv32_ordinal124 equ <__imp_sqlsrv32_ordinal124>

externdef __imp_sqlsrv32_ordinal125:PPROC
sqlsrv32_ordinal125 equ <__imp_sqlsrv32_ordinal125>

externdef __imp_sqlsrv32_ordinal126:PPROC
sqlsrv32_ordinal126 equ <__imp_sqlsrv32_ordinal126>

externdef __imp_sqlsrv32_ordinal127:PPROC
sqlsrv32_ordinal127 equ <__imp_sqlsrv32_ordinal127>

externdef __imp_sqlsrv32_ordinal128:PPROC
sqlsrv32_ordinal128 equ <__imp_sqlsrv32_ordinal128>

externdef __imp_sqlsrv32_ordinal129:PPROC
sqlsrv32_ordinal129 equ <__imp_sqlsrv32_ordinal129>

externdef __imp_sqlsrv32_ordinal130:PPROC
sqlsrv32_ordinal130 equ <__imp_sqlsrv32_ordinal130>

externdef __imp_sqlsrv32_ordinal131:PPROC
sqlsrv32_ordinal131 equ <__imp_sqlsrv32_ordinal131>

externdef __imp_sqlsrv32_ordinal132:PPROC
sqlsrv32_ordinal132 equ <__imp_sqlsrv32_ordinal132>

externdef __imp_sqlsrv32_ordinal133:PPROC
sqlsrv32_ordinal133 equ <__imp_sqlsrv32_ordinal133>

externdef __imp_sqlsrv32_ordinal134:PPROC
sqlsrv32_ordinal134 equ <__imp_sqlsrv32_ordinal134>

externdef __imp_sqlsrv32_ordinal135:PPROC
sqlsrv32_ordinal135 equ <__imp_sqlsrv32_ordinal135>

externdef __imp_sqlsrv32_ordinal136:PPROC
sqlsrv32_ordinal136 equ <__imp_sqlsrv32_ordinal136>

externdef __imp_sqlsrv32_ordinal137:PPROC
sqlsrv32_ordinal137 equ <__imp_sqlsrv32_ordinal137>

externdef __imp_sqlsrv32_ordinal138:PPROC
sqlsrv32_ordinal138 equ <__imp_sqlsrv32_ordinal138>

externdef __imp_sqlsrv32_ordinal139:PPROC
sqlsrv32_ordinal139 equ <__imp_sqlsrv32_ordinal139>

externdef __imp_sqlsrv32_ordinal140:PPROC
sqlsrv32_ordinal140 equ <__imp_sqlsrv32_ordinal140>

externdef __imp_sqlsrv32_ordinal141:PPROC
sqlsrv32_ordinal141 equ <__imp_sqlsrv32_ordinal141>

externdef __imp_sqlsrv32_ordinal142:PPROC
sqlsrv32_ordinal142 equ <__imp_sqlsrv32_ordinal142>

externdef __imp_sqlsrv32_ordinal143:PPROC
sqlsrv32_ordinal143 equ <__imp_sqlsrv32_ordinal143>

externdef __imp_sqlsrv32_ordinal144:PPROC
sqlsrv32_ordinal144 equ <__imp_sqlsrv32_ordinal144>

externdef __imp_sqlsrv32_ordinal145:PPROC
sqlsrv32_ordinal145 equ <__imp_sqlsrv32_ordinal145>

externdef __imp_sqlsrv32_ordinal146:PPROC
sqlsrv32_ordinal146 equ <__imp_sqlsrv32_ordinal146>

externdef __imp_sqlsrv32_ordinal147:PPROC
sqlsrv32_ordinal147 equ <__imp_sqlsrv32_ordinal147>

externdef __imp_sqlsrv32_ordinal148:PPROC
sqlsrv32_ordinal148 equ <__imp_sqlsrv32_ordinal148>

externdef __imp_sqlsrv32_ordinal149:PPROC
sqlsrv32_ordinal149 equ <__imp_sqlsrv32_ordinal149>

externdef __imp_sqlsrv32_ordinal14:PPROC
sqlsrv32_ordinal14 equ <__imp_sqlsrv32_ordinal14>

externdef __imp_sqlsrv32_ordinal150:PPROC
sqlsrv32_ordinal150 equ <__imp_sqlsrv32_ordinal150>

externdef __imp_sqlsrv32_ordinal151:PPROC
sqlsrv32_ordinal151 equ <__imp_sqlsrv32_ordinal151>

externdef __imp_sqlsrv32_ordinal152:PPROC
sqlsrv32_ordinal152 equ <__imp_sqlsrv32_ordinal152>

externdef __imp_sqlsrv32_ordinal153:PPROC
sqlsrv32_ordinal153 equ <__imp_sqlsrv32_ordinal153>

externdef __imp_sqlsrv32_ordinal154:PPROC
sqlsrv32_ordinal154 equ <__imp_sqlsrv32_ordinal154>

externdef __imp_sqlsrv32_ordinal155:PPROC
sqlsrv32_ordinal155 equ <__imp_sqlsrv32_ordinal155>

externdef __imp_sqlsrv32_ordinal156:PPROC
sqlsrv32_ordinal156 equ <__imp_sqlsrv32_ordinal156>

externdef __imp_sqlsrv32_ordinal157:PPROC
sqlsrv32_ordinal157 equ <__imp_sqlsrv32_ordinal157>

externdef __imp_sqlsrv32_ordinal158:PPROC
sqlsrv32_ordinal158 equ <__imp_sqlsrv32_ordinal158>

externdef __imp_sqlsrv32_ordinal159:PPROC
sqlsrv32_ordinal159 equ <__imp_sqlsrv32_ordinal159>

externdef __imp_sqlsrv32_ordinal15:PPROC
sqlsrv32_ordinal15 equ <__imp_sqlsrv32_ordinal15>

externdef __imp_sqlsrv32_ordinal160:PPROC
sqlsrv32_ordinal160 equ <__imp_sqlsrv32_ordinal160>

externdef __imp_sqlsrv32_ordinal161:PPROC
sqlsrv32_ordinal161 equ <__imp_sqlsrv32_ordinal161>

externdef __imp_sqlsrv32_ordinal162:PPROC
sqlsrv32_ordinal162 equ <__imp_sqlsrv32_ordinal162>

externdef __imp_sqlsrv32_ordinal163:PPROC
sqlsrv32_ordinal163 equ <__imp_sqlsrv32_ordinal163>

externdef __imp_sqlsrv32_ordinal164:PPROC
sqlsrv32_ordinal164 equ <__imp_sqlsrv32_ordinal164>

externdef __imp_sqlsrv32_ordinal165:PPROC
sqlsrv32_ordinal165 equ <__imp_sqlsrv32_ordinal165>

externdef __imp_sqlsrv32_ordinal166:PPROC
sqlsrv32_ordinal166 equ <__imp_sqlsrv32_ordinal166>

externdef __imp_sqlsrv32_ordinal167:PPROC
sqlsrv32_ordinal167 equ <__imp_sqlsrv32_ordinal167>

externdef __imp_sqlsrv32_ordinal168:PPROC
sqlsrv32_ordinal168 equ <__imp_sqlsrv32_ordinal168>

externdef __imp_sqlsrv32_ordinal169:PPROC
sqlsrv32_ordinal169 equ <__imp_sqlsrv32_ordinal169>

externdef __imp_sqlsrv32_ordinal170:PPROC
sqlsrv32_ordinal170 equ <__imp_sqlsrv32_ordinal170>

externdef __imp_sqlsrv32_ordinal171:PPROC
sqlsrv32_ordinal171 equ <__imp_sqlsrv32_ordinal171>

externdef __imp_sqlsrv32_ordinal172:PPROC
sqlsrv32_ordinal172 equ <__imp_sqlsrv32_ordinal172>

externdef __imp_sqlsrv32_ordinal173:PPROC
sqlsrv32_ordinal173 equ <__imp_sqlsrv32_ordinal173>

externdef __imp_sqlsrv32_ordinal174:PPROC
sqlsrv32_ordinal174 equ <__imp_sqlsrv32_ordinal174>

externdef __imp_sqlsrv32_ordinal175:PPROC
sqlsrv32_ordinal175 equ <__imp_sqlsrv32_ordinal175>

externdef __imp_sqlsrv32_ordinal176:PPROC
sqlsrv32_ordinal176 equ <__imp_sqlsrv32_ordinal176>

externdef __imp_sqlsrv32_ordinal177:PPROC
sqlsrv32_ordinal177 equ <__imp_sqlsrv32_ordinal177>

externdef __imp_sqlsrv32_ordinal178:PPROC
sqlsrv32_ordinal178 equ <__imp_sqlsrv32_ordinal178>

externdef __imp_sqlsrv32_ordinal179:PPROC
sqlsrv32_ordinal179 equ <__imp_sqlsrv32_ordinal179>

externdef __imp_sqlsrv32_ordinal180:PPROC
sqlsrv32_ordinal180 equ <__imp_sqlsrv32_ordinal180>

externdef __imp_sqlsrv32_ordinal181:PPROC
sqlsrv32_ordinal181 equ <__imp_sqlsrv32_ordinal181>

externdef __imp_sqlsrv32_ordinal182:PPROC
sqlsrv32_ordinal182 equ <__imp_sqlsrv32_ordinal182>

externdef __imp_sqlsrv32_ordinal183:PPROC
sqlsrv32_ordinal183 equ <__imp_sqlsrv32_ordinal183>

externdef __imp_sqlsrv32_ordinal184:PPROC
sqlsrv32_ordinal184 equ <__imp_sqlsrv32_ordinal184>

externdef __imp_sqlsrv32_ordinal185:PPROC
sqlsrv32_ordinal185 equ <__imp_sqlsrv32_ordinal185>

externdef __imp_sqlsrv32_ordinal186:PPROC
sqlsrv32_ordinal186 equ <__imp_sqlsrv32_ordinal186>

externdef __imp_sqlsrv32_ordinal187:PPROC
sqlsrv32_ordinal187 equ <__imp_sqlsrv32_ordinal187>

externdef __imp_sqlsrv32_ordinal188:PPROC
sqlsrv32_ordinal188 equ <__imp_sqlsrv32_ordinal188>

externdef __imp_sqlsrv32_ordinal189:PPROC
sqlsrv32_ordinal189 equ <__imp_sqlsrv32_ordinal189>

externdef __imp_sqlsrv32_ordinal190:PPROC
sqlsrv32_ordinal190 equ <__imp_sqlsrv32_ordinal190>

externdef __imp_sqlsrv32_ordinal191:PPROC
sqlsrv32_ordinal191 equ <__imp_sqlsrv32_ordinal191>

externdef __imp_sqlsrv32_ordinal192:PPROC
sqlsrv32_ordinal192 equ <__imp_sqlsrv32_ordinal192>

externdef __imp_sqlsrv32_ordinal193:PPROC
sqlsrv32_ordinal193 equ <__imp_sqlsrv32_ordinal193>

externdef __imp_sqlsrv32_ordinal194:PPROC
sqlsrv32_ordinal194 equ <__imp_sqlsrv32_ordinal194>

externdef __imp_sqlsrv32_ordinal195:PPROC
sqlsrv32_ordinal195 equ <__imp_sqlsrv32_ordinal195>

externdef __imp_sqlsrv32_ordinal196:PPROC
sqlsrv32_ordinal196 equ <__imp_sqlsrv32_ordinal196>

externdef __imp_sqlsrv32_ordinal197:PPROC
sqlsrv32_ordinal197 equ <__imp_sqlsrv32_ordinal197>

externdef __imp_sqlsrv32_ordinal198:PPROC
sqlsrv32_ordinal198 equ <__imp_sqlsrv32_ordinal198>

externdef __imp_sqlsrv32_ordinal199:PPROC
sqlsrv32_ordinal199 equ <__imp_sqlsrv32_ordinal199>

externdef __imp_sqlsrv32_ordinal207:PPROC
sqlsrv32_ordinal207 equ <__imp_sqlsrv32_ordinal207>

externdef __imp_sqlsrv32_ordinal22:PPROC
sqlsrv32_ordinal22 equ <__imp_sqlsrv32_ordinal22>

externdef __imp_sqlsrv32_ordinal23:PPROC
sqlsrv32_ordinal23 equ <__imp_sqlsrv32_ordinal23>

externdef __imp_sqlsrv32_ordinal25:PPROC
sqlsrv32_ordinal25 equ <__imp_sqlsrv32_ordinal25>

externdef __imp_sqlsrv32_ordinal26:PPROC
sqlsrv32_ordinal26 equ <__imp_sqlsrv32_ordinal26>

externdef __imp_sqlsrv32_ordinal27:PPROC
sqlsrv32_ordinal27 equ <__imp_sqlsrv32_ordinal27>

externdef __imp_sqlsrv32_ordinal28:PPROC
sqlsrv32_ordinal28 equ <__imp_sqlsrv32_ordinal28>

externdef __imp_sqlsrv32_ordinal29:PPROC
sqlsrv32_ordinal29 equ <__imp_sqlsrv32_ordinal29>

externdef __imp_sqlsrv32_ordinal30:PPROC
sqlsrv32_ordinal30 equ <__imp_sqlsrv32_ordinal30>

externdef __imp_sqlsrv32_ordinal31:PPROC
sqlsrv32_ordinal31 equ <__imp_sqlsrv32_ordinal31>

externdef __imp_sqlsrv32_ordinal32:PPROC
sqlsrv32_ordinal32 equ <__imp_sqlsrv32_ordinal32>

externdef __imp_sqlsrv32_ordinal33:PPROC
sqlsrv32_ordinal33 equ <__imp_sqlsrv32_ordinal33>

externdef __imp_sqlsrv32_ordinal34:PPROC
sqlsrv32_ordinal34 equ <__imp_sqlsrv32_ordinal34>

externdef __imp_sqlsrv32_ordinal35:PPROC
sqlsrv32_ordinal35 equ <__imp_sqlsrv32_ordinal35>

externdef __imp_sqlsrv32_ordinal36:PPROC
sqlsrv32_ordinal36 equ <__imp_sqlsrv32_ordinal36>

externdef __imp_sqlsrv32_ordinal37:PPROC
sqlsrv32_ordinal37 equ <__imp_sqlsrv32_ordinal37>

externdef __imp_sqlsrv32_ordinal38:PPROC
sqlsrv32_ordinal38 equ <__imp_sqlsrv32_ordinal38>

externdef __imp_sqlsrv32_ordinal39:PPROC
sqlsrv32_ordinal39 equ <__imp_sqlsrv32_ordinal39>

externdef __imp_sqlsrv32_ordinal46:PPROC
sqlsrv32_ordinal46 equ <__imp_sqlsrv32_ordinal46>

externdef __imp_sqlsrv32_ordinal51:PPROC
sqlsrv32_ordinal51 equ <__imp_sqlsrv32_ordinal51>

externdef __imp_sqlsrv32_ordinal57:PPROC
sqlsrv32_ordinal57 equ <__imp_sqlsrv32_ordinal57>

externdef __imp_sqlsrv32_ordinal71:PPROC
sqlsrv32_ordinal71 equ <__imp_sqlsrv32_ordinal71>

externdef __imp_sqlsrv32_ordinal73:PPROC
sqlsrv32_ordinal73 equ <__imp_sqlsrv32_ordinal73>

externdef __imp_sqlsrv32_ordinal74:PPROC
sqlsrv32_ordinal74 equ <__imp_sqlsrv32_ordinal74>

externdef __imp_sqlsrv32_ordinal75:PPROC
sqlsrv32_ordinal75 equ <__imp_sqlsrv32_ordinal75>

externdef __imp_sqlsrv32_ordinal76:PPROC
sqlsrv32_ordinal76 equ <__imp_sqlsrv32_ordinal76>

externdef __imp_sqlsrv32_ordinal77:PPROC
sqlsrv32_ordinal77 equ <__imp_sqlsrv32_ordinal77>

externdef __imp_sqlsrv32_ordinal78:PPROC
sqlsrv32_ordinal78 equ <__imp_sqlsrv32_ordinal78>

externdef __imp_sqlsrv32_ordinal79:PPROC
sqlsrv32_ordinal79 equ <__imp_sqlsrv32_ordinal79>

externdef __imp_sqlsrv32_ordinal80:PPROC
sqlsrv32_ordinal80 equ <__imp_sqlsrv32_ordinal80>

externdef __imp_sqlsrv32_ordinal81:PPROC
sqlsrv32_ordinal81 equ <__imp_sqlsrv32_ordinal81>

externdef __imp_sqlsrv32_ordinal82:PPROC
sqlsrv32_ordinal82 equ <__imp_sqlsrv32_ordinal82>

externdef __imp_sqlsrv32_ordinal83:PPROC
sqlsrv32_ordinal83 equ <__imp_sqlsrv32_ordinal83>

externdef __imp_sqlsrv32_ordinal84:PPROC
sqlsrv32_ordinal84 equ <__imp_sqlsrv32_ordinal84>

externdef __imp_sqlsrv32_ordinal85:PPROC
sqlsrv32_ordinal85 equ <__imp_sqlsrv32_ordinal85>

externdef __imp_sqlsrv32_ordinal86:PPROC
sqlsrv32_ordinal86 equ <__imp_sqlsrv32_ordinal86>

externdef __imp_sqlsrv32_ordinal87:PPROC
sqlsrv32_ordinal87 equ <__imp_sqlsrv32_ordinal87>

externdef __imp_sqlsrv32_ordinal88:PPROC
sqlsrv32_ordinal88 equ <__imp_sqlsrv32_ordinal88>

externdef __imp_sqlsrv32_ordinal89:PPROC
sqlsrv32_ordinal89 equ <__imp_sqlsrv32_ordinal89>

externdef __imp_sqlsrv32_ordinal90:PPROC
sqlsrv32_ordinal90 equ <__imp_sqlsrv32_ordinal90>

externdef __imp_sqlsrv32_ordinal91:PPROC
sqlsrv32_ordinal91 equ <__imp_sqlsrv32_ordinal91>

externdef __imp_sqlsrv32_ordinal92:PPROC
sqlsrv32_ordinal92 equ <__imp_sqlsrv32_ordinal92>

externdef __imp_sqlsrv32_ordinal93:PPROC
sqlsrv32_ordinal93 equ <__imp_sqlsrv32_ordinal93>

externdef __imp_sqlsrv32_ordinal94:PPROC
sqlsrv32_ordinal94 equ <__imp_sqlsrv32_ordinal94>

externdef __imp_sqlsrv32_ordinal95:PPROC
sqlsrv32_ordinal95 equ <__imp_sqlsrv32_ordinal95>

externdef __imp_sqlsrv32_ordinal96:PPROC
sqlsrv32_ordinal96 equ <__imp_sqlsrv32_ordinal96>

externdef __imp_sqlsrv32_ordinal97:PPROC
sqlsrv32_ordinal97 equ <__imp_sqlsrv32_ordinal97>

externdef __imp_sqlsrv32_ordinal98:PPROC
sqlsrv32_ordinal98 equ <__imp_sqlsrv32_ordinal98>

externdef __imp_sqlsrv32_ordinal99:PPROC
sqlsrv32_ordinal99 equ <__imp_sqlsrv32_ordinal99>
