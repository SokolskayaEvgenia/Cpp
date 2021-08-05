#include <iostream>
#include <math.h>
#include <windows.h>
#include <string>
using namespace std;


struct Time
    {
        int hours;
        int minutes;
        int seconds;
    
        void ShowTime()
        {
            cout << hours << "ч-" << minutes << "м-" << seconds << "с\n";
        }

        Time sum(Time first, Time second)
        {
            Time sum;
            int firstTime = time_in_seconds(first);
            int secondTime = time_in_seconds(second);
            int sumTime = firstTime + secondTime;
            sum.hours = sumTime / 3600;
            sumTime = sumTime % 3600;
            sum.minutes = sumTime / 60;
            sumTime = sumTime % 60;
            sum.seconds = sumTime;

            return sum;
        }

        Time diff(Time first, Time second)
        {
            Time diff;
            int firstTime = time_in_seconds(first);
            int secondTime = time_in_seconds(second);
            int diffTime = abs(firstTime - secondTime);

            diff.hours = diffTime / 3600;
            diffTime = diffTime % 3600;
            diff.minutes = diffTime / 60;
            diffTime = diffTime % 60;
            diff.seconds = diffTime;
            return diff;
        }
        
        int time_in_seconds(Time T)
        {
            int t = T.hours * 3600 + T.minutes * 60 + T.seconds;
            return t;
        }
};

int time_in_seconds(Time T)
        {
            int t = T.hours * 3600 + T.minutes * 60 + T.seconds;
            return t;
        }

Time InputTime()
{
    Time t;
    cout << "\nВведите количество часов: " << endl;
    cin >> t.hours;
    cout << "Введите количество минут: " << endl;
    cin >> t.minutes;
    cout << "Введите количество секунд: " << endl;
    cin >> t.seconds;
    return t;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Time t1 = InputTime();
    cout << "\nВведенное время: ";
    t1.ShowTime();
    int n = time_in_seconds(t1);
    cout << "Время в секундах:  " << n << endl;
    Time t2 = InputTime();
    cout << "\nВторое введенное время: ";
    t2.ShowTime();
    int k = time_in_seconds(t2);
    cout << "Время в секундах:  " << k << endl;
    Time t3;
    t3 = t3.sum(t1, t2);
    cout << "\nСуммарное время: " << endl;
    t3.ShowTime();
    Time t4;
    t4 = t4.diff(t1, t2);
    cout << "\nРазница времени: " << endl;
    t4.ShowTime();

    return 0;
}



    

       
