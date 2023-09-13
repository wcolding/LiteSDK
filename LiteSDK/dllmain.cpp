#define WIN32_LEAN_AND_MEAN
#include <windows.h>


DWORD WINAPI ModThread(LPVOID hModule)
{
    // Mod start


    // Mod end
    FreeLibraryAndExitThread((HMODULE)hModule, 0);
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    {
        DWORD threadID = 0;
        CreateThread(
            NULL,                   // default security attributes
            0,                      // use default stack size  
            ModThread,              // thread function name
            hModule,                // argument to thread function 
            0,                      // use default creation flags 
            &threadID);
        break;
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}