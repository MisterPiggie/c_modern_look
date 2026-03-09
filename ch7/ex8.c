#include <ctype.h>
#include <stdio.h>

int main(void) 
{
    int hour, minute;
    char period;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &period);
    if (toupper(period) == 'P') 
    {
        hour += 12;
    }
    printf("Equivalent 24-hour time : %d:%d", hour%24, minute);
    return 0;
}
