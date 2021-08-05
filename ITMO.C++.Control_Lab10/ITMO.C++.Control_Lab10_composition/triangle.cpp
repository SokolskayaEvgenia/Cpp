#include <tuple>
#include "triangle.h"
#include "dot.h"
#include <math.h>

using namespace std;

Triangle::Triangle(Dot pa, Dot pb, Dot pc) : a(pa), b(pb), c(pc)
{

}

tuple<double, double, double> Triangle::getSides()
{
	double side1 = a.distanceTo(b);
	double side2 = b.distanceTo(c);
	double side3 = c.distanceTo(a);
	return make_tuple(side1, side2, side3);
}

double Triangle::getPerimetr()
{
	auto sides = Triangle::getSides();
	return (get<0>(sides) + get<1>(sides) + get<2>(sides));
}

double Triangle::getSquare()
{
	return abs((a.x - c.x) * (b.y - c.y) - (b.x - c.x) * (a.y - c.y)) / 2;
}