; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

MonthByNumber proc number:QWORD

    LOCAL rval :QWORD

    .switch number
      .case 1
        mrm rval, chr$("January")
      .case 2
        mrm rval, chr$("February")
      .case 3
        mrm rval, chr$("March")
      .case 4
        mrm rval, chr$("April")
      .case 5
        mrm rval, chr$("May")
      .case 6
        mrm rval, chr$("June")
      .case 7
        mrm rval, chr$("July")
      .case 8
        mrm rval, chr$("August")
      .case 9
        mrm rval, chr$("September")
      .case 10
        mrm rval, chr$("October")
      .case 11
        mrm rval, chr$("November")
      .case 12
        mrm rval, chr$("December")
      .default
        mrm rval, chr$("Month number out of range")
    .endsw

    mov rax, rval

    ret

MonthByNumber endp

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
