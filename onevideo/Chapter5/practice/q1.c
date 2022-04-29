#include <stdio.h>
//Quick Quiz
//Write a program with three functions
// 1> Good morning function which prints "Good morning"
// 2> Good afternoon function which prints "Good Afternoon"
// 3> Good night function which prints "Good night"

    void morning();
    void afternoon();    //Function prototype
    void night();

int main(){
    morning();
    printf("Eight hours later \n");
    afternoon();   // Function call
    printf("Much much later\n");
    night();
    return 0;
}


void morning (){
    printf("Good morning\n");
}
void afternoon (){
    printf("Good afternoon\n");  // Function definition
}
void night (){
    printf("Good night\n");
}