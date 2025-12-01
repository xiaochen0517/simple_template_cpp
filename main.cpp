#include <raylib.h>

int main()
{
    InitWindow(800, 600, "Template Example");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLANK);
        DrawText("This is raylib simple template.", 250, 280, 20, LIGHTGRAY);
        EndDrawing();
    }
    return 0;
}
