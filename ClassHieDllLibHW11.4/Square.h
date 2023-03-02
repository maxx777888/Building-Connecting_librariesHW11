#pragma once
#include"Quadrangle.h"

#ifndef ClassHieDllLibHW11.4_EXPORTS
#define Square_API __declspec(dllexport)
#else
#define Square_API __declspec(dllimport)
#endif

class Square : public Quadrangle
{
public:
	Square_API Square(int a_);
};

