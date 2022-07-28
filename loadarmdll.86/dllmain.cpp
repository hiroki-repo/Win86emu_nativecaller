// dllmain.cpp : DLL アプリケーションのエントリ ポイントを定義します。
#include "dllstub_def.h"
static const char DLL_NAME[] = "loadarmdll.nt.dll";
#include "pch.h"
#include "stdlib.h"

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

DEFINE_FUNC2(GetProcAddressA32);
DEFINE_FUNC1(LoadLibraryAA32);
DEFINE_FUNC1(LoadLibraryWA32);
DEFINE_FUNC3(LoadLibraryExAA32);
DEFINE_FUNC3(LoadLibraryExWA32);
DEFINE_FUNC3(A32Call);
DEFINE_FUNC1(FreeLibraryA32);

extern "C" DW __declspec(dllexport) __stdcall stub_GetA32Ptr4CB(DW p1,DW p2) {
/*
0:  55                      push   ebp
1:  89 e5                   mov    ebp,esp
3:  8d 45 08                lea    eax,[ebp+0x8]
6:  5d                      pop    ebp
7:  50                      push   eax
8:  68 ef be ad de          push   0xdeadbeef
d:  68 de c0 ad de          push   0xdeadc0de
12: b8 fe ca ad de          mov    eax,0xdeadcafe
17: ff d0                   call   eax
19: c2 00 20                ret    0x2000
*/
    static BYTE CBCode[] = { 0x55, 0x89, 0xE5, 0x8D, 0x45, 0x08, 0x5D, 0x50, 0x68, 0xEF, 0xBE, 0xAD, 0xDE, 0x68, 0xDE, 0xC0, 0xAD, 0xDE, 0xB8, 0xFE, 0xCA, 0xAD, 0xDE, 0xFF, 0xD0, 0xC2, 0x00, 0x20 };
    BYTE* Ret = (BYTE*)malloc(sizeof(CBCode));
    if (Ret == 0)
        return 0;
    memcpy(Ret, CBCode, sizeof(CBCode));
    *(DWORD*)(Ret +  9) = (DWORD)p2;
    *(DWORD*)(Ret + 14) = (DWORD)p1;
    *(DWORD*)(Ret + 19) = (DWORD)(&stub_A32Call);
    *(WORD*)(Ret + sizeof(CBCode) - 2) = (WORD)p2 * 4;
    return (DWORD)Ret;
}
