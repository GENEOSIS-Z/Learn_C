#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sample2.txt", "r");
    char name1[20];
    char name2[30];
    if (ptr == NULL)
    {
        printf("This file doesnot exist\n");
    }
    else
    {
        fscanf(ptr, "%s", name1);
        fscanf(ptr, "%s", name2);
        fclose(ptr);
        printf("The value of num is %s\n", name1);
        printf("The value of num is %s\n", name2);
    }
    fclose(ptr);
    return 0;
}