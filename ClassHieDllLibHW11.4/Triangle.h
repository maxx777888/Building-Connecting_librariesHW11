#pragma once
#include "Figure.h"

#ifndef ClassHieDllLibHW11.4_EXPORTS
#define Triangle_API __declspec(dllexport)
#else
#define Triangle_API __declspec(dllimport)
#endif


class Triangle : public Figure//Создаем базовый класс Треугольник 
{
public:
    Triangle();//Пустой конструктор
    Triangle_API Triangle(int a_, int b_, int c_, int A_, int B_, int C_); //Конструктор базового класса 
    //Методы для получения информации о значении сторон и углов треугольника
    int get_a();//Метод возвращает значение стороны a
    int get_b();//Метод возвращает значение стороны b
    int get_c();//Метод возвращает значение стороны c
    int get_A();//Метод возвращает значение угла A
    int get_B();//Метод возвращает значение угла B
    int get_C();//Метод возвращает значение угла C

    //Переписанный метод для вывода значений на экран экземляров класса Треугольник
    void printInfo() override;
   
protected:
    int a, b, c;//Хранение сторон
    int A, B, C;//Хранение углов
};

