#include "Complex.h"

int main()
{
	Complex a(1, 1);
	a *= Complex(1, -1);
	std::cout << a << "\n";
}