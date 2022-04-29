#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int check(char you, char comp)
{
    // Equal condition
    if (you == comp)
    {
        return 0;
    }
    // rp
    else if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    // ps
    else if (you == 'p' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'p')
    {
        return 1;
    }
    // sr
    else if (you == 's' && comp == 'r')
    {
        return -1;
    }
    else if (you == 'r' && comp == 's')
    {
        return 1;
    }
}
int main()
{
    // Random number generator
    int num;
    srand(time(0));
    num = rand() % 100 + 1; // Generates number from 1 to 100
    char you, comp;
    if (num < 33)
    {
        comp = 's';
    }
    else if (num > 33 && num < 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 'r';
    }
    printf("\n");
    printf("************************* Rock Paper Scissors *****************************\n");
    printf("\n");
    printf("Enter 'r' for rock or 'p' for paper or 's' for scissors \n");
    scanf("%c", &you);
    int result = check(you, comp);
    if (result == 0)
    {
        printf("Its draw!\n");
        printf("You chose %c and computer chose %c .\n", you, comp);
    }
    else if (result == 1)
    {
        printf("You won!\n");
        printf("You chose %c and computer chose %c .\n", you, comp);
    }
    else if (result == -1)
    {
        printf("You lose!\n");
        printf("You chose %c and computer chose %c .\n", you, comp);
    }
    else
    {
        printf("Invalid character entered\n");
    }
    return 0;
}