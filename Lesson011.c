/*
 * @file:       Lesson011.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    Array operation
 * @date:       2021-11-28
 */

#include<stdio.h>

int main()
{   
    int grades[10];         // Array storing 10 values.
    int count=10;           // Number of values to be read.
    long sum=0;             // Sum of the numbers.
    float average=0.0;      // Average of the numbers.
    int i;

    printf("\nEnter the 10 grades:\n");      // Prompt for the input.
    
    // Read the ten numbers to be averaged
    for(i=0;i<count;i++)
    {
        printf("%2u>",i+1);
        scanf("%d",&grades[i]);
        sum+=grades[i];
    }
    
    average=(float)sum/count;               // Average

    printf("\nAverage of the ten grafes entered is: %.2f\n",average);

    return 0;
}