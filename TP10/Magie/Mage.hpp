#ifndef __MAGE__
#define __MAGE__

#include "Humain.hpp"

class Mage : public Humain {
  public:
    Mage();
    string parler() ;
    void faireMagie(string magie);

} ;

#endif
