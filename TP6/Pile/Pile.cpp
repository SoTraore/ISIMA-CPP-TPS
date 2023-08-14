#include "Pile.hpp"

Pile::Pile()
: T(new int[TAILLE]), tete(-1) {
}

Pile::Pile(int taille)
: tete(-1){
  if (taille < 1 || taille > TAILLE) {
    throw std::invalid_argument("Invalid argument") ; 
  }
  T = new int[taille];
}
    
Pile::Pile(const Pile& p){
  if (this != &p) {
    if (this->T) delete [] T;
    this->tete = p.tete;
    memcpy(this->T, p.T, p.tete * sizeof(T));
  }
}

Pile::~Pile(){
  if (this->T) delete [] this->T;
}

void Pile::push(int value){
  this->tete += 1;
  if (this->tete > TAILLE){
    throw std::invalid_argument("Invalid input");
  }
  this->T[this->tete] = value;
}
   
bool Pile::empty(){
  return (this->tete == -1);
}   
  
int Pile::top(){
  return this->T[this->tete];
}

int Pile::pop(){
  if (Pile::empty()) {
    throw std::invalid_argument("Invalid argument");
  }
  int id = this->tete;
  this->tete -= 1;
  return this->T[id];
}

int Pile::size(){
  return this->tete+1;
}

void Pile::afficher(){
  for (int i=0; i<Pile::size(); i++){
    std::cout << this->T[i] << " ";
  }
  std::cout << std::endl;
}
