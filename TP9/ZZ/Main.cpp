#include "ZZ.hpp"

#include <vector>
#include <iterator>
#include <queue>

const int TAILLE = 10;

class ZZL {
  ZZ * zzl;
  int size;
  int top;
  public:
    ZZL(): zzl(new ZZ[TAILLE]), size(TAILLE), top(-1) {}
    ZZL(int size) : zzl(new ZZ[size]), size(size), top(-1) {}
    ~ZZL() {
       if (zzl) delete [] zzl;
    }

    int capacite() const { return size; }
    int getSize() const { return top+1; }
    ZZ getTop() const { return zzl[top]; } 

    void push(const ZZ& elt) {
       top += 1;
       if (top > size) {
	  ZZ * copy = new ZZ[size];
	  for (int i=0; i<top; i++) {
	     copy[i] = zzl[i];
	  }
	  if (zzl) delete [] zzl;
	  size *= 2;
	  zzl = new ZZ[size];
	  for (int i=0; i<top; i++) {
	     zzl[i] = copy[i];
	  }
	  if (copy) delete [] copy;
       }
       zzl[top] = elt;
   }
   
   void pop() {
      if (top > 0) {
         top -= 1;
      }
   }

   friend ostream& operator<<(ostream& output, const ZZL& ss){
      for (int i=0; i<ss.getSize(); i++) {
         output << ss.zzl[i] << endl;
      }
      return output;
   }
};

int main() {

  typedef std::vector<ZZ>  vzz;
  // OU en C++ 2011
  // using vzz = std::vector<ZZ> ;

  vzz zz;

  // il faut mettre des elements
  // zz.push_back(ZZ(...));
  for (int i=0; i<4; i++) {
    double value ;
    string nom, prenom;
    cout << "Nom : ";
    cin >> nom;
    cout << "Prénom : ";
    cin >> prenom;
    cout << "Add a new value : " ;
    cin >> value;
    zz.push_back(ZZ(nom, prenom, value));
  }

  cout << endl;

  cout << "Ordre l'exicographique" << endl;
  priority_queue<ZZ> tri;
  priority_queue<ZZ, vector<ZZ>, ZZ::cmpZZ> tri_funct;

  for(vzz::iterator it = zz.begin(); 
      it!=zz.end(); ++it) {
    tri.push(*it);
    tri_funct.push(*it);
  }

  while(!tri.empty()) {
     cout << tri.top() << " " << endl;
     tri.pop();
  }
  cout << endl;
  cout << "Ordre de la petite note" << endl;

  while(!tri_funct.empty()) {
    cout << tri_funct.top() << " " << endl;
    tri_funct.pop();
  }
 
  return 0;
}
