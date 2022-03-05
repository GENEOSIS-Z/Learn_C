#include <stdio.h>
#include <string.h>

int main()
{
    char *str = "one";
    char st[20] = "two ";
    strcat(st, str);
    printf("Now the st contains %s\n", st);
    return 0;
}