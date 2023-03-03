#pragma once
#include "Triangle.h"

#ifndef ClassHieDllLibHW114_EXPORTS
#define Figure_API __declspec(dllexport)
#else
#define Figure_API __declspec(dllimport)
#endif
class IsoscelesTriangle : public Triangle
{
public:
	Figure_API IsoscelesTriangle(int size_ac, int b_, int size_AC, int B_);//Конструктор класса
};

