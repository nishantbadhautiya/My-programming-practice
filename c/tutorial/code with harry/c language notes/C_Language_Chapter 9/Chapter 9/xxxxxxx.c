#include <stdio.h>
typedef struct date
{
    int dd;
    int mm;
    int yy;
} date;
void showDate(date d)
{
    printf("The Date is: %d/%d/%d \n", d.dd, d.mm, d.yy);
}
int compareDate(date d1, date d2)
{
    if (d1.yy > d2.yy)
    {
        return 1;
    }
    if (d1.yy < d2.yy)
    {
        return -1;
    }

    if (d1.mm > d2.mm)
    {
        return 1;
    }
    if (d1.mm < d2.mm)
    {
        return -1;
    }
    if (d1.dd > d2.dd)
    {
        return 1;
    }
    if (d1.dd < d2.dd)
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
    date d1 = {13, 02, 2016};
    showDate(d1);
    date d2 = {15, 02, 2016};
    showDate(d2);
    int result = compareDate(d1, d2);
    if (result == 1)
    {
        printf("Date d1 is Larger ");
    }
    else if (result == -1)
    {
        printf("Date d2 is Larger ");
    }
    else
    {
        printf("Both date are same ");
    }
    return 0;
}