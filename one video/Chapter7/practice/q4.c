// Create an array of 10 numbers. Verify using pointer arithematic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.
#include <stdio.h>

int main()
{
    int arr[] = {1965465,
                 278775,
                 3787546,
                 4445754,
                 577778,
                 6653454,
                 7545196,
                 8344561,
                 964648,
                 054445};
    int *ptr = arr;
    ptr = ptr + 2;
    if (ptr == &arr[2])
    {
        printf("They point to same location\n");
    }
    else
    {
        printf("They do not point same location\n");
    }
    return 0;
}