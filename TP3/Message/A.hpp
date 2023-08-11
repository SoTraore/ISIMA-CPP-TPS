#ifndef __AAA__
#define __AAA__

#include <iostream>
class B;
class A {
  int i;
  public:
    A();
    A(int i);

    void send(B* b);
    void exec(int ii);
    int getI();
};

#endif
