#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

void show(struct employee emp)
{
    printf("Code : %d\ns", emp.code);
    printf("Code : %.2f\n", emp.salary);
    printf("Name : %s\n", emp.name);
}

int main()
{
    struct employee e1 = {101, 72.13, "Harry"};
    show(e1);
    return 0;
}