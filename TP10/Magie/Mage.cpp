#include "Mage.hpp"

Mage::Mage(): Humain("Mage") {}

string Mage::parler() {
  string result ;
  cout << "Formule magique : ";
  cin >> result;
  return result;
}

void Mage::faireMagie(string magie) {
  cout << magie;
}
