#pragma once
#include "Triangle.h"

#ifndef ClassHieDllLibHW11.4_EXPORTS
#define RightTriangle_API __declspec(dllexport)
#else
#define RightTriangle_API __declspec(dllimport)
#endif

class RightTriangle : public Triangle
{
public:
    RightTriangle_API RightTriangle(int a_, int b_, int c_, int A_, int B_);//Конструктор класса  
};

