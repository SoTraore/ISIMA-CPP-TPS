#include "Nuage.hpp"

Nuage::Nuage() {}

const int Nuage::size() const {
    return (const int)vect.size();
}

void Nuage::ajouter(Cartesien& elt) {
    vect.push_back(&elt);
}

void Nuage::ajouter(Polaire& elt) {
    vect.push_back(&elt);
}

// Nuage::~Nuage() {
//     for (Point* elt : vect) {
//         if (dynamic_cast<Cartesien*>(elt)) {
//             delete dynamic_cast<Cartesien*>(elt);
//         }
//         else if (dynamic_cast<Polaire*>(elt)) {
//             delete dynamic_cast<Polaire*>(elt);
//         }
//     }
// }

