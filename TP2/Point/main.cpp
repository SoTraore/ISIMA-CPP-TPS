#include <iostream>
#include "point.hpp"

int main() {
	Point A = Point(1,2);
	std::cout << "A.x : " << A.getX() << ", A.y : " << A.getY() << std::endl;
	A.setX(10);
	std::cout << "A.x : " << A.getX() << std::endl;

	Point B = Point();
	Point * C = new Point();
	Point * D = new Point(4,5);

	B.afficher(std::cout); 
	C->afficher(std::cout);
	D->afficher(std::cout);

	std::cout << "A.compteur : " << A.getCompteur() << std::endl;

	return 0;
}
