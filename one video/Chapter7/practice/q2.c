// Trying operations on pointers
#include <stdio.h>

int main()
{
    int i = 32;
    int n = 42;
    int *j = &i;
    int *m = &n;
    // Addition
    //  printf("The value of j is %u\n", j);
    //  j++;
    //  printf("The value of j is %u\n", j);
    // Subraction
    //  printf("The value of j is %u\n", j);
    //  j--;
    //  printf("The value of j is %u\n", j);
    // Subtraction of one pointer from another
    // printf("The value of j is %u\n", j);
    // printf("The value of j is %u\n", m);
    // printf("The value of j is %d\n", m - j);
    // Comparison of two pointer variables
    if (!m == n)
    {
        printf("They point to different variable");
    }
    return 0;
}