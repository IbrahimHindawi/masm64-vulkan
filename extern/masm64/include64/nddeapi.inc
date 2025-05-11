externdef __imp_NDdeGetErrorStringA:PPROC
NDdeGetErrorStringA equ <__imp_NDdeGetErrorStringA>
  IFNDEF __UNICODE__
    NDdeGetErrorString equ <__imp_NDdeGetErrorStringA>
  ENDIF

externdef __imp_NDdeGetErrorStringW:PPROC
NDdeGetErrorStringW equ <__imp_NDdeGetErrorStringW>
  IFDEF __UNICODE__
    NDdeGetErrorString equ <__imp_NDdeGetErrorStringW>
  ENDIF

externdef __imp_NDdeGetShareSecurityA:PPROC
NDdeGetShareSecurityA equ <__imp_NDdeGetShareSecurityA>
  IFNDEF __UNICODE__
    NDdeGetShareSecurity equ <__imp_NDdeGetShareSecurityA>
  ENDIF

externdef __imp_NDdeGetShareSecurityW:PPROC
NDdeGetShareSecurityW equ <__imp_NDdeGetShareSecurityW>
  IFDEF __UNICODE__
    NDdeGetShareSecurity equ <__imp_NDdeGetShareSecurityW>
  ENDIF

externdef __imp_NDdeGetTrustedShareA:PPROC
NDdeGetTrustedShareA equ <__imp_NDdeGetTrustedShareA>
  IFNDEF __UNICODE__
    NDdeGetTrustedShare equ <__imp_NDdeGetTrustedShareA>
  ENDIF

externdef __imp_NDdeGetTrustedShareW:PPROC
NDdeGetTrustedShareW equ <__imp_NDdeGetTrustedShareW>
  IFDEF __UNICODE__
    NDdeGetTrustedShare equ <__imp_NDdeGetTrustedShareW>
  ENDIF

externdef __imp_NDdeIsValidAppTopicListA:PPROC
NDdeIsValidAppTopicListA equ <__imp_NDdeIsValidAppTopicListA>
  IFNDEF __UNICODE__
    NDdeIsValidAppTopicList equ <__imp_NDdeIsValidAppTopicListA>
  ENDIF

externdef __imp_NDdeIsValidAppTopicListW:PPROC
NDdeIsValidAppTopicListW equ <__imp_NDdeIsValidAppTopicListW>
  IFDEF __UNICODE__
    NDdeIsValidAppTopicList equ <__imp_NDdeIsValidAppTopicListW>
  ENDIF

externdef __imp_NDdeIsValidShareNameA:PPROC
NDdeIsValidShareNameA equ <__imp_NDdeIsValidShareNameA>
  IFNDEF __UNICODE__
    NDdeIsValidShareName equ <__imp_NDdeIsValidShareNameA>
  ENDIF

externdef __imp_NDdeIsValidShareNameW:PPROC
NDdeIsValidShareNameW equ <__imp_NDdeIsValidShareNameW>
  IFDEF __UNICODE__
    NDdeIsValidShareName equ <__imp_NDdeIsValidShareNameW>
  ENDIF

externdef __imp_NDdeSetShareSecurityA:PPROC
NDdeSetShareSecurityA equ <__imp_NDdeSetShareSecurityA>
  IFNDEF __UNICODE__
    NDdeSetShareSecurity equ <__imp_NDdeSetShareSecurityA>
  ENDIF

externdef __imp_NDdeSetShareSecurityW:PPROC
NDdeSetShareSecurityW equ <__imp_NDdeSetShareSecurityW>
  IFDEF __UNICODE__
    NDdeSetShareSecurity equ <__imp_NDdeSetShareSecurityW>
  ENDIF

externdef __imp_NDdeSetTrustedShareA:PPROC
NDdeSetTrustedShareA equ <__imp_NDdeSetTrustedShareA>
  IFNDEF __UNICODE__
    NDdeSetTrustedShare equ <__imp_NDdeSetTrustedShareA>
  ENDIF

