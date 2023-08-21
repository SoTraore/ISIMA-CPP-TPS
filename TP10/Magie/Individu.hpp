#ifndef __INDIVIDU__
#define __INDIVIDU__

#include <iostream>

using namespace std;

class Individu {
  string nom;
  string intelec;
  string force;
  string vitesse;
  int vitalite;
  string potentielMagie;
  public:
    Individu();
    Individu(string nom, string intelec, 
		    string force, 
		    string vitesse, int vitalite,
		    string potentielMagie);
    
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
