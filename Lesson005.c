/*
 * @file:       Lesson005.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    Infinite loop and break statement
 * @date:       2021-11-26
 */
#include<stdio.h>

int main()
{
    int number;
    while(1)
    {
        printf("Please enter a value: ");
        scanf("%d",&number);

        if(number < 0)
            break;
        else
            printf("Square of %d is: %.3lf\n",number,(number*0.5));
            break;
    }
    return 0;
}