// Write a recursive function to calculate sum of first n natural numbers
#include <stdio.h>
int sum(int n);
int main(){
    int ne;
    printf("Enter a number\n");
    scanf("%d","&ne");
    printf("The sum of first %d natural numbers is %d\n", ne, sum(ne));
    return 0;
}

int sum(int n){
    printf("calculating of num(%d)\n",n);
    if(n==1 || n==0){
        return 1;
    }
    return n + (n-1);
}