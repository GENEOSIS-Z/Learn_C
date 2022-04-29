#include <stdio.h>

int main()
{
    // Write a program to calculate the factorial of a given number using a for loop;
    int n, factorial = 1;
    printf("Enter a number \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The factorial of the number %d is %d\n", n, factorial);
    return 0;
}