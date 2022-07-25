// dllmain.cpp : DLL アプリケーションのエントリ ポイントを定義します。
#include "dllyact_def.h"
#include "pch.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

typedef DW typeofarg0(void);
typedef DW typeofarg1(DW);
typedef DW typeofarg2(DW, DW);
typedef DW typeofarg3(DW, DW, DW);
typedef DW typeofarg4(DW, DW, DW, DW);

EXTERN_C DW STUB_EXPORT yact_GetProcAddressA32(DW* R) { return (DW)GetProcAddress(HMODULE p1, LPCSTR p2); }
EXTERN_C DW STUB_EXPORT yact_LoadLibraryAA32(DW* R) { return (DW)LoadLibraryA(LPCSTR p1); }
EXTERN_C DW STUB_EXPORT yact_LoadLibraryWA32(DW* R) { return (DW)LoadLibraryW(LPCWSTR p1); }
EXTERN_C DW STUB_EXPORT yact_LoadLibraryExAA32(DW* R) { return (DW)LoadLibraryExA(LPCSTR p1,HANDLE p2,DWORD p3); }
EXTERN_C DW STUB_EXPORT yact_LoadLibraryExWA32(DW* R) { return (DW)LoadLibraryExW(LPCWSTR p1, HANDLE p2, DWORD p3); }
EXTERN_C DW STUB_EXPORT yact_A32Call(DW* R) { 
    switch (p2) {
    case 0:
        return ((typeofarg0*)p1)();
    case 1:
        return ((typeofarg1*)p1)(((DW*)p3)[0]);
    case 2:
        return ((typeofarg2*)p1)(((DW*)p3)[0], ((DW*)p3)[1]);
    case 3:
        return ((typeofarg3*)p1)(((DW*)p3)[0], ((DW*)p3)[1], ((DW*)p3)[2]);
    case 4:
        return ((typeofarg4*)p1)(((DW*)p3)[0], ((DW*)p3)[1], ((DW*)p3)[2], ((DW*)p3)[3]);
    default:
        return ((typeofarg1*)p1)(p3);
    }
}
