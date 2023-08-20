#ifndef __MACHINE__
#define __MACHINE__

#include <iostream>
#include <cstring>

using namespace std;

class Machine {
  string type;
  int autonomie;
  int ifixit;
  public:
    Machine();
    Machine(string type, int autonomie, int ifixit);

    string getType() const;
    int getAutonomie() const ;
    int getIfixit() const;

    void setType(string type);
    void setAutonomie(int autonomie);
    void setIfixit(int ifixit);
};

#endif
