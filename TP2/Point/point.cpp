#include "point.hpp" 

int Point::compteur = 0;

Point::Point():x(0),y(0) {
	// No Entry here thank you
	std::cout << "Point()" << std::endl;
	Point::compteur++;
}

Point::Point(int x, int y):x(x), y(y) {
	// No Entry here to 
	std::cout << "Point(int x, int y)" << std::endl;
	Point::compteur++;
}
   
int Point::getX() {
	return this->x;
}

int Point::getY() {
	return this->y;
}	

int Point::getCompteur() {
	return Point::compteur;
}
   
void Point::setX(int x)  {
	this->x = x;
}

void Point::setY(int y) {
	this->y = y;
}

std::ostream& Point::afficher(std::ostream& output) {
	output << "x : " << this->x << ", y : " << this->y << ", compteur : " << Point::compteur << std::endl;
	return output;
}
