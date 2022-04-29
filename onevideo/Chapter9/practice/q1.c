// Create a two dimensional vector using structures
#include <stdio.h>
struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1, v2;
    v1.x = 34;
    v1.y = 49;
    v2.x = 54;
    v2.y = 345;
    return 0;
}