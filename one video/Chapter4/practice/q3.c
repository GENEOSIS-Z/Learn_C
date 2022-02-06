#include <stdio.h>

int main()
{
    // Write a program to print first n natural numbers using for loop
    int i;
    printf("Enter a number \n");
    scanf("%d", &i);
    for (int num = 1; num <= i; num++)
    {
        printf("%d\n", num);
    }
    return 0;
}