#include <iostream>
#include <fstream>
#include <math.h>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
	const int N = 10;
	int Arr[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
	int min = 0; 
	int buf = 0; 

	ofstream out("\Arrays.txt", ios::out | ios::binary); 
	out << "Исходный массив: " << "\n";
	for (int i : Arr)
	{
		if (out.is_open())
		{
			out << i << "  ";

		}
	}
	out << "\n";

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
	out << "Отсортированный массив: " << "\n";
	for (int i : Arr)
	{
		if (out.is_open())
		{
			out << i << "  ";
		}
	}

	out << "\n";
}

