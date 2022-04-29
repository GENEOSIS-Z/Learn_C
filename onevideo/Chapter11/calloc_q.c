// Write a program to create an array of size n using calloc where n is integer entered by user
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("How many integers do you want of enter\n");
    scanf("%d", &num);
    int *ptr;
    ptr = (int *)calloc(num, sizeof(int));
    for (int i = 0; i < num; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        printf("The element %d is %d \n", i + 1, ptr[i]);
    }
    return 0;
}
