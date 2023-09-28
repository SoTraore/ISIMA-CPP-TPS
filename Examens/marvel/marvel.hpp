#ifndef marvel__hpp
#define marvel__hpp

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <sstream>

using namespace std;

class Personne  {
public:
    enum Genre {
        HOMME, 
        FEMME, 
        INDETERMINE
    };
private:
    string  nom, prenom;
    Personne::Genre genre;
    static Personne createInconnu() {
        return Personne("Inconnu", "Inconnu", Personne::INDETERMINE);
    }
public:
    Personne() : nom(""), prenom(""), genre(INDETERMINE) {}
    Personne(const Personne& pers);
    Personne(string prenom, string nom);
    Personne(string prenom, string nom, Genre genre);

    string getPrenom() const;
    string getNom() const;
    Personne::Genre getGenre() const;

    void setPrenom(string prenom) ;
    void setNom(string nom) ;
    void setGenre(Genre g);

    void afficher(stringstream result);
    Personne getPerson() const;

    static const Personne INCONNU;

    friend bool operator==(const Personne& a, const Personne& b) {
        return ((a.nom == b.nom) && (a.prenom == b.prenom) && (a.genre == b.genre));
    }

    friend ostream& operator<<(ostream& out, const Personne& a) {
        string data = (a.getGenre() == 0) ? "[HOMME]" : ((a.getGenre() == 1) ? "[FEMME]" :"[INDETERMINE]");
        out << a.getPrenom() << " " << a.getNom() << " " << data ;
        return out; 
    }
} ;

//----------------------------------------------------


class Super  : public Personne {
private:
    string nom;
    bool estanonyme = true;
public:

    Super(string nom, Personne pers);

    bool estAnonyme() const {
        return estanonyme;
    }

    void setIdentite(Personne pers);
    Personne getIdentite() const;
    string getNom() const;
    void enregistrer();
} ;


//----------------------------------------------------


class AnonymeException : public exception {
public:
    AnonymeException() {}
    const char* what() const noexcept override {
        return "identite anonyme";
    }
};


//---------------------------------------------------


class Capacite {
protected:
    string para1;
    int para2;
public:
    Capacite(string para1, int para2);
    virtual ~Capacite() {}
};


//---------------------------------------------------

class Materiel : public Capacite {
public:
    Materiel(string para1, int para2);
    void actionner(stringstream& para) ;

    friend ostream& operator<<(ostream& out, const Materiel& phy) {
        out << phy.para1 << " [" << phy.para2 << "] en action";
        return out;
    }
};


//---------------------------------------------------


class Physique : public Capacite {
public:
    Physique(string nom, int force);
    void exercer(stringstream& ch);

    friend ostream& operator<<(ostream& out, const Physique& phy) {
        out << phy.para1 << " [" << phy.para2 << "]";
        return out;
    }
};

//---------------------------------------------------


class Psychique : public Capacite {
public:
    Psychique(string nom, int force);
    void penser(stringstream& ch);

    friend ostream& operator<<(ostream& out, const Psychique& phy) {
        out << phy.para1 << " [" << phy.para2 << "]";
        return out;
    }
};


#endif
