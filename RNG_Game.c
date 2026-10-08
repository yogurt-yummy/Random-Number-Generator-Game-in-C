// Making a Advanced level Number Guessing Game for learning varities of concepts

#include <stdio.h>
#include <stdlib.h> // for srand()
#include <time.h> // for time()

int main(){

    srand(time(NULL)); 
    // srand sets a different starting position each run

    int random_number = (rand() % 100) + 1;
    printf("The random number is %d .\n",random_number);
    // srand and rand share secret varible inside the C library
    
    return 0;
}