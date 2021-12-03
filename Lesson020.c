/*
 * @file:       Lesson020.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    Void Function-2
 * @date:       2021-12-04
 */

#include<stdio.h>

//creating functions
void addFunction(int temp1, int temp2)      // we use void function if we don't need value to return our main function
{
    printf("Sum of %2.d and %2.d is equals to %d\n",temp1,temp2,(temp1+temp2));
}

void subFunction(int temp1, int temp2)      // we use void function if we don't need value to return our main function
{
    printf("Subtract of %2.d and %2.d is equals to %d\n",temp1,temp2,(temp1-temp2));
}

void mulFunction(int temp1, int temp2)      // we use void function if we don't need value to return our main function
{
    printf("Product of %2.d and %2.d is equals to %d\n",temp1,temp2,(temp1*temp2));
}

void divFunction(int temp1, int temp2)      // we use void function if we don't need value to return our main function
{
    printf("Division of %2.d and %2.d is equals to %d\n",temp1,temp2,(temp1/temp2));
}


int main()
{ 
    int number1,number2,choice;

    printf("\nPress 1 for addition\n");
    printf("\nPress 2 for substraction\n");
    printf("\nPress 3 for Multiple\n");
    printf("\nPress 2 for Division\n");

    //Select operation
    printf("\n\nPlease select the operation: ");
    scanf("%d",&choice);

    //Getting number from user
    printf("Enter first number: ");
    scanf("%d",&number1);
    printf("Enter second number: ");
    scanf("%d",&number2);

    //Desicion loop for operation
    if(choice==1)
        addFunction(number1,number2);
    else if(choice==2)
        subFunction(number1,number2);
    else if(choice==3)
        mulFunction(number1,number2);
    else if(choice==4)
        divFunction(number1,number2);
    else
        printf("Invalid Operation...");

    return 0;
}