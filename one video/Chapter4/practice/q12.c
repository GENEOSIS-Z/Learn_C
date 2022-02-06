#include <stdio.h>

int main()
{
    // Write a program to check whether a given number is prime or not using loops.
    int n, prime = 1;
    printf("Enter a number\n");
    scanf("%d", &n);
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         prime = 0;
    //         break;
    //     }
    // }
    int i = 2;
    while (i < n)
    {
        i++;
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("It is not a prime number\n");
    }
    else
    {
        printf("It is a prime number\n");
    }
    return 0;
}