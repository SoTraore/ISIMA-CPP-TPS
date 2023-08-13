#ifndef __VECTEUR__
#define __VECTEUR__

#include <iostream>
#include <string>

template <class T, const int TAILLE=10>
class Vecteur {

  private:
    T * tab;
    int tete;
    int capacite;

  public:
     Vecteur();
     Vecteur(int capacite);
     bool push_back(T elt);
     int getCapacite();
     int getSize();
} ;

#endif 
