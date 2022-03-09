#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sample.txt", "w");
    int num = 36;
    fprintf(ptr, "The number is %d", num);
    fclose(ptr);
    return 0;
}