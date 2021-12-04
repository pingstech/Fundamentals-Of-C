/*
 * @file:       Lesson021.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    Returning Data From Frunction
 * @date:       2021-12-04
 */

#include<stdio.h>

//Creating function that returns an int type
int multiplyTwoNumbers(int temp1,int temp2)
{
    int result=temp1*temp2;
    return result;;
}

int main()
{
    int result=0;
    result=multiplyTwoNumbers(10,20);
    printf("Result is %d\n",result);

    return 0;
}