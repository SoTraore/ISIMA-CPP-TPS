#include "Mere.hpp"

int Mere::m = 0;

Mere::Mere():nom("name"){
  std::cout << "Mere init " << m << std::endl;
  m++;
}

Mere::Mere(std::string nom) 
: nom(nom){
  std::cout << "Mere init '" << this->nom << "' : " << m << std::endl;
  m++;
}

Mere::~Mere(){
  std::cout << "Mere delete" << std::endl;
}

int Mere::getCompteur() {
  return m;
}

std::string Mere::getName(){
  return this->nom;
}
