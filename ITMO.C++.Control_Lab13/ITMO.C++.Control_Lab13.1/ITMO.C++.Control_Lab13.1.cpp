#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"
#include <Windows.h>

using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	human* arr[5];
	int n = 0;
	char choice;
	do {
		cout << "\n1. Студент или 2. Преподаватель? ";
		cin >> choice;
		if (choice == '1')
			arr[n] = new student;
		else
			arr[n] = new teacher;
		arr[n++]->get_data();
		cout << "Продолжаем? (д/н): ";
		cin >> choice;
	} while (choice == 'д');
	for (int j = 0; j < n; j++)
		arr[j]->put_data();
	cout << endl;
	return 0;
}