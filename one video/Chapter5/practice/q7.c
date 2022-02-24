// Write a program to find the nth term of fibonacci sequence
#include <stdio.h>
int fib(int x);
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The %d term of fibonacci sequence is %d\n", n , fib(n));
    return 0;
}
int fib(int x){
    if(x==1 || x==0){
        return 0;
    }
    if(x==2){
        return 1;
    }
    else { 
     returnfib(x-1) + fib(x-2);
    }
}