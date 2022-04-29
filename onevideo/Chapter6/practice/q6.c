// Try problem 3 using call by value and verify that it doesnot change the value of the said variable.
#include <stdio.h>
int change(int x)
{
    int temp = x;
    x = temp * 10;
}
int main()
{
    int a = 3;
    printf("The value of a is %d\n", a);
    change(a);
    printf("The value of a is %d\n", a);
    return 0;
}