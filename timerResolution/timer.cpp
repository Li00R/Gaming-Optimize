#include <Windows.h>

extern "C" {
    typedef NTSTATUS(WINAPI *NtSetTimerResolutionFunc)(ULONG DesiredResolution, BOOLEAN SetResolution, PULONG CurrentResolution);
    typedef NTSTATUS(WINAPI *NtQueryTimerResolutionFunc)(PULONG MinimumResolution, PULONG MaximumResolution, PULONG CurrentResolution);
}

int main() {
    HMODULE hNtDll = LoadLibraryA("NtDll.dll");
    if (hNtDll != NULL) {
        NtSetTimerResolutionFunc NtSetTimerResolution = reinterpret_cast<NtSetTimerResolutionFunc>(GetProcAddress(hNtDll, "NtSetTimerResolution"));
        NtQueryTimerResolutionFunc NtQueryTimerResolution = reinterpret_cast<NtQueryTimerResolutionFunc>(GetProcAddress(hNtDll, "NtQueryTimerResolution"));
        if (NtSetTimerResolution != NULL && NtQueryTimerResolution != NULL) {
            ULONG minRes, maxRes, currentRes;
            
            if (NtQueryTimerResolution(&minRes, &maxRes, &currentRes) == ERROR_SUCCESS) {
                if (static_cast<double>(currentRes)/ 10000.0 != 0.5) {
                    ULONG desiredRes = 5000;
                    if (NtSetTimerResolution(desiredRes, TRUE, &currentRes) == ERROR_SUCCESS) {
                        if (NtQueryTimerResolution(&minRes, &maxRes, &currentRes) == ERROR_SUCCESS) {
                            if (static_cast<double>(currentRes)/ 10000.0 == 0.5) {
                                MessageBoxA(NULL, "Timer Resolution set to: 0.5ms", "Timer Resolution", MB_ICONINFORMATION | MB_OK);
                                FreeLibrary(hNtDll);
                                Sleep(INFINITE);
                                return 0;	
                            }
                        }
                    }
                } else {
                    MessageBoxA(NULL, "Timer Resolution already set to: 0.5ms", "Timer Resolution", MB_ICONINFORMATION | MB_OK);
                    FreeLibrary(hNtDll);
                    return 0;
                }
            }
        }
        FreeLibrary(hNtDll);
    }
    MessageBoxA(NULL, "Error, can't set 0.5ms", "Error", MB_ICONINFORMATION | MB_OK);
    return 1;
}