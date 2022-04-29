// Write a program to change the value of a variable to ten times of its current value. Write a function
#include <stdio.h>
int change(int *j)
{
    int temp = *j;
    *j = temp * 10;
}
int main()
{
    int a = 3;
    printf("The value of a is %d\n", a);
    change(&a);
    printf("The value of a is %d\n", a);
    return 0;
}