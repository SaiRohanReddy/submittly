#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "string_to_date.c"
//#include "test_string_to_date.c"
//#include "unity.h"
//#include "unity.c"
//#include "unity_internals.h"
void main(){
    char str[20];
    int dmy;
    scanf("%s",str);
    str2date(str);
}