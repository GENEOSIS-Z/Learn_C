#include <stdio.h>

int main()
{
    int celcius;
    printf("Enter the temperature in celcius ");
    scanf("%d", &celcius);
    float formula = (18 * celcius + 320) / 10;
    printf("The temperature in Fahrenheit is %f\n", formula);
    return 0;
}