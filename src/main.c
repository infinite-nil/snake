#include <stdio.h>
#include "../vendor/raylib/src/raylib.h"

#define RAYGUI_IMPLEMENTATION
#define RAYGUI_SUPPORT_RICONS
#include "../vendor/raygui/raygui.h"
#undef RAYGUI_IMPLEMENTATION

// Config
int DEFAULT_TEXT_SIZE = 20;

int main()
{
    SetTargetFPS(60);
    InitWindow(1000, 1000, "Simple snake game");
    GuiSetStyle(DEFAULT, TEXT_SIZE, DEFAULT_TEXT_SIZE);

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