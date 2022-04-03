#include<stdio.h>
#include "smallest_digit.c"
void main(){
    int n,i,num;
    printf("Enter the n value:");
    scanf(" %d",&n);
    for(i=0; i<n; i++){
        printf("Enter the number:");
        scanf(" %d",&num);
        printf(" %d",FindSmallest(num));
    }
}