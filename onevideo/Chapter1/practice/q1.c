#include <stdio.h>

int main()
{
    // hard inputs
    // int l = 3, b = 8;
    // int area = l * b;
    int l, b;
    printf("Enter the length of the rectangle\n");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle\n");
    scanf("%d", &b);
    int area = l * b;
    printf("The area of the given rectangle is %d\n", area);
    return 0;
}