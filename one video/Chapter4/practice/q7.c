#include <stdio.h>

int main()
{
    // Write a program to sum first natural numbers using while loop
    int i = 0, sum = 0, num = 10;
    // while (i <= 10)
    // {
    //     sum += i;
    //     i++;
    // }
    // do
    // {
    //     sum += i;
    //     i++;
    // } while (i <= 10);
    for (i = 0; i <= 10; i++)
    {
        sum += i;
    }
    printf("The sum of first ten natural numbers is %d\n", sum);
    return 0;
}