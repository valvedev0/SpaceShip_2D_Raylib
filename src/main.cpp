#include <raylib.h>
#include "spaceship.hpp"

int main()
{
    Color grey = Color{29, 29, 27, 255};

    const int screenWidth = 750;
    const int screenHeight = 700;

   

    InitWindow(screenWidth, screenHeight, "Space Invaders");
    SetTargetFPS(60);

    Spaceship spaceship;

    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(grey);
        spaceship.Draw();
        EndDrawing();
    }

    CloseWindow();
   
}