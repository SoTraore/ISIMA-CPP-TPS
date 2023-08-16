#ifndef __CERCLE
#define __CERCLE

#include <iostream>
#include <ostream>
#include "Forme.hpp"

class Cercle : public Forme {
  int x, y, h, w;
  static int ordreC;
  public :
    Cercle() ;
    Cercle(int x, int y, int h, int w);
    Cercle(int rx, int ry, int rayon);
    Cercle(const Cercle& c);
    Cercle(Cercle* c);
    //int getRayon();

    std::ostream& toString(std::ostream& output); 
    std::string toString();
    Cercle* clone() const;
    std::string afficher();
} ;

#endif
