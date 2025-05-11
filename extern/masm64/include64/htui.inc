externdef __imp_DllMain:PPROC
DllMain equ <__imp_DllMain>

externdef __imp_HTUI_ColorAdjustment:PPROC
HTUI_ColorAdjustment equ <__imp_HTUI_ColorAdjustment>

externdef __imp_HTUI_ColorAdjustmentA:PPROC
HTUI_ColorAdjustmentA equ <__imp_HTUI_ColorAdjustmentA>
  IFNDEF __UNICODE__
    HTUI_ColorAdjustment equ <__imp_HTUI_ColorAdjustmentA>
  ENDIF

externdef __imp_HTUI_ColorAdjustmentW:PPROC
HTUI_ColorAdjustmentW equ <__imp_HTUI_ColorAdjustmentW>
  IFDEF __UNICODE__
    HTUI_ColorAdjustment equ <__imp_HTUI_ColorAdjustmentW>
  ENDIF

externdef __imp_HTUI_DeviceColorAdjustment:PPROC
HTUI_DeviceColorAdjustment equ <__imp_HTUI_DeviceColorAdjustment>

externdef __imp_HTUI_DeviceColorAdjustmentA:PPROC
HTUI_DeviceColorAdjustmentA equ <__imp_HTUI_DeviceColorAdjustmentA>
  IFNDEF __UNICODE__
    HTUI_DeviceColorAdjustment equ <__imp_HTUI_DeviceColorAdjustmentA>
  ENDIF

externdef __imp_HTUI_DeviceColorAdjustmentW:PPROC
HTUI_DeviceColorAdjustmentW equ <__imp_HTUI_DeviceColorAdjustmentW>
  IFDEF __UNICODE__
    HTUI_DeviceColorAdjustment equ <__imp_HTUI_DeviceColorAdjustmentW>
  ENDIF
