#include "PileGen.cpp"

int main(){
  PileGen<int> v; 
  v.push(3);
  v.push(4);
  v.push(5);
  v.push(6);
  v.push(7);

  v.pop();
  v.pop();
  v.pop();

  v.afficher();

  v.push(3);
  v.push(4);
  v.push(5);
  v.push(6);
  v.push(7);
  v.push(3);
  v.push(4);
  v.push(5);
  v.push(6);
  v.push(7);

  v.afficher();

  PileGen<double> d;
  d.push(11.12);
  d.push(12.12);
  d.push(3.12);
  d.push(1.12);

  d.afficher();

  PileGen<PileGen<int>> p; 
  p.push(v);
  PileGen<int> elt = PileGen<int>(30);
  elt = p.pop();
  
  elt.afficher();

  return 0;
}
