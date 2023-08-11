#ifndef __MERE
#define __MERE

#include <iostream>

class Mere {
    static int m;
    std::string nom;
  public:
    Mere();
    Mere(std::string nom);
    ~Mere();
    int getCompteur();
    std::string getName();
    std::string afficher();
};


#endif