externdef __imp_NDdeSetTrustedShareW:PPROC
NDdeSetTrustedShareW equ <__imp_NDdeSetTrustedShareW>
  IFDEF __UNICODE__
    NDdeSetTrustedShare equ <__imp_NDdeSetTrustedShareW>
  ENDIF

externdef __imp_NDdeShareAddA:PPROC
NDdeShareAddA equ <__imp_NDdeShareAddA>
  IFNDEF __UNICODE__
    NDdeShareAdd equ <__imp_NDdeShareAddA>
  ENDIF

externdef __imp_NDdeShareAddW:PPROC
NDdeShareAddW equ <__imp_NDdeShareAddW>
  IFDEF __UNICODE__
    NDdeShareAdd equ <__imp_NDdeShareAddW>
  ENDIF

externdef __imp_NDdeShareDelA:PPROC
NDdeShareDelA equ <__imp_NDdeShareDelA>
  IFNDEF __UNICODE__
    NDdeShareDel equ <__imp_NDdeShareDelA>
  ENDIF

externdef __imp_NDdeShareDelW:PPROC
NDdeShareDelW equ <__imp_NDdeShareDelW>
  IFDEF __UNICODE__
    NDdeShareDel equ <__imp_NDdeShareDelW>
  ENDIF

externdef __imp_NDdeShareEnumA:PPROC
NDdeShareEnumA equ <__imp_NDdeShareEnumA>
  IFNDEF __UNICODE__
    NDdeShareEnum equ <__imp_NDdeShareEnumA>
  ENDIF

externdef __imp_NDdeShareEnumW:PPROC
NDdeShareEnumW equ <__imp_NDdeShareEnumW>
  IFDEF __UNICODE__
    NDdeShareEnum equ <__imp_NDdeShareEnumW>
  ENDIF

externdef __imp_NDdeShareGetInfoA:PPROC
NDdeShareGetInfoA equ <__imp_NDdeShareGetInfoA>
  IFNDEF __UNICODE__
    NDdeShareGetInfo equ <__imp_NDdeShareGetInfoA>
  ENDIF

externdef __imp_NDdeShareGetInfoW:PPROC
NDdeShareGetInfoW equ <__imp_NDdeShareGetInfoW>
  IFDEF __UNICODE__
    NDdeShareGetInfo equ <__imp_NDdeShareGetInfoW>
  ENDIF

externdef __imp_NDdeShareSetInfoA:PPROC
NDdeShareSetInfoA equ <__imp_NDdeShareSetInfoA>
  IFNDEF __UNICODE__
    NDdeShareSetInfo equ <__imp_NDdeShareSetInfoA>
  ENDIF

externdef __imp_NDdeShareSetInfoW:PPROC
NDdeShareSetInfoW equ <__imp_NDdeShareSetInfoW>
  IFDEF __UNICODE__
    NDdeShareSetInfo equ <__imp_NDdeShareSetInfoW>
  ENDIF

externdef __imp_NDdeSpecialCommandA:PPROC
NDdeSpecialCommandA equ <__imp_NDdeSpecialCommandA>
  IFNDEF __UNICODE__
    NDdeSpecialCommand equ <__imp_NDdeSpecialCommandA>
  ENDIF

externdef __imp_NDdeSpecialCommandW:PPROC
NDdeSpecialCommandW equ <__imp_NDdeSpecialCommandW>
  IFDEF __UNICODE__
    NDdeSpecialCommand equ <__imp_NDdeSpecialCommandW>
  ENDIF

externdef __imp_NDdeTrustedShareEnumA:PPROC
NDdeTrustedShareEnumA equ <__imp_NDdeTrustedShareEnumA>
  IFNDEF __UNICODE__
    NDdeTrustedShareEnum equ <__imp_NDdeTrustedShareEnumA>
  ENDIF

externdef __imp_NDdeTrustedShareEnumW:PPROC
NDdeTrustedShareEnumW equ <__imp_NDdeTrustedShareEnumW>
  IFDEF __UNICODE__
    NDdeTrustedShareEnum equ <__imp_NDdeTrustedShareEnumW>
  ENDIF

