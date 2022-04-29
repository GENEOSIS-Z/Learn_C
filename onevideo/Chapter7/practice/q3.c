// Create 2d array by taking input from the user. Write a display function to print the content of this 2d array in the screen
#include <stdio.h>

int main()
{
    int num[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of %d of row %d: ", j + 1, i + 1);
            scanf("%d", &num[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value of %d in row %d is %d \n", j + 1, i + 1, num[i][j]);
        }
    }
    return 0;
}