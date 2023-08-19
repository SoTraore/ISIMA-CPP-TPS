#include <iostream>

using namespace std;

template<class T>
class Mere {
 protected:
  T a;
 public:
  Mere(T t):a(t) {}
  void f() { cout << a ; }
};

template<class T>
class Fille : public Mere<T> {
 public:
  Fille(T t): Mere<T>(t) {}
  void m() { 
       Mere<T>::a = Mere<T>::a*Mere<T>::a; 
       Mere<T>::f();
     }
};


int main() {

  Fille<int> f = Fille<int>(10);

  f.m();

  cout << endl;

  return 0;
}
