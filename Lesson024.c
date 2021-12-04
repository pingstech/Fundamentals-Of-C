/*
 * @file:       Lesson024.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    Calculatıing Square Root
 * @date:       2021-12-05
 */

#include<stdio.h>

float absoluteValue(float num)
{
    if(num<0)
        num=-num;

    else
        return num;

    return num;
}

float squareRoot(float num)
{
    const float epsilon=.00001;         // To Make sure it's within a certain range
    float guess=1.0;
    float returnValue=0.0;
    
    if(num<0)
    {
        printf("Negative argument to square root.\n");
        returnValue=-1.0;
    }

    else
    {
        while(absoluteValue(guess*guess-num)>=epsilon)
        {
            guess=(num/guess+guess)/2.0;
        }

        returnValue=guess;
    }
    return returnValue;
}

int main()
{
    int number;

    printf("\nPlease enter first number: ");
    scanf("%d",&number);

    printf("\n Root of %d is %.2f",number,squareRoot(number));
    return 0;
}