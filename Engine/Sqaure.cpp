#include "Square.h"

using namespace Fighters;

Square::Square(Point position, Color color, int height) : Rectangle(position, color, height, height, SQUARE_LIFE_POINTS, SQUARE_DAMAGE) {}
