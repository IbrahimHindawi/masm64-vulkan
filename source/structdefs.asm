; typedef struct tagWNDCLASSEXA {
;     UINT        cbSize;
;     /* Win 3.x */
;     UINT        style;
;     WNDPROC     lpfnWndProc;
;     int         cbClsExtra;
;     int         cbWndExtra;
;     HINSTANCE   hInstance;
;     HICON       hIcon;
;     HCURSOR     hCursor;
;     HBRUSH      hbrBackground;
;     LPCSTR      lpszMenuName;
;     LPCSTR      lpszClassName;
;     /* Win 4.0 */
;     HICON       hIconSm;
; } WNDCLASSEXA, *PWNDCLASSEXA, NEAR *NPWNDCLASSEXA, FAR *LPWNDCLASSEXA;
WNDCLASSEXA struct
    cbSize dword sizeof(WNDCLASSEXA); Size of this structure
    dwStyle dword ?; Style dword
    lpfnWndProc qword ?; Window procedure pointer
    cbClsExtra dword ?; Extra class bytes
    cbWndExtra dword ?; Extra window bytes
    hInst qword ?; Instance handle
    hIconx qword ?; Icon handle
    hCursorx qword ?; Cursor handle
    hbrBackground qword ?; Background brush handle
    lpszMenuName qword ?; Menu name pointer
    lpszClassName qword ?; Class name pointer
    hIconSm qword ?; Small icon handle
WNDCLASSEXA ends
