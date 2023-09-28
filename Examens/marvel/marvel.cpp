#include "marvel.hpp"

const Personne Personne::INCONNU = Personne::createInconnu();

Personne::Personne(const Personne& pers) 
: prenom(pers.getPrenom()), nom(pers.getNom()), 
    genre(pers.getGenre()) {}

Personne::Personne(string prenom, string nom)
: prenom(prenom), nom(nom), genre(Personne::INDETERMINE){}

Personne::Personne(string prenom, string nom, Genre genre)
: prenom(prenom), nom(nom), genre(genre) {}

string Personne::getPrenom() const {
    return prenom;
}

string Personne::getNom() const {
    return nom;
}

Personne::Genre Personne::getGenre() const {
    return genre;
}

void Personne::afficher(stringstream result) {
    result << this;
}

Personne Personne::getPerson() const {
    return static_cast<Personne>(*this);
}

//----------------------------------------------------

Super::Super(string nom, Personne pers) {
    Personne::setPrenom(pers.getPrenom());
    Personne::setNom(pers.getNom());
    Personne::setGenre(pers.getGenre());
    this->nom = nom ;
}

string Super::getNom() const {
    return nom;
}

Personne Super::getIdentite() const {
    return Super::getPerson();
}

void Super::enregistrer() {
    estanonyme = false;
}

void Super::setIdentite(Personne pers) {
    Super::Personne((const Personne&)pers);
}

void Personne::setPrenom(string prenom) {
    prenom = prenom;
}
void Personne::setNom(string nom) {
    nom = nom;
}
void Personne::setGenre(Genre g) {
    genre = g;
}

//-----------------------------------------------

Capacite::Capacite(string para1, int para2) 
: para1(para1), para2(para2) {}

//-----------------------------------------------

Materiel::Materiel(string para1, int para2)
: Capacite(para1, para2) {}

void Materiel::actionner(stringstream& ch) {
    ch << *this;
}

//-----------------------------------------------

Physique::Physique(string nom, int force)
: Capacite(nom, force) {}

void Physique::exercer(stringstream& ch) {
    ch << *this;
}

//-----------------------------------------------

Psychique::Psychique(string nom, int force)
: Capacite(nom, force) {}

void Psychique::penser(stringstream& ch) {
    ch << *this;
}