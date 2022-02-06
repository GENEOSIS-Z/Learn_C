#include <stdio.h>

int main()
{
    // Write a program to print multiplication table of a given number n.
    int n;
    int i = 1;
    printf("Enter a number\n");
    scanf("%d", &n);
    while (i <= 10)
    {
        int multiply = n * i;
        printf("%d * %d = %d \n", n, i, multiply);
        i++;
    }
    return 0;
}