// debug.cpp Last modified: 06.07.2022
/*
                     GNU GENERAL PUBLIC LICENSE
                       Version 3, 29 June 2007

 Copyright (C) 2007 Free Software Foundation, Inc. <https://fsf.org/>
 Everyone is permitted to copy and distribute verbatim copies
 of this license document, but changing it is not allowed.
 ...
*/

#include "Debug.h"

#ifdef _WINDOWS
#include <windows.h>
#endif // _WINDOWS

namespace TF2HudStudio
{
namespace Debug
{

static FILE* log_file;

void Setup()
{
    AllocConsole();
    freopen_s(&log_file, "conout$", "w", stdout);
}

void Destroy()
{
    FreeConsole();
    fclose(log_file);
}

}
}