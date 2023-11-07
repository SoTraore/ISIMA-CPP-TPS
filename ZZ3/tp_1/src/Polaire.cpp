#include "Polaire.hpp"
#include "Cartesien.hpp"

Polaire::Polaire() : Point() {}

Polaire::Polaire(const Cartesien& c) {
    c.convertir(*this);
}

Polaire::Polaire(double r, double o) {
    setX(r);
    setY(o);
}

double Polaire::getAngle() const {
    return getX();
}

double Polaire::getDistance() const {
    return getY();
}

void Polaire::setAngle(double y) {
    setX(y);
}

void Polaire::setDistance(double x) {
    setY(x);
}

void Polaire::afficher(ostream& out) const {
    out << "(a=" << getX() << ";d=" << getY() << ")" ;
}

void Polaire::convertir(Polaire& p) const {
    p.setX((double)(getY() * cos(getX() * M_PI / 180)));
    p.setY((double)(getY() * sin(getX() * M_PI / 180)));
}

void Polaire::convertir(Cartesien& p) const {
    p.setX((double)(getDistance() * cos(getAngle() * M_PI / 180)));
    p.setY((double)(getDistance() * sin(getAngle() * M_PI / 180)));
}