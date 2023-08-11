#include "File.hpp"

// Mere Private variable --> File Can't access
// Mere Public variable --> File can access 
// Mere Protected variable --> File can access

int main(){
  Mere m1 = Mere();
  Mere m2 = Mere("Hello world");
  File f1 = File("Yes we can");

  std::cout << "m1.m : " << m1.getCompteur() << std::endl;
  std::cout << "f1.m : " << f1.getCompteur() << std::endl;

  std::cout << "m1.name : " << m1.getName() << std::endl;
  std::cout << "f1.name : " << f1.getName() << std::endl;

  Mere *m = new Mere("Pointer Mere");
  File *f = new File("Pointer File");

  std::cout << m->afficher();
  std::cout << f->afficher();

  return 0;
}
