#include "Liste.hpp"

int Liste::compteur = 0;

Liste::Liste()
: c(new Cercle[SIZE]), r(new Rectangle[SIZE]), nb_r(0), nb_c(0){
  compteur++;
}

Liste::~Liste() {
  if (this->c != nullptr) delete [] this->c;
  if (this->r != nullptr) delete [] this->r;
}

std::string Liste::toString() {
  std::string output, c_Out, r_Out;
  c_Out = "Cercle : \n";
  r_Out = "Rectangle : \n";

  for (int i=0; i<this->nb_c; i++)
  {
    c_Out += this->c[i].afficher() + "\n";
  }
  for (int i=0; i<this->nb_c; i++)
  {
    r_Out += this->r[i].afficher() + "\n";
  }
  output = c_Out+r_Out;
  return output;
}

void Liste::addRect(Rectangle r){
  this->r[this->nb_r] = r;
  this->nb_r += 1;
}

void Liste::addCercle(Cercle c){
  this->c[this->nb_c] = c;
  this->nb_c += 1;
}

int Liste::getCompteur(){
  return this->compteur;
}
