#include "Cartesien.hpp"
#include "Polaire.hpp"

Cartesien::Cartesien(): Point(), z(0) {}

Cartesien::Cartesien(Polaire& p) {
    this->convertir(p);
}

Cartesien::Cartesien(double x, double y)
: Point(x, y) {}

Cartesien::Cartesien(double x, double y, double z)
: Point(x, y), z(z) {}

void Cartesien::afficher(ostream& out) const {
    out << "(x=" << getX() << ";y=" << getY() << ")" ;
}

void Cartesien::convertir(Cartesien& p) const {
    // p.setX((double)(getDistance() * cos(getAngle() * M_PI / 180)));
    // p.setY((double)(getDistance() * sin(getAngle() * M_PI / 180)));
    p.setX((double)(getY() * cos(getX() * M_PI / 180)));
    p.setY((double)(getY() * sin(getX() * M_PI / 180)));
}

void Cartesien::convertir(Polaire& p) const {
    p.setX((double)(getY() * cos(getX() * M_PI / 180)));
    p.setY((double)(getY() * sin(getX() * M_PI / 180)));
}