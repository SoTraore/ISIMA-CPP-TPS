#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Chaine  {
  char * tab;
  int capacite;
  public:
    Chaine();
    ~Chaine();
    Chaine(char * tab, int capacite);
    Chaine(const char* inCS);
    Chaine(int capacite);
    Chaine(const Chaine& copy);

    const char& operator[](int index) const;
    Chaine& operator+=(const Chaine& c);
    Chaine& operator=(const Chaine& copy); 
    friend Chaine operator+(const Chaine& a, const Chaine& b);
    friend ostream& operator<<(ostream& output, const Chaine& c);

    const char * c_str() const;
    int getCapacite() const;
    void afficher() const;
    ostream& afficher(ostream& output) const;
    void afficherParValeur(Chaine c) const;
    void afficherParReference(Chaine& c) const;
};

#endif
