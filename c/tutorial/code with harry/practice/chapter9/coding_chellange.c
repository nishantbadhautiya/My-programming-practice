#include <stdio.h>
struct date
{
    int date;
    int month;
    int year;
    int second;
    int minute;
    int hour;
};
int datecompare(struct date d1, struct date d2, struct date t1, struct date t2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }
    else if (d1.year < d2.year)
    {
        return -1;
    }
    else if (d1.month > d2.month)
    {
        return 1;
    }
    else if (d1.month < d2.month)
    {
        return -1;
    }
    else if (d1.date > d2.date)
    {
        return 1;
    }
    else if (d1.date < d2.date)
    {
        return -1;
    }
    else if (t1.hour > t2.hour)
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
    struct date d1, d2, t1, t2;
    d1.date = 8;
    d1.month = 8;
    d1.year = 2012;
    t1.hour= 2;
    t1.minute=30;
    t1.second= 45;
    printf("first Date is: %d/%d/%d \t%d:%d:%d\n", d1.date, d1.month, d1.year, t1.hour, t1.minute, t1.second);
    d2.date = 8;
    d2.month = 8;
    d2.year = 2012;
    t1.hour= 2;
    t1.minute=30;
    t1.second= 45;
    printf("second Date is: %d/%d/%d\t%d:%d:%d\n", d2.date, d2.month, d2.year,t1.hour, t1.minute, t1.second);
    int result = datecompare(d1, d2, t1,t2);
    if (result == 1)
    {
        printf("first date is bigger ");
    }
    else if (result == -1)
    {
        printf("second date is bigger ");
    }
    else if(result == 0)
    {
        printf("both date are same");
    }
    return 0;
}