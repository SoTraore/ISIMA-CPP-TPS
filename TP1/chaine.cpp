#include <iostream>
#include <string>
using namespace std;


int main() {
	string a, b ;
	
	cout << "Entrer une chaine de caractère " ;
	cin >> a;
	cout << endl << "Entrer une nouvelle chaine de caractère ";
	cin >> b;
	cout << "Le plus grand est : " << (a > b ? a : b) << endl ; 
	cout << "longeur des chaine : " << a.length() << " et " << b.length() << endl; 
	return 0;
}
