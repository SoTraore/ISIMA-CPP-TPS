#include <iostream>

class M {
 public:  
  M() {
    std::cout << "M::M()" << std::endl;
  }
   ~M() {
    std::cout << "M::~M()" << std::endl;
  }
    M(const M&) {
    std::cout << "M::M(const M&)" << std::endl;
  }
    
  const M& operator=(const M& affectation) {
    std::cout << "operator=(const M&)" << std::endl;
    return affectation;
  }
  
};

class F : public M {
 public:
  F() {
    std::cout << "F::F()" << std::endl;
  }  
~F() {
    std::cout << "F::~F()" << std::endl;
  }
  F(const F& f) {
    std::cout << "F::F(const F&)" << std::endl;
  } 
  const F& operator=(const F& affectation) {
    std::cout << "operator=(const F&)" << std::endl;
    return affectation;
  }
};

int main(int, char**) {

  F f1;
  F f2 = f1;
  
  f1 = f2;

  return 0;
}
