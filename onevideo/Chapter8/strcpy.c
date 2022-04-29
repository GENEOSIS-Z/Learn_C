#include <stdio.h>
#include <string.h>

int main()
{
    char *str = "Harry";
    char st[20];
    strcpy(st, str);
    printf("Now the st contains %s\n", st);
    return 0;
}