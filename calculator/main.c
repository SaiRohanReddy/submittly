#include <stdio.h>
#include "calc.c"
void main(){
    
    char str[10];
    gets(str);
    printf(" %d",compute(str));

}