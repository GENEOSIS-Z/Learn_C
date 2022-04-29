// Write a function to calculate force of attraction on a body of mass m exerted by earth 
#include <stdio.h>

float force(float mass);

int main(){
    float mass;
    printf("Enter mass of an body\n");
    scanf("%f",&mass);
    printf("The force exerted by earth on that body is %.2f N\n", force(mass));
    return 0;
}

float force(float mass){
    return mass*9.8;
}