#include "ZZ.hpp"

ZZ::ZZ()
: nom("ZZ2"), prenom("F5"), note(0.0) {

}

ZZ::ZZ(string nom, string prenom, double note)
: nom(nom), prenom(prenom), note(note) {

}

/*
ostream& ZZ::operator<<(ostream& output, const ZZ& zz){
  output << "Nom : " << zz.nom << ", Prénom : " << zz.prenom << ", Note : " << zz.note;
  return output;
}

bool ZZ::operator<(const ZZ& a,  const ZZ& b) {
   return (a.note > b.note);
}
*/

string ZZ::toString() {
  string result;
  result = "Nom : " +nom+ ", Prénom : " +prenom+ ", Note : " +to_string(note);
  return result;
}
