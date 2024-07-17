#pragma once
#include "CImg/CImg.h"
#include <stdint.h>
using namespace cimg_library;

class Fractal{
    uint32_t depth;
    uint32_t width;
    uint32_t height;
    double scale;

    public:
       CImg<uint32_t> render() const;
       virtual uint32_t getValue(uint32_t x, uint32_t y) const {return 0;};
       Fractal( uint32_t depth, uint32_t width, uint32_t height, double scale): depth(depth), width(width), height(height), scale(scale){};
};