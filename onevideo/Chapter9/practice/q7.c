// Write a structure capable of storing date. Write a function to compare those dates.
#include <stdio.h>

typedef struct date
{
    int date;
    int month;
    int year;
} date;

void display(date d)
{
    printf("The date is : %d/%d/%d\n", d.date, d.month, d.year);
}
int cmp(date d1, date d2)
{
    // On the basis of year
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }
    // On the basis of month
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }
    // On the basis of date
    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }
    return 0;
}

int main()
{
    date d1 = {2, 3, 21};
    date d2 = {2, 3, 25};
    display(d1);
    display(d2);
    int a = cmp(d1, d2);
    printf("The function cmp returns : %d\n", a);
    return 0;
}