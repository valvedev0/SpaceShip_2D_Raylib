#pragma once

#include <iostream>
#include "spaceship.hpp"

class Game{
public:

    Game();
    ~Game();

    void Draw();
    void Update();
    void HandleInput();
    void DeleteInactiveLasers();

private:
    Spaceship spaceship;    



};
