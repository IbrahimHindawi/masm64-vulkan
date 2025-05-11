externdef __imp_LibMain:PPROC
LibMain equ <__imp_LibMain>

externdef __imp_SQLCloseEnumServers:PPROC
SQLCloseEnumServers equ <__imp_SQLCloseEnumServers>

externdef __imp_SQLGetNextEnumeration:PPROC
SQLGetNextEnumeration equ <__imp_SQLGetNextEnumeration>

externdef __imp_SQLInitEnumServers:PPROC
SQLInitEnumServers equ <__imp_SQLInitEnumServers>

externdef __imp_SQLLinkedCatalogsA:PPROC
SQLLinkedCatalogsA equ <__imp_SQLLinkedCatalogsA>
  IFNDEF __UNICODE__
    SQLLinkedCatalogs equ <__imp_SQLLinkedCatalogsA>
  ENDIF

externdef __imp_SQLLinkedCatalogsW:PPROC
SQLLinkedCatalogsW equ <__imp_SQLLinkedCatalogsW>
  IFDEF __UNICODE__
    SQLLinkedCatalogs equ <__imp_SQLLinkedCatalogsW>
  ENDIF

externdef __imp_SQLLinkedServers:PPROC
SQLLinkedServers equ <__imp_SQLLinkedServers>

externdef __imp_bcp_batch:PPROC
bcp_batch equ <__imp_bcp_batch>

externdef __imp_bcp_bind:PPROC
bcp_bind equ <__imp_bcp_bind>

externdef __imp_bcp_colfmt:PPROC
bcp_colfmt equ <__imp_bcp_colfmt>

externdef __imp_bcp_collen:PPROC
bcp_collen equ <__imp_bcp_collen>

externdef __imp_bcp_colptr:PPROC
bcp_colptr equ <__imp_bcp_colptr>

externdef __imp_bcp_columns:PPROC
bcp_columns equ <__imp_bcp_columns>

externdef __imp_bcp_control:PPROC
bcp_control equ <__imp_bcp_control>

externdef __imp_bcp_done:PPROC
bcp_done equ <__imp_bcp_done>

externdef __imp_bcp_exec:PPROC
bcp_exec equ <__imp_bcp_exec>

externdef __imp_bcp_getcolfmt:PPROC
bcp_getcolfmt equ <__imp_bcp_getcolfmt>

externdef __imp_bcp_initA:PPROC
bcp_initA equ <__imp_bcp_initA>
  IFNDEF __UNICODE__
    bcp_init equ <__imp_bcp_initA>
  ENDIF

externdef __imp_bcp_initW:PPROC
bcp_initW equ <__imp_bcp_initW>
  IFDEF __UNICODE__
    bcp_init equ <__imp_bcp_initW>
  ENDIF

externdef __imp_bcp_moretext:PPROC
bcp_moretext equ <__imp_bcp_moretext>

externdef __imp_bcp_readfmtA:PPROC
bcp_readfmtA equ <__imp_bcp_readfmtA>
  IFNDEF __UNICODE__
    bcp_readfmt equ <__imp_bcp_readfmtA>
  ENDIF

externdef __imp_bcp_readfmtW:PPROC
bcp_readfmtW equ <__imp_bcp_readfmtW>
  IFDEF __UNICODE__
    bcp_readfmt equ <__imp_bcp_readfmtW>
  ENDIF

externdef __imp_bcp_sendrow:PPROC
bcp_sendrow equ <__imp_bcp_sendrow>

externdef __imp_bcp_setcolfmt:PPROC
bcp_setcolfmt equ <__imp_bcp_setcolfmt>

externdef __imp_bcp_writefmtA:PPROC
bcp_writefmtA equ <__imp_bcp_writefmtA>
  IFNDEF __UNICODE__
    bcp_writefmt equ <__imp_bcp_writefmtA>
  ENDIF

externdef __imp_bcp_writefmtW:PPROC
bcp_writefmtW equ <__imp_bcp_writefmtW>
  IFDEF __UNICODE__
    bcp_writefmt equ <__imp_bcp_writefmtW>
  ENDIF

externdef __imp_dbprtypeA:PPROC
dbprtypeA equ <__imp_dbprtypeA>
  IFNDEF __UNICODE__
    dbprtype equ <__imp_dbprtypeA>
  ENDIF

externdef __imp_dbprtypeW:PPROC
dbprtypeW equ <__imp_dbprtypeW>
  IFDEF __UNICODE__
    dbprtype equ <__imp_dbprtypeW>
  ENDIF

externdef __imp_odbcbcp_ordinal7:PPROC
odbcbcp_ordinal7 equ <__imp_odbcbcp_ordinal7>
