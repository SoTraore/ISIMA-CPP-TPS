#include "producteur.hpp"
#include <fstream>

int Producteur::travail = 0;

Producteur::Producteur(){
  travail = 0; 
}

int Producteur::getTravail(){
  return travail;
}

void Producteur::progressTravail(){
  this->travail++; 
}

bool Producteur::produire(int quantite, std::string nom) {
    bool isOk = false;
    std::ofstream fichier(nom); // Use std::ofstream to write to the file
    
    if (fichier.is_open()) {
        fichier << quantite << "\n"; // Write the quantity to the file
        for (int i = 0; i < quantite; i++) {
            fichier << i + 1 << " ";
        }
        fichier << "\n";
        
        fichier.close();
        isOk = true;
        travail++;
    } else {
        std::cerr << "Error opening file for writing." << std::endl;
    }
    
    return isOk;
}
