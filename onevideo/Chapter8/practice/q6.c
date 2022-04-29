// Write a program to encrypt a string by subtract 1 to the ASCII value of its character
#include <stdio.h>
void decrypt(char *str)
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main()
{
    char c[] = "Fodszqufe!nfttbhf";
    printf("Before decryption c is %s\n", c);
    decrypt(c);
    printf("After decryption c is %s\n", c);
    return 0;
}