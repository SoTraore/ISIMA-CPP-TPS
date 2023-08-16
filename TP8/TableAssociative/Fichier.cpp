#include "Fichier.hpp"

Fichier::Fichier() 
 : name("test.txt") {
}

Fichier::Fichier(string name) 
 : name(name) {
}

// ofstream is used for writing in a file

void Fichier::write(string input) {
  ofstream fichier(name); 
  ifstream content(name);
  string value, full_content;
  if (!content.fail()) { 
     while (getline(content, value)) {
        full_content += value;
     }
  }
  content.close();
  if (fichier.is_open()) {
     fichier << full_content << input << endl;
  }
  fichier.close();
}

// ifstream is used for reading from a file

string Fichier::read() {
  std::ifstream fichier(name);
  string output;
  if (!fichier.fail()) {
     string line ;
     while (getline(fichier, line)) {
	output += line;
     }
  }
  return output;
}

string Fichier::toString() {
  return this->read();
}
