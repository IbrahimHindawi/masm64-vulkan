; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    include binpath.inc

    .code

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

HexDump proc lpString:QWORD,lnString:QWORD,lpbuffer:QWORD

    LOCAL lcnt:QWORD

    jmp over_table
    align 16
  hex__table:
    db "00","01","02","03","04","05","06","07","08","09","0A","0B","0C","0D","0E","0F"
    db "10","11","12","13","14","15","16","17","18","19","1A","1B","1C","1D","1E","1F"
    db "20","21","22","23","24","25","26","27","28","29","2A","2B","2C","2D","2E","2F"
    db "30","31","32","33","34","35","36","37","38","39","3A","3B","3C","3D","3E","3F"
    db "40","41","42","43","44","45","46","47","48","49","4A","4B","4C","4D","4E","4F"
    db "50","51","52","53","54","55","56","57","58","59","5A","5B","5C","5D","5E","5F"
    db "60","61","62","63","64","65","66","67","68","69","6A","6B","6C","6D","6E","6F"
    db "70","71","72","73","74","75","76","77","78","79","7A","7B","7C","7D","7E","7F"
    db "80","81","82","83","84","85","86","87","88","89","8A","8B","8C","8D","8E","8F"
    db "90","91","92","93","94","95","96","97","98","99","9A","9B","9C","9D","9E","9F"
    db "A0","A1","A2","A3","A4","A5","A6","A7","A8","A9","AA","AB","AC","AD","AE","AF"
    db "B0","B1","B2","B3","B4","B5","B6","B7","B8","B9","BA","BB","BC","BD","BE","BF"
    db "C0","C1","C2","C3","C4","C5","C6","C7","C8","C9","CA","CB","CC","CD","CE","CF"
    db "D0","D1","D2","D3","D4","D5","D6","D7","D8","D9","DA","DB","DC","DD","DE","DF"
    db "E0","E1","E2","E3","E4","E5","E6","E7","E8","E9","EA","EB","EC","ED","EE","EF"
    db "F0","F1","F2","F3","F4","F5","F6","F7","F8","F9","FA","FB","FC","FD","FE","FF"
  over_table:

    lea r9, hex__table        ; get base address of table
    mov r10, lpString         ; address of source string
    mov r11, lpbuffer         ; address of output buffer
    mov rax, r10
    add rax, lnString
    mov rcx, rax              ; exit condition for byte read
    xor r8, r8

    xor rax, rax              ; prevent stall

; ÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷

  hxlp:
    mov al, [r10]             ; get BYTE
    add r10, 1
    add r8, 1
    mov dx, [r9+rax*2]        ; put WORD from table into DX
    mov [r11], dx             ; write 2 byte string to buffer
    add r11, 2
    mov BYTE PTR [r11], 32    ; add space
    add r11, 1
    cmp r8, 8                 ; test for half to add "-"
    jne @F
    mov WORD PTR [r11], " -"
    add r11, 2
  @@:
    cmp r8, 16                ; break line at 16 characters
    jne @F
    sub r11, 1                ; overwrite last space
    mov WORD PTR [r11], 0A0Dh ; write CRLF to buffer
    add r11, 2
    xor r8, r8
  @@:
    cmp r10, rcx              ; test exit condition
    jl hxlp

; ÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷·÷

  @@:
    sub r11, 1
    cmp BYTE PTR [r11], 32
    je @B
    cmp BYTE PTR [r11], "-"
    je @B

    add r11, 1
    mov BYTE PTR [r11], 0     ; append terminator

    ret

HexDump endp

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

    end
