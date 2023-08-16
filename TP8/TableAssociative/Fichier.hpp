#ifndef __FICHIER__
#define __FICHIER__

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class Fichier {
  string name;
  public:
    Fichier();
    Fichier(string name);

    void write(string input);
    string read() ;

    string toString();
};

#endif
