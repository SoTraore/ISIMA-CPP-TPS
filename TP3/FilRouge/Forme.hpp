#ifndef __FORME_HPP__
#define __FORME_HPP__

#include "Point.hpp"

class Forme {
  Point p;
  int w, h;
  public:
    Forme();
    Forme(Point p, int w, int h);
    string toString();

};

#endif
