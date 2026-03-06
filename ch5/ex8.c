#include <stdio.h>


int main(void)
{
    int hour, minutes, time_since_midnight;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minutes);
    time_since_midnight = hour * 60 + minutes;


    return 0;
}
