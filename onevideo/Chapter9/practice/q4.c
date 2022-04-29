// Write a program with a structure representing a complex numbers
#include <stdio.h>
typedef struct complex
{
    float real;
    float image;
} cmp;
int main()
{
    cmp c1 = {54, 36};
    printf("The real num is %f and image is %f\n", c1.real, c1.image);
    return 0;
}