#include <stdio.h>

int main()
{
    // Write a program to print n natural numbers in reverse order
    int i;
    printf("Enter a number\n");
    scanf("%d", &i);
    // My way
    for (int num = 5; i; i--)
    {
        printf("%d\n", i);
    }
    // Harry sir's
    for (int j = i; j; j--)
    {
        printf("%d\n", j);
    }
    return 0;
}
