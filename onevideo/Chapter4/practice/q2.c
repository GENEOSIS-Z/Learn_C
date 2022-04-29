#include <stdio.h>

int main()
{
    // Write a program to print first n natural numbers using do while loop.
    // Input : 4;
    // Output : 1 ; 2 ; 3 ; 4;
    int i, j;
    int num = 1;
    printf("Enter a number \n");
    scanf("%d", &i);
    do
    {
        //Descending order
        printf("%d\n", --i);
    } while (i > 1);
    printf("Enter a number \n");
    scanf("%d", &j);
    do
    {
        // Ascending order
        printf("%d\n", num);
        num++;
    } while (num <= j);
    return 0;
}