#include <stdio.h>

int main()
{
    // Write a program to calculate the factors of a given number;
    int n, i;
    i = 0;
    printf("Enter a number \n");
    scanf("%d", &n);
    while (i <= n)
    {
        i++;
        if (n % i != 0)
        {
            continue;
        }
        else
        {
            printf("The factor of %d is %d\n", n, i);
        }
    }
    return 0;
}