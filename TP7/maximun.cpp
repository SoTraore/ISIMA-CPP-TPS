#include <iostream>

template<typename T>
const T& maximun(const T& a, const T& b) {
  return (a > b) ? a : b;
}	

int main() {

  int a = 10, b=20;
  double a1=10.10, b1=20.2;

  std::cout << "max : " << maximun(a, b) << std::endl;
  std::cout << "max : " << maximun(a1, b1) << std::endl;
  std::cout << "max : " << maximun((double)b, b1) << std::endl;

  return 0;
}
