#include "Rectangle.hpp"

int Rectangle::ordreR = 0;

Rectangle::Rectangle() 
: x(0), y(0), h(0), w(0) {
  this->ordreR += 1;
}

Rectangle::Rectangle(int x, int y, int h, int w)
: x(x), y(y), h(h), w(w) {
  this->ordreR += 1;
}

Rectangle::Rectangle(const Rectangle& r) : Forme(r) {
}

Rectangle::Rectangle(Rectangle* r) : Forme(*r) {
}

std::ostream& Rectangle::toString(std::ostream& output) {
  output << "x: " << this->x << ", y: " << this->y << ", h: " << this->h
  	<< ", w: " << this->w << std::endl;	  
  return output;
}

Rectangle* Rectangle::clone() const{
  return new Rectangle(*this);
}

std::string Rectangle::afficher() { 
  std::string output; 
  output = "Ordre : " + to_string(this->ordreR) + ", x: " + to_string(this->x) + ", y: " + to_string(this->y) + ", h: " + to_string(this->h) + ", w: " + to_string(this->w) ;
  return output;
} 
