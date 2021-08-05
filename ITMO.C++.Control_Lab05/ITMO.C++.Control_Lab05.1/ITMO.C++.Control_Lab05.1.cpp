
#include <iostream>
#include <math.h>
#include <windows.h>
#include <string>
using namespace std;

void show_array(int Arr[], const int N);
int sum_all(int Arr[], const int N);
int sum_negative(int Arr[], const int N);
int sum_positive(int Arr[], const int N);
int sum_odd_index(int Arr[], const int N);
int sum_even_index(int Arr[], const int N);
int max_element(int Arr[], const int N);
int min_element(int Arr[], const int N);
int index_of(int Arr[], const int N, int element);
int op_between_min_max(int Arr[], const int N);
void sort(int Arr[], const int N);

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

	const int n = 5;
	int mas[n];
	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "]=";
		cin >> mas[i];
	}

	cout << "Исходный массив: ";
	show_array(mas, n);
	cout << "Суммa всех элементов массива: " << sum_all(mas, n) << endl;
	cout << "Сумма отрицательных элементов: " << sum_negative(mas, n) << endl;
	cout << "Сумма положительных элементов: " << sum_positive(mas, n) << endl;
	cout << "Сумма элементов c нечетным индексом: " << sum_odd_index(mas, n) << endl;
	cout << "Сумма элементов c четным индексом: " << sum_even_index(mas, n) << endl;
	cout << "Максимальный элемент массива: " << max_element(mas, n) << ". Индекс элемента: " << index_of(mas, n, max_element(mas, n)) << endl;
	cout << "Минимальный элемент массива: " << min_element(mas, n) << ". Индекс элемента: " << index_of(mas, n, min_element(mas, n)) << endl;
	cout << "Произведение элементов между max и min равно " << op_between_min_max(mas, n) << endl;
	sort(mas, n);

	return 0;
}
void show_array(int Arr[], const int N)
{
	for (int i = 0; i < N; i++)
		cout << Arr[i] << " ";
	cout << "\n";
}

int sum_all(int Arr[], const int N)
{
	int s = 0;
	for (int i = 0; i < N; i++)
	{
		s += Arr[i];
	}
	return s;
}

int sum_negative(int Arr[], const int N)
{
	int  sum_negative = 0;
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] < 0)
			sum_negative += Arr[i];
		
	}
	return sum_negative;
}

int sum_positive(int Arr[], const int N)
{
	int sum_positive = 0;
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] > 0)
			sum_positive += Arr[i];
	}
	return sum_positive;
}

int sum_even_index(int Arr[], const int N)
{
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		if (i % 2 == false)
			sum += Arr[i];
	}
	return sum;
}

int sum_odd_index(int Arr[], const int N)
{
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		if (i % 2)
			sum += Arr[i];
	}
	return sum;
}

int max_element(int Arr[], const int N)
{
	int max = Arr[0];
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] > max)
			{
				max = Arr[i];
			}
	}
	return max;
}

int min_element(int Arr[], const int N)
{
	int min = Arr[0];
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] < min)
		{
			min = Arr[i];
		}
		
	}
	return min;
	
}


int index_of(int Arr[], const int N, int element)
{
	int index_of = 0;
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] == element)
		{
			index_of = i;
		}
	}
	return index_of;
}

int op_between_min_max(int Arr[], const int N)
{
	int indexMax = index_of(Arr, N, max_element(Arr, N));
	int indexMin = index_of(Arr, N, min_element(Arr, N));
	int op;

	if (indexMax == indexMin + 1 || indexMax + 1 == indexMin)
	{
		op = Arr[indexMin] * Arr[indexMax];
	}
	if (indexMin < indexMax)
	{
		op = Arr[indexMin];
		for (int i = indexMin + 1; i < indexMax; i++)
		{
			op *= Arr[i];
		}
	}
	else
	{
		op = Arr[indexMin];
		for (int i = indexMax + 1; i < indexMin; i++)
		{
			op *= Arr[i];
		}
		
	}
	return op;
}

void sort(int Arr[], const int N)
{
	int min = 0;
	int buf = 0;
	for (int i = 0; i < N; i++)
	{
		min = i;
		for (int j = i + 1; j < N; j++)
			min = (Arr[j] < Arr[min]) ? j : min;

		if (i != min)
		{
			buf = Arr[i];
			Arr[i] = Arr[min];
			Arr[min] = buf;
		}
	}	
	cout << "Отсортированный массив: ";	
	show_array(Arr, N);
}
    


