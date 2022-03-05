// Write a program to check whether a given character is present in a string or not
#include <stdio.h>
void check(char str[], char alpha)
{
    char *ptr = str;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == alpha)
        {
            count++;
        }
        ptr++;
    }
    if (count != 0)
    {
        printf("The character %c occurs in the string %d times\n", alpha, count);
    }
    else
    {
        printf("The character %c is not present in the string\n", alpha);
    }
}
int main()
{
    char str[] = "visual_studio_code";
    check(str, 'f');
    return 0;
}