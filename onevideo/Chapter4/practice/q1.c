#include <stdio.h>

int main()
{
    // Write a program to print natural numbers from 10 to 20 when initial loop counter is initialized 0.
    int i = 0;
    printf("First way\n");
    while (i < 11)
    {
        int a = i + 10;
        printf("%d\n", a);
        i++;
    }
    // printf("Second way\n");
    // while (i <= 20)
    // {
    //     if (i >= 10)
    //     {
    //         printf("%d\n", i);
    //     }
    //     i++;
    // }
    return 0;
}