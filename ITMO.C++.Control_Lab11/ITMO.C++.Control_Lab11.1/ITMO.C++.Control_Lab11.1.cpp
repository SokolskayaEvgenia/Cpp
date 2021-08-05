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
	double b = 7;

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
		cout << "Время: " << hours << ":" << minutes << ":" << seconds << endl;
	}

	void Normalize_Time() {

		while (seconds > 60)
		{
			minutes += (seconds / 60);
			seconds = seconds % 60;
		}
		while (minutes > 60)
		{
			hours += (minutes / 60);
			minutes = minutes % 60;
		}
		while (seconds < -60)
		{
			minutes -= abs(seconds / 60);
			seconds = seconds % 60;
		}
		while (seconds < 0 && seconds > -60)
		{
			seconds = 60 - abs(seconds);
		}
		while (minutes < -60)
		{
			hours -= abs(minutes / 60);
			minutes = minutes % 60;
		}
		while (minutes < 0 && minutes > -60)
		{
			minutes = 60 - abs(minutes);
		}

	}

	Time sum_time(Time t1, Time t2)
	{
		hours = t1.hours + t2.hours;
		minutes = t1.minutes + t2.minutes;
		seconds = t1.seconds + t2.seconds;
		Normalize_Time();
		Time t = Time(hours, minutes, seconds);
		return t;
	}

	Time operator+ (Time& t1);
	Time operator- (Time& t1);
	Time operator+ (double hrs);
	
};

Time Time::operator+ (Time& t1) {
	seconds = seconds + t1.seconds;
	minutes = minutes + t1.minutes;
	hours = hours + t1.hours;
	Normalize_Time();
	return Time(hours, minutes, seconds);
}

Time Time::operator+ (double hrs)
{
	hours = hours + hrs;
	Normalize_Time();
	return Time(hours, minutes, seconds);
}

double operator+ (double a, const Time& t1)
{
	return a + t1.b;
}

Time Time::operator- (Time& t1) {

	seconds = seconds - t1.seconds;
	minutes = minutes - t1.minutes;
	hours = hours - t1.hours;
	Normalize_Time();
	return Time(hours, minutes, seconds);
}

bool operator> (const Time& t1, const Time& t2)
{
	if (t1.hours > t2.hours)
	{
		return true;
	}
	return false;
}


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
	Time t4;
	t4 = t1 - t2;
	t4.show_time();
	Time t5(3, 23, 38);
	t5 = t5 + 5;
	t5.show_time();
	cout << 5.0 + t5 << endl;
	if (t5 > t1)
	{
		cout << "t5 > t1";
	}
	else
		cout << "t5 <= t1";
	return 0;
}

