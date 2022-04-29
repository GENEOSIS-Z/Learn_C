#include <stdio.h>
#include <math.h>
int area (int a);
int main(){
    int length, result;
    printf("Enter the length of the square\n");
    scanf("%d",&length);
    // result = area(length);
    // printf("The area of square is %d meter square\n",result);
    printf("The area of the square is %f", pow(length , 2));
    return 0;
}
// int area (int a ){
//     int result;
//     result = a * a;
//     return result;
// }