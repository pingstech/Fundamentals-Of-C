/*
 * @file:       Lesson011.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    Multidimensional Array-2
 * @date:       2021-11-30
 */

#include<stdio.h>

int main()
{ 
    int matrix[3][4]={[0][0]=1, [0][1]=2, [0][2]=3, [0][3]=4,
                      [1][0]=5, [1][1]=6, [1][2]=7, [1][3]=8,
                      [2][0]=9, [2][1]=10, [2][2]=11, [2][3]=12};
    int indexCol,indexRow;

    // Reading inside of multidimensional array
    printf("---------------\n");
    for (indexRow=0;indexRow<3;indexRow++)
    {
        for (indexCol=0;indexCol<4;indexCol++)
        {
            printf("(%d)x(%d) is: %2d \n",indexRow+1,indexCol+1,matrix[indexRow][indexCol]);
        }
        printf("---------------\n");
    }

    return 0;
}