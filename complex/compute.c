#include "complex.h"
complex_t complex_sum(complex_t c1, complex_t c2){
    complex_t temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
complex_t complex_difference(complex_t c1, complex_t c2){
    complex_t temp;
    temp.real = c1.real - c2.real;
    temp.img = c1.img - c2.img;
    return temp;
}
complex_t complex_multiply(complex_t c1, complex_t c2){
    complex_t temp;
    temp.real = c1.real*c2.real - c1.img*c2.img;
    temp.img = c1.img*c2.real + c2.img*c1.real;
    return temp;
}
complex_t complex_divide(complex_t c1, complex_t c2){
    complex_t temp;
    float x,y,z;
    if(c2.real == 0 && c2.img == 0){
        return c2;
    }
        x = c1.real*c2.real + c1.img*c2.img;
        y = c1.img*c2.real - c1.real*c2.img;
        z = c2.real*c2.real + c2.img*c2.img;
       
        temp.real = x/z;
        temp.img = y/z;
        return temp;
        //printf("%f",temp.real);
}