#include <stdio.h>

int main()
{
    int marks[5];
    for (int j = 0; j < 5; j++)
    {
        printf("Enter the marks of student %d : ", j + 1);
        scanf("%d", &marks[j]);
    }

    for (int j = 0; j < 5; j++)
    {
        printf("The marks of student %d is %d \n", j + 1, marks[j]);
    }
    return 0;
}