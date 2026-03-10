#include <stdio.h>



int main(void)
{
    int day, month, year;
    int day2, month2, year2;
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    for(;;)
    {
        printf("Enter a date (mm/dd/yy): "); 
        scanf("%d/%d/%d", &month2, &day2, &year2);
        if (month2 == 0 && day2 == 0 && year2 == 0) {
            break;
        }
        if (year - year2) 
        {
            if (year > year2) {
                year = year2;
                month = month2;
                day = day2;
            }
        }
        if (month - month2) 
        {
            if (month > month2) {
                year = year2;
                month = month2;
                day = day2;
            }
        }
        if (day - day2) 
        {
            if (day > day2) {
                year = year2;
                month = month2;
                day = day2;
            }
        }
    }
    printf("Earliest date is: %d/%d/%d\n", month, day, year);
}
