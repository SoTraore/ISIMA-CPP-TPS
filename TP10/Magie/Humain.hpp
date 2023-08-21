#ifndef __HUMAIN__
#define __HUMAIN__

#include "Individu.hpp"

class Humain : public Individu {
  public:
    Humain(string nom);

    string getNom() const;
    string getIntelligence() const;
    string getForce() const;
    string getVitesse() const;
    int getVitalite() const;
    string getPotentielMagie() const;

    void setNom(string nom);
    void setIntelligence(string intelec);
    void setForce(string force);
    void setVitesse(string vitesse);
    void setVitalite(int vitalite);
    void setPotentielMagie(string potentielMagie);
};

#endif
