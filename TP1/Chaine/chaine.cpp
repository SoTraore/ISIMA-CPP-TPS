#include <iostream>
#include <string>

int main() {

  //char s[10];
  //std::string s;
  char * s = new char[10];

  std::cin >> s;

  std::cout << "#" << s << "#" << std::endl;
  for (int i = 0; i< 10; ++i)
    std::cout << "@" << s[i] << "@" << (int)s[i] << "@" << std::endl;

  return 0;
}
