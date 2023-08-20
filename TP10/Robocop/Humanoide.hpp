#ifndef __HUMANOIDE__
#define __HUMANOIDE__

#include "Humain.hpp"
#include "Machine.hpp"

class Humanoide : public Humain, public Machine {
  public:
    Humanoide();
    Humanoide(string nom, string type, Genre genre, int age);
    
    string getNom() const;
    Genre getGenre() const;
    string getType() const;
    int getAge() const;
    int getIfixit() const;

};


#endif
