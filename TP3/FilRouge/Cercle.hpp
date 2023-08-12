#ifndef __CERCLE
#define __CERCLE

#include <iostream>
#include <ostream>

class Cercle {
  int x, y, h, w;
  public :
    Cercle() ;
    Cercle(int x, int y, int h, int w);
    Cercle(int rx, int ry, int rayon);

    std::ostream& toString(std::ostream& output); 
    std::string afficher();
} ;

#endif
