// Write a program to create a dynamic array of 5 floats using malloc()
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *)malloc(3 * sizeof(float));
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("The element %d is %.2f \n", i + 1, ptr[i]);
    }
    return 0;
}