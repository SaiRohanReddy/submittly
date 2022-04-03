#include "string_to_date.h"
#include "unity.h"
#include<stdio.h>
int date,month,year;
int i=0;
error_t string_to_date_converter(char* input_string, my_date_t* result_date){
    if(input_string == NULL || result_date == NULL){
        // printf("0");
        return NULL_PTR;
    }

    if((result_date[0].date > 31 || result_date[0].date <= 0) || (result_date[0].month > 12 || result_date[0].month <= 0) || (result_date[0].year <= 0)){
        // printf("-1");
        return INCORRECT;
    }else{
        // printf("1");
        return SUCCESS;
    
    }
    
    
}
int str2date(char* input){
    char *dates[2];
    dates[i] = strtok(input,"/");
    while(dates[i] != NULL){
        dates[++i] = strtok(NULL,"/");        
    }
    date = atoi(dates[0]);
    month = atoi(dates[1]);
    year = atoi(dates[2]);
    my_date_t* converted_date;
    converted_date->date = date;
    converted_date->month = month;
    converted_date->year = year;
}
