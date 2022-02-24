// Write a program to print the address of a variable. Use this address to get the value of this variable.
#include <stdio.h>

int main(){
    int i = 72;
    int *j = &i;
    printf("The address of i is %d\n", j);
    printf("The value of i is %d\n", *j);
    return 0;
}