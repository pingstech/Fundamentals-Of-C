/*
 * @file:       Lesson001.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    While Loop
 * @date:       2021-11-26
 */
#include<stdio.h>

int main()
{
    int numLow,numHigh;

    //Get input from user for min number
    printf("Please enter a number");
    scanf("%d",&numLow);

    //Get input from user for max number
    printf("Please enter a number");
    scanf("%d",&numHigh);

    printf("Values between %d and %d is:",numLow,numHigh);

    //While loop
    while (numLow<numHigh)
    {
        printf(" %d",numLow);
        numLow++;
    }

    return 0;
}