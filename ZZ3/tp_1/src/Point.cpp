#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(double x, double y): x(x), y(y) {}

double Point::getX() const {
    return this->x;
}

double Point::getY() const {
    return this->y;
}

void Point::setX(double x) {
    this->x = x;
}

void Point::setY(double y) {
    this->y = y;
}

// void Point::afficher(ostream& out) {
//     out << "(a=" << x << ";d=" << y << ")" << endl;
// }