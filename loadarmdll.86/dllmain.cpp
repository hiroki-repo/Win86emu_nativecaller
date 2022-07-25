// dllmain.cpp : DLL アプリケーションのエントリ ポイントを定義します。
#include "dllstub_def.h"
static const char DLL_NAME[] = "loadarmdll.nt.dll";
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

DEFINE_FUNC2(GetProcAddressA32);
DEFINE_FUNC1(LoadLibraryAA32);
DEFINE_FUNC1(LoadLibraryWA32);
DEFINE_FUNC3(LoadLibraryExAA32);
DEFINE_FUNC3(LoadLibraryExWA32);
DEFINE_FUNC3(A32Call);
DEFINE_FUNC1(FreeLibraryA32);
