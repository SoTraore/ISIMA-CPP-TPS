#ifndef __CERCLE
#define __CERCLE

#include <iostream>
#include <ostream>

class Cercle {
  int x, y, h, w;
  static int ordreC;
  public :
    Cercle() ;
    Cercle(int x, int y, int h, int w);
    Cercle(int rx, int ry, int rayon);

    int getLargeur();
    int getHauteur();
    int getX();
    int getY();

    void setLargeur(int w);
    void setHauteur(int h);
    void setX(int x);
    void setY(int y);

    std::ostream& toString(std::ostream& output); 
    std::string toString();
    std::string afficher();
} ;

#endif
