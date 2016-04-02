#include "Location.h"
#include <math.h>

double Location::getDistance(Location * loc) const
{
	return sqrt(pow(this->X - loc->X, 2) + pow(this->Y - loc->Y, 2));
}

void Location::setX(int x)
{
	this->X = x;
}
void Location::setY(int y)
{
	this->Y = y;
}

int Location::getX() const
{
	return this->X;
}
int Location::getY() const
{
	return this->Y;
}
