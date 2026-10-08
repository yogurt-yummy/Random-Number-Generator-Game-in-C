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
    int guess_counter = 0;

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
            guess_counter++;
        }
        else if (user_guess > random_number)
        {
            printf("Try guessing lower.\n");
            guess_counter++;
        }
        else if (user_guess < random_number)
        {
            printf("Try guessing higher.\n");
            guess_counter++;
        }
    }while(user_guess != random_number);
    printf("\nYou guessed in %d guesses.",guess_counter);

    return 0;
}