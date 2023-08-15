#ifndef __RECTANGLE
#define __RECTANGLE

#include <iostream>
#include <ostream>
#include "Forme.hpp"

using namespace std;

class Rectangle : public Forme {
  int x, y, h, w;
  static int ordreR;
  public :
    Rectangle();
    Rectangle(int x, int y, int h, int w);
    
    std::ostream& toString(std::ostream& output);
    std::string afficher();
}; 

#endif
