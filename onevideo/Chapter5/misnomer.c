#include <stdio.h>

int change(int a); // This is a misnomer

int main(){
    int b = 88;
    change(b);
    printf("b is %d\n", b);
    return 0;
}

int change(int a){
    a = 77;
}