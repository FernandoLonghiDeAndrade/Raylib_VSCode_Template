#include "TextBox.h"

Vector2 GetTextSize(TextBox* tb) {
    return MeasureTextEx(tb->font, tb->text, tb->fontSize, tb->spacing);
}

Rectangle GetTextRec(TextBox* tb) {
    Vector2 textSize = GetTextSize(tb);
    return (Rectangle){tb->pos.x, tb->pos.y, textSize.x, textSize.y};
}

Rectangle GetBoxRec(TextBox* tb) {
    Vector2 textSize = GetTextSize(tb);
    return (Rectangle){tb->pos.x - tb->padding, tb->pos.y - tb->padding, textSize.x + 2*tb->padding, textSize.y + 2*tb->padding};
}

void CentralizeTextBox(TextBox* tb, Rectangle rec) {
    Vector2 textSize = GetTextSize(tb);
    tb->pos.x = (rec.width - textSize.x)/2;
    tb->pos.y = (rec.height - textSize.y)/2;
}

void DrawTextBox(TextBox* tb) {
    DrawRectangleRounded(GetBoxRec(tb), tb->roundness, tb->cornerSegments, tb->boxColor); // Draws the Box
    DrawTextEx(tb->font, tb->text, tb->pos, tb->fontSize, tb->spacing, tb->textColor); // Draws the Text
}