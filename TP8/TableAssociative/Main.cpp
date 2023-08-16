#include <iostream>
#include <queue>
#include <vector>
#include <iterator>


int main() {

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
  const string& first(const pair<string,string>& p) { return p.first; }

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
