/*
 * @file:       Lesson005.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    Calculate the area of a cricle with 2 ways
 * @date:       2021-11-26
 */
#include<stdio.h>

                    /*BASİC WAYS*/
/*
int main()
{
    //Variable declarations
    float radius,area,pi=3.1459;
    
    //Get input from user for the radius
    printf("Whats is the radius: ");
    scanf("%f",&radius);

    //Area formula is pi*radius**2
    area=pi*(radius*radius);
    printf("Area of circles is: %.3f",area);
    return 0;
}
*/
                    /*With Function*/
#define PI 3.1459

float areaCalc(float r)
{
    float temp;
    temp=PI*r*r;
    return (temp);
}

int main()
{
    //Variable declarations
    float radius,area;
    
    //Get input from user for the radius
    printf("Whats is the radius: ");
    scanf("%f",&radius);

    area=areaCalc(radius);
    printf("Area of circles is: %.3f",area);
    return 0;
}
