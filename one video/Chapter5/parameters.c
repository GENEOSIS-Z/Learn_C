#include <stdio.h>

int sum(int a, int b); //It takes a int a and b and gives and output of integers

int main(){
    int add = sum(5,8);
    printf("The sum is %d\n",add);
    return 0;
}
 
int sum (int a, int b){
    return a + b;
}