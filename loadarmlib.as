#uselib "loadarmdll.dll"
#cfunc GetProcAddressA32 "GetProcAddressA32" int,int
#cfunc LoadLibraryAA32 "LoadLibraryAA32" int
#cfunc LoadLibraryWA32 "LoadLibraryWA32" int
#cfunc LoadLibraryExAA32 "LoadLibraryExAA32" int,int,int
#cfunc LoadLibraryExWA32 "LoadLibraryExWA32" int,int,int
#cfunc A32Call "A32Call" int,int,int
#func FreeLibraryA32 "FreeLibraryA32" int
