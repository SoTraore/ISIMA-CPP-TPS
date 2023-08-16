#include "Fichier.hpp"

Fichier::Fichier() 
 : name("test.txt") {
  clear();
}

Fichier::Fichier(string name) 
 : name(name) {
  clear();
}

// ofstream is used for writing in a file

void Fichier::write(string input) {
    std::ofstream fichier(name, std::ios::app); // Append mode
    if (fichier.is_open()) {
        fichier << input << std::endl;
    }
}

// ifstream is used for reading from a file

string Fichier::read() const {
    std::ifstream fichier(name);
    std::string output;
    if (fichier.is_open()) {
        std::string line;
        while (std::getline(fichier, line)) {
            output += line + '\n'; // Add newline character
        }
    }
    return output;
}

string Fichier::toString() const {
    return read();
}

int Fichier::clear() {
    ofstream fichier(name);
    if (!fichier) {
        return -1;
    }
    fichier.close();
    return 1;
}
