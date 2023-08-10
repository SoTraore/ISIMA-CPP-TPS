#include <iostream>
#include <string>

int main(int, char **) {  // parametres muets
  std::string prenom;     // type chaines de caracteres"
  int age;

  std::cout << "Quel est votre prénom ?" << std::endl;
  std::cin  >> prenom;
  std::cout << "Quel est votre age ?" << std::endl;
  std::cin  >> age ;
  std::cout << "Bonjour "<< prenom << " vous avez " << age << "ans." << std::endl;

  return 0;
}
