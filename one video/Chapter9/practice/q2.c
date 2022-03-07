// Write a function sumVector which returns the sum of two vectors passed to it. The vectors must be two - dimensional.
#include <stdio.h>
struct vector
{
    int x;
    int y;
};
struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}
int main()
{
    struct vector v1 = {5, 6};
    struct vector v2 = {7, 7};
    struct vector sum;

    sum = sumVector(v1, v2);
    printf("The result of dim x is %d and dim y is %d\n", sum.x, sum.y);
    return 0;
}