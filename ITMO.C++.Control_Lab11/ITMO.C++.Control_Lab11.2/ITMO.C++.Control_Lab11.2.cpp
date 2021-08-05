#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // для алгоритма сортировки

using namespace std;

class Point
{
public:
	double x;
	double y;
	double l;

	Point(double x, double y)
	{
		this->x = x;
		this->y = y;
		l = sqrt(pow(this->x, 2) + pow(this->y, 2));
	}
};

bool operator> (const Point& p1, const Point& p2)
{
	if (p1.l > p2.l)
	{
		return  true;
	}
	return false;
}

bool operator< (const Point& p1, const Point& p2)
{
	if (p1.l < p2.l)
	{
		return  true;
	}
	return false;
}

ostream& operator<< (ostream& out, const Point& p1)
{
	out << "Point(" << p1.x << ", " << p1.y << ")";

	return out;
}


int main()
{
	vector<Point> v;
	v.push_back(Point(1, 2));
	v.push_back(Point(10, 12));
	v.push_back(Point(21, 7));
	v.push_back(Point(4, 8));
	sort(v.begin(), v.end()); // требуется перегрузка оператора < для // класса Point
	for (auto& point : v)
		cout << point << '\n'; // требуется перегрузка оператора << для // класса Point
	return 0;
}