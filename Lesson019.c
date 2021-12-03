/*
 * @file:       Lesson019.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    Void Function
 * @date:       2021-12-04
 */

#include<stdio.h>


//creating function 
void addFunction(int temp1, int temp2)      // we use void function if we don't need value to return our main function
{
    printf("The sum of the %2.d and %2.d is equals to %d\n",temp1,temp2,(temp1+temp2));
}

int main()
{ 
    int number1,number2;

    printf("Enter first number for sum: ");
    scanf("%d",&number1);

    printf("Enter second number for sum: ");
    scanf("%d",&number2);

    addFunction(number1,number2);       //Calling "addFunction"

    return 0;
}