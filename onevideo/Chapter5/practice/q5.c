// Write a program to convert celcius temperature into fahrenheit
#include <stdio.h>

float fahrenheit(float celcius);

int main(){
    float celcius;
    printf("Enter your temperature\n");
    scanf("%f", &celcius);
    printf("Your temperature in Fahrenheit degree is%f F\n ", fahrenheit(celcius));
    return 0;
}

float fahrenheit (float celcius){
    float formula = (celcius*9 )/5;
    return formula + 32;
}