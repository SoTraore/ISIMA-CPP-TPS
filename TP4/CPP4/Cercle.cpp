#include "Cercle.hpp"

int Cercle::ordreC = 0;
using namespace std;

Cercle::Cercle() 
: x(0), y(0), h(0), w(0) {
  this->ordreC += 1;  
}

Cercle::Cercle(int x, int y, int h, int w) 
: x(x), y(y), h(h), w(w) {
  this->ordreC += 1;
}
    
Cercle::Cercle(int rx, int ry, int rayon) 
: x(rx-rayon), y(ry+rayon), h(2*rayon), w(2*rayon){
  this->ordreC += 1;
}

int Cercle::getX(){
  return this->x;
}

int Cercle::getY(){
  return this->y;
}

int Cercle::getLargeur(){
  return this->w;
}

int Cercle::getHauteur(){
  return this->h;
}

void Cercle::setX(int x){
  this->x = x;
}

void Cercle::setY(int y){
  this->y = y;
}

void Cercle::setLargeur(int w){
  this->w = w;
}

void Cercle::setHauteur(int h){
  this->h = h;
}
    
std::ostream& Cercle::toString(std::ostream& output) { 
  output << "x: " << this->x << ", y: " << this->y 
     	<< ", h: " << this->h << ", w: " << this->w << std::endl;
  return output;
} 

std::string Cercle::toString() { 
  std::string output; 
  output = "Ordre : " + to_string(this->ordreC) + ", x: " + to_string(this->x) + ", y: " + to_string(this->y) + ", h: " + to_string(this->h) + ", w: " + to_string(this->w) ;
  return output;
} 

std::string Cercle::afficher() { 
  std::string output; 
  output = "Ordre : " + to_string(this->ordreC) + ", x: " + to_string(this->x) + ", y: " + to_string(this->y) + ", h: " + to_string(this->h) + ", w: " + to_string(this->w) ;
  return output;
} 
