#include "statisticien.hpp"
#include <fstream>

Statisticien::Statisticien():calcul(false){   
}

void Statisticien::acquerir(std::string nom) {	
    std::ifstream fichier(nom.c_str());
    if (!fichier.fail()){
        float somme2=0, moyenne=0, max, somme1=0;
	std::string save ;
	int i=0;
        fichier >> max;
        somme1 = (max*(max+1))/2;
        moyenne = somme1/max;

        while(!fichier.eof() && i<max) {
            fichier >> save;
            somme2 += atof(save.c_str());
            i++;
        }

        std::cout << "read conforme to write : " 
                    << ((somme1 == somme2) && 
                    (moyenne == (somme2/i))) 
                    << std::endl;
        calcul=true;
    } 
}

bool Statisticien::aCalcule() {
    return calcul;
}
