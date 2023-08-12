#include "Liste.hpp"
#include "Forme.hpp"

int main() {
  Rectangle R1 = Rectangle() ;
  Rectangle R2 = Rectangle(1, 1, 3, 4);
  Cercle C1 = Cercle();
  Cercle C2 = Cercle(2, 2, 4, 4);
  Cercle C3 = Cercle(5, 6, 4) ;

  /*
  R1.toString(std::cout);
  R2.toString(std::cout);
  C1.toString(std::cout);
  C2.toString(std::cout);
  C3.toString(std::cout);
  */
  //std::cout << C3.afficher() << std::endl;

  Liste l = Liste();
  l.addCercle(C1);
  l.addCercle(C2);
  l.addCercle(C3);
  l.addRect(R1);
  l.addRect(R2);
  std::cout << l.toString();

  Forme f = Forme();
  std::cout << f.toString() << std::endl;

  return 0;
}
