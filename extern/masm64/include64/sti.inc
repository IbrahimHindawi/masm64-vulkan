externdef __imp_??0BUFFER@@QEAA@I@Z:PPROC
??0BUFFER@@QEAA@I@Z equ <__imp_??0BUFFER@@QEAA@I@Z>

externdef __imp_??0BUFFER_CHAIN@@QEAA@XZ:PPROC
??0BUFFER_CHAIN@@QEAA@XZ equ <__imp_??0BUFFER_CHAIN@@QEAA@XZ>

externdef __imp_??0BUFFER_CHAIN_ITEM@@QEAA@I@Z:PPROC
??0BUFFER_CHAIN_ITEM@@QEAA@I@Z equ <__imp_??0BUFFER_CHAIN_ITEM@@QEAA@I@Z>

externdef __imp_??1BUFFER@@QEAA@XZ:PPROC
??1BUFFER@@QEAA@XZ equ <__imp_??1BUFFER@@QEAA@XZ>

externdef __imp_??1BUFFER_CHAIN@@QEAA@XZ:PPROC
??1BUFFER_CHAIN@@QEAA@XZ equ <__imp_??1BUFFER_CHAIN@@QEAA@XZ>

externdef __imp_??1BUFFER_CHAIN_ITEM@@QEAA@XZ:PPROC
??1BUFFER_CHAIN_ITEM@@QEAA@XZ equ <__imp_??1BUFFER_CHAIN_ITEM@@QEAA@XZ>

externdef __imp_??_FBUFFER@@QEAAXXZ:PPROC
??_FBUFFER@@QEAAXXZ equ <__imp_??_FBUFFER@@QEAAXXZ>

externdef __imp_??_FBUFFER_CHAIN_ITEM@@QEAAXXZ:PPROC
??_FBUFFER_CHAIN_ITEM@@QEAAXXZ equ <__imp_??_FBUFFER_CHAIN_ITEM@@QEAAXXZ>

externdef __imp_?QueryPtr@BUFFER@@QEBAPEAXXZ:PPROC
?QueryPtr@BUFFER@@QEBAPEAXXZ equ <__imp_?QueryPtr@BUFFER@@QEBAPEAXXZ>

externdef __imp_?QuerySize@BUFFER@@QEBAIXZ:PPROC
?QuerySize@BUFFER@@QEBAIXZ equ <__imp_?QuerySize@BUFFER@@QEBAIXZ>

externdef __imp_?QueryUsed@BUFFER_CHAIN_ITEM@@QEBAKXZ:PPROC
?QueryUsed@BUFFER_CHAIN_ITEM@@QEBAKXZ equ <__imp_?QueryUsed@BUFFER_CHAIN_ITEM@@QEBAKXZ>

externdef __imp_?SetUsed@BUFFER_CHAIN_ITEM@@QEAAXK@Z:PPROC
?SetUsed@BUFFER_CHAIN_ITEM@@QEAAXK@Z equ <__imp_?SetUsed@BUFFER_CHAIN_ITEM@@QEAAXK@Z>

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>

externdef __imp_GetProxyDllInfo:PPROC
GetProxyDllInfo equ <__imp_GetProxyDllInfo>

externdef __imp_MigrateRegisteredSTIAppsForWIAEvents:PPROC
MigrateRegisteredSTIAppsForWIAEvents equ <__imp_MigrateRegisteredSTIAppsForWIAEvents>

externdef __imp_RegSTIforWia:PPROC
RegSTIforWia equ <__imp_RegSTIforWia>

externdef __imp_StiCreateInstance:PPROC
StiCreateInstance equ <__imp_StiCreateInstance>

externdef __imp_StiCreateInstanceA:PPROC
StiCreateInstanceA equ <__imp_StiCreateInstanceA>
  IFNDEF __UNICODE__
    StiCreateInstance equ <__imp_StiCreateInstanceA>
  ENDIF

externdef __imp_StiCreateInstanceW:PPROC
StiCreateInstanceW equ <__imp_StiCreateInstanceW>
  IFDEF __UNICODE__
    StiCreateInstance equ <__imp_StiCreateInstanceW>
  ENDIF
