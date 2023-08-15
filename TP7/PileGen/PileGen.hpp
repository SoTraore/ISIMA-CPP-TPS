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
            if (tab) delete [] tab;
	    tete = elt.tete;
	    capacite = elt.capacite;
	    tab = new T[capacite];
	    for (int i=0; i<tete+1; i++) {
	        tab[i] = elt.tab[i];
	    }
         }
     }

     PileGen(int capacite);
     ~PileGen();
     bool push(T elt);
     void pop(); 
     int top();
     int getCapacite() const;
     int getSize() const;
     void afficher() const;

     const PileGen<T,TAILLE>& operator=(const PileGen<T,TAILLE>& elt) {
        if (this != &elt){
            if (tab) delete [] tab;
	    capacite = elt.capacite;
	    tete = elt.tete;
	    tab = new T[capacite];
   	    for (int i=0; i<elt.tete+1; i++) {
  	        tab[i] = elt.tab[i];
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

     const T& operator[](int index); 
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
    if (tab) delete [] tab;
}

template <typename T, const int TAILLE>
int PileGen<T,TAILLE>::top() {
    return this->tete;
}

template <typename T, const int TAILLE>
bool PileGen<T, TAILLE>::push(T elt) {
    tete += 1;
    if (tete >= capacite) {
        T* copy = new T[capacite];
	for (int i=0; i<tete; i++) {
	    copy[i] = tab[i];
	}
        delete [] tab;
        capacite *= 2;
        tab = new T[capacite];
	for (int i=0; i<tete; i++) {
	    tab[i] = copy[i];
	}
        delete [] copy;
    }
    tab[tete] = elt;
    return true;
}

template <typename T, const int TAILLE>
void PileGen<T, TAILLE>::pop() {
    if (tete > 0) {
        tete -= 1;
    }
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
    for (int i=0; i<tete+1; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}

template <typename T, const int TAILLE>
const T& PileGen<T,TAILLE>::operator[](int index){
    if (index < 0 || index > capacite){
       throw out_of_range("Index Out Of Range");
    }
    return tab[index];
}
