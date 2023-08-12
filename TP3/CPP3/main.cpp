/*
 * Utilisez cela pour faire les tests
 *

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

*/

/*
 * Utilisez celui la pour vérifier la class "statisticien"
 *

#include "statisticien.hpp"

int main() {

  Statisticien s = Statisticien() ;
  s.acquerir("test01.txt");

  return 0;
}

*/

#include "ProducteurPremiersEntier.hpp"
#include "ProducteurAleatoire.hpp"

int main() {

  ProducteurPremiersEntier p = ProducteurPremiersEntier();
  p.produire(10, "test02.txt"); 
 
  ProducteurAleatoire pa = ProducteurAleatoire();
  pa.produire(10, "test03.txt");

  return 0;
}
