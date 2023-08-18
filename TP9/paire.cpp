#include <iostream>
#include <vector>
using namespace std;

class Paire {
    int n;
    vector<int>p; 
  public:
    Paire() : n(10) {
      (*this)(10);
    }

    Paire(int n) : n(n) {
      (*this)(n);
    }

    void operator()(int n) {
      this->p.clear();
      for (int i=0; i<n; i++) {
	if (i%2 == 0) {
	  this->p.push_back(i);
	}
      }
    }

    void afficher() {
      for (int elt : this->p) {
	cout << elt << " ";
      }
      cout << endl;
    }
} ;


int main() {
  Paire p ;
  p.afficher();
  p(20);
  p.afficher();

  return 0;
}
