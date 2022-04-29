// Repeat problem q5.c for a generial input provided by the user scanf
#include <stdio.h>

int main()
{
    int table[10];
    int mul;
    printf("Enter a number\n");
    scanf("%d", &mul);
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        table[i] = mul * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d \n", mul, i + 1, table[i]);
    }
    return 0;
}