// main.cpp Last modified: 06.07.2022
/*
                     GNU GENERAL PUBLIC LICENSE
                       Version 3, 29 June 2007

 Copyright (C) 2007 Free Software Foundation, Inc. <https://fsf.org/>
 Everyone is permitted to copy and distribute verbatim copies
 of this license document, but changing it is not allowed.
 ...
*/

#include "application.h"
#include "debug.h"

#ifdef _WINDOWS
#include <windows.h>
#endif // _WINDOWS

int WINAPI WinMain(HINSTANCE h_instance, HINSTANCE h_prev_instance,
                   LPSTR lp_cmd_line, int n_show_cmd)
{
    DEBUG_SETUP();

    TF2HudStudio::Application main_app;

    main_app.Run();

    DEBUG_DESTROY();
}