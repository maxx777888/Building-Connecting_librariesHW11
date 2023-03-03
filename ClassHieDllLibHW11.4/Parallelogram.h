#pragma once
#include "Quadrangle.h"

#ifndef ClassHieDllLibHW114_EXPORTS
#define Figure_API __declspec(dllexport)
#else
#define Figure_API __declspec(dllimport)
#endif

class Parallelogram : public Quadrangle
{
public:
	Figure_API Parallelogram(int a_, int b_, int A_, int B_);//Конструктор класса
};