externdef __imp_nddeapi_ordinal514:PPROC
nddeapi_ordinal514 equ <__imp_nddeapi_ordinal514>

externdef __imp_nddeapi_ordinal515:PPROC
nddeapi_ordinal515 equ <__imp_nddeapi_ordinal515>

externdef __imp_nddeapi_ordinal516:PPROC
nddeapi_ordinal516 equ <__imp_nddeapi_ordinal516>

externdef __imp_nddeapi_ordinal517:PPROC
nddeapi_ordinal517 equ <__imp_nddeapi_ordinal517>

externdef __imp_nddeapi_ordinal518:PPROC
nddeapi_ordinal518 equ <__imp_nddeapi_ordinal518>

externdef __imp_nddeapi_ordinal519:PPROC
nddeapi_ordinal519 equ <__imp_nddeapi_ordinal519>

externdef __imp_nddeapi_ordinal520:PPROC
nddeapi_ordinal520 equ <__imp_nddeapi_ordinal520>

externdef __imp_nddeapi_ordinal521:PPROC
nddeapi_ordinal521 equ <__imp_nddeapi_ordinal521>

externdef __imp_nddeapi_ordinal522:PPROC
nddeapi_ordinal522 equ <__imp_nddeapi_ordinal522>

externdef __imp_nddeapi_ordinal523:PPROC
nddeapi_ordinal523 equ <__imp_nddeapi_ordinal523>

externdef __imp_nddeapi_ordinal524:PPROC
nddeapi_ordinal524 equ <__imp_nddeapi_ordinal524>

externdef __imp_nddeapi_ordinal525:PPROC
nddeapi_ordinal525 equ <__imp_nddeapi_ordinal525>

externdef __imp_nddeapi_ordinal526:PPROC
nddeapi_ordinal526 equ <__imp_nddeapi_ordinal526>

externdef __imp_nddeapi_ordinal527:PPROC
nddeapi_ordinal527 equ <__imp_nddeapi_ordinal527>

externdef __imp_nddeapi_ordinal528:PPROC
nddeapi_ordinal528 equ <__imp_nddeapi_ordinal528>

externdef __imp_nddeapi_ordinal529:PPROC
nddeapi_ordinal529 equ <__imp_nddeapi_ordinal529>

externdef __imp_nddeapi_ordinal530:PPROC
nddeapi_ordinal530 equ <__imp_nddeapi_ordinal530>

externdef __imp_nddeapi_ordinal531:PPROC
nddeapi_ordinal531 equ <__imp_nddeapi_ordinal531>

externdef __imp_nddeapi_ordinal532:PPROC
nddeapi_ordinal532 equ <__imp_nddeapi_ordinal532>

externdef __imp_nddeapi_ordinal533:PPROC
nddeapi_ordinal533 equ <__imp_nddeapi_ordinal533>

externdef __imp_nddeapi_ordinal534:PPROC
nddeapi_ordinal534 equ <__imp_nddeapi_ordinal534>

externdef __imp_nddeapi_ordinal535:PPROC
nddeapi_ordinal535 equ <__imp_nddeapi_ordinal535>

externdef __imp_nddeapi_ordinal536:PPROC
nddeapi_ordinal536 equ <__imp_nddeapi_ordinal536>

externdef __imp_nddeapi_ordinal537:PPROC
nddeapi_ordinal537 equ <__imp_nddeapi_ordinal537>

externdef __imp_nddeapi_ordinal538:PPROC
nddeapi_ordinal538 equ <__imp_nddeapi_ordinal538>

externdef __imp_nddeapi_ordinal539:PPROC
nddeapi_ordinal539 equ <__imp_nddeapi_ordinal539>

externdef __imp_nddeapi_ordinal540:PPROC
nddeapi_ordinal540 equ <__imp_nddeapi_ordinal540>

externdef __imp_nddeapi_ordinal541:PPROC
nddeapi_ordinal541 equ <__imp_nddeapi_ordinal541>

externdef __imp_nddeapi_ordinal542:PPROC
nddeapi_ordinal542 equ <__imp_nddeapi_ordinal542>

