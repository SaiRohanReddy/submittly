// #include "unity.c"
// #include "testcalc.c"
#include<math.h>
int compute(char* str1){
    int num1 = str1[0]-'0';
    int num2 = str1[2]-'0';
    if(str1[1] == '+'){
         return num1+num2;
    }
    if(str1[1]=='*'){
        return num1*num2;
    }
    if(str1[1]=='-'){
        return num1-num2;
    }
    if(str1[1]=='/'){
        if(num2==0){
            return 0;
        }else{
        return round((float)num1/(float)num2);
        }
    }
    return 0;
}