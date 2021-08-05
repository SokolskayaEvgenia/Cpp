
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

int CalculateSquareRoots(double a, double b, double c, double& x1, double& x2);

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout.precision(3);

begin:
    double a, b, c;
    cout << "Введите коэффициенты квадратного уравнения (a, b, c): ";
    cin >> a >> b >> c;
    if (a == 0)
    {
        cout << "Коэффициент а не может быть равен нулю!" << endl;
        goto begin;
    }
    double x1, x2;
    double res = CalculateSquareRoots(a, b, c,  x1, x2);
    if (res == 1)
    {
        cout << "Корни уравнения с коэффициентами a = " << a << ", b = " << b << ", c = " << c << "  равны: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (res == 0)
    {
        cout << "Корень уравнения с коэффициентами a = " << a << ", b = " << b << ", c = " << c << "  один: x1 = x2 = " << x1 << endl;
    }
    else
    {
        cout << "Корней уравнения с коэффициентами a = " << a << ", b = " << b << ", c = " << c << "  нет." << endl;
    }

    return 0;
}

int CalculateSquareRoots(double a, double b, double c, double& x1, double& x2)

{
    double D = b * b - 4 * a * c; //вычисление дискриминанта
    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        return 1;
    }
    else if (D == 0)
    {
        x1 = -b / 2 * a;
        return 0;
    }
    else
    {
        return -1;
    }
}

