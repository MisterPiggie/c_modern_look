struct date {
    int day;
    int month;
    int year;
};

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
