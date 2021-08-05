
#include <iostream>
#include <math.h>
#include <windows.h>
#include <string>
using namespace std;

string Convert10to2(unsigned int num, string res)
{
    if (num < 2)
    {
        if (num == 0)
            res.append("0");
        else
            res.append("1");

        // реверсирование строки res и возврат результата
        string res2 = "";
        for (int i = res.length() - 1; i >= 0; i--)
            res2.push_back(res[i]);
        return res2;
    }
    else
    {
        if (num % 2 == 0)
            res.append("0");
        else
            res.append("1");
        return Convert10to2((unsigned int)num / 2, res); // перейти на следующий шаг
    }
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "Введите число для перевода в двоичную систему: " << endl;
    unsigned int num;
    cin >> num;
    string result;
    string s = "";
    cout << num << " = " << Convert10to2(num, s) << endl;
    return 0;
}

