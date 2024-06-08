#include <raylib.h>
#include "Game.hpp"


int main()
{
    Color grey = Color{29, 29, 27, 255};

    const int screenWidth = 750;
    const int screenHeight = 700;

   

    InitWindow(screenWidth, screenHeight, "Space Invaders");
    SetTargetFPS(60);

    Game game;
    
    while (WindowShouldClose() == false)
    {   
        game.HandleInput();
        game.Update();
        BeginDrawing();
        ClearBackground(grey);
        game.Draw();
    
        EndDrawing();
    }

    CloseWindow();
   
}