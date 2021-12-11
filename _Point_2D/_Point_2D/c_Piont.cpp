#include "c_Piont.h"
c_Point::c_Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

int c_Point::getX() const
{
	return this->x;
}

int c_Point::getY() const
{
	return this->y;
}
