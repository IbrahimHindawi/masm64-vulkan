externdef __imp_AppCleanup:PPROC
AppCleanup equ <__imp_AppCleanup>

externdef __imp_capCreateCaptureWindowA:PPROC
capCreateCaptureWindowA equ <__imp_capCreateCaptureWindowA>
  IFNDEF __UNICODE__
    capCreateCaptureWindow equ <__imp_capCreateCaptureWindowA>
  ENDIF

externdef __imp_capCreateCaptureWindowW:PPROC
capCreateCaptureWindowW equ <__imp_capCreateCaptureWindowW>
  IFDEF __UNICODE__
    capCreateCaptureWindow equ <__imp_capCreateCaptureWindowW>
  ENDIF

externdef __imp_capGetDriverDescriptionA:PPROC
capGetDriverDescriptionA equ <__imp_capGetDriverDescriptionA>
  IFNDEF __UNICODE__
    capGetDriverDescription equ <__imp_capGetDriverDescriptionA>
  ENDIF

externdef __imp_capGetDriverDescriptionW:PPROC
capGetDriverDescriptionW equ <__imp_capGetDriverDescriptionW>
  IFDEF __UNICODE__
    capGetDriverDescription equ <__imp_capGetDriverDescriptionW>
  ENDIF

externdef __imp_videoThunk32:PPROC
videoThunk32 equ <__imp_videoThunk32>
