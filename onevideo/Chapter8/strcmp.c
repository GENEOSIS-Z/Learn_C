#include <stdio.h>
#include <string.h>

int main()
{
    char *str = "Hello";
    char st[20] = "HI ";
    int val = strcmp(st, str);
    printf("Now the val is %d\n", val);
    return 0;
}