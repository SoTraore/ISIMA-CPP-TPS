#include <iostream>

int main() {
	int   a = 4;
	int * p = nullptr;

	p = &a;
	std::cout << *p << " " << p;
}