externdef __imp_nddeapi_ordinal543:PPROC
nddeapi_ordinal543 equ <__imp_nddeapi_ordinal543>

externdef __imp_nddeapi_ordinal544:PPROC
nddeapi_ordinal544 equ <__imp_nddeapi_ordinal544>

externdef __imp_nddeapi_ordinal545:PPROC
nddeapi_ordinal545 equ <__imp_nddeapi_ordinal545>

externdef __imp_nddeapi_ordinal546:PPROC
nddeapi_ordinal546 equ <__imp_nddeapi_ordinal546>

externdef __imp_nddeapi_ordinal547:PPROC
nddeapi_ordinal547 equ <__imp_nddeapi_ordinal547>

externdef __imp_nddeapi_ordinal548:PPROC
nddeapi_ordinal548 equ <__imp_nddeapi_ordinal548>

externdef __imp_nddeapi_ordinal549:PPROC
nddeapi_ordinal549 equ <__imp_nddeapi_ordinal549>

externdef __imp_nddeapi_ordinal550:PPROC
nddeapi_ordinal550 equ <__imp_nddeapi_ordinal550>

externdef __imp_nddeapi_ordinal551:PPROC
nddeapi_ordinal551 equ <__imp_nddeapi_ordinal551>

externdef __imp_nddeapi_ordinal552:PPROC
nddeapi_ordinal552 equ <__imp_nddeapi_ordinal552>

externdef __imp_nddeapi_ordinal553:PPROC
nddeapi_ordinal553 equ <__imp_nddeapi_ordinal553>

externdef __imp_nddeapi_ordinal554:PPROC
nddeapi_ordinal554 equ <__imp_nddeapi_ordinal554>

externdef __imp_nddeapi_ordinal555:PPROC
nddeapi_ordinal555 equ <__imp_nddeapi_ordinal555>

externdef __imp_nddeapi_ordinal556:PPROC
nddeapi_ordinal556 equ <__imp_nddeapi_ordinal556>

externdef __imp_nddeapi_ordinal557:PPROC
nddeapi_ordinal557 equ <__imp_nddeapi_ordinal557>

externdef __imp_nddeapi_ordinal558:PPROC
nddeapi_ordinal558 equ <__imp_nddeapi_ordinal558>

externdef __imp_nddeapi_ordinal559:PPROC
nddeapi_ordinal559 equ <__imp_nddeapi_ordinal559>

externdef __imp_nddeapi_ordinal560:PPROC
nddeapi_ordinal560 equ <__imp_nddeapi_ordinal560>

externdef __imp_nddeapi_ordinal561:PPROC
nddeapi_ordinal561 equ <__imp_nddeapi_ordinal561>

externdef __imp_nddeapi_ordinal562:PPROC
nddeapi_ordinal562 equ <__imp_nddeapi_ordinal562>

externdef __imp_nddeapi_ordinal563:PPROC
nddeapi_ordinal563 equ <__imp_nddeapi_ordinal563>

externdef __imp_nddeapi_ordinal564:PPROC
nddeapi_ordinal564 equ <__imp_nddeapi_ordinal564>

externdef __imp_nddeapi_ordinal565:PPROC
nddeapi_ordinal565 equ <__imp_nddeapi_ordinal565>

externdef __imp_nddeapi_ordinal566:PPROC
nddeapi_ordinal566 equ <__imp_nddeapi_ordinal566>

externdef __imp_nddeapi_ordinal567:PPROC
nddeapi_ordinal567 equ <__imp_nddeapi_ordinal567>

externdef __imp_nddeapi_ordinal568:PPROC
nddeapi_ordinal568 equ <__imp_nddeapi_ordinal568>

externdef __imp_nddeapi_ordinal569:PPROC
nddeapi_ordinal569 equ <__imp_nddeapi_ordinal569>

externdef __imp_nddeapi_ordinal570:PPROC
nddeapi_ordinal570 equ <__imp_nddeapi_ordinal570>

