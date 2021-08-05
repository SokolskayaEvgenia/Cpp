#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

class WrongLength
{
public: WrongLength() : message("Проверьте длины сторон треугольника. Треугольник не существует!")
{ }
	  void printMessage() const
	  {
		  cout << message << endl;
	  }
private: string message;
};

class Triangle
{
	double a;
	double b;
	double c;


public:
	Triangle(double a, double b, double c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}

	double perimetr()
	{
		if (a + b > c and b + c > a and a + c > b)
		{
			return a + b + c;
		}
		else throw WrongLength();
	}

	double square()
	{
		if (a + b > c and b + c > a and a + c > b)
		{
			return (0.25 * sqrt((a + b + c) * (b + c - a) * (a + c - b) * (a + b - c)));
		}
		else throw WrongLength();
	}
};



int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
	try
	{
		Triangle tr1{ 1, 4, 5 };
		double P = tr1.perimetr();
		double S = tr1.square();
		cout << "Периметр треугольника: " << P << " Площадь треугольника: " << S << endl;
	}
	catch (const WrongLength& error)
	{
		cout << "ОШИБКА: ";
		error.printMessage();
		return 1;
	}
    return 0;
    
}

