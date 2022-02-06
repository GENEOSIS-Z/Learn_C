#include <stdio.h>

int main()
{
    int i = 0;
    do
    {
        printf("%d\n", i);
        i++;
        if (i == 3)
        {
            break;
        }
    } while (i < 5);
    return 0;
}