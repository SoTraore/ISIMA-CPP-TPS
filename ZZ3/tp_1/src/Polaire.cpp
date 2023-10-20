#include "Polaire.hpp"
#include "Cartesien.hpp"

Polaire::Polaire() : Point() {}

Polaire::Polaire(Cartesien& c) {
    this->convertir(c);
}

Polaire::Polaire(int r, int o)
: Point(r, o){}

double Polaire::getAngle() const {
    return getY();
}

double Polaire::getDistance() const {
    return getX();
}

void Polaire::setAngle(double y) {
    setY(y);
}

void Polaire::setDistance(double x) {
    setX(x);
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