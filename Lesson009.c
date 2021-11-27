/*
 * @file:       Lesson009.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    Continue and break statement
 * @date:       2021-11-27
 */

#include<stdio.h>

int main()
{   
    int num,temp=3,password=45231;

    while (1)
    {
        printf("Please enter a number");
        scanf("%d",&num);
        if(num != password)
        {
            temp--;
            printf("Remaining login attempts %d\n",temp);
            if(temp!=0)
                continue;
            else
                break;
        }
        else
        {
            printf("Password Correct!");
            break;
        }
    }

    return 0;
}