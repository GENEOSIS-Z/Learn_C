// Write your own version of strlen function from <string.h>
#include <stdio.h>
int strlen(char *ptr);
int main()
{
    char *str = "Visual Studio";
    printf("The size of str is %d\n", strlen(str));
    return 0;
}
int strlen(char *ptr)
{
    int count = 0;
    char *str = ptr;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}