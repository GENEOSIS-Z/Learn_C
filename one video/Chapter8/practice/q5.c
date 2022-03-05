// Write a program to encrypt a string by adding 1 to the ASCII value of its character
#include <stdio.h>
void encrypt(char *str)
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}
int main()
{
    char c[] = "Encrypted message";
    printf("Before encryption c is %s\n", c);
    encrypt(c);
    printf("After encryption c is %s\n", c);
    return 0;
}