externdef __imp_nddeapi_ordinal571:PPROC
nddeapi_ordinal571 equ <__imp_nddeapi_ordinal571>

externdef __imp_nddeapi_ordinal572:PPROC
nddeapi_ordinal572 equ <__imp_nddeapi_ordinal572>

externdef __imp_nddeapi_ordinal573:PPROC
nddeapi_ordinal573 equ <__imp_nddeapi_ordinal573>

externdef __imp_nddeapi_ordinal574:PPROC
nddeapi_ordinal574 equ <__imp_nddeapi_ordinal574>

externdef __imp_nddeapi_ordinal575:PPROC
nddeapi_ordinal575 equ <__imp_nddeapi_ordinal575>

externdef __imp_nddeapi_ordinal576:PPROC
nddeapi_ordinal576 equ <__imp_nddeapi_ordinal576>

externdef __imp_nddeapi_ordinal577:PPROC
nddeapi_ordinal577 equ <__imp_nddeapi_ordinal577>

externdef __imp_nddeapi_ordinal578:PPROC
nddeapi_ordinal578 equ <__imp_nddeapi_ordinal578>

externdef __imp_nddeapi_ordinal579:PPROC
nddeapi_ordinal579 equ <__imp_nddeapi_ordinal579>

externdef __imp_nddeapi_ordinal580:PPROC
nddeapi_ordinal580 equ <__imp_nddeapi_ordinal580>

externdef __imp_nddeapi_ordinal581:PPROC
nddeapi_ordinal581 equ <__imp_nddeapi_ordinal581>

externdef __imp_nddeapi_ordinal582:PPROC
nddeapi_ordinal582 equ <__imp_nddeapi_ordinal582>

externdef __imp_nddeapi_ordinal583:PPROC
nddeapi_ordinal583 equ <__imp_nddeapi_ordinal583>

externdef __imp_nddeapi_ordinal584:PPROC
nddeapi_ordinal584 equ <__imp_nddeapi_ordinal584>

externdef __imp_nddeapi_ordinal585:PPROC
nddeapi_ordinal585 equ <__imp_nddeapi_ordinal585>

externdef __imp_nddeapi_ordinal586:PPROC
nddeapi_ordinal586 equ <__imp_nddeapi_ordinal586>

externdef __imp_nddeapi_ordinal587:PPROC
nddeapi_ordinal587 equ <__imp_nddeapi_ordinal587>

externdef __imp_nddeapi_ordinal588:PPROC
nddeapi_ordinal588 equ <__imp_nddeapi_ordinal588>

externdef __imp_nddeapi_ordinal589:PPROC
nddeapi_ordinal589 equ <__imp_nddeapi_ordinal589>

externdef __imp_nddeapi_ordinal590:PPROC
nddeapi_ordinal590 equ <__imp_nddeapi_ordinal590>

externdef __imp_nddeapi_ordinal591:PPROC
nddeapi_ordinal591 equ <__imp_nddeapi_ordinal591>

externdef __imp_nddeapi_ordinal592:PPROC
nddeapi_ordinal592 equ <__imp_nddeapi_ordinal592>

externdef __imp_nddeapi_ordinal593:PPROC
nddeapi_ordinal593 equ <__imp_nddeapi_ordinal593>

externdef __imp_nddeapi_ordinal594:PPROC
nddeapi_ordinal594 equ <__imp_nddeapi_ordinal594>

externdef __imp_nddeapi_ordinal595:PPROC
nddeapi_ordinal595 equ <__imp_nddeapi_ordinal595>

externdef __imp_nddeapi_ordinal596:PPROC
nddeapi_ordinal596 equ <__imp_nddeapi_ordinal596>

externdef __imp_nddeapi_ordinal597:PPROC
nddeapi_ordinal597 equ <__imp_nddeapi_ordinal597>

externdef __imp_nddeapi_ordinal598:PPROC
nddeapi_ordinal598 equ <__imp_nddeapi_ordinal598>

externdef __imp_nddeapi_ordinal599:PPROC
nddeapi_ordinal599 equ <__imp_nddeapi_ordinal599>
