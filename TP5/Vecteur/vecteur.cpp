#include "vecteur.hpp"

// Template member function definitions need the template parameter
template <typename T, const int TAILLE>
Vecteur<T, TAILLE>::Vecteur()
    : tab(new T[TAILLE]), capacite(TAILLE), tete(-1) {
}

template <typename T, const int TAILLE>
Vecteur<T, TAILLE>::Vecteur(int capacite)
    : tab(new T[capacite]), capacite(capacite), tete(-1) {
}

template <typename T, const int TAILLE>
bool Vecteur<T, TAILLE>::push_back(T elt) {
    tete += 1;
    if (tete >= capacite) {
        T* copy = new T[capacite];
        memcpy(copy, tab, tete * sizeof(T));
        delete[] tab;
        capacite *= 2;
        tab = new T[capacite];
        memcpy(tab, copy, tete * sizeof(T));
        delete[] copy;
    }
    tab[tete] = elt;
    return true;
}

template <typename T, const int TAILLE>
int Vecteur<T, TAILLE>::getCapacite() {
    return capacite;
}

template <typename T, const int TAILLE>
int Vecteur<T, TAILLE>::getSize() {
    return tete + 1;
}
