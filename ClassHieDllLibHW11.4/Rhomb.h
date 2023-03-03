#pragma once
#include "Quadrangle.h"

#ifndef ClassHieDllLibHW114_EXPORTS
#define Figure_API __declspec(dllexport)
#else
#define Figure_API __declspec(dllimport)
#endif

class Rhomb : public Quadrangle
{
public:
    Figure_API Rhomb(int a_, int A_, int B_);
};

