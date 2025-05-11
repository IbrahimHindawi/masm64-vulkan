externdef __imp_ClassInstall32:PPROC
ClassInstall32 equ <__imp_ClassInstall32>

externdef __imp_SCardAccessNewReaderEvent:PPROC
SCardAccessNewReaderEvent equ <__imp_SCardAccessNewReaderEvent>

externdef __imp_SCardAccessStartedEvent:PPROC
SCardAccessStartedEvent equ <__imp_SCardAccessStartedEvent>

externdef __imp_SCardAddReaderToGroupA:PPROC
SCardAddReaderToGroupA equ <__imp_SCardAddReaderToGroupA>
  IFNDEF __UNICODE__
    SCardAddReaderToGroup equ <__imp_SCardAddReaderToGroupA>
  ENDIF

externdef __imp_SCardAddReaderToGroupW:PPROC
SCardAddReaderToGroupW equ <__imp_SCardAddReaderToGroupW>
  IFDEF __UNICODE__
    SCardAddReaderToGroup equ <__imp_SCardAddReaderToGroupW>
  ENDIF

externdef __imp_SCardBeginTransaction:PPROC
SCardBeginTransaction equ <__imp_SCardBeginTransaction>

externdef __imp_SCardCancel:PPROC
SCardCancel equ <__imp_SCardCancel>

externdef __imp_SCardConnectA:PPROC
SCardConnectA equ <__imp_SCardConnectA>
  IFNDEF __UNICODE__
    SCardConnect equ <__imp_SCardConnectA>
  ENDIF

externdef __imp_SCardConnectW:PPROC
SCardConnectW equ <__imp_SCardConnectW>
  IFDEF __UNICODE__
    SCardConnect equ <__imp_SCardConnectW>
  ENDIF

externdef __imp_SCardControl:PPROC
SCardControl equ <__imp_SCardControl>

externdef __imp_SCardDisconnect:PPROC
SCardDisconnect equ <__imp_SCardDisconnect>

externdef __imp_SCardEndTransaction:PPROC
SCardEndTransaction equ <__imp_SCardEndTransaction>

externdef __imp_SCardEstablishContext:PPROC
SCardEstablishContext equ <__imp_SCardEstablishContext>

externdef __imp_SCardForgetCardTypeA:PPROC
SCardForgetCardTypeA equ <__imp_SCardForgetCardTypeA>
  IFNDEF __UNICODE__
    SCardForgetCardType equ <__imp_SCardForgetCardTypeA>
  ENDIF

externdef __imp_SCardForgetCardTypeW:PPROC
SCardForgetCardTypeW equ <__imp_SCardForgetCardTypeW>
  IFDEF __UNICODE__
    SCardForgetCardType equ <__imp_SCardForgetCardTypeW>
  ENDIF

externdef __imp_SCardForgetReaderA:PPROC
SCardForgetReaderA equ <__imp_SCardForgetReaderA>
  IFNDEF __UNICODE__
    SCardForgetReader equ <__imp_SCardForgetReaderA>
  ENDIF

externdef __imp_SCardForgetReaderGroupA:PPROC
SCardForgetReaderGroupA equ <__imp_SCardForgetReaderGroupA>
  IFNDEF __UNICODE__
    SCardForgetReaderGroup equ <__imp_SCardForgetReaderGroupA>
  ENDIF

externdef __imp_SCardForgetReaderGroupW:PPROC
SCardForgetReaderGroupW equ <__imp_SCardForgetReaderGroupW>
  IFDEF __UNICODE__
    SCardForgetReaderGroup equ <__imp_SCardForgetReaderGroupW>
  ENDIF

externdef __imp_SCardForgetReaderW:PPROC
SCardForgetReaderW equ <__imp_SCardForgetReaderW>
  IFDEF __UNICODE__
    SCardForgetReader equ <__imp_SCardForgetReaderW>
  ENDIF

externdef __imp_SCardFreeMemory:PPROC
SCardFreeMemory equ <__imp_SCardFreeMemory>

externdef __imp_SCardGetAttrib:PPROC
SCardGetAttrib equ <__imp_SCardGetAttrib>

externdef __imp_SCardGetCardTypeProviderNameA:PPROC
SCardGetCardTypeProviderNameA equ <__imp_SCardGetCardTypeProviderNameA>
  IFNDEF __UNICODE__
    SCardGetCardTypeProviderName equ <__imp_SCardGetCardTypeProviderNameA>
  ENDIF

externdef __imp_SCardGetCardTypeProviderNameW:PPROC
SCardGetCardTypeProviderNameW equ <__imp_SCardGetCardTypeProviderNameW>
  IFDEF __UNICODE__
    SCardGetCardTypeProviderName equ <__imp_SCardGetCardTypeProviderNameW>
  ENDIF

