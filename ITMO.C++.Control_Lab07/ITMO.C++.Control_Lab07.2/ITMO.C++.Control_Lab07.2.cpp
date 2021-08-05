#include <iostream>
#include <math.h>
#include <windows.h>
#include <string>
using namespace std;

struct Roots
{
	double root1;
	double root2;
};


Roots return_roots(double a, double b, double c)
{
	Roots r;
	double D = b * b - 4 * a * c;
	if (D > 0)
	{
		r.root1 = ((-b) + sqrt(b * b - 4 * a * c)) / (2 * a);
		r.root2 = ((-b) - sqrt(b * b - 4 * a * c)) / (2 * a);
	}
	else if (D == 0)
	{
		r.root1 = -b / (2 * a);
		r.root2 = r.root1;
	}
	else
	{
		r.root1 = numeric_limits<double>::quiet_NaN();
		r.root2 = numeric_limits<double>::quiet_NaN();
	}
	return r;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
	cout.precision(3);
	Roots roots;
	begin:
	double a, b, c;
	cout << "Введите коэффициенты квадратного уравнения (a, b, c): ";
	cin >> a >> b >> c;
	if (a == 0)
	{
		cout << "Коэффициент а не может быть равен нулю!" << endl;
		goto begin;
	}
	roots = return_roots(a, b, c);
	if (!isnan(roots.root1))
	{
		cout << "Первый корень: " << roots.root1 << endl;
		cout << "Второй корень: " << roots.root2 << endl;
	}
	else
	{
		cout << "Нет корней ";
	}

    return 0;
}

