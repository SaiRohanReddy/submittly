#include<stdio.h>
void main(){
    double val = 5.6;
    double *p1,*p2,*p3;
    p1 = &val;
    p2 = p1+5;
    p3=p1-10;
    printf(" %u,%u\n",p2,p3);
}