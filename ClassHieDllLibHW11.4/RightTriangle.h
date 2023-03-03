#pragma once
#include "Triangle.h"

#ifndef ClassHieDllLibHW114_EXPORTS
#define Figure_API __declspec(dllexport)
#else
#define Figure_API __declspec(dllimport)
#endif

class RightTriangle : public Triangle
{
public:
    Figure_API RightTriangle(int a_, int b_, int c_, int A_, int B_);//Конструктор класса  
};

