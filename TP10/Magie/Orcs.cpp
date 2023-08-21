#include "Orcs.hpp"

Orcs::Orcs(string nom)
: Individu(nom, "pas trop intelligent", "pas trop fort", 
	"pas trop rapide", 5, "pas trop sensible à la magie") {}

string Orcs::getNom() const {
  return Orcs::Individu::getNom();
}

string Orcs::getIntelligence() const {
  return Orcs::Individu::getIntelligence();
}

string Orcs::getForce() const  {
  return Orcs::Individu::getForce();
}

string Orcs::getVitesse() const {
  return Orcs::Individu::getVitesse();
}

int Orcs::getVitalite() const {
  return Orcs::Individu::getVitalite();
}

string Orcs::getPotentielMagie() const {
  return Orcs::Individu::getPotentielMagie();
}

void Orcs::setNom(string nom) {
  Orcs::Individu::setNom(nom);
}

void Orcs::setIntelligence(string intelec) {
  Orcs::Individu::setIntelligence(intelec);
}

void Orcs::setForce(string force) {
  Orcs::Individu::setForce(force);
}

void Orcs::setVitesse(string vitesse) {
  Orcs::Individu::setVitesse(vitesse);
}

void Orcs::setVitalite(int vitalite) {
  Orcs::Individu::setVitalite(vitalite);
}

void Orcs::setPotentielMagie(string potentielMagie) {
  Orcs::Individu::setPotentielMagie(potentielMagie);
}
