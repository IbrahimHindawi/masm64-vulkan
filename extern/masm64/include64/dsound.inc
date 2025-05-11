externdef __imp_DirectSoundCaptureCreate8:PPROC
DirectSoundCaptureCreate8 equ <__imp_DirectSoundCaptureCreate8>

externdef __imp_DirectSoundCaptureCreate:PPROC
DirectSoundCaptureCreate equ <__imp_DirectSoundCaptureCreate>

externdef __imp_DirectSoundCaptureEnumerateA:PPROC
DirectSoundCaptureEnumerateA equ <__imp_DirectSoundCaptureEnumerateA>
  IFNDEF __UNICODE__
    DirectSoundCaptureEnumerate equ <__imp_DirectSoundCaptureEnumerateA>
  ENDIF

externdef __imp_DirectSoundCaptureEnumerateW:PPROC
DirectSoundCaptureEnumerateW equ <__imp_DirectSoundCaptureEnumerateW>
  IFDEF __UNICODE__
    DirectSoundCaptureEnumerate equ <__imp_DirectSoundCaptureEnumerateW>
  ENDIF

externdef __imp_DirectSoundCreate8:PPROC
DirectSoundCreate8 equ <__imp_DirectSoundCreate8>

externdef __imp_DirectSoundCreate:PPROC
DirectSoundCreate equ <__imp_DirectSoundCreate>

externdef __imp_DirectSoundEnumerateA:PPROC
DirectSoundEnumerateA equ <__imp_DirectSoundEnumerateA>
  IFNDEF __UNICODE__
    DirectSoundEnumerate equ <__imp_DirectSoundEnumerateA>
  ENDIF

externdef __imp_DirectSoundEnumerateW:PPROC
DirectSoundEnumerateW equ <__imp_DirectSoundEnumerateW>
  IFDEF __UNICODE__
    DirectSoundEnumerate equ <__imp_DirectSoundEnumerateW>
  ENDIF

externdef __imp_DirectSoundFullDuplexCreate:PPROC
DirectSoundFullDuplexCreate equ <__imp_DirectSoundFullDuplexCreate>

externdef __imp_DllCanUnloadNow:PPROC
DllCanUnloadNow equ <__imp_DllCanUnloadNow>

externdef __imp_DllGetClassObject:PPROC
DllGetClassObject equ <__imp_DllGetClassObject>

externdef __imp_GetDeviceID:PPROC
GetDeviceID equ <__imp_GetDeviceID>
