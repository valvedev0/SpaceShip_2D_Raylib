#include "game.hpp"
#include <iostream>
using namespace std;

Game::Game()
{
}

Game::~Game()
{
}

void Game::Draw()
{
    spaceship.Draw();

    for(auto& laser: spaceship.lasers )
    {
        laser.Draw();
    }
}

void Game::Update()
{
    for(auto& laser: spaceship.lasers )
    {
        laser.Update();
    }
    DeleteInactiveLasers();
    cout<<"VectorSize: " << spaceship.lasers.size() << endl;
}


void Game::HandleInput()
{
    if (IsKeyDown(KEY_A))
    {
        spaceship.MoveLeft();
    }

    else if (IsKeyDown(KEY_D))
    {
        spaceship.MoveRight();
    }
    else if (IsKeyDown(KEY_SPACE))
    {
        spaceship.FireLasers();
    }
    
}

void Game::DeleteInactiveLasers()
{
    //deleting using iterators
    for(auto it = spaceship.lasers.begin(); it != spaceship.lasers.end();)
    {
        if(!it -> active)
        {
            it = spaceship.lasers.erase(it);
        }
        else{
            ++it;
        }
    }
}
