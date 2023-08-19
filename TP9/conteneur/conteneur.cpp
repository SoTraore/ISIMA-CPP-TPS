#include <iostream>
#include <cstring>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

class cmpStr {
   public:
      bool operator()(const string& a, const string& b){
         return (a.substr(2) > b.substr(2));
	 // Comparer à partir du 2è caractère 
         //return (a.substr(2, a.length()) > b.substr(2, b.length()));
      }
}; 

string str_toupper(string s)
{
    transform(s.begin(), s.end(), s.begin(), 
                // static_cast<int(*)(int)>(std::toupper)         // wrong
                // [](int c){ return std::toupper(c); }           // wrong
                // [](char c){ return std::toupper(c); }          // wrong
                   [](unsigned char c){ return toupper(c); } // correct
                  );
    return s;
}

class Upper {
   public:
      void operator()(string& ch){
	 ch = str_toupper(ch); 
      }
};


int main() {

   vector<string> v;
   string input;

   for (int i=0; i<10; i++) {
      cin >> input; 
      v.push_back(input);
   }

   sort(v.begin(), v.end(), cmpStr());

   copy(v.begin(), v.end(), 
	ostream_iterator<string>(cout, ", "));

   cout << endl;

   for_each(v.begin(), v.end(), Upper());
   /*
   for_each(v.begin(), v.end(), [](string & a){
		   	transform(a.begin(), a.end(), a.begin(),
				[](const char & b){ 
					return toupper(b); 
				});		
		   	});
   */
   copy(v.begin(), v.end(), 
	ostream_iterator<string>(cout, ", "));

   cout << endl;

   return 0;
}
