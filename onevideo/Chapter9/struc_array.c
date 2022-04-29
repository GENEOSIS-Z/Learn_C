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
    struct employee facebook[100];

    facebook[0].code = 103;
    facebook[0].salary = 1378.23;
    strcpy(facebook[0].name, "Harry");

    facebook[1].code = 104;
    facebook[1].salary = 94263.563;
    strcpy(facebook[1].name, "Rohan");

    facebook[2].code = 105;
    facebook[2].salary = 54435;
    strcpy(facebook[2].name, "SkillF");

    printf("Done");

    return 0;
}