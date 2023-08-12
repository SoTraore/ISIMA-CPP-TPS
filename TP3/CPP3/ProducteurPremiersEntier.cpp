#include "ProducteurPremiersEntier.hpp"

ProducteurPremiersEntier::ProducteurPremiersEntier()
:ProducteurPremiersEntier::Producteur()
{
}

bool ProducteurPremiersEntier::produire(int quantite, std::string nom) {
    travail++;
    bool result = false;
    std::ofstream fichier(nom.c_str());
    if (!fichier.fail()) {
        int i=0;
        fichier << quantite << std::endl;
        while (i<quantite) {
            ++i;
            fichier << i << std::endl;
        }
        result= true;
    }
    fichier.close();
    return result;
}