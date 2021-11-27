/*
 * @file:       Lesson010.c
 * @author:     Furkan YAYLA (yaylafurkan41@gmail.com)
 * @purpose:    Guess the number
 * @date:       2021-11-27
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>            //For random number generator seed

int main()
{   
    int randomNumber=0,guessNumber=0,maxGuessNumber;
    time_t timer;

    //Initialization of random number generator
    srand((unsigned) time(&timer));

    //Get the random number
    randomNumber=rand()&21;
    printf("My random number is: %d",randomNumber);
    printf("\nThis is a guessing game.\n");
    printf("I have chosen a number between 0 and 20, which you must guess.\n");

    for (maxGuessNumber=5;maxGuessNumber>0;maxGuessNumber--)
    {
        printf("\nYou have %d tr%s left.\n",maxGuessNumber,maxGuessNumber==1 ? "y":"ies");
        printf("Enter your guess: ");
        scanf("%d",&guessNumber);

        if (guessNumber==randomNumber)
        {
            printf("Congratulations. You guessed it!\n");
            break;
        }
        else if(randomNumber>guessNumber)
        {
            printf("Sorry, %d is wrong. My number is greater than that.\n",guessNumber);
            continue;
        }

        else if(randomNumber>guessNumber)
        {
            printf("Sorry, %d is wrong. My number is less than that.\n",guessNumber);
            continue;
        }    
    }
    
    printf("You have had five tries and failed. The number was &d\n",randomNumber);

    return 0;
}