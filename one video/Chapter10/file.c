#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("sample.txt", "r"); // To read a file
    ptr = fopen("sample.txt", "w"); // To write in a file
    return 0;
}