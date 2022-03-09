#include <stdio.h>

int main()
{
    FILE *ptr;
    // ptr = fopen("sample.txt", "r");
    // printf("The value of ptr is %c\n", fgetc(ptr));

    ptr = fopen("gene.txt", "w");
    putc('d', ptr);
    putc('d', ptr);
    putc('d', ptr);
    fclose(ptr);
    return 0;
}