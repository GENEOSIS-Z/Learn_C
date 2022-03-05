// Write your own version of strcpy function from <string.h>
#include <stdio.h>
void strcpyy(char *target, char *source)
{
    int i = 0;
    char *ptr = source;
    while (*ptr != '\0')
    {
        target[i] = source[i];
        ptr++;
        i++;
    }
}
int main()
{
    char str1[] = "This is q4";
    char str2[34];
    strcpyy(str2, str1);
    printf("Now the str2 is %s\n", str2);
    return 0;
}