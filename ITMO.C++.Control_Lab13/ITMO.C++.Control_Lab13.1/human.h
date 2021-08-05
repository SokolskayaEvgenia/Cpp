#pragma once
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
class human {
public:
	virtual void get_data() {
		cout << "Фамилия: ";
		cin >> last_name;
		cout << "Имя: ";
		cin >> name;
		cout << "Отчество: ";
		cin >> second_name;
	}
	virtual void put_data() {
		cout << "Ф.И.О.: " << last_name << " " << name << " " << second_name << endl;
	}
private:
	string name;
	string last_name;
	string second_name;
};