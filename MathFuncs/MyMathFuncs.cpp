#include <math.h>
#include <iostream>
#include "MyMathFuncs.h"
using std::cout;
using std::endl;

void MySum(double a, double b) {
	cout << a << " + " << b << " = " << (a + b) << endl;
}
void MySubtr(double a, double b) {
	cout << a << " - " << b << " = " << (a - b) << endl;
}
void MyMult(double a, double b) {
	cout << a << " умножить на " << b << " = " << (a * b) << endl;
}
void MyDiv(double a, double b) {
	if (b)
		cout << a << " разделить на " << b << " = " << (a / b) << endl;
	else
		cout << a << " разделить на " << b << " = " << 0 << endl;
}
void MyPow(double a, double b) {
	if (a && b)
		cout << a << " в степени " << b << " = " << pow(a, b) << endl;
	else
		cout << a << " в степени " << b << " = " << 1 << endl;
}