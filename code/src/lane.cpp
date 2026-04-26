#include "C:\Users\Hp EliteBook 840 G5\Documents\OOP\CCP\code\include\lane.h"

Lane::Lane(float x, float y, float width, float tileSize, Type t) {
    laneType = t;
    shape.setSize({width, tileSize});
    shape.setPosition({x, y});

    if (t == SAFE)
        shape.setFillColor(Color(34, 139, 34));
    else if (t == ROAD)
        shape.setFillColor(Color(80, 80, 80));
    else if (t == RIVER)
        shape.setFillColor(Color(30, 100, 200));
}

void Lane::draw(RenderWindow& window) {
    window.draw(shape);
}

Lane::Type Lane::getLaneType() {
    return laneType;
}