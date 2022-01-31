#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);
    if (marks >= 90 && marks < 100)
    {
        printf("You have got A\n");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("You have got B\n");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("You have got C\n");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("You have got D\n");
    }
    else if (marks >= 50 && marks < 60)
    {
        printf("You have got E\n");
    }
    else if (marks < 50)
    {
        printf("You have got F\n");
    }
    else
    {
        printf("You have got F\n");
    }
    return 0;
}