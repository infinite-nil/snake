#include <stdio.h>

#include "../vendor/raylib/src/raylib.h"

int main()
{
    SetTargetFPS(60);
    InitWindow(1000, 1100, "Simple snake game");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        {
            // Actual code
        }

        EndDrawing();
    }

    return 0;
}