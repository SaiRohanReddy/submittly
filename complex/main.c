#include<stdio.h>
#include "compute.c"
void main(){
    complex_t c1,c2,result;
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f %f %f", &c1.real, &c1.img, &c2.real, &c2.img);
    result = complex_difference(c1,c2);
    printf("SUM = %.3f+i%.3f\n", result.real, result.img);
}