// Create a time stamp
#include <stdio.h>
typedef struct timeStamp
{
    int date;
    int month;
    int year;

    int hour;
    int min;
    int sec;
} tstamp;

void display(tstamp td)
{
    printf("The date is : %d-%d-%d %d:%d:%d\n", td.date, td.month, td.year, td.hour, td.min, td.sec);
}
int cmp(tstamp d1, tstamp d2)
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
    // On the basis of hour
    if (d1.hour > d2.hour)
    {
        return 1;
    }
    if (d1.hour < d2.hour)
    {
        return -1;
    }
    // On the basis of min
    if (d1.min > d2.min)
    {
        return 1;
    }
    if (d1.min < d2.min)
    {
        return -1;
    }
    // On the basis of sec
    if (d1.sec > d2.sec)
    {
        return 1;
    }
    if (d1.sec < d2.sec)
    {
        return -1;
    }
    return 0;
}
int main()
{
    // dd-mm-yy  hh:mm:ss
    tstamp td1 = {3, 7, 22, 10, 36, 45};
    tstamp td2 = {3, 7, 22, 10, 36, 45};
    display(td1);
    display(td2);
    int a = cmp(td1, td2);
    printf("The function cmp returns : %d\n", a);
    return 0;
}