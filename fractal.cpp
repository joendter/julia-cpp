#include "fractal.h"

CImg<uint32_t> Fractal::render(){
    CImg<uint32_t> result(width, height, 1, 1, 0);
    cimg_forXY(result, x,y){
        result(x,y,0) = getValue(x,y);
    }
    return result;
};