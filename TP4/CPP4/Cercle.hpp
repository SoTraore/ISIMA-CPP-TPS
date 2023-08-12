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

    std::ostream& toString(std::ostream& output); 
    std::string toString();
    std::string afficher();
} ;

#endif
