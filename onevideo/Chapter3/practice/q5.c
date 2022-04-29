#include <stdio.h>

int main()
{
    // 97-122 = a-z;
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("It is lowercase\n");
    }
    else
    {
        printf("It is not lower case\n");
    }
    return 0;
}