/*
 * @file:       Lesson017.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    Creating prime numbers
 * @date:       2021-11-30
 */

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{ 
    int indexP,indexI,primeIndex=2;
    int primes[50]={};
    bool isPrime;

    //Hardcore prime numbers
    primes[0]=2;
    primes[1]=3;

    //Creating prime numbers
    for(indexP=5;indexP<=100;indexP++)
    {
        isPrime=true;
        for (indexI=2;isPrime && indexI<indexP;indexI++)
        {
            if(indexP%indexI==0)
            {
                isPrime=false;
            }
        }
        if(isPrime==true)
        {
            primes[primeIndex]=indexP;
            primeIndex++;
        }
    }

    //Printing prime numbers on screen
    for(indexI=0;indexI<primeIndex;indexI++)
    {
        printf("%d ",primes[indexI]);
    }
    return 0;
}

