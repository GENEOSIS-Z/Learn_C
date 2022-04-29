//ternary operator
#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    // Conditional operators || ternary operator
    (a <= 5) ? printf("a is smaller than 5 or equals to five\n") : printf("a is not smaller than 5\n");
    return 0;
}