#pragma once
#include "Triangle.h"

#ifndef ClassHieDllLibHW11.4_EXPORTS
#define Triangle_API __declspec(dllexport)
#else
#define Triangle_API __declspec(dllimport)
#endif

class EquilateralTriangle : public Triangle
{
public:
	Triangle_API EquilateralTriangle(int sizes);//Конструктор класса
};

