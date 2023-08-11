#include "B.hpp"
#include "A.hpp"

B::B()
:j(0){
  std::cout << "B init" << std::endl;
}

B::B(int j)
:j(j){
  std::cout << "B init : " << j << std::endl;
}

void B::send(A* a){
  a->exec(5);
  std::cout << "B.j " << this->j << ", send (A) / A.i " << a->getI()  << std::endl;
}

void B::exec(int jj){
  this->j += jj;
}

int B::getJ(){
  return this->j;
}
