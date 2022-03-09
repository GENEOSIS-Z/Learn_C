// Write a program to read three integers from a file
#include <stdio.h>

int main()
{
    int a, b, c;
    FILE *ptr;
    ptr = fopen("q1.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("The value is : %d %d %d\n", a, b, c);
    fclose(ptr);
    return 0;
}