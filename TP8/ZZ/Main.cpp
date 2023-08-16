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
  for (int i=0; i<10; i++) {
    zz.push_back(ZZ("hello", "world", 10.12));
  }

  priority_queue<ZZ> tri;

  for(vzz::iterator it = zz.begin(); 
      it!=zz.end(); ++it)
    tri.push(*it);

  while(!tri.empty()) {
     cout << tri.top() << " ";
     tri.pop();
  }
  cout << endl;

  ZZL l;
  l.push(ZZ("PrepISIMA","ZZ00",90));
  l.push(ZZ("ZZ1", "ZZ11", 10));
  l.push(ZZ("ZZ2", "ZZ22", 11));
  l.push(ZZ("ZZ3", "ZZ33", 12));
  l.push(ZZ("ZZ4", "ZZ44", 13));
  l.push(ZZ("ZZ5", "ZZ55", 14));

  cout << l;
  return 0;
}
