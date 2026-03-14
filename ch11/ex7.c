
void split_date( int day_of_year, int year, int *month, int *day)
{
    int i, found = 0;
    for ( i = 1; i <= 12 && found != 1; i++)
    {
        switch (i)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                if (day_of_year > 31)
                {
                    day_of_year -= 31;
                    break;
                } else found = 1;
            case 4: case 6: case 9: case 11: 
                if (day_of_year > 30)
                {
                    day_of_year -= 30;
                    break;
                } else found = 1;

            case 2: 
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 ))
                {
                    if (day_of_year > 29)
                    {
                        day_of_year -= 29;
                        break;
                    } else found = 1;
                } else 
                {
                    if (day_of_year > 28)
                    {
                        day_of_year -= 28;
                        break;
                    } else found = 1;

                }

        }
    }

    *month = i - 1;
    *day = day_of_year;
}
