#include <iostream>
#include <cstring>

using namespace std;

template <class T, const int TAILLE=10>
class PileGen {

  private:
     T * tab;
     int tete;
     int capacite;

  public:
     PileGen();

     PileGen(const PileGen<T,TAILLE>& elt) {
         if (this != &elt) {
            if (this->tab) delete [] this->tab;
	    this->capacite = elt.capacite;
	    this->tete = elt.tete;
	    this->tab = new T[this->capacite];
	    for (int i=0; i<this->tete+1; i++) {
	        this->tab[i] = elt.tab[i];

	    }
         }
     }

     PileGen(int capacite);
     ~PileGen();
     bool push(T elt);
     T pop(); 
     int getCapacite() const;
     int getSize() const;
     void afficher() const;

     const PileGen<T,TAILLE>& operator=(const PileGen<T,TAILLE>& elt) {
        if (this != &elt){
            if (this->tab) delete [] this->tab;
	    this->capacite = elt.capacite;
	    this->tete = elt.tete;
	    this->tab = new T[this->capacite];
   	    for (int i=0; i<elt.tete+1; i++) {
  	        this->tab[i] = elt.tab[i];
	    }
        }
        return *this;
     }

     ostream& operator<<(ostream& output){
        for (int i=0; i<tete+1; i++) {
            output << tab[i] << " ";
        }
        return output;
     }

} ;

// Template member function definitions need the template parameter
template <typename T, const int TAILLE>
PileGen<T, TAILLE>::PileGen()
    : tab(new T[TAILLE]), capacite(TAILLE), tete(-1) {
}

template <typename T, const int TAILLE>
PileGen<T, TAILLE>::PileGen(int capacite)
    : tab(new T[capacite]), capacite(capacite), tete(-1) {
}

template <typename T, const int TAILLE>
PileGen<T, TAILLE>::~PileGen() {
    if (this->tab) delete [] this->tab;
}

template <typename T, const int TAILLE>
bool PileGen<T, TAILLE>::push(T elt) {
    tete += 1;
    if (tete >= capacite) {
        T* copy = new T[capacite];
	for (int i=0; i<tete; i++) {
	    copy[i] = this->tab[i];
	}
        delete [] tab;
        capacite *= 2;
        tab = new T[capacite];
	for (int i=0; i<tete; i++) {
	    this->tab[i] = copy[i];
	}
        delete [] copy;
    }
    tab[tete] = elt;
    return true;
}

template <typename T, const int TAILLE>
T PileGen<T, TAILLE>::pop() {
    T result;
    if (this->tete > 0) {
        result = this->tab[this->tete];	
        this->tete -= 1;
    }
    return result;
}

template <typename T, const int TAILLE>
int PileGen<T, TAILLE>::getCapacite() const{
    return capacite;
}

template <typename T, const int TAILLE>
int PileGen<T, TAILLE>::getSize() const{
    return tete + 1;
}

template <typename T, const int TAILLE>
void PileGen<T, TAILLE>::afficher() const{
    for (int i=0; i<PileGen<T, TAILLE>::getSize(); i++) {
        std::cout << this->tab[i] << " ";
    }
    std::cout << std::endl;
}

