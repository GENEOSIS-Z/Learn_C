#include <stdio.h>

int main()
{
    //area of circle
    // int r;
    // printf("Enter the radius of the circle\n");
    // scanf("%d", &r);
    // float area = 3.14 * r * r;
    // printf("The area of the cirle is %f\n", area);
    //volume of cylinder
    int r, h;
    float pi = 3.14;
    printf("Enter the radius of the cylinder\n");
    scanf("%d", &r);
    printf("Enter the height of the cylinder\n");
    scanf("%d", &h);
    float area = pi * r * r * h;
    printf("The area of the given cylinder is %f \n", area);
    return 0;
}