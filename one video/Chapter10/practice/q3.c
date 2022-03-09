// Write a program to read text file character by character and write its content twice in a separate file
#include <stdio.h>

int main()
{
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("q3.txt", "r");
    ptr2 = fopen("real.txt", "w");
    char c = fgetc(ptr1);
    while (c != EOF)
    {
        fprintf(ptr2, "%c", c);
        fprintf(ptr2, "%c", c);
        c = fgetc(ptr1);
    }
    fprintf(ptr2, "\n");
    fclose(ptr2);
    fclose(ptr1);
    return 0;
}