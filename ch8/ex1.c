#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    long n;
    short digit;
    int digits[10] = {false};
    int repeated[10] = {false};

    printf("Enter a number: ");
    scanf("%ld", &n);
    
    while (n > 0) 
    {
        digit = n % 10;
        if (digits[digit]) 
        {
            repeated[digit] = true;
        }
        digits[digit] = true;
        n /= 10;
    }
    
    printf("Repeated digits: ");

    for (int i = 0; i < 10; i++) 
    {
        if (repeated[i] == true) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
