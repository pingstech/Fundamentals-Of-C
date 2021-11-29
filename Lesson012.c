/*
 * @file:       Lesson011.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    Array operation
 * @date:       2021-11-29
 */

#include<stdio.h>

int main(void)
{   
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};         //Storing numerical value in integer array
    int index;

    for(index=0;index<12;index++)
    {
        printf(" %2d has %2d days.\n",index+1,days[index]);
    }

    return 0;
}