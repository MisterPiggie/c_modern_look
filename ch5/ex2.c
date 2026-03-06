#include <stdio.h> 


int main(void)
{
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    if (hour <=12) 
    {
        if (hour == 12) 
        {
            printf("Equivalent 12-hour time: 12:%.2d AM\n", minute);
            return 0;
        } else 
        {
            printf("Equivalent 12-hour time: %d:%.2d AM\n", hour, minute);
            return 0;
        }
    } else 
    {
        if (hour == 24) 
        {
            printf("Equivalent 12-hour time: 12:%.2d PM\n", minute);
            return 0;
        } else 
        {
            printf("Equivalent 12-hour time: %d:%.2d PM\n", hour%12, minute);
            return 0;
        }
    }
}
