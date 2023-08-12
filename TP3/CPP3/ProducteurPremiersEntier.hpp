#ifndef __PRODUCTEUR_PREMIERS_ENTIER__
#define __PRODUCTEUR_PREMIERS_ENTIER__

#include <fstream>
#include "producteur.hpp"

class ProducteurPremiersEntier : public Producteur {
public:
    ProducteurPremiersEntier();
    bool produire(int quantite, std::string nom) override;
};

#endif
