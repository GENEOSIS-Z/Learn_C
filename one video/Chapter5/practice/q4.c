// Write a program using a function to find average of three numbers

#include <stdio.h>

float avg(float a , float b, float c);

int main(){
    float x, y, z;
    printf("Enter a number a\n");
    scanf("%f",&x);
    printf("Enter a number b\n");
    scanf("%f",&y);
    printf("Enter a number c\n");
    scanf("%f",&z);
    printf("The avg of numbers %f, %f, %f is %f\n", x,y,z,avg(x,y,z));
    return 0;
}

float avg ( float a, float b, float c){
    float sum;
    sum = a + b + c;
    return sum/3;
}