#pragma once
#include "complex.h"
#include "fractal.h"

class Julia: public Fractal{
    complex c;

    public:
        Julia(complex c, Fractal f): c(c), Fractal(f){};
};