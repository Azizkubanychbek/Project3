#include "sder.h"

int main() {
	std::cout << "Введите первое число:: ";
	double a;
	std::cin >> a;
	std::cout << "Введите второе число:: ";
	double b;
	std::cin >> b;
	int c;
	std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) :";
	std::cin >> c;
	std::cout<<math(a, b, c);

}