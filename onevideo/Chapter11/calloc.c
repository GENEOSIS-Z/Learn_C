#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(3, sizeof(int));
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("Enter the element %d : ", i + 1);
    //     scanf("%d", &ptr[i]);
    // }
    for (int i = 0; i < 3; i++)
    {
        printf("The element %d is %d \n", i + 1, ptr[i]);
    }
    return 0;
}