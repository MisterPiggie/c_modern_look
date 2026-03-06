#include <stdio.h>



int main(void)
{
    int day, month, year;
    int day2, month2, year2;
    printf("Enter firdst date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("Enter a second date (mm/dd/yy): "); 
    scanf("%d/%d/%d", &month2, &day2, &year2);
    if (year - year2) 
    {
        if (year < year2) 
        {
            printf("%d/%d/%d is earlier than %d/%d/%d\n", month, day, year, month2, day2, year2);
            return 0;
        } else {
            printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month, day, year);
            return 0;
        }
    }
    if (month - month2) 
    {
        if (month < month2) 
        {
            printf("%d/%d/%d is earlier than %d/%d/%d\n", month, day, year, month2, day2, year2);
            return 0;
        } else {
            printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month, day, year);
            return 0;
        }
    }
    if (day - day2) 
    {
        if (day < day2) 
        {
            printf("%d/%d/%d is earlier than %d/%d/%d\n", month, day, year, month2, day2, year2);
            return 0;
        } else {
            printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month, day, year);
            return 0;
        }
    } else {
        printf("its the same");
        return 0;
    }
}
