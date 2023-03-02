#pragma once
#include "Quadrangle.h"

#ifndef ClassHieDllLibHW11.4_EXPORTS
#define RectangleF_API __declspec(dllexport)
#else
#define RectangleF_API __declspec(dllimport)
#endif

class RectangleF : public Quadrangle
{
public:
	RectangleF_API RectangleF(int a_, int b_);
};

