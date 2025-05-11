externdef __imp_DllRegisterServer:PPROC
DllRegisterServer equ <__imp_DllRegisterServer>

externdef __imp_DllUnregisterServer:PPROC
DllUnregisterServer equ <__imp_DllUnregisterServer>

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

externdef __imp_SCardGetAttrib:PPROC
SCardGetAttrib equ <__imp_SCardGetAttrib>

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

externdef __imp_SCardReleaseBadContext:PPROC
SCardReleaseBadContext equ <__imp_SCardReleaseBadContext>

externdef __imp_SCardReleaseContext:PPROC
SCardReleaseContext equ <__imp_SCardReleaseContext>

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
