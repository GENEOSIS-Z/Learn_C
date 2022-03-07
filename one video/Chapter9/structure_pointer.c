#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
};

int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    // (*ptr).code = 320;
    ptr->code = 320;
    printf("%d", e1.code);

    return 0;
}