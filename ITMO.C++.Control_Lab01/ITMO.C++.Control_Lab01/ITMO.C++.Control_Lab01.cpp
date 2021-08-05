#include <iostream>
#include <windows.h>
#include<math.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int x1, x2, x3, x4, x5;
    int y1, y2, y3, y4, y5;
    cout.precision(3);
    double s;
    cout << "Введите координаты вершин пятиугольника" << endl;
    cout << "Первая вершина:\n";
    cin >> x1;
    cin >> y1;
    cout << "Вторая вершина:\n";
    cin >> x2;
    cin >> y2;
    cout << "Третья Вершина:\n";
    cin >> x3;
    cin >> y3;
    cout << "Четвертая вершина:\n";
    cin >> x4;
    cin >> y4;
    cout << "Пятая вершина:\n";
    cin >> x5;
    cin >> y5;
    s = abs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5) / 2;
    cout << "Площадь пятиугольника равна: " << s << endl;

    return 0;
}

