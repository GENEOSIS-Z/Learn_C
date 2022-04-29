// Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store ten integers
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The %d element is : %d\n", i + 1, ptr[i]);
    }
    ptr = realloc(ptr, 10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The %d element is : %d\n", i + 1, ptr[i]);
    }
    free(ptr);
    return 0;
}