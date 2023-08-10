#include <iostream>

class Tableau 
{
   int * tab;
   int taille;

 public:
   Tableau():tab(nullptr), taille(10) 
   {
       tab = new int[taille]; // si problème ?
   }

   ~Tableau()
   {
	if (tab) delete [] tab;
   }

   void initTab() 
   {
	for (int i=0; i<this->taille; i++) {
		this->tab[i] = i ;
	}
   }

   void afficher()
   {
	for (int i=0; i<this->taille; i++) 
	{
	   std::cout << this->tab[i] << " "; 
	}
	std::cout << std::endl;
   }
};

int main(int, char **)
{
   Tableau t;

   t.initTab();
   t.afficher();

   return 0;
}
