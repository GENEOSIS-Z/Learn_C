// Solve the problem of q7.c for time
#include <stdio.h>

typedef struct time
{
    int hour;
    int min;
    int sec;
} time;
void display(time t)
{
    printf("The time is : %d:%d:%d\n", t.hour, t.min, t.sec);
}
int cmp(time d1, time d2)
{
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
    time t1 = {10, 25, 32};
    time t2 = {12, 36, 32};
    display(t1);
    display(t2);
    int a = cmp(t1, t2);
    printf("The cmp function returns : %d\n", a);
    return 0;
}