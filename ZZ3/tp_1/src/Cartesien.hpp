#ifndef __CARTESIEN__
#define __CARTESIEN__

#include <Point.hpp>
#include <cmath>

class Polaire ;

class Cartesien : public Point {
double z;
public:
    Cartesien();
    Cartesien(Polaire& p);
    Cartesien(double x, double y);
    Cartesien(double x, double y, double z);

    void afficher(ostream& out) const override ;

    // ostream& operator<<(ostream& out, const Cartesien& c) const override {
    //     out << afficher();
    //     return out;
    // }

    void convertir(Polaire& p) const override;
    void convertir(Cartesien& p) const override;

} ;


#endif