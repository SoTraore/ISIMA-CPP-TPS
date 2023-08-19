#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

class Fibo {
  int n;
  public:
    Fibo(int n):n(n){}
    vector<int> operator()(){
	vector<int> v;
	int fn=0, fn1=0, fn2=1; 
	v.push_back(0);
	v.push_back(1);
	while (v.size() < (long unsigned int)n) {
	   fn = fn1+fn2;
	   fn1 = fn2;
	   fn2 = fn;
           v.push_back(fn);
	}
	return v;
    }
};

int main() {
  // Generate the fibonachi list & display it
  Fibo f10(10);

  vector<int> v = f10();

  copy(v.begin(), v.end(), 
	ostream_iterator<int>(cout, ", "));

  cout << endl << endl;

  // Putting [1, 100] in the vector and shuffle it
  vector<int> v1;
  for (int i=0; i<101; i++) {
     v1.push_back(i);
  }

  srand(time(nullptr));
  random_shuffle(v1.begin(), v1.end());

  // Get the starting point of the element 50 and then
  // display from this point to the end of the list
  auto v3 = find(v1.begin(), v1.end(), 50);

  copy(v3, v1.end(), 
	ostream_iterator<int>(cout, ", "));

  return 0;
}
