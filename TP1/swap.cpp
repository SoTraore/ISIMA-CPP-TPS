#include <iostream>

void swap(int &a, int &b){
	int c = a;
	a = b;
	b = c;
}

void swap(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}

int main() {
	int a=10, b=20;
	std::cout << " a: " << a << "; b: " << b << std::endl;

	swap(a,b);
	std::cout << " a: " << a << ", b: " << b << std::endl;

	swap(&a, &b);
	std::cout << " a: " << a << ", b: " << b << std::endl;
	return 0;
}
