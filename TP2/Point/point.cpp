#include "point.hpp" 

int Point::compteur = 0;

Point::Point():x(0),y(0) {
	// No Entry here thank you
	std::cout << "Point()" << std::endl;
	Point::compteur++;
}

Point::Point(double x, double y):x(x), y(y) {
	// No Entry here to 
	std::cout << "Point(double x, double y)" << std::endl;
	Point::compteur++;
}
   
double Point::getX() {
	return this->x;
}

double Point::getY() {
	return this->y;
}	

int Point::getCompteur() {
	return Point::compteur;
}
   
void Point::setX(double x)  {
	this->x = x;
}

void Point::setY(double y) {
	this->y = y;
}

void Point::deplacerVers(double x, double y) {
	this->x = x;
	this->y = y;
}

void Point::deplacerDe(double x, double y) {
	this->x += x;
	this->y += y;
}

std::ostream& Point::afficher(std::ostream& output) {
	output << "x : " << this->x << ", y : " << this->y << ", compteur : " << Point::compteur << std::endl;
	return output;
}
