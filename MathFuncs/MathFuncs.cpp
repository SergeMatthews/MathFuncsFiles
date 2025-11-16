#include <iostream>
#include "MyMathFuncs.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "RU");

	double a{}, b{};
	int oper{};
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	cin >> oper;

	switch (oper)
	{
		case 1: MySum(a, b);
			break;
		case 2: MySubtr(a, b);
			break;
		case 3: MyMult(a, b);
			break;
		case 4: MyDiv(a, b);
			break;
		case 5: MyPow(a, b);
			break;
		default: cout << "Неверная команда";
			break;
	}




	return EXIT_SUCCESS;
}

