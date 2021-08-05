
#include <iostream>
#include <math.h>
#include <windows.h>


using namespace std;

struct Point
{
    double x;
    double y;
}; 

double side_length(Point A, Point B)
{
    double length = sqrt(pow((B.y - A.y), 2) + pow((B.x - A.x), 2));
        return length;
}

double triangle_square(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    double square = sqrt(p * (p - a) * (p - b) * (p - c));
    return square;
}
    
 


int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double AB, BC, AC, CD, DE, EC, AE;
    double ABC_square, CDE_square, ACE_square, ABCDE_square;

    Point A = { 3.2,8 };
    Point B = { 2, 5 };
    Point C = { 5, 2 };
    Point D = { 9, 4 };
    Point E = { 8, 7 };

    AB = side_length(A, B);
    BC = side_length(B, C);
    AC = side_length(A, C);
    CD = side_length(C, D);
    DE = side_length(D, E);
    EC = side_length(E, C);
    AE = side_length(A, E);

    ABC_square = triangle_square(AB, BC, AC);
    CDE_square = triangle_square(CD, DE, EC);
    ACE_square = triangle_square(EC, AE, AC);

    ABCDE_square = ABC_square + CDE_square + ACE_square;
    cout.precision(3);
    cout << "Площадь выпуклого пятиугольника равна: " << ABCDE_square << endl;

    return 0;
}

