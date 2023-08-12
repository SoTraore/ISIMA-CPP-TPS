#ifndef __POINT_HPP__
#define __POINT_HPP__

#include <iostream>
#include <string>
using namespace std;

class Point {
  int x, y;
  public:
    Point();
    Point(int x, int y);

    string toString();

};


#endif
