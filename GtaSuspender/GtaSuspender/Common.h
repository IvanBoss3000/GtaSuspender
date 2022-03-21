#pragma once
#include "main.h"

#include "Info.h"
#include <Windows.h>
#include <iostream>
#include <string>
#include <cstdio>
#include <tlhelp32.h>


void suspend();
void resume();
void suspendInternet();
void resumeInternet();
typedef LONG(NTAPI* NtSuspendProcess)(IN HANDLE ProcessHandle);

DWORD FindProcessId(const std::wstring& processName);