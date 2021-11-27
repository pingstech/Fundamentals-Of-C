/*
 * @file:       Lesson007.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    Printf setting for showing decimal integer and floating point
 * @date:       2021-11-27
 */

#include<stdio.h>

int main()
{
    float fahr,celc;
    float limLow,limUpp;
    int step;

    limLow=0;               //Lower limit of temprature scale
    limUpp=300;             //Upper limit of temprature scale
    step=15;                //Step size
    fahr=limLow;

    while(fahr<=limUpp)
    {
        celc=(5.0/9.0)*(fahr-32.0);
        printf("%3.0f fahrenheit is equals to %6.2f celcius.\n",fahr,celc);
        fahr+=step;
    }

//***************************************************************************************

//Also it will solve with "For Loop"
    for(fahr=0;fahr<=300;fahr+=15)
    {
        printf("%3.0f fahrenheit is equals to %6.2f celcius.\n",fahr,((5.0/9.0)*(fahr-32.0)));
    }

    return 0;
}

/*

   %d   -----------   print as decimal integer
  %6d   -----------   print as decimal integer, at least 6 characters wide
   %f   -----------   print as floating point
  %6f   -----------   print as floating point, at least 6 characters wide
 %.2f   -----------   print as floating point, 2 characters after decimal point
%6.2f   -----------   print as floating point, at least 6 wide and 2 after decimal point

*/
