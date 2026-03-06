#include <stdio.h>

int main(void)
{
    int digit;
    printf("Enter number: ");
    scanf("%d", &digit);
    do {
        printf("%d", digit%10);
        digit /= 10;
    } while (digit > 0);
}
