#include "Rectangle.hpp"

Rectangle::Rectangle() 
: x(0), y(0), h(0), w(0) {

}

Rectangle::Rectangle(int x, int y, int h, int w)
: x(x), y(y), h(h), w(w) {

}

std::ostream& Rectangle::toString(std::ostream& output) {
  output << "x: " << this->x << ", y: " << this->y << ", h: " << this->h
  	<< ", w: " << this->w << std::endl;	  
  return output;
}
