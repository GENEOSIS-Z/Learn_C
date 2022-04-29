// q10.c using functions
#include <stdio.h>
int multiply(int a);
int main()
{
    int mul[3];
    printf("Enter a number\n");
    scanf("%d", &mul[0]);
    multiply(mul[0]);
    printf("Enter a number\n");
    scanf("%d", &mul[1]);
    multiply(mul[1]);
    printf("Enter a number\n");
    scanf("%d", &mul[2]);
    multiply(mul[2]);
    return 0;
}
int multiply(int a)
{
    int table[10];
    for (int i = 0; i < 10; i++)
    {
        table[i] = a * (i + 1);
        printf("%d X %d = %d\n", a, i + 1, table[i]);
    }
}