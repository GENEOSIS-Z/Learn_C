// Use the arrray in problem 1 to store 6 integers entered by the user
#include <stdio.h>

int main()
{
    int ptr[6];
    for (int i = 0; i < 6; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The %d element is : %d\n", i + 1, ptr[i]);
    }
    return 0;
}