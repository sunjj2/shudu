#pragma once

#ifdef _WIN32
#include <Windows.h>
#endif

// 设置 Windows 环境的 UTF-8 输出
inline void SetWindowsEnv() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
}

inline  void SetWindowsEnv () {SetWindowsEnv();}