#include "Individu.hpp"

Individu::Individu()
: nom("None"), intelec("None"), force("None"), vitesse("None"),
  vitalite(0), potentielMagie("None") {}
    
Individu::Individu(string nom, string intelec, string force, string vitesse, int vitalite, string potentielMagie)
: nom(nom), intelec(intelec), force(force), vitesse(vitesse),
	vitalite(vitalite), potentielMagie(potentielMagie) {}
    
string Individu::getNom() const {
  return this->nom;
}
    
string Individu::getIntelligence() const {
  return this->intelec;
}
    
string Individu::getForce() const {
  return this->force;
}
    
string Individu::getVitesse() const {
  return this->vitesse;
}
    
int Individu::getVitalite() const {
  return this->vitalite;
}
    
string Individu::getPotentielMagie() const {
  return this->potentielMagie;
}
    
void Individu::setNom(string nom) {
  this->nom = nom;
}
    
void Individu::setIntelligence(string intelec) {
  this->intelec = intelec;
}
    
void Individu::setForce(string force) {
  this->force = force;
}
    
void Individu::setVitesse(string vitesse) {
  this->vitesse = vitesse;
}
    
void Individu::setVitalite(int vitalite) {
  this->vitalite = vitalite;
}

void Individu::setPotentielMagie(string potentielMagie){
  this->potentielMagie = potentielMagie;
}
