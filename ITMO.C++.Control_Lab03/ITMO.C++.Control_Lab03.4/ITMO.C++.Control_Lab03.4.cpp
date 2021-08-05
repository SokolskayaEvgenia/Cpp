
#include <iostream>
#include <math.h>
#include <windows.h>


using namespace std;

unsigned int sum_row(unsigned int  n, unsigned int  k)
{
	unsigned int sum;
	sum = k * n;
	if (k == 1) return n;
	else return (k * n + sum_row(n, k - 1));
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
	unsigned int  k, n;
	cout << "Введите число: \n";
	cin >> n;
	cout << "Введите количество слагаемых: \n";
	cin >> k;
	cout << "Сумма ряда = " << sum_row(n, k) << endl;
    return 0;
}

