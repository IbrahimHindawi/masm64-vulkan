externdef __imp_AtlAdvise:PPROC
AtlAdvise equ <__imp_AtlAdvise>

externdef __imp_AtlAxAttachControl:PPROC
AtlAxAttachControl equ <__imp_AtlAxAttachControl>

externdef __imp_AtlAxCreateControl:PPROC
AtlAxCreateControl equ <__imp_AtlAxCreateControl>

externdef __imp_AtlAxCreateControlEx:PPROC
AtlAxCreateControlEx equ <__imp_AtlAxCreateControlEx>

externdef __imp_AtlAxCreateDialogA:PPROC
AtlAxCreateDialogA equ <__imp_AtlAxCreateDialogA>
  IFNDEF __UNICODE__
    AtlAxCreateDialog equ <__imp_AtlAxCreateDialogA>
  ENDIF

externdef __imp_AtlAxCreateDialogW:PPROC
AtlAxCreateDialogW equ <__imp_AtlAxCreateDialogW>
  IFDEF __UNICODE__
    AtlAxCreateDialog equ <__imp_AtlAxCreateDialogW>
  ENDIF

externdef __imp_AtlAxDialogBoxA:PPROC
AtlAxDialogBoxA equ <__imp_AtlAxDialogBoxA>
  IFNDEF __UNICODE__
    AtlAxDialogBox equ <__imp_AtlAxDialogBoxA>
  ENDIF

externdef __imp_AtlAxDialogBoxW:PPROC
AtlAxDialogBoxW equ <__imp_AtlAxDialogBoxW>
  IFDEF __UNICODE__
    AtlAxDialogBox equ <__imp_AtlAxDialogBoxW>
  ENDIF

externdef __imp_AtlAxGetControl:PPROC
AtlAxGetControl equ <__imp_AtlAxGetControl>

externdef __imp_AtlAxGetHost:PPROC
AtlAxGetHost equ <__imp_AtlAxGetHost>

externdef __imp_AtlAxWinInit:PPROC
AtlAxWinInit equ <__imp_AtlAxWinInit>

externdef __imp_AtlComPtrAssign:PPROC
AtlComPtrAssign equ <__imp_AtlComPtrAssign>

externdef __imp_AtlComQIPtrAssign:PPROC
AtlComQIPtrAssign equ <__imp_AtlComQIPtrAssign>

externdef __imp_AtlCreateTargetDC:PPROC
AtlCreateTargetDC equ <__imp_AtlCreateTargetDC>

externdef __imp_AtlDevModeW2A:PPROC
AtlDevModeW2A equ <__imp_AtlDevModeW2A>
  IFNDEF __UNICODE__
    AtlDevModeW2 equ <__imp_AtlDevModeW2A>
  ENDIF

externdef __imp_AtlFreeMarshalStream:PPROC
AtlFreeMarshalStream equ <__imp_AtlFreeMarshalStream>

externdef __imp_AtlGetObjectSourceInterface:PPROC
AtlGetObjectSourceInterface equ <__imp_AtlGetObjectSourceInterface>

externdef __imp_AtlGetVersion:PPROC
AtlGetVersion equ <__imp_AtlGetVersion>

externdef __imp_AtlHiMetricToPixel:PPROC
AtlHiMetricToPixel equ <__imp_AtlHiMetricToPixel>

externdef __imp_AtlIPersistPropertyBag_Load:PPROC
AtlIPersistPropertyBag_Load equ <__imp_AtlIPersistPropertyBag_Load>

externdef __imp_AtlIPersistPropertyBag_Save:PPROC
AtlIPersistPropertyBag_Save equ <__imp_AtlIPersistPropertyBag_Save>

externdef __imp_AtlIPersistStreamInit_Load:PPROC
AtlIPersistStreamInit_Load equ <__imp_AtlIPersistStreamInit_Load>

externdef __imp_AtlIPersistStreamInit_Save:PPROC
AtlIPersistStreamInit_Save equ <__imp_AtlIPersistStreamInit_Save>

externdef __imp_AtlInternalQueryInterface:PPROC
AtlInternalQueryInterface equ <__imp_AtlInternalQueryInterface>

