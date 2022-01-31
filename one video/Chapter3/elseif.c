// else if clause
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("Number is 1\n");
    }
    else if (num == 2)
    {
        printf("Number is 2\n");
    }
    else if (num == 3)
    {
        printf("Number is 3\n");
    }
    else
    {
        printf("The number is not 1, 2 & 3\n");
    }
    return 0;
}