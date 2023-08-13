#include "Chaine.hpp"

Chaine::Chaine()
: tab(nullptr), capacite(-1) {
}

Chaine::~Chaine(){
  if (this->tab) delete [] this->tab;
}

Chaine::Chaine(char * tab, int capacite)
: capacite(capacite) {
  if ( tab ) { 
    if ((size_t)capacite < strlen(tab)) {
      this->capacite = strlen(tab);
    }
    this->tab = new char[this->capacite];
    strcpy(this->tab, tab);
  } else {
    this->tab = nullptr;
    this->capacite = -1;
  }
}

Chaine::Chaine(const char* inCS) { 
  if (inCS) {
    this->capacite = strlen(inCS);
    this->tab = new char[this->capacite];
    strcpy(this->tab, inCS);
  } else {
    this->tab = nullptr;
    this->capacite = -1;
  }
}

Chaine::Chaine(int capacite)
: capacite(capacite) {
  this->tab = new char[capacite]; 
  this->tab[0] = '\0';
}
    
Chaine::Chaine(const Chaine& copy)
: capacite(copy.capacite) {
  if (copy.tab != nullptr) {
    if (this != &copy) {
      strcpy(this->tab, copy.tab);
    }
  } else {
    this->tab = nullptr;
    this->capacite = -1;
  }
}

Chaine& Chaine::operator=(const Chaine& copy) {
  if (this != &copy) {
    if (this->tab) delete [] this->tab;
    this->capacite = copy.capacite;
    this->tab = new char[this->capacite];
    strcpy(this->tab, copy.tab);	  
  }
  return *this;
}
 
const char * Chaine::c_str() const {
  return this->tab;
}

int Chaine::getCapacite() const {
  return this->capacite;
}

void Chaine::afficher() const {
  cout << Chaine::c_str() << endl;
}

ostream& Chaine::afficher(ostream& output) const {
  output << Chaine::c_str();
  return output;
}

void Chaine::afficherParValeur(Chaine c) const {
  cout << c.c_str() << endl;
}

void Chaine::afficherParReference(Chaine& c) const {
  cout << c.c_str() << endl;
}
