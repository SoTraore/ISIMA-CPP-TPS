#ifndef __ZZ__
#define __ZZ__

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class ZZ {
  string nom, prenom;
  double note;
  public:
    ZZ();
    ZZ(string nom, string prenom, double note);

    friend ostream& operator<<(ostream& output, const ZZ& zz) {
	output << "Nom : " << zz.nom << ", Prénom : " << zz.prenom << ", Note : " << zz.note;
	return output;
    }

    friend bool operator<(const ZZ& a, const ZZ& b) {
	string aValue = a.nom+a.prenom; //nomprenom
	string bValue = b.nom+b.prenom; //nomprenom
	return (aValue > bValue);
    }

    class cmpZZ {
    public:
       bool operator()(const ZZ& a, const ZZ& b) {
           return (a.note > b.note);
       }
    };

    int size() const;
    void clear();

    string toString();
};

#endif
