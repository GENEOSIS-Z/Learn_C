// Create an array of 3 complex numbers created in problem q4.c and display them with a help of display function. The values must be taken as an input from the user
#include <stdio.h>
typedef struct complex
{
    int real;
    int image;
} cmp;

void display(cmp c1, int i)
{
    printf("The value of c1[%d].real is : %d\n", i, c1.real);
    printf("The value of c1[%d].image is : %d\n", i, c1.image);
}

int main()
{
    cmp c1[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value of c1[%d].real : ", i);
        scanf("%d", &c1[i].real);

        printf("Enter the value of c1[%d].image : ", i);
        scanf("%d", &c1[i].image);
    };

    for (int i = 0; i < 3; i++)
    {
        display(c1[i], i);
    };

    return 0;
}