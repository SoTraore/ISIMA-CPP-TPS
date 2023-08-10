#include "Cercle.hpp"

using namespace std;

Cercle::Cercle() : x(0), y(0), h(0), w(0) {

}

Cercle::Cercle(int x, int y, int h, int w) : x(x), y(y), h(h), w(w) {

}
    
Cercle::Cercle(int rx, int ry, int rayon) 
: x(rx-rayon), y(ry+rayon), h(2*rayon), w(2*rayon){

}
    
std::ostream& Cercle::toString(std::ostream& output) { 
  output << "x: " << this->x << ", y: " << this->y 
     	<< ", h: " << this->h << ", w: " << this->w << std::endl;
  return output;
} 

std::string Cercle::afficher() { 
  std::string output; 
  output += "x: " + to_string(this->x) + ", y: " + to_string(this->y) + ", h: " + to_string(this->h) + ", w: " + to_string(this->w) ;
  return output;
} 
