// Take name and salary of two employees as input from the user and write them to a text file in the following format
#include <stdio.h>

typedef struct employee
{
    char name[25];
    int salary;
} emp;

int main()
{
    emp e[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the name of employee %d : ", i + 1);
        scanf("%s", e[i].name);
        printf("Enter the salary of employee %d : ", i + 1);
        scanf("%d", &e[i].salary);
    }
    FILE *ptr;
    ptr = fopen("data.txt", "w");
    for (int i = 0; i < 2; i++)
    {
        fprintf(ptr, "%s : ", e[i].name);
        fprintf(ptr, "%d\n", e[i].salary);
        // printf("%s : ", e[i].name);
        // printf("%d\n", e[i].salary);
    }
    return 0;
}