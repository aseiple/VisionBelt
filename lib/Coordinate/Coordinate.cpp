#include <Coordinate.h>
#include <math.h>

#define PI 3.14

float _x;
float _y;

Coordinate::Coordinate(float x, float y)
{
    _x = x;
    _y = y;
}

Coordinate::~Coordinate() {}

float Coordinate::distanceTo(Coordinate coord)
{
    float dx = coord.getX() - _x;
    float dy = (coord.getY() - _y) * cos(coord.getX() * (PI / 180.0));
    return hypot(dx, dy) * 111194.93;
}

float Coordinate::getX()
{
    return _x;
}

float Coordinate::getY()
{
    return _y;
}