#include "raylib.h"
using namespace std;

int main()
{
    // Window Dimensions
    int width{350};
    int height{200};
    InitWindow(width, height, "Madnoyz");

    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RED);

        DrawCircle(175, 100, 25, BLUE);

        EndDrawing();
    };

}