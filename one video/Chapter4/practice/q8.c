#include <stdio.h>

int main()
{
    // Write a program to calculate the numbers occuring in the table of 8;
    int num = 8, sum = 0;
    for (int i = 10; i; i--)
    {
        int multiply = num * i;
        sum += num + i + multiply;
    }
    printf("The sum of the numbers occuring in the table of 8 is %d\n", sum);
    return 0;
}