#ifndef __RECTANGLE
#define __RECTANGLE

#include <iostream>
#include <ostream>

class Rectangle {
  int x, y, h, w;
  public :
    Rectangle();
    Rectangle(int x, int y, int h, int w);
    
    std::ostream& toString(std::ostream& output);
}; 

#endif
