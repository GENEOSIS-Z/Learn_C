#include <stdio.h>
void wrongSwap(int x, int y);
void swap(int *x, int *y);
int main()
{
    int a = 4, b = 8;
    printf("The value of a and b is %d and %d\n", a, b);
    wrongSwap(a, b);
    printf("The value of a and b is %d and %d\n", a, b);
    swap(&a, &b);
    printf("The value of a and b is %d and %d\n", a, b);
    return 0;
}
void wrongSwap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}