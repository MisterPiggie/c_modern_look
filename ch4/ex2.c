#include <stdio.h>

int main(void)
{
    int digit;
    printf("Enter three digit number: ");
    scanf("%d", &digit);
    printf("The reversal is: %d%d%d", digit%100%10, (digit%100 - digit%100%10)/10 , digit/100);
}