externdef __imp_AtlMarshalPtrInProc:PPROC
AtlMarshalPtrInProc equ <__imp_AtlMarshalPtrInProc>

externdef __imp_AtlModuleAddCreateWndData:PPROC
AtlModuleAddCreateWndData equ <__imp_AtlModuleAddCreateWndData>

externdef __imp_AtlModuleAddTermFunc:PPROC
AtlModuleAddTermFunc equ <__imp_AtlModuleAddTermFunc>

externdef __imp_AtlModuleExtractCreateWndData:PPROC
AtlModuleExtractCreateWndData equ <__imp_AtlModuleExtractCreateWndData>

externdef __imp_AtlModuleGetClassObject:PPROC
AtlModuleGetClassObject equ <__imp_AtlModuleGetClassObject>

externdef __imp_AtlModuleInit:PPROC
AtlModuleInit equ <__imp_AtlModuleInit>

externdef __imp_AtlModuleLoadTypeLib:PPROC
AtlModuleLoadTypeLib equ <__imp_AtlModuleLoadTypeLib>

externdef __imp_AtlModuleRegisterClassObjects:PPROC
AtlModuleRegisterClassObjects equ <__imp_AtlModuleRegisterClassObjects>

externdef __imp_AtlModuleRegisterServer:PPROC
AtlModuleRegisterServer equ <__imp_AtlModuleRegisterServer>

externdef __imp_AtlModuleRegisterTypeLib:PPROC
AtlModuleRegisterTypeLib equ <__imp_AtlModuleRegisterTypeLib>

externdef __imp_AtlModuleRegisterWndClassInfoA:PPROC
AtlModuleRegisterWndClassInfoA equ <__imp_AtlModuleRegisterWndClassInfoA>
  IFNDEF __UNICODE__
    AtlModuleRegisterWndClassInfo equ <__imp_AtlModuleRegisterWndClassInfoA>
  ENDIF

externdef __imp_AtlModuleRegisterWndClassInfoW:PPROC
AtlModuleRegisterWndClassInfoW equ <__imp_AtlModuleRegisterWndClassInfoW>
  IFDEF __UNICODE__
    AtlModuleRegisterWndClassInfo equ <__imp_AtlModuleRegisterWndClassInfoW>
  ENDIF

externdef __imp_AtlModuleRevokeClassObjects:PPROC
AtlModuleRevokeClassObjects equ <__imp_AtlModuleRevokeClassObjects>

externdef __imp_AtlModuleTerm:PPROC
AtlModuleTerm equ <__imp_AtlModuleTerm>

externdef __imp_AtlModuleUnRegisterTypeLib:PPROC
AtlModuleUnRegisterTypeLib equ <__imp_AtlModuleUnRegisterTypeLib>

externdef __imp_AtlModuleUnregisterServer:PPROC
AtlModuleUnregisterServer equ <__imp_AtlModuleUnregisterServer>

externdef __imp_AtlModuleUnregisterServerEx:PPROC
AtlModuleUnregisterServerEx equ <__imp_AtlModuleUnregisterServerEx>

externdef __imp_AtlModuleUpdateRegistryFromResourceD:PPROC
AtlModuleUpdateRegistryFromResourceD equ <__imp_AtlModuleUpdateRegistryFromResourceD>

externdef __imp_AtlPixelToHiMetric:PPROC
AtlPixelToHiMetric equ <__imp_AtlPixelToHiMetric>

externdef __imp_AtlRegisterClassCategoriesHelper:PPROC
AtlRegisterClassCategoriesHelper equ <__imp_AtlRegisterClassCategoriesHelper>

externdef __imp_AtlSetErrorInfo:PPROC
AtlSetErrorInfo equ <__imp_AtlSetErrorInfo>

externdef __imp_AtlUnadvise:PPROC
AtlUnadvise equ <__imp_AtlUnadvise>

externdef __imp_AtlUnmarshalPtr:PPROC
AtlUnmarshalPtr equ <__imp_AtlUnmarshalPtr>

externdef __imp_AtlWaitWithMessageLoop:PPROC
AtlWaitWithMessageLoop equ <__imp_AtlWaitWithMessageLoop>

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>
