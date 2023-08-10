#include <iostream>

class Bavarde {
  int b;
  public :
    Bavarde(): b(0) {
	std::cout << "Constructeur de 0" << std::endl;
    }

    Bavarde(int b): b(b) {
	std::cout << "Constructeur de " << this->b << std::endl;
    }

    ~Bavarde() {
	std::cout << "Tais toi " << this->b << std::endl;
    }

    int get() {
	return this->b; 
    }

} bizarre(1);  

Bavarde globale(2);

void fonction(Bavarde b) {
  std::cout << "code de la fonction";
}

int main(int, char **) {

  Bavarde b1(3);
  Bavarde b2(4);
  Bavarde * p = new Bavarde(5);
  fonction(b1);

  std::cout << Bavarde(6).get() << std::endl;

  if (p) delete p;
  
  return 0;
}
