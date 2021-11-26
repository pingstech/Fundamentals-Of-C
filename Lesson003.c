/*
 * @file:       Lesson001.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    For Loop
 * @date:       2021-11-26
 */
#include<stdio.h>

int main()
{
    int numLow,numHigh;

    //Get input from user for min number
    printf("Please enter a number: ");
    scanf("%d",&numLow);

    //Get input from user for max number
    printf("Please enter a number: ");
    scanf("%d",&numHigh);

    printf("Values between %d and %d is:",numLow,numHigh);
    for(numLow;numLow<numHigh;numLow++)
    {
        printf(" %d",numLow);
    }

    
    return 0;
}