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
typedef DW typeofarg5(DW, DW, DW, DW, DW);
typedef DW typeofarg6(DW, DW, DW, DW, DW, DW);
typedef DW typeofarg7(DW, DW, DW, DW, DW, DW, DW);
typedef DW typeofarg8(DW, DW, DW, DW, DW, DW, DW, DW);
typedef DW typeofarg9(DW, DW, DW, DW, DW, DW, DW, DW, DW);
typedef DW typeofarg10(DW, DW, DW, DW, DW, DW, DW, DW, DW, DW);
typedef DW typeofarg11(DW, DW, DW, DW, DW, DW, DW, DW, DW, DW, DW);
typedef DW typeofarg12(DW, DW, DW, DW, DW, DW, DW, DW, DW, DW, DW, DW);
typedef DW typeofarg13(DW, DW, DW, DW, DW, DW, DW, DW, DW, DW, DW, DW, DW);
typedef DW typeofarg14(DW, DW, DW, DW, DW, DW, DW, DW, DW, DW, DW, DW, DW, DW);
typedef DW typeofarg15(DW, DW, DW, DW, DW, DW, DW, DW, DW, DW, DW, DW, DW, DW, DW);
typedef DW typeofarg16(DW, DW, DW, DW, DW, DW, DW, DW, DW, DW, DW, DW, DW, DW, DW, DW);

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
    case 5:
        return ((typeofarg5*)p1)(((DW*)p3)[0], ((DW*)p3)[1], ((DW*)p3)[2], ((DW*)p3)[3], ((DW*)p3)[4]);
    case 6:
        return ((typeofarg6*)p1)(((DW*)p3)[0], ((DW*)p3)[1], ((DW*)p3)[2], ((DW*)p3)[3], ((DW*)p3)[4], ((DW*)p3)[5]);
    case 7:
        return ((typeofarg7*)p1)(((DW*)p3)[0], ((DW*)p3)[1], ((DW*)p3)[2], ((DW*)p3)[3], ((DW*)p3)[4], ((DW*)p3)[5], ((DW*)p3)[6]);
    case 8:
        return ((typeofarg8*)p1)(((DW*)p3)[0], ((DW*)p3)[1], ((DW*)p3)[2], ((DW*)p3)[3], ((DW*)p3)[4], ((DW*)p3)[5], ((DW*)p3)[6], ((DW*)p3)[7]);
    case 9:
        return ((typeofarg9*)p1)(((DW*)p3)[0], ((DW*)p3)[1], ((DW*)p3)[2], ((DW*)p3)[3], ((DW*)p3)[4], ((DW*)p3)[5], ((DW*)p3)[6], ((DW*)p3)[7], ((DW*)p3)[8]);
    case 10:
        return ((typeofarg10*)p1)(((DW*)p3)[0], ((DW*)p3)[1], ((DW*)p3)[2], ((DW*)p3)[3], ((DW*)p3)[4], ((DW*)p3)[5], ((DW*)p3)[6], ((DW*)p3)[7], ((DW*)p3)[8], ((DW*)p3)[9]);
    case 11:
        return ((typeofarg11*)p1)(((DW*)p3)[0], ((DW*)p3)[1], ((DW*)p3)[2], ((DW*)p3)[3], ((DW*)p3)[4], ((DW*)p3)[5], ((DW*)p3)[6], ((DW*)p3)[7], ((DW*)p3)[8], ((DW*)p3)[9], ((DW*)p3)[10]);
    case 12:
        return ((typeofarg12*)p1)(((DW*)p3)[0], ((DW*)p3)[1], ((DW*)p3)[2], ((DW*)p3)[3], ((DW*)p3)[4], ((DW*)p3)[5], ((DW*)p3)[6], ((DW*)p3)[7], ((DW*)p3)[8], ((DW*)p3)[9], ((DW*)p3)[10], ((DW*)p3)[11]);
    case 13:
        return ((typeofarg13*)p1)(((DW*)p3)[0], ((DW*)p3)[1], ((DW*)p3)[2], ((DW*)p3)[3], ((DW*)p3)[4], ((DW*)p3)[5], ((DW*)p3)[6], ((DW*)p3)[7], ((DW*)p3)[8], ((DW*)p3)[9], ((DW*)p3)[10], ((DW*)p3)[11], ((DW*)p3)[12]);
    case 14:
        return ((typeofarg14*)p1)(((DW*)p3)[0], ((DW*)p3)[1], ((DW*)p3)[2], ((DW*)p3)[3], ((DW*)p3)[4], ((DW*)p3)[5], ((DW*)p3)[6], ((DW*)p3)[7], ((DW*)p3)[8], ((DW*)p3)[9], ((DW*)p3)[10], ((DW*)p3)[11], ((DW*)p3)[12], ((DW*)p3)[13]);
    case 15:
        return ((typeofarg15*)p1)(((DW*)p3)[0], ((DW*)p3)[1], ((DW*)p3)[2], ((DW*)p3)[3], ((DW*)p3)[4], ((DW*)p3)[5], ((DW*)p3)[6], ((DW*)p3)[7], ((DW*)p3)[8], ((DW*)p3)[9], ((DW*)p3)[10], ((DW*)p3)[11], ((DW*)p3)[12], ((DW*)p3)[13], ((DW*)p3)[14]);
    case 16:
        return ((typeofarg16*)p1)(((DW*)p3)[0], ((DW*)p3)[1], ((DW*)p3)[2], ((DW*)p3)[3], ((DW*)p3)[4], ((DW*)p3)[5], ((DW*)p3)[6], ((DW*)p3)[7], ((DW*)p3)[8], ((DW*)p3)[9], ((DW*)p3)[10], ((DW*)p3)[11], ((DW*)p3)[12], ((DW*)p3)[13], ((DW*)p3)[14], ((DW*)p3)[15]);
    default:
        return ((typeofarg1*)p1)(p3);
    }
}
EXTERN_C DW STUB_EXPORT yact_FreeLibraryA32(DW* R) { return (DW)FreeLibrary(HMODULE p1); }
