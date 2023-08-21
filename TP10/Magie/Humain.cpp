#include "Humain.hpp"

Humain::Humain(string nom)
: Individu(nom, "pas trop intelligent", "pas trop fort", 
	"pas trop rapide", 5, "pas trop sensible à la magie") {}

string Humain::getNom() const {
  return Humain::Individu::getNom();
}

string Humain::getIntelligence() const {
  return Humain::Individu::getIntelligence();
}

string Humain::getForce() const  {
  return Humain::Individu::getForce();
}

string Humain::getVitesse() const {
  return Humain::Individu::getVitesse();
}

int Humain::getVitalite() const {
  return Humain::Individu::getVitalite();
}

string Humain::getPotentielMagie() const {
  return Humain::Individu::getPotentielMagie();
}

void Humain::setNom(string nom) {
  Humain::Individu::setNom(nom);
}

void Humain::setIntelligence(string intelec) {
  Humain::Individu::setIntelligence(intelec);
}

void Humain::setForce(string force) {
  Humain::Individu::setForce(force);
}

void Humain::setVitesse(string vitesse) {
  Humain::Individu::setVitesse(vitesse);
}

void Humain::setVitalite(int vitalite) {
  Humain::Individu::setVitalite(vitalite);
}

void Humain::setPotentielMagie(string potentielMagie) {
  Humain::Individu::setPotentielMagie(potentielMagie);
}
