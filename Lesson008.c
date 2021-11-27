/*
 * @file:       Lesson008.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    Do while loop example
 * @date:       2021-11-27
 */

#include<stdio.h>

int main()
{   
    int num,sum=0;

            printf("When you want to see the summary of the numbers please press 0\n");
    do
    {
        printf("Please enter number for add: ");
        scanf("%d",&num);
        sum+=num;
    } while (num!=0);
    
    printf("Sum of the numbers: %2.0d",sum);

    return 0;
}