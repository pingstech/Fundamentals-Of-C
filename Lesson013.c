/*
 * @file:       Lesson011.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    Array operation-2
 * @date:       2021-11-29
 */

#include<stdio.h>

#define MONTHS 12

int main(void)
{   
    int days[MONTHS]={31,28,31,30,31,30,31,31,30,31,30,31};         //Storing numerical value in integer array
    char month[][MONTHS]={"January","February","March","April","May","June","July","August","September","October","November","December"};       //Storing string in char array
    int index;

    for(index=0;index<MONTHS;index++)
    {
        printf(" %10s has %2d days.\n",month[index],days[index]);
    }

    return 0;
}