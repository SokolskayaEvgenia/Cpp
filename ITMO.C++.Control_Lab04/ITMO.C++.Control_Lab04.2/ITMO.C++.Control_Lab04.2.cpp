
#include <iostream>
#include <math.h>
#include <windows.h>
#include <string>
using namespace std;

bool Input(int& a, int& b);

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int a, b;
    if (Input(a, b) == false) // if(!Input(a,b))
    {
        cerr << "error";
        return 1;
    }
    int s = a + b;
    return 0;
    
}

bool Input(int &a, int &b)
{
    cout << "Введите положительные числа a и b: ";
    cin >> a >> b;
    if ((a > 0 && a != NULL) && (b > 0 && b != NULL))
        return true;
    else
        return false;
};

