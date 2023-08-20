#include "Humanoide.hpp"

Humanoide::Humanoide():Humain(), Machine(){}

Humanoide::Humanoide(string nom, string type, Genre genre, int age)
: Humain(nom, genre, age), Machine(type, 2*24*3600, 3){}
    
string Humanoide::getNom() const {
  return Humanoide::Humain::getNom();
}

Genre Humanoide::getGenre() const{
  return Humanoide::Humain::getGenre();
}

string Humanoide::getType() const {
  return Humanoide::Machine::getType();
}

int Humanoide::getAge() const {
  return Humanoide::Humain::getAge();
}
    
int Humanoide::getIfixit() const {
  return Humanoide::Machine::getIfixit();
}
