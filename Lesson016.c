/*
 * @file:       Lesson011.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    Array of more than 2 dimensions
 * @date:       2021-11-30
 */

#include<stdio.h>

int main()
{ 
    int matrix[2][3][4]={   {                       //First block of 3 rows
                                {10,20,30,40},
                                {15,25,30,35},
                                {12,14,16,18}  },
                            
                            {                       //Second block of 3 rows
                                {50,60,70,80},
                                {55,65,70,75},
                                {52,54,56,58}  }
                         };
    int index1,index2,index3;

    // Reading inside of multidimensional array
    printf("-------------------\n");
    for (index1=0;index1<2;index1++)
    {
        for (index2=0;index2<3;index2++)
        {
            for (index3=0;index3<4;index3++)
            {
                printf("(%d)x(%d)x(%d) is: %2d \n",index1+1,index2+1,index3+1,matrix[index1][index2][index3]);
            }
            printf("-------------------\n");
        }
    }

    return 0;
}

