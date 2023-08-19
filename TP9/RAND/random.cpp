#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <ctime>
#include <cstdlib>
#include <numeric>

using namespace std;

// My fucntor which provide albitrary int between [0, 100[

class RAND_0_100 {
   public:
      int operator()() {
          return static_cast<int>((static_cast<double>(random())/RAND_MAX)*100);
      }
};

class RAND_I_J {
   int i,j;
   public:
      RAND_I_J(int i, int j) : i(i), j(j) {}
      int operator()() {
	 return static_cast<int>((static_cast<int>
			  ((static_cast<double>(random())/RAND_MAX)*(j-i))+i));
      }
};


int main() {
   srand(time(nullptr));
  
   //cout << RAND_0_100() << endl;

   // display 50 elements using generate 

   /*
   vector<int> v(50);
   generate(v.begin(), v.end(), RAND_0_100());

   copy(v.begin(), v.end(),
	ostream_iterator<int>(cout, ", "));

   cout << endl;
   
   // display 50 elements using generate_n

   vector<int> v1(50);
   generate_n(v1.begin(), 50, RAND_0_100()); 

   copy(v1.begin(), v1.end(),
	ostream_iterator<int>(cout, ", "));
  
   cout << endl;
   */
   // Using back_inserter
   
   vector<int> v2;
   generate_n(back_inserter(v2), 50, RAND_0_100());

   copy(v2.begin(), v2.end(),
	ostream_iterator<int>(cout, ", "));
   
   // Using accumulate
   
   int sum = accumulate(v2.begin(), v2.end(), 0) / v2.size();

   cout << endl << "la moyenne de v2 : " << sum << endl;
  
   // min_element & max_element
   
   cout << "Min(v2) : " << *(min_element(v2.begin(), v2.end()))
	<< ", Max(v2) : " << *(max_element(v2.begin(), v2.end())) << endl;

   // RAND_I_J giving random number between [I, j)

   RAND_I_J rand_10_20(10,20);

   cout << endl << "Random between [10,20) : " << rand_10_20() << endl;

   return 0;
}
