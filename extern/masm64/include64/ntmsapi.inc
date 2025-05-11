externdef __imp_AccessNtmsLibraryDoor:PPROC
AccessNtmsLibraryDoor equ <__imp_AccessNtmsLibraryDoor>

externdef __imp_AddNtmsMediaType:PPROC
AddNtmsMediaType equ <__imp_AddNtmsMediaType>

externdef __imp_AllocateNtmsMedia:PPROC
AllocateNtmsMedia equ <__imp_AllocateNtmsMedia>

externdef __imp_BeginNtmsDeviceChangeDetection:PPROC
BeginNtmsDeviceChangeDetection equ <__imp_BeginNtmsDeviceChangeDetection>

externdef __imp_CancelNtmsLibraryRequest:PPROC
CancelNtmsLibraryRequest equ <__imp_CancelNtmsLibraryRequest>

externdef __imp_CancelNtmsOperatorRequest:PPROC
CancelNtmsOperatorRequest equ <__imp_CancelNtmsOperatorRequest>

externdef __imp_ChangeNtmsMediaType:PPROC
ChangeNtmsMediaType equ <__imp_ChangeNtmsMediaType>

externdef __imp_CleanNtmsDrive:PPROC
CleanNtmsDrive equ <__imp_CleanNtmsDrive>

externdef __imp_CloseNtmsNotification:PPROC
CloseNtmsNotification equ <__imp_CloseNtmsNotification>

externdef __imp_CloseNtmsSession:PPROC
CloseNtmsSession equ <__imp_CloseNtmsSession>

externdef __imp_CreateNtmsMediaA:PPROC
CreateNtmsMediaA equ <__imp_CreateNtmsMediaA>
  IFNDEF __UNICODE__
    CreateNtmsMedia equ <__imp_CreateNtmsMediaA>
  ENDIF

externdef __imp_CreateNtmsMediaPoolA:PPROC
CreateNtmsMediaPoolA equ <__imp_CreateNtmsMediaPoolA>
  IFNDEF __UNICODE__
    CreateNtmsMediaPool equ <__imp_CreateNtmsMediaPoolA>
  ENDIF

externdef __imp_CreateNtmsMediaPoolW:PPROC
CreateNtmsMediaPoolW equ <__imp_CreateNtmsMediaPoolW>
  IFDEF __UNICODE__
    CreateNtmsMediaPool equ <__imp_CreateNtmsMediaPoolW>
  ENDIF

externdef __imp_CreateNtmsMediaW:PPROC
CreateNtmsMediaW equ <__imp_CreateNtmsMediaW>
  IFDEF __UNICODE__
    CreateNtmsMedia equ <__imp_CreateNtmsMediaW>
  ENDIF

externdef __imp_DeallocateNtmsMedia:PPROC
DeallocateNtmsMedia equ <__imp_DeallocateNtmsMedia>

externdef __imp_DecommissionNtmsMedia:PPROC
DecommissionNtmsMedia equ <__imp_DecommissionNtmsMedia>

externdef __imp_DeleteNtmsDrive:PPROC
DeleteNtmsDrive equ <__imp_DeleteNtmsDrive>

externdef __imp_DeleteNtmsLibrary:PPROC
DeleteNtmsLibrary equ <__imp_DeleteNtmsLibrary>

externdef __imp_DeleteNtmsMedia:PPROC
DeleteNtmsMedia equ <__imp_DeleteNtmsMedia>

externdef __imp_DeleteNtmsMediaPool:PPROC
DeleteNtmsMediaPool equ <__imp_DeleteNtmsMediaPool>

externdef __imp_DeleteNtmsMediaType:PPROC
DeleteNtmsMediaType equ <__imp_DeleteNtmsMediaType>

externdef __imp_DeleteNtmsRequests:PPROC
DeleteNtmsRequests equ <__imp_DeleteNtmsRequests>

externdef __imp_DisableNtmsObject:PPROC
DisableNtmsObject equ <__imp_DisableNtmsObject>

externdef __imp_DismountNtmsDrive:PPROC
DismountNtmsDrive equ <__imp_DismountNtmsDrive>

externdef __imp_DismountNtmsMedia:PPROC
DismountNtmsMedia equ <__imp_DismountNtmsMedia>

externdef __imp_DoEjectFromSADriveW:PPROC
DoEjectFromSADriveW equ <__imp_DoEjectFromSADriveW>
  IFDEF __UNICODE__
    DoEjectFromSADrive equ <__imp_DoEjectFromSADriveW>
  ENDIF

externdef __imp_EjectDiskFromSADriveA:PPROC
EjectDiskFromSADriveA equ <__imp_EjectDiskFromSADriveA>
  IFNDEF __UNICODE__
    EjectDiskFromSADrive equ <__imp_EjectDiskFromSADriveA>
  ENDIF

externdef __imp_EjectDiskFromSADriveW:PPROC
EjectDiskFromSADriveW equ <__imp_EjectDiskFromSADriveW>
  IFDEF __UNICODE__
    EjectDiskFromSADrive equ <__imp_EjectDiskFromSADriveW>
  ENDIF

