int day_of_year(int day, int month, int year)
{
    int sum = 0, months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    sum += day;
    if (month == 1) 
    {
        return sum;
    }
    for ( int i = 0; i < month; i++) 
    {
        sum += month;
    }
    if (month > 1 && year % 4 == 0 && !(year % 100 == 0))
    {
        sum += 1;
    }

    return sum;
}
