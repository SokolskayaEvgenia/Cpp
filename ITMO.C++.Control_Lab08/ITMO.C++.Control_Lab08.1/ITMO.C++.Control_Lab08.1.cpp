#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

class Time
{

public:
	int hours;
	int minutes;
	int seconds;

	Time()
	{
		hours = 0;
		minutes = 0;
		seconds = 0;
	}

	Time(int hrs, int min, int sec)
	{
		hours = hrs;
		minutes = min;
		seconds = sec;
		while (seconds / 60 >= 1)
		{
			minutes += (seconds / 60);
			seconds = seconds % 60;
		}
		while (minutes / 60 >= 1)
		{
			hours += (minutes / 60);
			minutes = minutes % 60;
		}
	}

	void show_time() const
	{
		cout <<"Время: " << hours << ":" << minutes << ":" << seconds << endl;
	}

	Time sum_time(Time t1, Time t2) 
	{
		hours = t1.hours + t2.hours;
		minutes = t1.minutes + t2.minutes;
		seconds = t1.seconds + t2.seconds;
		while (seconds / 60 >= 1)
		{
			minutes += (seconds / 60);
			seconds = seconds % 60;
		}
		while (minutes / 60 >= 1)
		{
			hours += (minutes / 60);
			minutes = minutes % 60;
		}
		Time t = Time(hours, minutes, seconds);

		return t;
	}

};

int main()
{

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Time t1(5, 35, 29);
	t1.show_time();
	Time t2(3, 84, 126);
	t2.show_time();
	Time t3;
	t3.sum_time(t1, t2);
	t3.show_time();
   return 0;
}

