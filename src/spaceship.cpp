#include "spaceship.hpp"

Spaceship::Spaceship()
{
    image = LoadTexture("Graphics/spaceship.png");
    position.x = (GetScreenWidth() - image.width) / 2;
    position.y = (GetScreenHeight() - image.height);
    LastFireTime = 0.0;
}

Spaceship::~Spaceship()
{
    UnloadTexture(image);

}

void Spaceship::Draw()
{
    DrawTextureV(image, position, WHITE );
}

void Spaceship::MoveLeft()
{
    position.x -= 7;
    if(position.x < 0){
        position.x = 0;
    }
}

void Spaceship::MoveRight()
{
    position.x += 7;
    if(position.x > GetScreenWidth() - image.width){
        position.x = GetScreenWidth() - image.width;
    }

}

void Spaceship::FireLasers()
{
    if(GetTime() - LastFireTime >= 0.20){
    lasers.push_back(Laser({position.x + image.width/2 - 2, position.y}, -4));
    LastFireTime = GetTime();
    }
}
