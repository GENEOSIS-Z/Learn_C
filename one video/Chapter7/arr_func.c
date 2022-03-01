#include <stdio.h>
void printArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i + 1, *(ptr + i));
    }
    ptr[2] = 5555 // This will change actual value
}
int main()
{
    int arr[] = {52, 925, 852, 625, 65, 41, 39};
    printArray(arr, 7);
    return 0;
}