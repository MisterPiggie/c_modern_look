#include <stdio.h>



char *months[12] = {"January", "February", "March", "April", "May", "June", 
    "July", "August", "September", "October", "November", "December"};


int main(void)
{
    int day, year, month;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered a date %s %d, %d\n", months[month-1], day, year);
}

