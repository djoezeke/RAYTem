#include "raylib.h"

int main()
{
    // Initialization
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "RAYTem - Raylib Starter Template");
    SetTargetFPS(60); // Set target frames per second

    float rotation = 0.0f;

    // Main game loop
    while (!WindowShouldClose())
    {
        // Update
        rotation += 2.0f;
        if (rotation > 360.0f)
            rotation -= 360.0f;

        // Draw
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Draw a rotating rectangle in the center
        DrawRectanglePro(
            {screenWidth / 2.0f, screenHeight / 2.0f, 100.0f, 100.0f},
            {50.0f, 50.0f},
            rotation,
            RED);

        // Draw text
        DrawText("Welcome to RAYTem!", 200, 50, 40, DARKBLUE);
        DrawText("A Raylib C++ Starter Template", 150, 100, 20, DARKGRAY);
        DrawFPS(10, 10);

        EndDrawing();
    }

    // De-initialization
    CloseWindow();

    return 0;
}
