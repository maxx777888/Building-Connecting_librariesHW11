#pragma once
#include "Quadrangle.h"

#ifndef ClassHieDllLibHW11.4_EXPORTS
#define Rhomb_API __declspec(dllexport)
#else
#define Rhomb_API __declspec(dllimport)
#endif

class Rhomb : public Quadrangle
{
public:
    Rhomb_API Rhomb(int a_, int A_, int B_);
};

