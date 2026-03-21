#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};


int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

int main(void)
{
    int result;
    struct date d1, d2;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);
    printf("Enter a second date (mm/dd/yy): "); 
    scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);
    switch (compare_dates(d1, d2))
    {
        case 1:
            printf("First date later"); break;
        case -1:
            printf("Second date later"); break;
        case 0:
            printf("Even"); break;
    }
    return 0;
}

int day_of_year(struct date d)
{
    int sum = 0, months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    sum += d.day;
    if (d.month == 1) 
    {
        return sum;
    }
    for ( int i = 0; i < d.month; i++) 
    {
        sum += d.month;
    }
    if (d.month > 1 && d.year % 4 == 0 && !(d.year % 100 == 0))
    {
        sum += 1;
    }

    return sum;
}

int compare_dates(struct date d1, struct date d2)
{
    int day1 = day_of_year(d1);
    int day2 = day_of_year(d2);
    if (day1 > day2)
    {
        return 1;
    } else if (day1 == day2)
        return 0;
    else
        return -1;
}
