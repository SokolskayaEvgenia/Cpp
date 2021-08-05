#include <typeinfo>
#include <iostream>
#include <windows.h>
using namespace std;

template<class T>
double average(T arr[], int size)
{
	double avg =0.0;
	for (int i = 0; i < size; i++)
		avg += arr[i];
	avg /= size;
	return avg;
}

template<class T>
void show(T arr[], double avg)
{
	cout << "Среднее значение элементов массива типа " << typeid(T).name() << "  :  " << avg << endl;
}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int Arr[] = { 0, 0, 1, 7, 35, 155, 651 };
	double Arr_double[] = { 1.5, 8.1,6.4,4.3,7.0,9.14,2.45,8.03,1.2 };
	char Arr_char[] = { 'a','b','e','f','q','a','b','b','k' };
	long Arr_long[] = { 2863245995, 11453115051, -45812722347, 183251413675, 733006703275, 2932028910251, -11728119835307, 46912487729835};
	int a1 = sizeof(Arr) / sizeof(Arr[0]);
	int a2 = sizeof(Arr_double) / sizeof(Arr_double[0]);
	int a3 = sizeof(Arr_char) / sizeof(Arr_char[0]) - 1;
	int a4 = sizeof(Arr_long) / sizeof(Arr_long[0]);
	double avg;
	avg = average(Arr, a1);
	show(Arr, avg);
	avg = average(Arr_double, a2);
	show(Arr_double, avg);
	avg = average(Arr_char, a3);
	show(Arr_char, avg);
	avg = average(Arr_long, a4);
	show(Arr_long, avg);

	return 0;
}