#include "Forme.hpp"

int Forme::id = -1;

Forme::Forme()
: p(0,0), w(0), h(0){
  id += 1;
}

Forme::Forme(Point p, int w, int h)
: p(p), w(w), h(h) {
  id += 1;
}

Forme::Forme(Point p, COULEURS c)
: p(p), c(c){
}

string Forme::toString() {
  string output = this->p.toString() + ", w: " + to_string(this->w) + ", h: " + to_string(this->h); 
  return output;
}

COULEURS Forme::getCouleur(){
  return this->c;
}

void Forme::setCouleur(COULEURS c){
  this->c = c;
}

void Forme::setPoint(Point p){
  this->p.setX(p.getX());
  this->p.setY(p.getY());
}

Point Forme::getPoint(){
  return p;
}

void Forme::setX(int x){
  this->getPoint().setX(x);
}

void Forme::setY(int y){
  this->getPoint().setY(y);
}

void Forme::setLargeur(int w){
  this->w = w;
}

void Forme::setHauteur(int h){
  this->h = h;
}

int Forme::getX(){
  return this->getPoint().getX();
}

int Forme::getY(){
  return this->getPoint().getY();
}

int Forme::getLargeur(){
  return this->w;
}

int Forme::getHauteur(){
  return this->h;
}

int Forme::getId() {
  return id;
}

int Forme::prochainId(){
  return id+1;
}
