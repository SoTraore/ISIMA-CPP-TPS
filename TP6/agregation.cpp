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

class A {
  M m ;
  public:
    A():m(){
      std::cout << "A()" << std::endl;
    }
    A(M m) : m(m) {
      std::cout << "A(M m)" << std::endl;
    }
    A(const A& a) {
      std::cout << "A(const A&)" << std::endl;
    }
    ~A() {
      std::cout << "~A()" << std::endl;
    }

};


int main() {
  M m;
  std::cout << std::endl;
  A a;
  std::cout << std::endl;
  A a1 = a;
  std::cout << std::endl;
  A a2 = A(m);
  std::cout << std::endl;

  return 0;
}
