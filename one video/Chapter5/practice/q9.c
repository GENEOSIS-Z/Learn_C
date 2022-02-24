//Write a program using function to print following pattern (first n numbers)
//*
//***
//*****
#include <stdio.h>
void printPattern(int c);
int main(){
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    printPattern(num);
    return 0;
}
void printPattern(int c){
    if(c==1){
        printf("*\n");
    }
    printPattern(c-1);
    for(int i=0;i<(2*c-1);i++){
        printf("*");
    }
    printf("\n");
}