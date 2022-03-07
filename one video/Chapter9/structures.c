#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee e1;
    e1.code = 101;
    e1.salary = 101.23;
    strcpy(e1.name, "Rohan");

    printf("Code is: %d\n", e1.code);
    printf("Salary is: %.3f\n", e1.salary);
    printf("Name is: %s\n", e1.name);
    return 0;
}