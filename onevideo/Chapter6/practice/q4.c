// Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main()
#include <stdio.h>
int avgAndSum(int i, int j, int *sum, float *avg);
int main()
{
    int x = 3, y = 5;
    int sum;
    float avg;
    avgAndSum(x, y, &sum, &avg);
    printf("The sum of the two numbers %d and %d is %d\n", x, y, sum);
    printf("The avg of the two numbers %d and %d is %.2f\n", x, y, avg);
    return 0;
}
int avgAndSum(int i, int j, int *sum, float *avg)
{
    *sum = i + j;
    *avg = (float)*sum / 2;
}