#include <stdio.h>

int main()
{
    int p, t, r;
    printf("Enter principal \n");
    scanf("%d", &p);
    printf("Enter rate of interest \n");
    scanf("%d", &t);
    printf("Enter time \n");
    scanf("%d", &r);
    printf("Your simple interest is %d\n", (p * t * r) / 100);
    return 0;
}