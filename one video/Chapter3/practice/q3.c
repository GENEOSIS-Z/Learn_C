#include <stdio.h>

int main()
{
    int income;
    int tax;
    printf("Enter your income_\n");
    scanf("%d", &income);
    if (income <= 250000)
    {
        printf("Your income tax amount is 0.\n");
    }
    else if (income > 250000 && income <= 500000)
    {
        tax = 0.05 * (income - 250000);
        printf("%d\n", tax);
        printf("Your income is %d and tax amount is %d.\n", income, tax);
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = 0.2 * (income - 500000);
        printf("%d\n", tax);
        printf("Your income is %d and tax amount is %d.\n", income, tax);
    }
    else
    {
        tax = 0.3 * (income - 1000000);
        printf("%d\n", tax);
        printf("Your income is %d and tax amount is %d.\n", income, tax);
    }
    return 0;
}