#include "Machine.hpp"

Machine::Machine()
: type("Machine"), autonomie(0), ifixit(0){}

Machine::Machine(string type, int autonomie, int ifixit)
: type(type), autonomie(autonomie), ifixit(ifixit){}

string Machine::getType() const {
  return this->type;
}
    
int Machine::getAutonomie() const {
  return this->autonomie;
}
   
int Machine::getIfixit() const {
  return this->ifixit;
}

    
void Machine::setType(string type) {
  this->type = type;
}	
    
void Machine::setAutonomie(int autonomie) {
  this->autonomie = autonomie;
}
    
void Machine::setIfixit(int ifixit) {
  this->ifixit = ifixit;
}
