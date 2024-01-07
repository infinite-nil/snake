#include <stdio.h>
#include "../vendor/raylib/src/raylib.h"

#define RAYGUI_IMPLEMENTATION
#define RAYGUI_SUPPORT_RICONS
#include "../vendor/raygui/raygui.h"
#undef RAYGUI_IMPLEMENTATION

// Config
int DEFAULT_TEXT_SIZE = 20;

typedef struct Force
{
    int x;
    int y;
} Force;

typedef struct GameState
{
    Vector2 position;
    Force force;
} GameState;

int main()
{
    SetTargetFPS(60);
    InitWindow(1000, 1000, "Simple snake game");
    GuiSetStyle(DEFAULT, TEXT_SIZE, DEFAULT_TEXT_SIZE);
    GameState game_state = {
        force : (Force){1, 0},
    };

    char *direction = "RIGHT";

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        switch (GetKeyPressed())
        {
        case KEY_W:
            if (game_state.force.y != -1)
            {
                game_state.force.x = 0;
                game_state.force.y = -1;
                direction = "UP";
            }
            break;
        case KEY_D:
            if (game_state.force.x != 1)
            {
                game_state.force.x = -1;
                game_state.force.y = 0;
                direction = "RIGHT";
            }
            break;
        case KEY_S:
            if (game_state.force.y != 1)
            {
                game_state.force.x = 0;
                game_state.force.y = 1;
                direction = "DOWN";
            }
            break;
        case KEY_A:
            if (game_state.force.x != -1)
            {
                game_state.force.x = -1;
                game_state.force.y = 0;
                direction = "LEFT";
            }
            break;
        default:
            break;
        }

        DrawText(direction, 500, 500, 16, BLACK);
        EndDrawing();
    }

    return 0;
}