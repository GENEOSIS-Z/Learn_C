#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sample.txt", "r");
    char name1[20];
    char name2[30];
    fscanf(ptr, "%s", name1);
    fscanf(ptr, "%s", name2);
    fclose(ptr);
    printf("The value of num is %s\n", name1);
    printf("The value of num is %s\n", name2);

    return 0;
}