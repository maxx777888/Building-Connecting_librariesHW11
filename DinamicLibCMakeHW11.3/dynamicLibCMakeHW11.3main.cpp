#include <iostream>
#include <Windows.h>
#include"Leaver.h"

int main()
{
    //Необходимые настройки консоли, для правильной работы с русским языком.
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    std::string name;
    std::cout << "Введите имя:" << std::endl;
    std::cin >> name;
    Leaver l(name);
}


