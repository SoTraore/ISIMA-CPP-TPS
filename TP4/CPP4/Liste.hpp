#ifndef LISTE_HPP
#define LISTE_HPP

#include <string>
#include "Cercle.hpp" // Include the appropriate header file for Cercle
#include "Rectangle.hpp" // Include the appropriate header file for Rectangle

class Liste {
public:
    int nb_c;
    int nb_r;
    Cercle* c; // Use pointers for dynamic arrays
    static int compteur;
    Rectangle* r; // Use pointers for dynamic arrays
    static const int SIZE = 10;

    Liste();
    ~Liste(); // Don't forget to define a destructor to clean up dynamic memory

    void addRect(Rectangle r);
    void addCercle(Cercle c);

    int getCompteur();
    std::string toString();
};

#endif // LISTE_HPP
