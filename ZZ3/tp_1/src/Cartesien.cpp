#include "Cartesien.hpp"
#include "Polaire.hpp"

Cartesien::Cartesien(): Point(), z(0) {}

Cartesien::Cartesien(Polaire& p) {
    p.convertir(*this);
}

Cartesien::Cartesien(double x, double y)
: Point(x, y) {}

Cartesien::Cartesien(double x, double y, double z)
: Point(x, y), z(z) {}

void Cartesien::afficher(ostream& out) const {
    out << "(x=" << getX() << ";y=" << getY() << ")" ;
}

void Cartesien::convertir(Cartesien& p) const {
    p.setX(getX());
    p.setY(getY());
}

void Cartesien::convertir(Polaire& p) const {
    p.setX((double)(atan2(getY(), getX()) * 180 / M_PI));
    p.setY((double)(hypot(getX(), getY())));
}