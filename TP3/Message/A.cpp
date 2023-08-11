#include "A.hpp"
#include "B.hpp"

A::A():i(0){
  std::cout << "A init" << std::endl;
}

A::A(int i):i(i){
  std::cout << "A init" << std::endl;
}

void A::send(B* b){
  b->exec(10);
  std::cout << "A.i " << this->i << ", B.i " << b->getJ() << std::endl;
}

void A::exec(int ii){
  this->i += ii;
}

int A::getI() {
  return this->i;
}
