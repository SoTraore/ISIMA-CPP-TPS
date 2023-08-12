#include "ProducteurAleatoire.hpp"

ProducteurAleatoire::ProducteurAleatoire()
:ProducteurAleatoire::Producteur()
{
}

bool ProducteurAleatoire::produire(int quantite, std::string nom)
{
    bool result = false;
    std::ofstream fichier(nom.c_str());
    if (!fichier.fail()) {
        int i=0;
        fichier << quantite << std::endl;
        while (i<quantite) {
            fichier << std::rand()/((RAND_MAX + 1u)/100)
                    << " ";
            ++i;
        }
	fichier << std::endl;
        result= true;
	ProducteurAleatoire::Producteur::progressTravail();
    }
    fichier.close();
    return result;
}
