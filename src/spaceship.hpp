#pragma once
#include<raylib.h>
#include<vector>
#include "laser.hpp"

class Spaceship{
public:
    Spaceship();
    ~Spaceship();
    
    void Draw();
    void MoveLeft();
    void MoveRight();
    void FireLasers();
    std::vector<Laser> lasers;
    float LastFireTime;

private:
    Texture2D image;
    Vector2 position;        



};