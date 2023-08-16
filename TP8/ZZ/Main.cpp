#include "ZZ.hpp"

#include <vector>
#include <iterator>
#include <queue>

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

  return 0;
}
