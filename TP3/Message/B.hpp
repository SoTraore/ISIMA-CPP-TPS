#ifndef __BBB__
#define __BBB__

#include <iostream>
class A;
class B {
  int j;
  public:
    B();
    B(int j);

    void send(A* a);
    void exec(int jj);
    int getJ();
};

#endif
