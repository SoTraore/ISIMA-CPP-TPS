#include "Humain.hpp"

Humain::Humain()
: nom("empty"), genre(FEMME), age(0) {
}

Humain::Humain(string nom, Genre genre, int age)
: nom(nom), genre(genre), age(age){
}

string Humain::getNom() const {
  return this->nom;
}
    
Genre Humain::getGenre() const {
  return this->genre;
}

int Humain::getAge() const {
  return this->age;
}
   
void Humain::setNom(string nom) {
  this->nom = nom;
}
    
void Humain::setGenre(Genre genre) {
  this->genre = genre;	
}
    
void Humain::setAge(int age) {
  this->age = age;
}
