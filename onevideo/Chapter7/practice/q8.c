// Write a program containing functions which counts the number of positive integers in an array.
#include <stdio.h>
int check(int *arr, int n);
int main()
{
    int arr[] = {15, 82, -851, -659, 1585, -6, 48, -96};
    printf("The number of positive integers in the given array is %d\n", check(arr, 8));
    return 0;
}
int check(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    return count;
}