externdef __imp_SCardGetProviderIdA:PPROC
SCardGetProviderIdA equ <__imp_SCardGetProviderIdA>
  IFNDEF __UNICODE__
    SCardGetProviderId equ <__imp_SCardGetProviderIdA>
  ENDIF

externdef __imp_SCardGetProviderIdW:PPROC
SCardGetProviderIdW equ <__imp_SCardGetProviderIdW>
  IFDEF __UNICODE__
    SCardGetProviderId equ <__imp_SCardGetProviderIdW>
  ENDIF

externdef __imp_SCardGetStatusChangeA:PPROC
SCardGetStatusChangeA equ <__imp_SCardGetStatusChangeA>
  IFNDEF __UNICODE__
    SCardGetStatusChange equ <__imp_SCardGetStatusChangeA>
  ENDIF

externdef __imp_SCardGetStatusChangeW:PPROC
SCardGetStatusChangeW equ <__imp_SCardGetStatusChangeW>
  IFDEF __UNICODE__
    SCardGetStatusChange equ <__imp_SCardGetStatusChangeW>
  ENDIF

externdef __imp_SCardIntroduceCardTypeA:PPROC
SCardIntroduceCardTypeA equ <__imp_SCardIntroduceCardTypeA>
  IFNDEF __UNICODE__
    SCardIntroduceCardType equ <__imp_SCardIntroduceCardTypeA>
  ENDIF

externdef __imp_SCardIntroduceCardTypeW:PPROC
SCardIntroduceCardTypeW equ <__imp_SCardIntroduceCardTypeW>
  IFDEF __UNICODE__
    SCardIntroduceCardType equ <__imp_SCardIntroduceCardTypeW>
  ENDIF

externdef __imp_SCardIntroduceReaderA:PPROC
SCardIntroduceReaderA equ <__imp_SCardIntroduceReaderA>
  IFNDEF __UNICODE__
    SCardIntroduceReader equ <__imp_SCardIntroduceReaderA>
  ENDIF

externdef __imp_SCardIntroduceReaderGroupA:PPROC
SCardIntroduceReaderGroupA equ <__imp_SCardIntroduceReaderGroupA>
  IFNDEF __UNICODE__
    SCardIntroduceReaderGroup equ <__imp_SCardIntroduceReaderGroupA>
  ENDIF

externdef __imp_SCardIntroduceReaderGroupW:PPROC
SCardIntroduceReaderGroupW equ <__imp_SCardIntroduceReaderGroupW>
  IFDEF __UNICODE__
    SCardIntroduceReaderGroup equ <__imp_SCardIntroduceReaderGroupW>
  ENDIF

externdef __imp_SCardIntroduceReaderW:PPROC
SCardIntroduceReaderW equ <__imp_SCardIntroduceReaderW>
  IFDEF __UNICODE__
    SCardIntroduceReader equ <__imp_SCardIntroduceReaderW>
  ENDIF

externdef __imp_SCardIsValidContext:PPROC
SCardIsValidContext equ <__imp_SCardIsValidContext>

externdef __imp_SCardListCardsA:PPROC
SCardListCardsA equ <__imp_SCardListCardsA>
  IFNDEF __UNICODE__
    SCardListCards equ <__imp_SCardListCardsA>
  ENDIF

externdef __imp_SCardListCardsW:PPROC
SCardListCardsW equ <__imp_SCardListCardsW>
  IFDEF __UNICODE__
    SCardListCards equ <__imp_SCardListCardsW>
  ENDIF

externdef __imp_SCardListInterfacesA:PPROC
SCardListInterfacesA equ <__imp_SCardListInterfacesA>
  IFNDEF __UNICODE__
    SCardListInterfaces equ <__imp_SCardListInterfacesA>
  ENDIF

externdef __imp_SCardListInterfacesW:PPROC
SCardListInterfacesW equ <__imp_SCardListInterfacesW>
  IFDEF __UNICODE__
    SCardListInterfaces equ <__imp_SCardListInterfacesW>
  ENDIF

externdef __imp_SCardListReaderGroupsA:PPROC
SCardListReaderGroupsA equ <__imp_SCardListReaderGroupsA>
  IFNDEF __UNICODE__
    SCardListReaderGroups equ <__imp_SCardListReaderGroupsA>
  ENDIF

externdef __imp_SCardListReaderGroupsW:PPROC
SCardListReaderGroupsW equ <__imp_SCardListReaderGroupsW>
  IFDEF __UNICODE__
    SCardListReaderGroups equ <__imp_SCardListReaderGroupsW>
  ENDIF

