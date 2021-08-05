#pragma once
#include "human.h"
#include <string>
using namespace std;

class teacher : public human {
public:
	void get_data()
	{
		human::get_data();
		cout << "Время работы: ";
		cin >> work_time;
	}
	void put_data() {
		human::put_data();
		cout << "Время работы: " << work_time;
	}

private:
	unsigned int work_time;
};
