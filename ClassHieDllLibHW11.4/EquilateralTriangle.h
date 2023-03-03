#pragma once
#include "Triangle.h"

#ifndef ClassHieDllLibHW11_EXPORTS
#define Figure_API __declspec(dllexport)
#else
#define Figure_API __declspec(dllimport)
#endif

class EquilateralTriangle : public Triangle
{
public:
	Figure_API EquilateralTriangle(int sizes);//Конструктор класса
};

