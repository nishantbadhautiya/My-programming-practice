#include <stdio.h>
struct date
{
    int date;
    int month;
    int year;
};
int datecompare(struct date d1, struct date d2)
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
    else
    {
        return 0;
    }
}
int main()
{
    struct date d1, d2;
    d1.date = 18;
    d1.month = 8;
    d1.year = 2012;
    printf("first Date is: %d/%d/%d \n", d1.date, d1.month, d1.year);
    d2.date = 18;
    d2.month = 7;
    d2.year = 2022;
    printf("second Date is: %d/%d/%d \n", d2.date, d2.month, d2.year);
    int result = datecompare(d1, d2);
    if (result == 1)
    {
        printf("first date is bigger ");
    }
    else if (result == -1)
    {
        printf("second date is bigger ");
    }
    else
    {
        printf("both date are same");
    }

    return 0;
}