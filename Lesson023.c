/*
 * @file:       Lesson023.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    Calculating GCD
 * @date:       2021-12-04
 */

#include<stdio.h>

int gcd(int num1, int num2)
{
    int temp;

    //  We divide the numbers until they are not divisible by each other, and when they become indivisible, the divisor is GCD   
    while(num2!=0)
    {
        temp=num1%num2;
        num1=num2;
        num2=temp;
    }
    
    return num1;
}

int main()
{
    int num1,num2,result=0;

    printf("\nPlease enter first number: ");
    scanf("%d",&num1);
    printf("\nPlease enter second number: ");
    scanf("%d",&num2);
    result=gcd(num1,num2);

    printf("The GDC of %2.d and %2.d is %2.d",num1,num2,result);

    return 0;
}