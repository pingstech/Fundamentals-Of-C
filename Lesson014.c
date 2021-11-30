/*
 * @file:       Lesson011.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    Multidimensional Array
 * @date:       2021-11-29
 */

#include<stdio.h>

int main()
{   
    // Creating multidimensional array
    int numbers[3][4]={ {10,20,30,40},      //Values for first row
                        {15,25,35,45},      //Values for second row
                        {46,47,48,49} };    //Values for third row
    int indexCol,indexRow;

    // Reading inside of multidimensional array
    printf("---------------\n");
    for (indexRow=0;indexRow<3;indexRow++)
    {
        for (indexCol=0;indexCol<4;indexCol++)
        {
            printf("(%d)x(%d) is: %2d \n",indexRow+1,indexCol+1,numbers[indexCol][indexRow]);
        }
        printf("---------------\n");
    }
    
/* ############################################################################################## */ 

    // Creating new multidimensional array
    int matrix[4][5]={
                        {-1,0,1},           //Values for first row
                        {20,10,-20},        //Values for second row
                        {0,0,3},            //Values for third row
                        {3,4,5} };          //Values for fourth row
                                            //Fifth values of the array will create Zeros
    
    // Reading inside of new multidimensional array
    printf("--------------------\n");
    for (indexRow=0;indexRow<4;indexRow++)
    {
        for (indexCol=0;indexCol<5;indexCol++)
        {
            printf("(%d)x(%d) is: %2d \n",indexRow+1,indexCol+1,matrix[indexRow][indexCol]);
        }
        printf("--------------------\n");
    }
    return 0;
}