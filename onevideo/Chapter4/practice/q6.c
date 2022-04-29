#include <stdio.h>

int main()
{
    // Write a program to print table of 10 in reverse order.
    int i = 10;
    while (i <= 10 && i > 0)
    {
        int multiply = 10 * i;
        printf("10 * %d = %d\n", i, multiply);
        i--;
    }
    return 0;
}