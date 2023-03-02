#pragma once
#include "Quadrangle.h"

#ifndef ClassHieDllLibHW11.4_EXPORTS
#define Parallelogram_API __declspec(dllexport)
#else
#define Parallelogram_API __declspec(dllimport)
#endif

class Parallelogram : public Quadrangle
{
public:
	Parallelogram_API Parallelogram(int a_, int b_, int A_, int B_);//Конструктор класса
};

