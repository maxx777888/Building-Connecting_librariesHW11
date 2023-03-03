#pragma once
#include "Quadrangle.h"

#ifndef ClassHieDllLibHW114_EXPORTS
#define Figure_API __declspec(dllexport)
#else
#define Figure_API __declspec(dllimport)
#endif

class RectangleF : public Quadrangle
{
public:
	Figure_API RectangleF(int a_, int b_);
};

