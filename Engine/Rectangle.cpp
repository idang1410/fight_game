#include "Rectangle.h"

using namespace Fighters;

Rectangle::Rectangle(Point position, Color color, int width, int height, int life_points, int damage) :
	Fighter(life_points, damage, position, color)
{
	if ((position.GetX() + width) > Graphics::ScreenWidth)
		this->width = Graphics::ScreenWidth - position.GetX(); // give the max width
	else
		this->width = width;

	if ((position.GetY() + height) > Graphics::ScreenHeight)
		this->height = Graphics::ScreenHeight - position.GetY();
	else
		this->height = height;
}

void Rectangle::draw(Graphics& gfx)
{
	for (int i = 0; i < this->height; i++)
	{
		for (int j = 0; j < this->width; j++)
		{
			gfx.PutPixel(i + position.GetX(), j + position.GetY(), color);
		}
	}
}
