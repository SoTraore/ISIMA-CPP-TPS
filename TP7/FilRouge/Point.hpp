#ifndef __POINT_HPP__
#define __POINT_HPP__

#include <iostream>
#include <string>
using namespace std;

class Point {
  int x, y;
  public:
    Point();
    Point(const Point& p);
    //Point& operator=(const Point& p) = delete;
    Point(int x, int y);

    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
    string toString();

};


#endif
