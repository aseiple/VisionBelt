#ifndef Coordinate_H
#define Coordinate_H

class Coordinate
{
  private:
    float _x;
    float _y;

  public:
    Coordinate(float x, float y);
    ~Coordinate();
    float distanceTo(Coordinate coord);
    float getX();
    float getY();
};

#endif