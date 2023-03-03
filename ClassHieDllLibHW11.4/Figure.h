#pragma once
#include <string>

#ifndef ClassHieDllLibHW114_EXPORTS
#define Figure_API __declspec(dllexport)
#else
#define Figure_API __declspec(dllimport)
#endif

class Figure //Базовый Класс Фигура
{
public:
    //Метод возвращает название фигуры
    std::string get_name();
    //Виртуальный метод для вывода значений на экран
    virtual void printInfo() = 0;

protected:
    std::string name = "Фигура";//Хранение название фигуры 
};
//Функция, выводит на экран значения, наследуемого класса от базового класса Фигуры
Figure_API void print_info(Figure* x);