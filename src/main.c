#include "TextBox.h"

#define FPS 60
#define SW 800 // Screen Width
#define SH 800 // Screen Height

int main() {
    InitWindow(SW, SH, "Test");
    //ToggleFullscreen(); // Toggles fullscreen
    SetTargetFPS(FPS);

    // Screen rectangle
    Rectangle screenRec = (Rectangle){0, 0, GetScreenWidth(), GetScreenHeight()};

    // Mouse position
    Vector2 mousePos;

    // Text Box
    TextBox tb;
    tb.text = "Test";
    tb.font = GetFontDefault();
    tb.fontSize = 200;
    tb.spacing = tb.fontSize/20;
    CentralizeTextBox(&tb, screenRec);
    tb.textColor = WHITE;
    tb.padding = tb.fontSize/4;
    tb.roundness = 0.2;
    tb.cornerSegments = 20;
    tb.boxColor = RED;

    while (!WindowShouldClose()) {
        mousePos = GetMousePosition();

        BeginDrawing();
            ClearBackground(WHITE);

            // If the mouse cursor is inside the rectangle, changes the color of the rectangle
            if (CheckCollisionPointRec(mousePos, GetBoxRec(&tb)))
                tb.boxColor = BLUE;
            else tb.boxColor = RED;

            DrawTextBox(&tb);
        EndDrawing();
    }

    CloseWindow();
}