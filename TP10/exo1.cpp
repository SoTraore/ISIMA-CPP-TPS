#include <iostream>

class MemePasPeur {
   int tab[4];
 public:
   MemePasPeur() {
      tab[0] = 1;
   }
   const int & val() const {
       return tab[0];
   }    
   void modify() {
      tab[0] = 4;
   }
};

int main(int, char **) {
  MemePasPeur * p = new MemePasPeur;
  int i = p->val();
  const int & j = p->val();
  // i récupère la valeur , j est associé à l'@ de la case tab[0]
  // donc là on a les mêmes valeurs 
  std::cout << i << " " << j << std::endl; 
  p->modify();
  // Après modification i ne change pas mais j étant associé
  // à la case, j est modifier
  std::cout << i << " " << j << std::endl;
  delete p;
  // En liberant le pointeur j étant associé à la 1ère case du
  // pointeur est mis à une valeur aléatoire mais i ne change pas
  // car il n'est pas associé à aucun il faut le modifier 
  // directement pour qu'il change.
  std::cout << i << " " << j << std::endl;
  return 0;
}
