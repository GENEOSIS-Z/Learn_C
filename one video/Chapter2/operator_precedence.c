#include <stdio.h>

int main()
{
    int a = 2;
    int b = 3;
    printf("The value of 3*a - 8*b is %d \n", 3 * a - 8 * b);
    //  when given operators of same priority
    printf("The value of 3*a - 8*b is %d \n", 8 * b / 3 * a);
    // 24/6 = 4;
    // but the answer given is 16 because the equation is know assiciated as (8*b/3)*a
    //(8*b/3)*a
    //(8*3/3)*2
    //(24/3)*2
    //(8)*2
    //16 #answer
    return 0;
}