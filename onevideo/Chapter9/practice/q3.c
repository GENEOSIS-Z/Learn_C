// Write a program to illustrate the use of arrow operator "->"
#include <stdio.h>
struct vector
{
    int x;
    int y;
};
int main()
{
    struct vector v1;
    struct vector *ptr;
    ptr = &v1;
    // (*ptr).x = 34;
    ptr->x = 34;
    printf("%d\n", v1.x);
    return 0;
}