#include <stdio.h>


int main(void)
{
    short num, factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%hu", &num);
    for (short i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    printf("Ffactorial: %hu", factorial); 
    return 0;
}
