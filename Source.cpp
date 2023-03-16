#include"sder.h"

double math(double a, double b, int c) {
	if (c == 1) {
		std::cout << a << " + " << b <<" = ";
		return a + b;
	}
	if (c == 2) {
		std::cout << a << " - " << b << " = ";
		return a - b;
	}
	if (c == 3) {
		std::cout << a << " * " << b << " = ";
		return a * b;
	}
	if (c == 4) {
		std::cout << a << " / " << b << " = ";
		return a / b;
	}
	if (c == 5) {
		std::cout << a << " ^ " <<b << " = ";
		return pow(a,b);
	}
}