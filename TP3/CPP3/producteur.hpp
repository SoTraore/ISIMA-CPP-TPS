#ifndef __CPP3_PRODUCTEUR_HPP__
#define __CPP3_PRODUCTEUR_HPP__

#include <iostream>

class Producteur {
    static int travail;
  public:
    Producteur();
    int getTravail();
    //virtual bool produire(int quantite, std::string nom) =0;
    bool produire(int quantite, std::string nom);
};

#endif
