// Making a Advanced level Number Guessing Game for learning varities of concepts

#include <stdio.h>
#include <stdlib.h> // for srand()
#include <time.h>   // for time()

int main()
{

    srand(time(NULL));
    // srand sets a different starting position each run

    int random_number = (rand() % 100) + 1;
    int user_guess;

    printf("||=========================================================================||\n");
    printf("||                       Guess The Number (1 - 100)                        ||\n");
    printf("||=========================================================================||\n");
    printf("\n");

    do
    {
        printf("\nEnter your guess between 1 to 100 : \n");
        printf("Your Guess => ");
        scanf("%d", &user_guess);
        // printf("\n");

        if (user_guess == random_number)
        {
            printf("You guessed it.\n");
        }
        else if (user_guess > random_number)
        {
            printf("Try guessing lower.\n");
        }
        else if (user_guess < random_number)
        {
            printf("Try guessing higher.\n");
        }
    }while(user_guess != random_number);

    

    return 0;
}