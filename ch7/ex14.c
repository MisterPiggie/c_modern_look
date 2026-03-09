#include <math.h>
#include <stdio.h>


int main(void) 
{
    int x;
    double y = 1.0, average;
    printf("enter a positive number: ");
    scanf("%d", &x);
    do
    {
        y = (y + x/y)/2;
    } while (fabs(y-(y+x/y)/2) >= 0.00001);
    y = (y + x/y)/2;
    printf("Square root: %lf", y);
    return 0;
}
