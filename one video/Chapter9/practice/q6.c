// Create a structure representing a bank account of a customer. What fields did you use and why?
#include <stdio.h>

typedef struct bankAccout
{
    int code;
    int year;
    char name[30];
} account;

int main()
{
    account a1 = {5200326, 2022, "Zero_sis"};
    printf("%d\n", a1.code);
    printf("%d\n", a1.year);
    printf("%s\n", a1.name);

    return 0;
}