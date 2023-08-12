#include "ProducteurPremiersEntier.hpp"

ProducteurPremiersEntier::ProducteurPremiersEntier()
:ProducteurPremiersEntier::Producteur()
{
}

bool estPremier(int n) {
  int nb = n/2;
  bool result = true;
  for (int i=2; i<nb; i++){
    if (n % i == 0) {
      result = false;
      break;
    }
  }
  return result;
}

bool ProducteurPremiersEntier::produire(int quantite, std::string nom) {
    bool result = false;
    std::ofstream fichier(nom.c_str());
    if (fichier.is_open()){
        int i=0, j=0;
        fichier << quantite << std::endl;
        while (i<quantite) {
            ++j;
	    if (estPremier(j)){
           	 fichier << j << " ";
		 i++;
	    }
        }
	fichier << std::endl;
        result= true;
	ProducteurPremiersEntier::Producteur::progressTravail();
    }
    fichier.close();
    return result;
}
