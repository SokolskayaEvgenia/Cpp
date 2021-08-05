
#include <iostream>
#include <math.h>
#include <windows.h>
#include <string>

using namespace std;

double triangle_square(double a)
{
    double square = a * a * sqrt(3) / 4;
    return  square;
};

double triangle_square(double a, double b, double c)
{
    double p, square;
    if (a + b > c and b + c > a and a + c > b) // проверка на существование
    {
        p = (a + b + c) / 2;
        square = sqrt(p * (p - a) * (p - b) * (p - c));
    }
    else
    {
        cout << "Треугольник не существует!"<< endl;
        square = 0;
    }
   return square;
};

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    char t;
    double a, b, c;
    cout << "Площадь какого треугольника будем вычислять? 1 - равносторонний, 3 - разносторонний?" << endl;
    cin >> t;
    switch (t)
    { case '1':
        cout << "Введите длину стороны: " << endl;
        cin >> a;
        cout << "Площадь треугольника равна " << triangle_square(a) << endl;
        break;
    case '3':
        cout << "Введите длины сторон: " << endl;
        cin >> a >> b >> c;
        cout << "Площадь треугольника равна " << triangle_square(a, b, c) << endl;
        break;
    }
    return 0;
}

