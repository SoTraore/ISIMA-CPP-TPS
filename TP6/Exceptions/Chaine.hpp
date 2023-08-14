#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>
#include <cstring>
#include <exception>
#include "Except.hpp"

using namespace std;

class Chaine  {
  char * tab;
  int capacite;
  public:
    class OutOfRangeException : public std::out_of_range {
      public:
        OutOfRangeException() : std::out_of_range("Index Out Of Range") {}
    };
    Chaine();
    ~Chaine();
    Chaine(char * tab, int capacite);
    Chaine(const char* inCS);
    Chaine(int capacite);
    Chaine(const Chaine& copy);

    const char& operator[](int index) const;
    Chaine& operator+=(const Chaine& c);
    Chaine& operator=(const Chaine& copy); 

    friend ostream& operator<<(ostream& output, const Chaine& c){
      for (int i=0; i<c.getSize(); i++){
        output << c.tab[i] << " ";
      }
      output << std::endl;
      return output;
    }

    friend Chaine operator+(const Chaine& a, const Chaine& b) {
      int taille = a.getSize() + b.getSize();
      Chaine concat = Chaine(taille + 1);  // +1 for the null-terminator
      strcpy(concat.tab, a.tab);
      strcat(concat.tab, b.tab);
      return concat;
    }

    const char * c_str() const;
    int getCapacite() const;
    int getSize() const;
    void afficher() const;
    ostream& afficher(ostream& output) const;
    void afficherParValeur(Chaine c) const;
    void afficherParReference(Chaine& c) const;
};

#endif
