#include "Point.hpp"

Point::Point()
: x(0), y(0){

}

Point::Point(int x, int y)
: x(x), y(y) {

}

string Point::toString(){
  string output = "x: " + to_string(x) + ", y: " + to_string(y);
  return output;
}
