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
    struct employee e1 = {101, 71.32, "Harry"};

    printf("Code is: %d\n", e1.code);
    printf("Salary is: %.2f\n", e1.salary);
    printf("Name is: %s\n", e1.name);
    return 0;
}