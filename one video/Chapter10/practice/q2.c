// Write a program to generate multiplication table of given number in the text format. Make sure that the file is readable and well formatted
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number to generate multiplication table of it : ");
    scanf("%d", &num);
    FILE *ptr;
    ptr = fopen("table.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", num, i + 1, num * (i + 1));
    }
    fclose(ptr);
    printf("The table has been generated on table.txt\n");
    return 0;
}