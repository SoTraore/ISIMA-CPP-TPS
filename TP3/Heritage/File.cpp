#include "File.hpp"

File::File(){
  std::cout << "File init " <<  std::endl;
}

File::File(std::string name)
: File::Mere(name){
  std::cout << "File init '" << Mere::getName() << "' : " << Mere::getCompteur() << std::endl;
}

File::~File(){
  std::cout << "File delete" << std::endl;
}