externdef __imp_EjectNtmsCleaner:PPROC
EjectNtmsCleaner equ <__imp_EjectNtmsCleaner>

externdef __imp_EjectNtmsMedia:PPROC
EjectNtmsMedia equ <__imp_EjectNtmsMedia>

externdef __imp_EnableNtmsObject:PPROC
EnableNtmsObject equ <__imp_EnableNtmsObject>

externdef __imp_EndNtmsDeviceChangeDetection:PPROC
EndNtmsDeviceChangeDetection equ <__imp_EndNtmsDeviceChangeDetection>

externdef __imp_EnumerateNtmsObject:PPROC
EnumerateNtmsObject equ <__imp_EnumerateNtmsObject>

externdef __imp_ExportNtmsDatabase:PPROC
ExportNtmsDatabase equ <__imp_ExportNtmsDatabase>

externdef __imp_GetNtmsMediaPoolNameA:PPROC
GetNtmsMediaPoolNameA equ <__imp_GetNtmsMediaPoolNameA>
  IFNDEF __UNICODE__
    GetNtmsMediaPoolName equ <__imp_GetNtmsMediaPoolNameA>
  ENDIF

externdef __imp_GetNtmsMediaPoolNameW:PPROC
GetNtmsMediaPoolNameW equ <__imp_GetNtmsMediaPoolNameW>
  IFDEF __UNICODE__
    GetNtmsMediaPoolName equ <__imp_GetNtmsMediaPoolNameW>
  ENDIF

externdef __imp_GetNtmsObjectAttributeA:PPROC
GetNtmsObjectAttributeA equ <__imp_GetNtmsObjectAttributeA>
  IFNDEF __UNICODE__
    GetNtmsObjectAttribute equ <__imp_GetNtmsObjectAttributeA>
  ENDIF

externdef __imp_GetNtmsObjectAttributeW:PPROC
GetNtmsObjectAttributeW equ <__imp_GetNtmsObjectAttributeW>
  IFDEF __UNICODE__
    GetNtmsObjectAttribute equ <__imp_GetNtmsObjectAttributeW>
  ENDIF

externdef __imp_GetNtmsObjectInformationA:PPROC
GetNtmsObjectInformationA equ <__imp_GetNtmsObjectInformationA>
  IFNDEF __UNICODE__
    GetNtmsObjectInformation equ <__imp_GetNtmsObjectInformationA>
  ENDIF

externdef __imp_GetNtmsObjectInformationW:PPROC
GetNtmsObjectInformationW equ <__imp_GetNtmsObjectInformationW>
  IFDEF __UNICODE__
    GetNtmsObjectInformation equ <__imp_GetNtmsObjectInformationW>
  ENDIF

externdef __imp_GetNtmsObjectSecurity:PPROC
GetNtmsObjectSecurity equ <__imp_GetNtmsObjectSecurity>

externdef __imp_GetNtmsRequestOrder:PPROC
GetNtmsRequestOrder equ <__imp_GetNtmsRequestOrder>

externdef __imp_GetNtmsUIOptionsA:PPROC
GetNtmsUIOptionsA equ <__imp_GetNtmsUIOptionsA>
  IFNDEF __UNICODE__
    GetNtmsUIOptions equ <__imp_GetNtmsUIOptionsA>
  ENDIF

externdef __imp_GetNtmsUIOptionsW:PPROC
GetNtmsUIOptionsW equ <__imp_GetNtmsUIOptionsW>
  IFDEF __UNICODE__
    GetNtmsUIOptions equ <__imp_GetNtmsUIOptionsW>
  ENDIF

externdef __imp_GetVolumesFromDriveA:PPROC
GetVolumesFromDriveA equ <__imp_GetVolumesFromDriveA>
  IFNDEF __UNICODE__
    GetVolumesFromDrive equ <__imp_GetVolumesFromDriveA>
  ENDIF

externdef __imp_GetVolumesFromDriveW:PPROC
GetVolumesFromDriveW equ <__imp_GetVolumesFromDriveW>
  IFDEF __UNICODE__
    GetVolumesFromDrive equ <__imp_GetVolumesFromDriveW>
  ENDIF

externdef __imp_IdentifyNtmsSlot:PPROC
IdentifyNtmsSlot equ <__imp_IdentifyNtmsSlot>

externdef __imp_ImportNtmsDatabase:PPROC
ImportNtmsDatabase equ <__imp_ImportNtmsDatabase>

externdef __imp_InjectNtmsCleaner:PPROC
InjectNtmsCleaner equ <__imp_InjectNtmsCleaner>

externdef __imp_InjectNtmsMedia:PPROC
InjectNtmsMedia equ <__imp_InjectNtmsMedia>

externdef __imp_InventoryNtmsLibrary:PPROC
InventoryNtmsLibrary equ <__imp_InventoryNtmsLibrary>

externdef __imp_MountNtmsMedia:PPROC
MountNtmsMedia equ <__imp_MountNtmsMedia>

