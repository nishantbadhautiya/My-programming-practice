#include <stdio.h>
struct time
{
    int second;
    int minute;
    int hour;
};
int datecompare(struct time t1, struct time t2)
{
    if (t1.hour > t2.hour)
    {
        return 1;
    }
    else if (t1.hour < t2.hour)
    {
        return -1;
    }
    else if (t1.minute > t2.minute)
    {
        return 1;
    }
    else if (t1.minute < t2.minute)
    {
        return -1;
    }
    else if (t1.second > t2.second)
    {
        return 1;
    }
    else if (t1.second < t2.second)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    struct time d1, d2;
    d1.second = 18;
    d1.minute = 8;
    d1.hour = 12;
    printf("first time is: %d:%d:%d \n", d1.second, d1.minute, d1.hour);
    d2.second = 18;
    d2.minute = 8;
    d2.hour = 12;
    printf("second time is: %d:%d:%d \n", d2.second, d2.minute, d2.hour);
    int result = datecompare(d1, d2);
    if (result == 1)
    {
        printf("first time is bigger ");
    }
    else if (result == -1)
    {
        printf("second time is bigger ");
    }
    else
    {
        printf("both time are same");
    }

    return 0;
}