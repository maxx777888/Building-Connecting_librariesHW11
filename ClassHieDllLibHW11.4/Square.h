#pragma once
#include"Quadrangle.h"

#ifndef ClassHieDllLibHW114_EXPORTS
#define Figure_API __declspec(dllexport)
#else
#define Figure_API __declspec(dllimport)
#endif

class Square : public Quadrangle
{
public:
	Figure_API Square(int a_);
};

