// Write a program to count the occurrence of a given character in a string
#include <stdio.h>
int count(char str[], char a)
{
    int check = 0;
    char *ptr = str;
    while (*ptr != '\0')
    {
        if (*ptr == a)
        {
            check++;
        }
        ptr++;
    }
    return check;
}
int main()
{
    char str[] = "visual_studio_code";
    char alpha = 'v';
    int num = count(str, alpha);
    printf("Occurrences =  %d\n", num);
    return 0;
}