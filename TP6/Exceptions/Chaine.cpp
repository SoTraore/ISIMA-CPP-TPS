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
  if (capacite > 1){
    this->tab = new char[capacite]; 
    this->tab[0] = '\0';
  } else {
    this->tab = nullptr;
    throw null_pointer();
  }
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

const char * Chaine::c_str() const {
  return this->tab;
}

int Chaine::getCapacite() const {
  return this->capacite;
}

int Chaine::getSize() const {
  return strlen(this->tab);
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

Chaine& Chaine::operator=(const Chaine& copy) {
  if (this != &copy) {
    if (this->tab) delete [] this->tab;
    this->capacite = copy.capacite;
    this->tab = new char[this->capacite];
    memcpy(this->tab, copy.tab, this->capacite*sizeof(char));	  
  }
  return *this;
}
 
const char& Chaine::operator[](int index) const{
  if (index < 0) {
     throw Chaine::OutOfRangeException();
  }
  if (index > Chaine::getCapacite()){
     throw std::bad_alloc();
  }
  return this->tab[index];
}

Chaine& Chaine::operator+=(const Chaine& c){
  try {
    int size = Chaine::getSize()+c.getSize();
    int taille = Chaine::getCapacite()+c.getCapacite();
    char * concat = new char[size];
    if (this->tab) {
      memcpy(concat, this->tab, (Chaine::getSize())*sizeof(char));
      this->capacite = taille;
      delete [] this->tab;
    }
    strcat(concat, c.tab);
    this->tab = new char[taille];
    memcpy(this->tab, concat, (strlen(concat))*sizeof(char));
    delete [] concat ;
  }
  catch (bad_alloc& e) {
    throw e;
  } 
  return *this;
}
    
/*
Chaine Chaine::operator+(const Chaine& a, const Chaine& b){
  try {
    int taille = a.getCapacite()+b.getCapacite();
    Chaine  concat = Chaine(taille);
    memcpy(concat.tab, a.tab, (a.getSize())*sizeof(char));
    strcat(concat.tab, b.tab);
    return concat;
  }
  catch(std::bad_alloc& e) {
    throw e;
  }
}
*/

