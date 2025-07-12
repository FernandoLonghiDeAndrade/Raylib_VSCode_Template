#pragma once

#include "raylib.h"

typedef struct TextBox {
    // Text

    char* text;
    Font font;
    int fontSize;
    int spacing; // Space between letters
    Vector2 pos; // In relation to the text (top left corner)
    Color textColor;

    // Box

    float padding; // Space between the text and the rectangle borders
    float roundness; // Roundness of the corners of the box
    int cornerSegments; // Number of segments of the corners of the box
    Color boxColor;
} TextBox;

Vector2 GetTextSize(TextBox* tb);

Rectangle GetTextRec(TextBox* tb);

Rectangle GetBoxRec(TextBox* tb);

// Centralizes a Text Box in relation to a rectangle (usually the screen)
void CentralizeTextBox(TextBox* tb, Rectangle rec);

void DrawTextBox(TextBox* tb);