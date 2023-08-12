#include "Point.hpp"

Point::Point()
: x(0), y(0){
}

Point::Point(const Point& p)
: x(p.x), y(p.y) {
}

Point::Point(int x, int y)
: x(x), y(y) {
}

string Point::toString(){
  string output = "x: " + to_string(x) + ", y: " + to_string(y);
  return output;
}

void Point::setX(int x){
  this->x = x;
}

void Point::setY(int y){
  this->y = y;
}

int Point::getX(){
  return this->x;
}

int Point::getY(){
  return this->y;
}
