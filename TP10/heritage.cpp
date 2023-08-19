#include <iostream>

using namespace std;

class Mere {
 public:
  Mere() {
    // cout << "Mere::Mere()" << endl;
    tab = new int[100];
  } 
  virtual ~Mere() {
    // cout << "Mere::~Mere()" << endl;
    delete [] tab;
  }
 protected:
  int * tab;
};

class Fille : public Mere {
 public:
   Fille() {
      // cout << "Fille:Fille()" << endl;
      tab = new double[100];
      //Mere::tab[50] = 4;
   }
   ~Fille() {
      // cout << "Fille::~Fille()" << endl;
      delete [] tab;
   }
 protected:
   double * tab;
};

int main(int, char**) {
  Mere * m = new Fille();
  cout << "penser a valgrind" << endl;
  delete m; 

  return 0;
}
