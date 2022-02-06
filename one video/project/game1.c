#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Random number generator
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Generates number from 1 to 100
    // printf("The number is %d\n", number);
    do
    {
        printf("Guess the number from 1 to 100\n");
        scanf("%d", &guess);
        if (guess < number)
        {
            printf("Higher number please\n");
        }
        else if (guess > number)
        {
            printf("Lower number please\n");
        }
        else
        {
            printf("Correct! You guessed it in %d times\n", nguess);
        }
        nguess++;
    } while (guess != number);
    return 0;
}