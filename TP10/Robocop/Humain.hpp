#ifndef __HUMAIN__
#define __HUMAIN__

#include <iostream>
#include <cstring>

using namespace std;

enum Genre { HOMME, FEMME };

class Humain {
  string nom;
  Genre genre;
  int age;
  public:
    Humain();
    Humain(string nom, Genre genre, int age);

    string getNom() const;
    Genre getGenre() const;
    int getAge() const;

    void setNom(string nom);
    void setGenre(Genre genre);
    void setAge(int age);
};

#endif
