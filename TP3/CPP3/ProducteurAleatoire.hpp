#ifndef __PRODUCTEUR_ALEATOIRE__
#define __PRODUCTEUR_ALEATOIRE__

#include "producteur.hpp"
#include <cstdlib>
#include <fstream>

class ProducteurAleatoire : public Producteur {
public:
    ProducteurAleatoire();
    bool produire(int quantite, std::string nom) override;
};

#endif
