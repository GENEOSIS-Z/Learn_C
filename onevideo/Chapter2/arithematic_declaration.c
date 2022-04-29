#include <stdio.h>

int main()
{
    int a = 10;
    int b = 2;
    printf("The value of a + b is %d \n", a + b);
    printf("The value of a - b is %d \n", a - b);
    printf("The value of a * b is %d \n", a * b);
    printf("The value of a / b is %d \n", a / b);
    int z;
    z = b * a; // legal
    // b*a = z // illegal
    printf("The value of z is %d \n", z);
    printf("when 5 is divided by 2 the reminder is %d\n", 5 % 2);
    printf("when -5 is divided by 2 the reminder is %d\n", -5 % 2);
    // No operator is assumed to be present
    //There is no operator for exponentation in C
    printf("The value of 3.0/9 is %d\n", 3.0 / 9);
    printf("The value of 3.0/9 is %f\n", 3.0 / 9);
    return 0;
}