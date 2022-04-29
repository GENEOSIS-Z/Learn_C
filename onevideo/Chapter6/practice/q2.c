// Write a program having a variable i. Print the address of i. Pass this variable to a function and print its address. Are these addresses same ? Why?
#include <stdio.h>
void address(int j);
int main()
{
    int i = 3;
    printf("Address of i is %u\n", &i);
    address(i);
    return 0;
}
void address(int j)
{
    printf("Address of j is %u\n", &j);
}