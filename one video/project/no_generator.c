#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Random number generator
    int number;
    srand(time(0));
    number = rand() % 100 + 1; // Generates number from 1 to 100
    printf("The number is %d\n", number);
    return 0;
}