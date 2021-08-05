#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <tuple>
#include "dot.h"

using namespace std;

class Triangle {
	Dot* a;
	Dot* b;
	Dot* c;
public:
	Triangle(Dot*, Dot*, Dot*);
	tuple<double, double, double> getSides();
	double getPerimetr();
	double getSquare();
};

#endif // TRIANGLE_H