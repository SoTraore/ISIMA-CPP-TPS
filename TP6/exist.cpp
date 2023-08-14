#include <iostream>
#include <cstdlib>

class Bavarde {
  std::string nom;
 public :
   Bavarde(std::string n):nom(n) {
      std::cout << "constructeur " << nom << std::endl;
   }
   ~Bavarde() {
      std::cout << "destructeur " << nom << std::endl;
   }
};

Bavarde g("global");

int main(int, char **) {
   Bavarde t("local");
   static Bavarde s("statlocal");

   //std::exit(1);
   //std::terminate();
   //std::unexpected(); // ne s'appelle pas normalement
   return 0;
}
