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

std::string Rectangle::afficher() { 
  std::string output; 
  output += "x: " + to_string(this->x) + ", y: " + to_string(this->y) + ", h: " + to_string(this->h) + ", w: " + to_string(this->w) ;
  return output;
} 
