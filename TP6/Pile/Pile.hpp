#ifndef __PILE__
#define __PILE__

#include <iostream>
#include <cstring>

class Pile {
  int * T;
  int tete;
  const int TAILLE = 10;
  public:
    Pile();
    Pile(int taille);
    Pile(const Pile& p);
    ~Pile();

    void push(int value);
    bool empty();
    int top();
    int pop();
    int size();
    void afficher();
};

#endif
