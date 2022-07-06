// application.h Last modified: 06.07.2022
/*
                     GNU GENERAL PUBLIC LICENSE
                       Version 3, 29 June 2007

 Copyright (C) 2007 Free Software Foundation, Inc. <https://fsf.org/>
 Everyone is permitted to copy and distribute verbatim copies
 of this license document, but changing it is not allowed.
 ...
*/

#ifndef APPLICATION_H_
#define APPLICATOIN_H_

namespace TF2HudStudio
{

class Application final
{
public:
    Application();

    Application(const Application&) = delete;
    Application& operator=(Application&) = delete;

    void Run() noexcept;
    // Should always be called before destroying/deleting the object!
    void Shutdown() noexcept;

    ~Application();
};

}

#endif // APPLICATION_H_