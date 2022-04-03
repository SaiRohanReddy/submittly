#include "smallest_digit.h"
int digit;
int min(int a,int b){
    return (a < b) ? a : b;
}
int FindSmallest(int InputNumber){
int smallDigit = __INT_MAX__;
while(InputNumber != 0){
        digit = InputNumber % 10;
        smallDigit = min(smallDigit,digit);
        InputNumber = InputNumber / 10;
    }
    return smallDigit;
}