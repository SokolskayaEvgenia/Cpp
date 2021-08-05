
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

struct Shot
{
    double x;
    double y;
    double points;
};



int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Shot S; // бросок
    int shots; // кол-во бросков
    int Points = 0; // итоговая сумма очков
    int i = 0; // счетчик бросков
    int max_point; // планируемое максимальное кол-во очков
    cout << "Введите планируемое кол-во бросков|очков: \n";
    //cin >> shots;
    cin >> max_point;
    while (Points <= max_point)
    //while (i < shots)
    {
        cout << "Введите координаты броска (х,у): ";
        cin >> S.x >> S.y;
        S.points = pow(S.x, 2) + pow(S.y, 2); // попадание в окружность, граница включается

        if (S.points <= 1)
        {
            cout << "Попали! 10 очков\n";
            Points += 10;
            i++;
        }
        else if (S.points > 4)
        {
            cout << "Мимо! 0 очков\n";
            Points += 0;
            i++;
        }
        else
        {
            cout << "Попали! 5 очков\n";
            Points += 5;
            i++;
        }
    }
    cout << "За " << i << " бросков Вы набрали " << Points << " очков. Поздравляем!" << endl;
    if (Points / i < 5)
        cout << "Вы новичок";
    else if(Points/i >=5 and Points/i <9)
        cout << "Вы просто стрелок";
    else
        cout << "Вы снайпер";
    return 0;
}

