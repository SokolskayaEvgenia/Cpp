
#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

double math_cubic_root(double number)
{
    return pow(number, 1.0 / 3);
};

double cubic_root(double number)
{
    double x, x1;
    x = number;
    do
    {
        x1 = x;
        x = 0.5 * (x + 3 * number / (2 * x * x + number / x));
    } 
    while (abs(x - x1) > 1 / 100000);
    return x;
};

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double a;
    cout << " Введите число: \n ";
    cin >> a;
    cout << " Кубический корень (стандартно) = " << math_cubic_root(a) << endl;
    cout << " Кубический корень = " << cubic_root(a);

    return 0;
}

