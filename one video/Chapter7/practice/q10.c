// Repeat problem q9.c for a custom input given by the user
#include <stdio.h>

int main()
{
    int table[3][10];
    int mul[3];
    printf("Enter a number\n");
    scanf("%d", &mul[0]);
    printf("Enter a number\n");
    scanf("%d", &mul[1]);
    printf("Enter a number\n");
    scanf("%d", &mul[2]);
    for (int i = 0; i < 10; i++)
    {
        table[0][i] = mul[0] * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d \n", mul[0], i + 1, table[0][i]);
    }

    printf("************************************************************\n");

    for (int i = 0; i < 10; i++)
    {
        table[1][i] = mul[1] * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d \n", mul[1], i + 1, table[1][i]);
    }

    printf("************************************************************\n");

    for (int i = 0; i < 10; i++)
    {
        table[2][i] = mul[2] * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d \n", mul[2], i + 1, table[2][i]);
    }
    return 0;
}