#include "utils.h"

#define FPS 60

int main() {
    InitWindow(800, 800, "Test");
    SetTargetFPS(FPS);

    // Mouse position
    Vector2 mousePos;
    
    // Text config
    char* text = "Test";
    int textFontSize = 200;
    int textSpacing = textFontSize/20; // Space between letters
    Vector2 textSize = MeasureTextEx(GetFontDefault(), text, textFontSize, textSpacing);
    Vector2 textPosCenter = (Vector2){(GetScreenWidth() - textSize.x)/2, (GetScreenHeight() - textSize.y)/2}; // Centered text
    Color textColor = WHITE;
        
    // Rectangle config
    float recPadding = textFontSize/4; // Space between the text and the rectangle
    Rectangle rec = (Rectangle){textPosCenter.x - recPadding, textPosCenter.y - recPadding, textSize.x + 2*recPadding, textSize.y + 2*recPadding};
    float recRoundness = 0.2;
    int recSegments = 20; // Number of the segments on the rectangle border
    Color recColor = RED;

    while (!WindowShouldClose()) {
        mousePos = GetMousePosition();

        BeginDrawing();
            ClearBackground(WHITE);

            // If the mouse cursor is inside the rectangle, changes the color of the rectangle
            if (isPointInsideRec(mousePos, rec))
                recColor = BLUE;
            else recColor = RED;

            DrawRectangleRounded(rec, recRoundness, recSegments, recColor); // Draws the rectangle
            DrawTextEx(GetFontDefault(), text, textPosCenter, textFontSize, textSpacing, textColor); // Draws the text
        EndDrawing();
    }

    CloseWindow();
}