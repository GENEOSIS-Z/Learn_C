// Write a program to take string as an input from the user using %c and %s. Confirm that the strings are equal
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30], str2[30];
    printf("Enter a word \n");
    scanf("%s", str1);
    printf("Enter a word \n");
    scanf("%s", str2);
    int val = strcmp(str1, str2);
    if (val == 0)
    {
        printf("You entered same words.\n");
    }
    else
    {
        printf("You entered different words.\n");
    }
    return 0;
}