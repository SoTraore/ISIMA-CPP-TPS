#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

template<typename T>
class Stats {
   vector<T> data;
   T sum;
   double moy;
   double ecart;

 public:
   Stats():moy(.0), sum(.0), ecart(.0) {}

   void push_back(const T& t) { data.push_back(t);}

   void compute() { 
       for_each(data.begin(), data.end(), [this](T a){
		sum += a;
      	 });
       moy = static_cast<double>(sum)/(data.size());
       for_each(data.begin(), data.end(), [this](T a){
	   	ecart += static_cast<double>((a-moy)*(a-moy));
       	 });
       ecart /= static_cast<int>(data.size());
   }

   void display(ostream& o = cout) const {
       o << "Table : ";
       for (auto entry : data) {
          o << entry << " ";
       }
       o << endl;
       o << "Sum : " << sum << ", Moy : " << moy 
	 << ", ecart : " << ecart << endl;
   }
};

int main(int, char**) {
  Stats<int> is;
  
  is.push_back(3);
  is.push_back(4);
  is.push_back(2);
  is.compute();
  is.display();

  return 0;
}  
