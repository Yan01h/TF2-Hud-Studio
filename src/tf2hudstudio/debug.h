// debug.h Last modified: 06.07.2022
/*
                     GNU GENERAL PUBLIC LICENSE
                       Version 3, 29 June 2007

 Copyright (C) 2007 Free Software Foundation, Inc. <https://fsf.org/>
 Everyone is permitted to copy and distribute verbatim copies
 of this license document, but changing it is not allowed.
 ...
*/

#ifndef DEBUG_H_
#define DEBUG_H_

#ifdef _DEBUG

#include <cstdio>

#define DEBUG_SETUP() TF2HudStudio::Debug::Setup()
#define DEBUG_DESTROY() TF2HudStudio::Debug::Destroy()
#define DEBUG_LOG(message, ...) TF2HudStudio::Debug::Log(message, __VA_ARGS__)

namespace TF2HudStudio
{
namespace Debug
{

void Setup();
void Destroy();

template<typename... Args>
void Log(const char* message, Args... args)
{
    printf(message, args...);
}

}
}

#elif defined(_RELEASE)
#define DEBUG_SETUP()
#define DEBUG_DESTROY()
#define DEBUG_LOG(message, ...)
#endif // _DEBUG

#endif // DEBUG_H_