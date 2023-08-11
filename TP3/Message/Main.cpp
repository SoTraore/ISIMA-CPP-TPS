#include "A.hpp"
#include "B.hpp"

int main() {
  A a = A();
  B b = B();

  a.send(&b);
  b.send(&a);

  return 0;

}
