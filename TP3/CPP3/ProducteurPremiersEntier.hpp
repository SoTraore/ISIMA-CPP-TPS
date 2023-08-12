#ifndef __PRODUCTEUR_PREMIERS_ENTIER__
#define __PRODUCTEUR_PREMIERS_ENTIER__

#include "producteur.hpp"

class ProducteurPremiersEntier : public Producteur {
public:
    ProducteurPremiersEntier();
    bool produire() override;
};

#endif