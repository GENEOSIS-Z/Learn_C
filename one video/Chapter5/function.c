#include <stdio.h>

void display();        //Function prototype

int main(){
    int a;
    display();        //Function call
    return 0;
}

void display(){      //Function definition
    printf("This is display\n");
}