externdef __imp_FlashConfigCreateNetworkW:PPROC
FlashConfigCreateNetworkW equ <__imp_FlashConfigCreateNetworkW>
  IFDEF __UNICODE__
    FlashConfigCreateNetwork equ <__imp_FlashConfigCreateNetworkW>
  ENDIF

externdef __imp_FlashConfigRunWizard:PPROC
FlashConfigRunWizard equ <__imp_FlashConfigRunWizard>

externdef __imp_HotSpotHelpW:PPROC
HotSpotHelpW equ <__imp_HotSpotHelpW>
  IFDEF __UNICODE__
    HotSpotHelp equ <__imp_HotSpotHelpW>
  ENDIF

externdef __imp_WZCCanDestroyBalloon:PPROC
WZCCanDestroyBalloon equ <__imp_WZCCanDestroyBalloon>

externdef __imp_WZCCanShowBalloon:PPROC
WZCCanShowBalloon equ <__imp_WZCCanShowBalloon>

externdef __imp_WZCIsVanRunning:PPROC
WZCIsVanRunning equ <__imp_WZCIsVanRunning>

externdef __imp_WZCOnBalloonClick:PPROC
WZCOnBalloonClick equ <__imp_WZCOnBalloonClick>

externdef __imp_WZCQueryConnectionStatusText:PPROC
WZCQueryConnectionStatusText equ <__imp_WZCQueryConnectionStatusText>
