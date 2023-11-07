#ifndef __POLAIRE__
#define __POLAIRE__

#include "Point.hpp"
#include <cmath>

class Cartesien;

class Polaire : public Point {
public:
    Polaire();
    // ~Polaire() {}
    Polaire(Cartesien& c);
    Polaire(int r, int o);


    double getAngle() const;
    double getDistance() const;

    void setAngle(double x);
    void setDistance(double y);

    void afficher(ostream& out) const override;
    
    // ostream& operator<<(ostream& out, const Polaire& c) const override {
    //     out << afficher();
    //     return out;
    // } ;

    void convertir(Polaire& p) const override;
    void convertir(Cartesien& p) const override;

} ;


#endif