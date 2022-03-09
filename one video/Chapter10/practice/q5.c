// Write a program to modify a file containing an integer to double its value.
#include <stdio.h>

int main()
{
    FILE *pone;
    FILE *ptwo;
    pone = fopen("q5.txt", "r");
    int num;
    fscanf(pone, "%d", &num);
    fclose(pone);
    num = num + 2;
    ptwo = fopen("q5.txt", "w");
    fprintf(ptwo, "%d", num);
    fclose(ptwo);
    return 0;
}