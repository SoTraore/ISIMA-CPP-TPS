#include <iostream>
#include <queue>
#include <map>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

const string& first(const pair<string,string>& p) { 
  return p.first; 
}

const string& second(const pair<string,string>& p) { 
  return p.second; 
}

string toString(std::map<string, string> m) {
  string result  = "";
  for (auto& elt : m) {
     result += "First : " + elt.first + ", Second : " + elt.second + "\n";
  }
  return result;
}

string afficher(pair<string, string> couple) {
  string result = "";
  result += couple.first + " " + couple.second + "\n";
  return result;
}

template <class begin, class end>
ostream& myCopy(begin b, end e, ostream& output) {
  for (auto i=b; i!=e; i++) {
    output << afficher(*i) ;
  }
  return output;
}

int main() {
  using namespace std;

  typedef std::map<string, string> mss;
  // OU en C++ 2011
  // using mss = std::map<string, string> ;  
  mss m;

  m.insert(pair<string,string>("loic", "405042"));
  m.insert(make_pair("pierre", "405033"));
  m.insert(make_pair("SOS C++ 24/7", "407662"));
  m["secours"]  = "42";
  mss::iterator it = m.find("loic");
  if (it==m.end()) cout << "et moi ?";
  transform(m.begin(), m.end(), 
		  ostream_iterator<string>(cout, "\n"), first);
  transform(m.begin(), m.end(), 
		  ostream_iterator<string>(cout, "\n"), second);
  cout << toString(m);
  myCopy(m.begin(), m.end(), cout << "\n");
}

/*
int main(int, char**) {
  map<string, string> liste;

  map<string, string>::const_iterator it 
      = liste.begin();
  while(it!=liste.end()) {  
    cout << it->first  << " " 
         << it->second << endl;
    ++it;
  }

  transform(liste.begin(), liste.end(), 
   ostream_iterator<string>(cout, " "), first);
  
  return 0;
}
*/
