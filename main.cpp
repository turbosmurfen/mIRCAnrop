#include "framework.h"
#include <windows.h>
#pragma comment(linker, "/EXPORT:DLLInfo=_DLLInfo@24")

//Read more how to read dll for mIRC: https://en.wikichip.org/wiki/mirc/dynamic-link_library
//This code is made for c++11

extern "C" int __stdcall DLLInfo(HWND mWnd, HWND aWnd, CHAR * data, char* parms, BOOL show, BOOL nopause)
{
    char a_str[] = "Created by Turbosmurfen";
    strcpy_s(data, strlen(a_str) + 1, a_str);
    return 3;
}