externdef __imp_MoveToNtmsMediaPool:PPROC
MoveToNtmsMediaPool equ <__imp_MoveToNtmsMediaPool>

externdef __imp_OpenNtmsNotification:PPROC
OpenNtmsNotification equ <__imp_OpenNtmsNotification>

externdef __imp_OpenNtmsSessionA:PPROC
OpenNtmsSessionA equ <__imp_OpenNtmsSessionA>
  IFNDEF __UNICODE__
    OpenNtmsSession equ <__imp_OpenNtmsSessionA>
  ENDIF

externdef __imp_OpenNtmsSessionW:PPROC
OpenNtmsSessionW equ <__imp_OpenNtmsSessionW>
  IFDEF __UNICODE__
    OpenNtmsSession equ <__imp_OpenNtmsSessionW>
  ENDIF

externdef __imp_ReleaseNtmsCleanerSlot:PPROC
ReleaseNtmsCleanerSlot equ <__imp_ReleaseNtmsCleanerSlot>

externdef __imp_ReserveNtmsCleanerSlot:PPROC
ReserveNtmsCleanerSlot equ <__imp_ReserveNtmsCleanerSlot>

externdef __imp_SatisfyNtmsOperatorRequest:PPROC
SatisfyNtmsOperatorRequest equ <__imp_SatisfyNtmsOperatorRequest>

externdef __imp_SetNtmsDeviceChangeDetection:PPROC
SetNtmsDeviceChangeDetection equ <__imp_SetNtmsDeviceChangeDetection>

externdef __imp_SetNtmsMediaComplete:PPROC
SetNtmsMediaComplete equ <__imp_SetNtmsMediaComplete>

externdef __imp_SetNtmsObjectAttributeA:PPROC
SetNtmsObjectAttributeA equ <__imp_SetNtmsObjectAttributeA>
  IFNDEF __UNICODE__
    SetNtmsObjectAttribute equ <__imp_SetNtmsObjectAttributeA>
  ENDIF

externdef __imp_SetNtmsObjectAttributeW:PPROC
SetNtmsObjectAttributeW equ <__imp_SetNtmsObjectAttributeW>
  IFDEF __UNICODE__
    SetNtmsObjectAttribute equ <__imp_SetNtmsObjectAttributeW>
  ENDIF

externdef __imp_SetNtmsObjectInformationA:PPROC
SetNtmsObjectInformationA equ <__imp_SetNtmsObjectInformationA>
  IFNDEF __UNICODE__
    SetNtmsObjectInformation equ <__imp_SetNtmsObjectInformationA>
  ENDIF

externdef __imp_SetNtmsObjectInformationW:PPROC
SetNtmsObjectInformationW equ <__imp_SetNtmsObjectInformationW>
  IFDEF __UNICODE__
    SetNtmsObjectInformation equ <__imp_SetNtmsObjectInformationW>
  ENDIF

externdef __imp_SetNtmsObjectSecurity:PPROC
SetNtmsObjectSecurity equ <__imp_SetNtmsObjectSecurity>

externdef __imp_SetNtmsRequestOrder:PPROC
SetNtmsRequestOrder equ <__imp_SetNtmsRequestOrder>

externdef __imp_SetNtmsUIOptionsA:PPROC
SetNtmsUIOptionsA equ <__imp_SetNtmsUIOptionsA>
  IFNDEF __UNICODE__
    SetNtmsUIOptions equ <__imp_SetNtmsUIOptionsA>
  ENDIF

externdef __imp_SetNtmsUIOptionsW:PPROC
SetNtmsUIOptionsW equ <__imp_SetNtmsUIOptionsW>
  IFDEF __UNICODE__
    SetNtmsUIOptions equ <__imp_SetNtmsUIOptionsW>
  ENDIF

externdef __imp_SubmitNtmsOperatorRequestA:PPROC
SubmitNtmsOperatorRequestA equ <__imp_SubmitNtmsOperatorRequestA>
  IFNDEF __UNICODE__
    SubmitNtmsOperatorRequest equ <__imp_SubmitNtmsOperatorRequestA>
  ENDIF

externdef __imp_SubmitNtmsOperatorRequestW:PPROC
SubmitNtmsOperatorRequestW equ <__imp_SubmitNtmsOperatorRequestW>
  IFDEF __UNICODE__
    SubmitNtmsOperatorRequest equ <__imp_SubmitNtmsOperatorRequestW>
  ENDIF

externdef __imp_SwapNtmsMedia:PPROC
SwapNtmsMedia equ <__imp_SwapNtmsMedia>

externdef __imp_UpdateNtmsOmidInfo:PPROC
UpdateNtmsOmidInfo equ <__imp_UpdateNtmsOmidInfo>

externdef __imp_WaitForNtmsNotification:PPROC
WaitForNtmsNotification equ <__imp_WaitForNtmsNotification>

externdef __imp_WaitForNtmsOperatorRequest:PPROC
WaitForNtmsOperatorRequest equ <__imp_WaitForNtmsOperatorRequest>
