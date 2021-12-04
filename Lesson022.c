/*
 * @file:       Lesson022.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    Global and Local Variables
 * @date:       2021-12-04
 */

#include<stdio.h>

int GlobalVariable=123;         //Global variable

void myFunction()
{
    int functionLocalVariable=456;   //Local variable
    
    /*  Can access GlobalVariable and functionLocalVariable
        Cannot access mainLocalVariable  */

    printf("%d\n",functionLocalVariable);
}

int main()
{
    int mainLocalVariable=789;      //Local variable

    /*  Can access GlobalVariable and mainLocalVariable
    Cannot access functionLocalVariable (If the function is void type)  */
    
    printf("Global Variable is %d\n",GlobalVariable);
    printf("Function Local Variable is ");
    myFunction();
    printf("Main Local Variable is %d\n",mainLocalVariable);
    return 0;
}