#include "shapegame"

using namespace shapegame;
shapegame::Rectangle::Rectangle(
        float height,
        float width,
        Position pos,
        Color color) : Shape(height, width, ShapeType::Rectangle, pos, color) {}

Rectangle::Rectangle(): Rectangle(1, 1, Position(), Color()) {}

void shapegame::Rectangle::update(){}
void Rectangle::onAdd(){}
void Rectangle::onKeyPress(int key, int action){}