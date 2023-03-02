#pragma once
#include "Triangle.h"

#ifndef ClassHieDllLibHW11.4_EXPORTS
#define IsoscelesTriangle_API __declspec(dllexport)
#else
#define IsoscelesTriangle_API __declspec(dllimport)
#endif
class IsoscelesTriangle : public Triangle
{
public:
	IsoscelesTriangle_API IsoscelesTriangle(int size_ac, int b_, int size_AC, int B_);//Конструктор класса
};

