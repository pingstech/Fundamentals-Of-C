/*
 * @file:       Lesson004.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    If Loop
 * @date:       2021-11-26
 */
#include<stdio.h>

int main()
{
    int number;

    //Get input from user for the number
    printf("Please enter a number: ");
    scanf("%d",&number);
    
    if(number < 0)
        printf("Number is negative"); 
    else if(number == 0)
        printf("Number is zero"); 
    else
        printf("Number is positive"); 
    
    return 0;
}