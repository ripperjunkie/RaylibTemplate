#include <raylib.h>

#define SCREEN_X 1280   
#define SCREEN_Y 700
#define WINDOW_TITLE "Game"

int main()
{
    InitWindow(SCREEN_X, SCREEN_Y, WINDOW_TITLE);
    InitAudioDevice(); // Initialize audio device


    // Main game loop
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();      
    }
    CloseWindow();  

    return 0;
}