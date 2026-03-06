#include <stdio.h>



int main(void)
{
    int knots;
    printf("Enter speed in knots: ");
    scanf("%d", &knots);
    if (knots > 63) 
    {
        printf("Hurricane");
    } else if (knots >= 48) 
    {
        printf("Storm");
    } else if (knots >= 27)
    {
        printf("Gale");
    } else if (knots >= 3)
    {
        printf("Breeze");
    } else if (knots >= 1) 
    {
        printf("Light air");
    } else 
    { 
        printf("Calm");
    }
    return 0;
}
