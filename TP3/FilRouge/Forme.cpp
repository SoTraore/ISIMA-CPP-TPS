#include "Forme.hpp"

int Forme::nbForme = 0;

Forme::Forme()
: p(0,0), w(0), h(0){
  nbForme += 1;
}

Forme::Forme(Point p, int w, int h)
: p(p), w(w), h(h) {
  nbForme += 1;
}

string Forme::toString() {
  string output = this->p.toString() + ", w: " + to_string(this->w) + ", h: " + to_string(this->h); 
  return output;
}
