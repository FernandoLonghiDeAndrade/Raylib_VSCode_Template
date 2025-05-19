#include "utils.h"

int isPointInsideRec(Vector2 point, Rectangle rec) {
    if (rec.x < point.x && point.x < rec.x + rec.width) {
        if (rec.y < point.y && point.y < rec.y + rec.height) {
            return 1;
        }
    }

    return 0;
}