externdef __imp_SCardListReadersA:PPROC
SCardListReadersA equ <__imp_SCardListReadersA>
  IFNDEF __UNICODE__
    SCardListReaders equ <__imp_SCardListReadersA>
  ENDIF

externdef __imp_SCardListReadersW:PPROC
SCardListReadersW equ <__imp_SCardListReadersW>
  IFDEF __UNICODE__
    SCardListReaders equ <__imp_SCardListReadersW>
  ENDIF

externdef __imp_SCardLocateCardsA:PPROC
SCardLocateCardsA equ <__imp_SCardLocateCardsA>
  IFNDEF __UNICODE__
    SCardLocateCards equ <__imp_SCardLocateCardsA>
  ENDIF

externdef __imp_SCardLocateCardsByATRA:PPROC
SCardLocateCardsByATRA equ <__imp_SCardLocateCardsByATRA>
  IFNDEF __UNICODE__
    SCardLocateCardsByATR equ <__imp_SCardLocateCardsByATRA>
  ENDIF

externdef __imp_SCardLocateCardsByATRW:PPROC
SCardLocateCardsByATRW equ <__imp_SCardLocateCardsByATRW>
  IFDEF __UNICODE__
    SCardLocateCardsByATR equ <__imp_SCardLocateCardsByATRW>
  ENDIF

externdef __imp_SCardLocateCardsW:PPROC
SCardLocateCardsW equ <__imp_SCardLocateCardsW>
  IFDEF __UNICODE__
    SCardLocateCards equ <__imp_SCardLocateCardsW>
  ENDIF

externdef __imp_SCardReconnect:PPROC
SCardReconnect equ <__imp_SCardReconnect>

externdef __imp_SCardReleaseAllEvents:PPROC
SCardReleaseAllEvents equ <__imp_SCardReleaseAllEvents>

externdef __imp_SCardReleaseContext:PPROC
SCardReleaseContext equ <__imp_SCardReleaseContext>

externdef __imp_SCardReleaseNewReaderEvent:PPROC
SCardReleaseNewReaderEvent equ <__imp_SCardReleaseNewReaderEvent>

externdef __imp_SCardReleaseStartedEvent:PPROC
SCardReleaseStartedEvent equ <__imp_SCardReleaseStartedEvent>

externdef __imp_SCardRemoveReaderFromGroupA:PPROC
SCardRemoveReaderFromGroupA equ <__imp_SCardRemoveReaderFromGroupA>
  IFNDEF __UNICODE__
    SCardRemoveReaderFromGroup equ <__imp_SCardRemoveReaderFromGroupA>
  ENDIF

externdef __imp_SCardRemoveReaderFromGroupW:PPROC
SCardRemoveReaderFromGroupW equ <__imp_SCardRemoveReaderFromGroupW>
  IFDEF __UNICODE__
    SCardRemoveReaderFromGroup equ <__imp_SCardRemoveReaderFromGroupW>
  ENDIF

externdef __imp_SCardSetAttrib:PPROC
SCardSetAttrib equ <__imp_SCardSetAttrib>

externdef __imp_SCardSetCardTypeProviderNameA:PPROC
SCardSetCardTypeProviderNameA equ <__imp_SCardSetCardTypeProviderNameA>
  IFNDEF __UNICODE__
    SCardSetCardTypeProviderName equ <__imp_SCardSetCardTypeProviderNameA>
  ENDIF

externdef __imp_SCardSetCardTypeProviderNameW:PPROC
SCardSetCardTypeProviderNameW equ <__imp_SCardSetCardTypeProviderNameW>
  IFDEF __UNICODE__
    SCardSetCardTypeProviderName equ <__imp_SCardSetCardTypeProviderNameW>
  ENDIF

externdef __imp_SCardState:PPROC
SCardState equ <__imp_SCardState>

externdef __imp_SCardStatusA:PPROC
SCardStatusA equ <__imp_SCardStatusA>
  IFNDEF __UNICODE__
    SCardStatus equ <__imp_SCardStatusA>
  ENDIF

externdef __imp_SCardStatusW:PPROC
SCardStatusW equ <__imp_SCardStatusW>
  IFDEF __UNICODE__
    SCardStatus equ <__imp_SCardStatusW>
  ENDIF

externdef __imp_SCardTransmit:PPROC
SCardTransmit equ <__imp_SCardTransmit>

externdef __imp_g_rgSCardRawPci:PPROC
g_rgSCardRawPci equ <__imp_g_rgSCardRawPci>

externdef __imp_g_rgSCardT0Pci:PPROC
g_rgSCardT0Pci equ <__imp_g_rgSCardT0Pci>

externdef __imp_g_rgSCardT1Pci:PPROC
g_rgSCardT1Pci equ <__imp_g_rgSCardT1Pci>
