#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

   ofstream out("\Poems.txt", ios::out | ios::binary);
    if (!out) 
    {
        cout << "Файл открыть невозможно\n";
        return 1;
    }
    cout << "Введите текст стихотворения. Для завершения оставьте пустую строку." << endl;
    string line = "init";
    while (line != "")
    {
        getline(cin, line);
        out << line << endl;
    }

    out.close();


    return 0;
}

