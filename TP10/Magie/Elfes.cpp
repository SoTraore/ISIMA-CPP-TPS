#include "Elfes.hpp"

Elfes::Elfes(string nom)
: Individu(nom, "intelligent élévé", "force élévé", 
	"rapidité élévé", 9, "magie élévé") {}

string Elfes::getNom() const {
  return Elfes::Individu::getNom();
}

string Elfes::getIntelligence() const {
  return Elfes::Individu::getIntelligence();
}

string Elfes::getForce() const  {
  return Elfes::Individu::getForce();
}

string Elfes::getVitesse() const {
  return Elfes::Individu::getVitesse();
}

int Elfes::getVitalite() const {
  return Elfes::Individu::getVitalite();
}

string Elfes::getPotentielMagie() const {
  return Elfes::Individu::getPotentielMagie();
}

void Elfes::setNom(string nom) {
  Elfes::Individu::setNom(nom);
}

void Elfes::setIntelligence(string intelec) {
  Elfes::Individu::setIntelligence(intelec);
}

void Elfes::setForce(string force) {
  Elfes::Individu::setForce(force);
}

void Elfes::setVitesse(string vitesse) {
  Elfes::Individu::setVitesse(vitesse);
}

void Elfes::setVitalite(int vitalite) {
  Elfes::Individu::setVitalite(vitalite);
}

void Elfes::setPotentielMagie(string potentielMagie) {
  Elfes::Individu::setPotentielMagie(potentielMagie);
}
