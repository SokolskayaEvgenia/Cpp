#include <iostream>
#include <windows.h>
#include "triangle.h"
#include "dot.h"

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout.precision(3);

	int side1;
	int side2;
	int side3;

	Dot a(1, 15), b(3, 45), c(21, 6);

	Triangle tr(a, b, c);
	double Square = tr.getSquare();
	tie(side1, side2, side3) = tr.getSides();
	cout << "Стороны треугольника: " << side1 << " : " << side2 << " : " << side3 << endl;
	cout << "Периметр треугольника:  " << tr.getPerimetr() << endl;
	cout << "Площадь треугольника:  " << tr.getSquare() << endl;
	return 0;
}